// This file has been generated by Py++.

#include "stdafx.h"
#include "pypluspluscommon.h"
#include "boost/python.hpp"
#include "__call_policies.pypp.hpp"
#include "dataitem.h"
#include "dataitem.pypp.hpp"

namespace bp = boost::python;

static void clear_ebbe54308d8dff089c9b25e44aeebe0a( ::osiris::DataItem & inst ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    inst.clear();
    __pythreadSaver.restore();
}

static boost::python::object getBool_8470cee11ca7a104bcb13b22ce155710( ::osiris::DataItem const & inst ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    bool result = inst.getBool();
    __pythreadSaver.restore();
    return boost::python::object( result );
}

static boost::python::object getBuffer_bf7eb7f22f473012e2c0628d776fbf5f( ::osiris::DataItem const & inst ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    ::osiris::Buffer result = inst.getBuffer();
    __pythreadSaver.restore();
    return boost::python::object( result );
}

static boost::python::object getByte_e849703b5559ce3e5fd675934762cf0c( ::osiris::DataItem const & inst ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    ::osiris::byte result = inst.getByte();
    __pythreadSaver.restore();
    return boost::python::object( result );
}

static boost::python::object getDataTree_0d6a17de9dc0d19d3c9504b9aab4673a( ::osiris::DataItem const & inst ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    ::osiris::DataTree result = inst.getDataTree();
    __pythreadSaver.restore();
    return boost::python::object( result );
}

static boost::python::object getDouble_38cde5e4f35104109be9c8dee97bee1d( ::osiris::DataItem const & inst ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    double result = inst.getDouble();
    __pythreadSaver.restore();
    return boost::python::object( result );
}

static boost::python::object getInt32_508a980379b5e25c2da116be2ed93e53( ::osiris::DataItem const & inst ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    ::osiris::int32 result = inst.getInt32();
    __pythreadSaver.restore();
    return boost::python::object( result );
}

static boost::python::object getInt64_f56a61cdd789682e9cf17950286263a9( ::osiris::DataItem const & inst ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    ::osiris::int64 result = inst.getInt64();
    __pythreadSaver.restore();
    return boost::python::object( result );
}

static boost::python::object getString_d6e7d1b769d01393ebe0e21513f0184d( ::osiris::DataItem const & inst ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    ::osiris::String result = inst.getString();
    __pythreadSaver.restore();
    return boost::python::object( result );
}

static boost::python::object getStringAscii_c4d6bac4d57366bf1ef3db6a0d287948( ::osiris::DataItem const & inst ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    ::std::string result = inst.getStringAscii();
    __pythreadSaver.restore();
    return boost::python::object( result );
}

static boost::python::object getType_a3be65748c4e696b0005e812241ea025( ::osiris::DataItem const & inst ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    ::osiris::DataItem::ValueType const & result = inst.getType();
    __pythreadSaver.restore();
    typedef bp::return_value_policy< bp::copy_const_reference > call_policies_t;
    return boost::python::object( pyplusplus::call_policies::make_object< call_policies_t, ::osiris::DataItem::ValueType const & >( result ) );
}

static boost::python::object getUInt32_1ed9801581825e91bb0ac7bbc73960aa( ::osiris::DataItem const & inst ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    ::osiris::uint32 result = inst.getUInt32();
    __pythreadSaver.restore();
    return boost::python::object( result );
}

static boost::python::object getUInt64_bd2f8dc538be77b8318cd61d3850ce25( ::osiris::DataItem const & inst ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    ::osiris::uint64 result = inst.getUInt64();
    __pythreadSaver.restore();
    return boost::python::object( result );
}

static boost::python::object isDataTree_b0da6b9179ecb39a7c0d9604c99146e4( ::osiris::DataItem const & inst ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    bool result = inst.isDataTree();
    __pythreadSaver.restore();
    return boost::python::object( result );
}

static boost::python::object isNull_19e584465965948a1a895b6c3df022fa( ::osiris::DataItem const & inst ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    bool result = inst.isNull();
    __pythreadSaver.restore();
    return boost::python::object( result );
}

static boost::python::object cast_a840fe71948c676f18322c2f93058b67( ::osiris::DataItem const & inst, ::osiris::DataItem::ValueType type ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    ::osiris::DataItem result = inst.cast(type);
    __pythreadSaver.restore();
    return boost::python::object( result );
}

static boost::python::object read_eb43477212883c7628adcd5b04b16747( ::osiris::DataItem & inst, ::osiris::Buffer & buff ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    bool result = inst.read(buff);
    __pythreadSaver.restore();
    return boost::python::object( result );
}

static void setBool_8314286f7ef2d075f30dd7cbc089e8bf( ::osiris::DataItem & inst, bool const & value ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    inst.setBool(value);
    __pythreadSaver.restore();
}

static void setBuffer_306c278b0542c386ad2f506b967805dd( ::osiris::DataItem & inst, ::osiris::Buffer const & value ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    inst.setBuffer(value);
    __pythreadSaver.restore();
}

static void setByte_0bb5e78766b59367b5e246b677ea065a( ::osiris::DataItem & inst, ::osiris::byte const & value ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    inst.setByte(value);
    __pythreadSaver.restore();
}

static void setDataTree_95cd9a1f217fb572f4acb35679f28301( ::osiris::DataItem & inst, ::osiris::DataTree const & value ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    inst.setDataTree(value);
    __pythreadSaver.restore();
}

static void setDouble_3387548e6fc530516d0cbf90aa54b02f( ::osiris::DataItem & inst, double const & value ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    inst.setDouble(value);
    __pythreadSaver.restore();
}

static void setInt32_7b35bbac7fa4db0cbfa210a58b00ad44( ::osiris::DataItem & inst, ::osiris::int32 const & value ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    inst.setInt32(value);
    __pythreadSaver.restore();
}

static void setInt64_9fc32a9f9494a3f52263bfb65c185a17( ::osiris::DataItem & inst, ::osiris::int64 const & value ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    inst.setInt64(value);
    __pythreadSaver.restore();
}

static void setString_892eaf067aa1163da6da03e041f52808( ::osiris::DataItem & inst, ::osiris::String const & value ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    inst.setString(value);
    __pythreadSaver.restore();
}

static void setStringAscii_778f729ef90f2d8bacc9c42f4a34bbff( ::osiris::DataItem & inst, ::std::string const & value ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    inst.setStringAscii(value);
    __pythreadSaver.restore();
}

static void setUInt32_25ff9c4cc2824430fa93a9c125afb616( ::osiris::DataItem & inst, ::osiris::uint32 const & value ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    inst.setUInt32(value);
    __pythreadSaver.restore();
}

static void setUInt64_64a11148e4510c0a76d29f30583fa241( ::osiris::DataItem & inst, ::osiris::uint64 const & value ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    inst.setUInt64(value);
    __pythreadSaver.restore();
}

static boost::python::object write_1b79c3bd963a7589045e1554a507a7fa( ::osiris::DataItem const & inst, ::osiris::Buffer & buff ){
    ::osiris::PythonThreadSaver __pythreadSaver;
    bool result = inst.write(buff);
    __pythreadSaver.restore();
    return boost::python::object( result );
}

void register_DataItem_class(){

    { //::osiris::DataItem
        typedef ::boost::python::class_< ::osiris::DataItem > DataItem_exposer_t;
        DataItem_exposer_t DataItem_exposer = DataItem_exposer_t( "DataItem", ::boost::python::init< >() );
        ::boost::python::scope DataItem_scope( DataItem_exposer );
        ::boost::python::enum_< ::osiris::DataItem::ValueType>("ValueType")
            .value("vt_null", ::osiris::DataItem::vt_null)
            .value("vt_bool", ::osiris::DataItem::vt_bool)
            .value("vt_byte", ::osiris::DataItem::vt_byte)
            .value("vt_int32", ::osiris::DataItem::vt_int32)
            .value("vt_uint32", ::osiris::DataItem::vt_uint32)
            .value("vt_double", ::osiris::DataItem::vt_double)
            .value("vt_string", ::osiris::DataItem::vt_string)
            .value("vt_buffer", ::osiris::DataItem::vt_buffer)
            .value("vt_datatree", ::osiris::DataItem::vt_datatree)
            .value("vt_int64", ::osiris::DataItem::vt_int64)
            .value("vt_uint64", ::osiris::DataItem::vt_uint64)
            .export_values()
            ;
        DataItem_exposer.def( ::boost::python::init< bool const & >(( ::boost::python::arg("v") )) );
        ::boost::python::implicitly_convertible< bool const &, ::osiris::DataItem >();
        DataItem_exposer.def( ::boost::python::init< ::osiris::byte const & >(( ::boost::python::arg("v") )) );
        ::boost::python::implicitly_convertible< ::osiris::byte const &, ::osiris::DataItem >();
        DataItem_exposer.def( ::boost::python::init< ::osiris::int32 const & >(( ::boost::python::arg("v") )) );
        ::boost::python::implicitly_convertible< ::osiris::int32 const &, ::osiris::DataItem >();
        DataItem_exposer.def( ::boost::python::init< ::osiris::uint32 const & >(( ::boost::python::arg("v") )) );
        ::boost::python::implicitly_convertible< ::osiris::uint32 const &, ::osiris::DataItem >();
        DataItem_exposer.def( ::boost::python::init< ::osiris::int64 const & >(( ::boost::python::arg("v") )) );
        ::boost::python::implicitly_convertible< ::osiris::int64 const &, ::osiris::DataItem >();
        DataItem_exposer.def( ::boost::python::init< ::osiris::uint64 const & >(( ::boost::python::arg("v") )) );
        ::boost::python::implicitly_convertible< ::osiris::uint64 const &, ::osiris::DataItem >();
        DataItem_exposer.def( ::boost::python::init< double const & >(( ::boost::python::arg("v") )) );
        ::boost::python::implicitly_convertible< double const &, ::osiris::DataItem >();
        DataItem_exposer.def( ::boost::python::init< ::osiris::achar const * >(( ::boost::python::arg("v") )) );
        ::boost::python::implicitly_convertible< ::osiris::achar const *, ::osiris::DataItem >();
        DataItem_exposer.def( ::boost::python::init< ::std::string const & >(( ::boost::python::arg("v") )) );
        ::boost::python::implicitly_convertible< ::std::string const &, ::osiris::DataItem >();
        DataItem_exposer.def( ::boost::python::init< ::osiris::uchar const * >(( ::boost::python::arg("v") )) );
        ::boost::python::implicitly_convertible< ::osiris::uchar const *, ::osiris::DataItem >();
        DataItem_exposer.def( ::boost::python::init< ::osiris::String const & >(( ::boost::python::arg("v") )) );
        ::boost::python::implicitly_convertible< ::osiris::String const &, ::osiris::DataItem >();
        DataItem_exposer.def( ::boost::python::init< ::osiris::Buffer const & >(( ::boost::python::arg("v") )) );
        ::boost::python::implicitly_convertible< ::osiris::Buffer const &, ::osiris::DataItem >();
        DataItem_exposer.def( ::boost::python::init< ::osiris::DataTree const & >(( ::boost::python::arg("v") )) );
        ::boost::python::implicitly_convertible< ::osiris::DataTree const &, ::osiris::DataItem >();
        DataItem_exposer.def( ::boost::python::init< ::osiris::DataItem const & >(( ::boost::python::arg("v") )) );
        { //::osiris::DataItem::clear
        
            typedef void ( *clear_function_type )( ::osiris::DataItem & );
            
            DataItem_exposer.def( 
                "clear"
                , clear_function_type( &clear_ebbe54308d8dff089c9b25e44aeebe0a ) );
        
        }
        { //::osiris::DataItem::getBool
        
            typedef boost::python::object ( *getBool_function_type )( ::osiris::DataItem const & );
            
            DataItem_exposer.def( 
                "getBool"
                , getBool_function_type( &getBool_8470cee11ca7a104bcb13b22ce155710 ) );
        
        }
        { //::osiris::DataItem::getBuffer
        
            typedef boost::python::object ( *getBuffer_function_type )( ::osiris::DataItem const & );
            
            DataItem_exposer.def( 
                "getBuffer"
                , getBuffer_function_type( &getBuffer_bf7eb7f22f473012e2c0628d776fbf5f ) );
        
        }
        { //::osiris::DataItem::getByte
        
            typedef boost::python::object ( *getByte_function_type )( ::osiris::DataItem const & );
            
            DataItem_exposer.def( 
                "getByte"
                , getByte_function_type( &getByte_e849703b5559ce3e5fd675934762cf0c ) );
        
        }
        { //::osiris::DataItem::getDataTree
        
            typedef boost::python::object ( *getDataTree_function_type )( ::osiris::DataItem const & );
            
            DataItem_exposer.def( 
                "getDataTree"
                , getDataTree_function_type( &getDataTree_0d6a17de9dc0d19d3c9504b9aab4673a ) );
        
        }
        { //::osiris::DataItem::getDouble
        
            typedef boost::python::object ( *getDouble_function_type )( ::osiris::DataItem const & );
            
            DataItem_exposer.def( 
                "getDouble"
                , getDouble_function_type( &getDouble_38cde5e4f35104109be9c8dee97bee1d ) );
        
        }
        { //::osiris::DataItem::getInt32
        
            typedef boost::python::object ( *getInt32_function_type )( ::osiris::DataItem const & );
            
            DataItem_exposer.def( 
                "getInt32"
                , getInt32_function_type( &getInt32_508a980379b5e25c2da116be2ed93e53 ) );
        
        }
        { //::osiris::DataItem::getInt64
        
            typedef boost::python::object ( *getInt64_function_type )( ::osiris::DataItem const & );
            
            DataItem_exposer.def( 
                "getInt64"
                , getInt64_function_type( &getInt64_f56a61cdd789682e9cf17950286263a9 ) );
        
        }
        { //::osiris::DataItem::getString
        
            typedef boost::python::object ( *getString_function_type )( ::osiris::DataItem const & );
            
            DataItem_exposer.def( 
                "getString"
                , getString_function_type( &getString_d6e7d1b769d01393ebe0e21513f0184d ) );
        
        }
        { //::osiris::DataItem::getStringAscii
        
            typedef boost::python::object ( *getStringAscii_function_type )( ::osiris::DataItem const & );
            
            DataItem_exposer.def( 
                "getStringAscii"
                , getStringAscii_function_type( &getStringAscii_c4d6bac4d57366bf1ef3db6a0d287948 ) );
        
        }
        { //::osiris::DataItem::getType
        
            typedef boost::python::object ( *getType_function_type )( ::osiris::DataItem const & );
            
            DataItem_exposer.def( 
                "getType"
                , getType_function_type( &getType_a3be65748c4e696b0005e812241ea025 ) );
        
        }
        { //::osiris::DataItem::getUInt32
        
            typedef boost::python::object ( *getUInt32_function_type )( ::osiris::DataItem const & );
            
            DataItem_exposer.def( 
                "getUInt32"
                , getUInt32_function_type( &getUInt32_1ed9801581825e91bb0ac7bbc73960aa ) );
        
        }
        { //::osiris::DataItem::getUInt64
        
            typedef boost::python::object ( *getUInt64_function_type )( ::osiris::DataItem const & );
            
            DataItem_exposer.def( 
                "getUInt64"
                , getUInt64_function_type( &getUInt64_bd2f8dc538be77b8318cd61d3850ce25 ) );
        
        }
        { //::osiris::DataItem::isDataTree
        
            typedef boost::python::object ( *isDataTree_function_type )( ::osiris::DataItem const & );
            
            DataItem_exposer.def( 
                "isDataTree"
                , isDataTree_function_type( &isDataTree_b0da6b9179ecb39a7c0d9604c99146e4 ) );
        
        }
        { //::osiris::DataItem::isNull
        
            typedef boost::python::object ( *isNull_function_type )( ::osiris::DataItem const & );
            
            DataItem_exposer.def( 
                "isNull"
                , isNull_function_type( &isNull_19e584465965948a1a895b6c3df022fa ) );
        
        }
        { //::osiris::DataItem::cast
        
            typedef boost::python::object ( *cast_function_type )( ::osiris::DataItem const &,::osiris::DataItem::ValueType );
            
            DataItem_exposer.def( 
                "cast"
                , cast_function_type( &cast_a840fe71948c676f18322c2f93058b67 )
                , ( ::boost::python::arg("inst"), ::boost::python::arg("type") ) );
        
        }
        { //::osiris::DataItem::read
        
            typedef boost::python::object ( *read_function_type )( ::osiris::DataItem &,::osiris::Buffer & );
            
            DataItem_exposer.def( 
                "read"
                , read_function_type( &read_eb43477212883c7628adcd5b04b16747 )
                , ( ::boost::python::arg("inst"), ::boost::python::arg("buff") ) );
        
        }
        { //::osiris::DataItem::setBool
        
            typedef void ( *setBool_function_type )( ::osiris::DataItem &,bool const & );
            
            DataItem_exposer.def( 
                "setBool"
                , setBool_function_type( &setBool_8314286f7ef2d075f30dd7cbc089e8bf )
                , ( ::boost::python::arg("inst"), ::boost::python::arg("value") ) );
        
        }
        { //::osiris::DataItem::setBuffer
        
            typedef void ( *setBuffer_function_type )( ::osiris::DataItem &,::osiris::Buffer const & );
            
            DataItem_exposer.def( 
                "setBuffer"
                , setBuffer_function_type( &setBuffer_306c278b0542c386ad2f506b967805dd )
                , ( ::boost::python::arg("inst"), ::boost::python::arg("value") ) );
        
        }
        { //::osiris::DataItem::setByte
        
            typedef void ( *setByte_function_type )( ::osiris::DataItem &,::osiris::byte const & );
            
            DataItem_exposer.def( 
                "setByte"
                , setByte_function_type( &setByte_0bb5e78766b59367b5e246b677ea065a )
                , ( ::boost::python::arg("inst"), ::boost::python::arg("value") ) );
        
        }
        { //::osiris::DataItem::setDataTree
        
            typedef void ( *setDataTree_function_type )( ::osiris::DataItem &,::osiris::DataTree const & );
            
            DataItem_exposer.def( 
                "setDataTree"
                , setDataTree_function_type( &setDataTree_95cd9a1f217fb572f4acb35679f28301 )
                , ( ::boost::python::arg("inst"), ::boost::python::arg("value") ) );
        
        }
        { //::osiris::DataItem::setDouble
        
            typedef void ( *setDouble_function_type )( ::osiris::DataItem &,double const & );
            
            DataItem_exposer.def( 
                "setDouble"
                , setDouble_function_type( &setDouble_3387548e6fc530516d0cbf90aa54b02f )
                , ( ::boost::python::arg("inst"), ::boost::python::arg("value") ) );
        
        }
        { //::osiris::DataItem::setInt32
        
            typedef void ( *setInt32_function_type )( ::osiris::DataItem &,::osiris::int32 const & );
            
            DataItem_exposer.def( 
                "setInt32"
                , setInt32_function_type( &setInt32_7b35bbac7fa4db0cbfa210a58b00ad44 )
                , ( ::boost::python::arg("inst"), ::boost::python::arg("value") ) );
        
        }
        { //::osiris::DataItem::setInt64
        
            typedef void ( *setInt64_function_type )( ::osiris::DataItem &,::osiris::int64 const & );
            
            DataItem_exposer.def( 
                "setInt64"
                , setInt64_function_type( &setInt64_9fc32a9f9494a3f52263bfb65c185a17 )
                , ( ::boost::python::arg("inst"), ::boost::python::arg("value") ) );
        
        }
        { //::osiris::DataItem::setString
        
            typedef void ( *setString_function_type )( ::osiris::DataItem &,::osiris::String const & );
            
            DataItem_exposer.def( 
                "setString"
                , setString_function_type( &setString_892eaf067aa1163da6da03e041f52808 )
                , ( ::boost::python::arg("inst"), ::boost::python::arg("value") ) );
        
        }
        { //::osiris::DataItem::setStringAscii
        
            typedef void ( *setStringAscii_function_type )( ::osiris::DataItem &,::std::string const & );
            
            DataItem_exposer.def( 
                "setStringAscii"
                , setStringAscii_function_type( &setStringAscii_778f729ef90f2d8bacc9c42f4a34bbff )
                , ( ::boost::python::arg("inst"), ::boost::python::arg("value") ) );
        
        }
        { //::osiris::DataItem::setUInt32
        
            typedef void ( *setUInt32_function_type )( ::osiris::DataItem &,::osiris::uint32 const & );
            
            DataItem_exposer.def( 
                "setUInt32"
                , setUInt32_function_type( &setUInt32_25ff9c4cc2824430fa93a9c125afb616 )
                , ( ::boost::python::arg("inst"), ::boost::python::arg("value") ) );
        
        }
        { //::osiris::DataItem::setUInt64
        
            typedef void ( *setUInt64_function_type )( ::osiris::DataItem &,::osiris::uint64 const & );
            
            DataItem_exposer.def( 
                "setUInt64"
                , setUInt64_function_type( &setUInt64_64a11148e4510c0a76d29f30583fa241 )
                , ( ::boost::python::arg("inst"), ::boost::python::arg("value") ) );
        
        }
        { //::osiris::DataItem::write
        
            typedef boost::python::object ( *write_function_type )( ::osiris::DataItem const &,::osiris::Buffer & );
            
            DataItem_exposer.def( 
                "write"
                , write_function_type( &write_1b79c3bd963a7589045e1554a507a7fa )
                , ( ::boost::python::arg("inst"), ::boost::python::arg("buff") ) );
        
        }
        DataItem_exposer.def_readonly( "EMPTY", ::osiris::DataItem::EMPTY );
        { //property "bool"[fget=::osiris::DataItem::getBool, fset=::osiris::DataItem::setBool]
        
            typedef bool ( ::osiris::DataItem::*fget )(  ) const;
            typedef void ( ::osiris::DataItem::*fset )( bool const & ) ;
            
            DataItem_exposer.add_property( 
                "bool"
                , fget( &::osiris::DataItem::getBool )
                , fset( &::osiris::DataItem::setBool )
                , "get\\set property, built on top of \"bool osiris::DataItem::getBool() const [member function]\" and \"void osiris::DataItem::setBool(bool const & value) [member function]\"" );
        
        }
        { //property "byte"[fget=::osiris::DataItem::getByte, fset=::osiris::DataItem::setByte]
        
            typedef ::osiris::byte ( ::osiris::DataItem::*fget )(  ) const;
            typedef void ( ::osiris::DataItem::*fset )( ::osiris::byte const & ) ;
            
            DataItem_exposer.add_property( 
                "byte"
                , fget( &::osiris::DataItem::getByte )
                , fset( &::osiris::DataItem::setByte )
                , "get\\set property, built on top of \"osiris::byte osiris::DataItem::getByte() const [member function]\" and \"void osiris::DataItem::setByte(osiris::byte const & value) [member function]\"" );
        
        }
        { //property "int32"[fget=::osiris::DataItem::getInt32, fset=::osiris::DataItem::setInt32]
        
            typedef ::osiris::int32 ( ::osiris::DataItem::*fget )(  ) const;
            typedef void ( ::osiris::DataItem::*fset )( ::osiris::int32 const & ) ;
            
            DataItem_exposer.add_property( 
                "int32"
                , fget( &::osiris::DataItem::getInt32 )
                , fset( &::osiris::DataItem::setInt32 )
                , "get\\set property, built on top of \"osiris::int32 osiris::DataItem::getInt32() const [member function]\" and \"void osiris::DataItem::setInt32(osiris::int32 const & value) [member function]\"" );
        
        }
        { //property "uInt32"[fget=::osiris::DataItem::getUInt32, fset=::osiris::DataItem::setUInt32]
        
            typedef ::osiris::uint32 ( ::osiris::DataItem::*fget )(  ) const;
            typedef void ( ::osiris::DataItem::*fset )( ::osiris::uint32 const & ) ;
            
            DataItem_exposer.add_property( 
                "uInt32"
                , fget( &::osiris::DataItem::getUInt32 )
                , fset( &::osiris::DataItem::setUInt32 )
                , "get\\set property, built on top of \"osiris::uint32 osiris::DataItem::getUInt32() const [member function]\" and \"void osiris::DataItem::setUInt32(osiris::uint32 const & value) [member function]\"" );
        
        }
        { //property "int64"[fget=::osiris::DataItem::getInt64, fset=::osiris::DataItem::setInt64]
        
            typedef ::osiris::int64 ( ::osiris::DataItem::*fget )(  ) const;
            typedef void ( ::osiris::DataItem::*fset )( ::osiris::int64 const & ) ;
            
            DataItem_exposer.add_property( 
                "int64"
                , fget( &::osiris::DataItem::getInt64 )
                , fset( &::osiris::DataItem::setInt64 )
                , "get\\set property, built on top of \"osiris::int64 osiris::DataItem::getInt64() const [member function]\" and \"void osiris::DataItem::setInt64(osiris::int64 const & value) [member function]\"" );
        
        }
        { //property "uInt64"[fget=::osiris::DataItem::getUInt64, fset=::osiris::DataItem::setUInt64]
        
            typedef ::osiris::uint64 ( ::osiris::DataItem::*fget )(  ) const;
            typedef void ( ::osiris::DataItem::*fset )( ::osiris::uint64 const & ) ;
            
            DataItem_exposer.add_property( 
                "uInt64"
                , fget( &::osiris::DataItem::getUInt64 )
                , fset( &::osiris::DataItem::setUInt64 )
                , "get\\set property, built on top of \"osiris::uint64 osiris::DataItem::getUInt64() const [member function]\" and \"void osiris::DataItem::setUInt64(osiris::uint64 const & value) [member function]\"" );
        
        }
        { //property "double"[fget=::osiris::DataItem::getDouble, fset=::osiris::DataItem::setDouble]
        
            typedef double ( ::osiris::DataItem::*fget )(  ) const;
            typedef void ( ::osiris::DataItem::*fset )( double const & ) ;
            
            DataItem_exposer.add_property( 
                "double"
                , fget( &::osiris::DataItem::getDouble )
                , fset( &::osiris::DataItem::setDouble )
                , "get\\set property, built on top of \"double osiris::DataItem::getDouble() const [member function]\" and \"void osiris::DataItem::setDouble(double const & value) [member function]\"" );
        
        }
        { //property "stringAscii"[fget=::osiris::DataItem::getStringAscii, fset=::osiris::DataItem::setStringAscii]
        
            typedef ::std::string ( ::osiris::DataItem::*fget )(  ) const;
            typedef void ( ::osiris::DataItem::*fset )( ::std::string const & ) ;
            
            DataItem_exposer.add_property( 
                "stringAscii"
                , fget( &::osiris::DataItem::getStringAscii )
                , fset( &::osiris::DataItem::setStringAscii )
                , "get\\set property, built on top of \"std::string osiris::DataItem::getStringAscii() const [member function]\" and \"void osiris::DataItem::setStringAscii(std::string const & value) [member function]\"" );
        
        }
        { //property "string"[fget=::osiris::DataItem::getString, fset=::osiris::DataItem::setString]
        
            typedef ::osiris::String ( ::osiris::DataItem::*fget )(  ) const;
            typedef void ( ::osiris::DataItem::*fset )( ::osiris::String const & ) ;
            
            DataItem_exposer.add_property( 
                "string"
                , fget( &::osiris::DataItem::getString )
                , fset( &::osiris::DataItem::setString )
                , "get\\set property, built on top of \"osiris::String osiris::DataItem::getString() const [member function]\" and \"void osiris::DataItem::setString(osiris::String const & value) [member function]\"" );
        
        }
        { //property "buffer"[fget=::osiris::DataItem::getBuffer, fset=::osiris::DataItem::setBuffer]
        
            typedef ::osiris::Buffer ( ::osiris::DataItem::*fget )(  ) const;
            typedef void ( ::osiris::DataItem::*fset )( ::osiris::Buffer const & ) ;
            
            DataItem_exposer.add_property( 
                "buffer"
                , fget( &::osiris::DataItem::getBuffer )
                , fset( &::osiris::DataItem::setBuffer )
                , "get\\set property, built on top of \"osiris::Buffer osiris::DataItem::getBuffer() const [member function]\" and \"void osiris::DataItem::setBuffer(osiris::Buffer const & value) [member function]\"" );
        
        }
        { //property "dataTree"[fget=::osiris::DataItem::getDataTree, fset=::osiris::DataItem::setDataTree]
        
            typedef ::osiris::DataTree ( ::osiris::DataItem::*fget )(  ) const;
            typedef void ( ::osiris::DataItem::*fset )( ::osiris::DataTree const & ) ;
            
            DataItem_exposer.add_property( 
                "dataTree"
                , fget( &::osiris::DataItem::getDataTree )
                , fset( &::osiris::DataItem::setDataTree )
                , "get\\set property, built on top of \"osiris::DataTree osiris::DataItem::getDataTree() const [member function]\" and \"void osiris::DataItem::setDataTree(osiris::DataTree const & value) [member function]\"" );
        
        }
        { //property "type"[fget=::osiris::DataItem::getType]
        
            typedef ::osiris::DataItem::ValueType const & ( ::osiris::DataItem::*fget )(  ) const;
            
            DataItem_exposer.add_property( 
                "type"
                , ::boost::python::make_function( 
                      fget( &::osiris::DataItem::getType )
                    , bp::return_value_policy< bp::copy_const_reference >() ) 
                , "get property, built on top of \"osiris::DataItem::ValueType const & osiris::DataItem::getType() const [member function]\"" );
        
        }
    }

}