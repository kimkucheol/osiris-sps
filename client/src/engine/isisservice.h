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

#ifndef _OS_ENGINE_ISISSERVICE_H
#define _OS_ENGINE_ISISSERVICE_H

#include "networkservice.h"
#include "portalsportals.h"

//////////////////////////////////////////////////////////////////////

OS_NAMESPACE_BEGIN()

//////////////////////////////////////////////////////////////////////

class Portal;

//////////////////////////////////////////////////////////////////////

class EngineExport IsisService : public NetworkService
{
	typedef NetworkService ServiceBase;

// Construction
public:
	IsisService(boost::optional<uint32> workerThreadsCount = boost::none);
	virtual ~IsisService();

// Operations
private:
	shared_ptr<Portal> peekPortal();

// NetworkService overrides
protected:
	virtual bool onIdle();

private:
	boost::recursive_mutex m_cs;
	list<shared_ptr<Portal> >::type m_portals;
};

//////////////////////////////////////////////////////////////////////

OS_NAMESPACE_END()

//////////////////////////////////////////////////////////////////////

#endif // _OS_ENGINE_ISISSERVICE_H
