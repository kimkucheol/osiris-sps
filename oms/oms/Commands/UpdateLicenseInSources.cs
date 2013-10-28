// <osiris_sps_source_header>
// This file is part of Osiris Serverless Portal System.
// Copyright (C)2005-2012 Osiris Team (info@osiris-sps.org) / http://www.osiris-sps.org )
//
// Osiris Serverless Portal System is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
// 
// Osiris Serverless Portal System is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
// 
// You should have received a copy of the GNU General Public License
// along with Osiris Serverless Portal System.  If not, see <http://www.gnu.org/licenses/>.
// </osiris_sps_source_header>

using System;
using System.Collections.Generic;
using System.IO;
using System.Text;

namespace OMS.Commands
{
    public class UpdateLicenseInSources : ICommand
    {
        private String Template;

        public override void Run()
        {
            base.Run();

            Engine.Form.AddLog("Update license in sources");

            Template = File.ReadAllText(Engine.PathOmsData + "/template_license.txt");

            ProcessDirectory(Engine.PathOms);
            //ProcessDirectory(Engine.PathData); // TEMP! 20/08/2011 - Avoid .py, because are released with Osiris 0.X.
            ProcessDirectory(Engine.PathSources);

            Engine.Form.AddLog("Done.");
        }

        private void ProcessDirectory(String path)
        {
            // Directories to skip
            String lPath = Helper.FileSystem.NormalizePathToUnix(path.ToLower());            
            if (lPath.Contains("/xx_"))
                return;
            if (lPath.Contains("/_work"))
                return;
            if (lPath.Contains(".svn"))
                return;
            if (lPath.Contains("/xulrunner"))
                return;
            if (lPath.Contains("/repository"))
                return;
            if (lPath.Contains("/temp"))
                return;

            DirectoryInfo di = new DirectoryInfo(path);

            foreach (FileInfo fi in di.GetFiles())
                ProcessFile(fi.FullName);

            foreach (DirectoryInfo di2 in di.GetDirectories())
                ProcessDirectory(di2.FullName);            
        }

        private void ProcessFile(String path)
        {
            // Files to skip
            String lPath = Helper.FileSystem.NormalizePathToUnix(path.ToLower());

            if (lPath.EndsWith(".designer.cs")) // .CS with this suffix are automatically generated by Visual Studio.
                return;

            if (lPath.Contains("/python/wrappers/"))
                return;

            FileInfo fi = new FileInfo(path);

            Engine.Form.AddLog(Engine.LogType.ltVerbose, "Checking " + fi.FullName);

            String commentMode = "";

            String Ext = fi.Extension.ToLower();

            if (Ext == ".cs")
                commentMode = "//";
            else if (Ext == ".cpp")
                commentMode = "//";
            else if (Ext == ".h")
                commentMode = "//";
            else if (Ext == ".py")
                commentMode = "#";

            if (commentMode != "")
            {
                String Source = File.ReadAllText(fi.FullName, Encoding.Default);

                String Template2 = Template;
                String TagStart = "// <osiris_sps_" + "source_header>"; // + is hack to avoid that system try to update this file itself.
                String TagEnd = "// </osiris_sps_" + "source_header>";

                Template2 = Template2.Replace("//", commentMode).Trim();
                TagStart = TagStart.Replace("//", commentMode).Trim();
                TagEnd = TagEnd.Replace("//", commentMode).Trim();

                int posStart = Source.IndexOf(TagStart);
                int posEnd = Source.IndexOf(TagEnd);

                bool Process = false;

                if ((posStart != -1) && (posEnd != -1))
                {
                    String CurrentLicense = Source.Substring(posStart, posEnd - posStart + TagEnd.Length);
                    if (CurrentLicense != Template2)
                        Process = true;
                }
                else
                {
                    Engine.Form.AddLog(Engine.LogType.ltWarning, "File " + fi.FullName + " don't have license tag.");
                }

                if (Process)
                {
                    Source = Source.Substring(0, posStart) + Source.Substring(posEnd + TagEnd.Length);

                    Source = Source.Trim();

                    Source = Template2 + "\r\n\r\n" + Source + "\r\n";

                    File.WriteAllText(fi.FullName, Source, Encoding.Default);

                    Engine.Form.AddLog(Engine.LogType.ltInfo, "Updated " + fi.FullName);
                }
            }
        }
    }
}