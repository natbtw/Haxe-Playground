#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_cpp_Lib
#include <cpp/Lib.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_io_Error
#include <haxe/io/Error.h>
#endif
#ifndef INCLUDED_haxe_io_Input
#include <haxe/io/Input.h>
#endif
#ifndef INCLUDED_haxe_io_Output
#include <haxe/io/Output.h>
#endif
#ifndef INCLUDED_sys_net_Host
#include <sys/net/Host.h>
#endif
#ifndef INCLUDED_sys_net_Socket
#include <sys/net/Socket.h>
#endif
#ifndef INCLUDED_sys_ssl_Certificate
#include <sys/ssl/Certificate.h>
#endif
#ifndef INCLUDED_sys_ssl_Key
#include <sys/ssl/Key.h>
#endif
#ifndef INCLUDED_sys_ssl_Socket
#include <sys/ssl/Socket.h>
#endif
#ifndef INCLUDED_sys_ssl__Socket_SocketInput
#include <sys/ssl/_Socket/SocketInput.h>
#endif
#ifndef INCLUDED_sys_ssl__Socket_SocketOutput
#include <sys/ssl/_Socket/SocketOutput.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_cd49b9d3f62e0d57_119_new,"sys.ssl.Socket","new",0xb0189de8,"sys.ssl.Socket.new","C:\\HaxeToolkit\\haxe\\std/cpp/_std/sys/ssl/Socket.hx",119,0x91bd0920)
HX_LOCAL_STACK_FRAME(_hx_pos_c3275aecf8a0935b_295___init__,"::sys::ssl::Socket_obj","__init__",0xb5703314,"::sys::ssl::Socket_obj.__init__","C:\\HaxeToolkit\\haxe\\std/cpp/_std/sys/ssl/Socket.hx",295,0x91bd0920)
HX_LOCAL_STACK_FRAME(_hx_pos_cd49b9d3f62e0d57_138_init,"sys.ssl.Socket","init",0x622a4488,"sys.ssl.Socket.init","C:\\HaxeToolkit\\haxe\\std/cpp/_std/sys/ssl/Socket.hx",138,0x91bd0920)
HX_LOCAL_STACK_FRAME(_hx_pos_cd49b9d3f62e0d57_152_connect,"sys.ssl.Socket","connect",0x6aae6d72,"sys.ssl.Socket.connect","C:\\HaxeToolkit\\haxe\\std/cpp/_std/sys/ssl/Socket.hx",152,0x91bd0920)
HX_LOCAL_STACK_FRAME(_hx_pos_cd49b9d3f62e0d57_174_handshake,"sys.ssl.Socket","handshake",0x5679847f,"sys.ssl.Socket.handshake","C:\\HaxeToolkit\\haxe\\std/cpp/_std/sys/ssl/Socket.hx",174,0x91bd0920)
HX_LOCAL_STACK_FRAME(_hx_pos_cd49b9d3f62e0d57_213_close,"sys.ssl.Socket","close",0x0d1c5740,"sys.ssl.Socket.close","C:\\HaxeToolkit\\haxe\\std/cpp/_std/sys/ssl/Socket.hx",213,0x91bd0920)
HX_LOCAL_STACK_FRAME(_hx_pos_cd49b9d3f62e0d57_260_buildSSLConfig,"sys.ssl.Socket","buildSSLConfig",0xf55ff618,"sys.ssl.Socket.buildSSLConfig","C:\\HaxeToolkit\\haxe\\std/cpp/_std/sys/ssl/Socket.hx",260,0x91bd0920)
HX_LOCAL_STACK_FRAME(_hx_pos_cd49b9d3f62e0d57_267_buildSSLConfig,"sys.ssl.Socket","buildSSLConfig",0xf55ff618,"sys.ssl.Socket.buildSSLConfig","C:\\HaxeToolkit\\haxe\\std/cpp/_std/sys/ssl/Socket.hx",267,0x91bd0920)
HX_LOCAL_STACK_FRAME(_hx_pos_cd49b9d3f62e0d57_120_boot,"sys.ssl.Socket","boot",0x5d8a8daa,"sys.ssl.Socket.boot","C:\\HaxeToolkit\\haxe\\std/cpp/_std/sys/ssl/Socket.hx",120,0x91bd0920)
namespace sys{
namespace ssl{

void Socket_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_cd49b9d3f62e0d57_119_new)
HXDLIN( 119)		super::__construct();
            	}

Dynamic Socket_obj::__CreateEmpty() { return new Socket_obj; }

void *Socket_obj::_hx_vtable = 0;

Dynamic Socket_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Socket_obj > _hx_result = new Socket_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Socket_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x70c71ec3) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x70c71ec3;
	} else {
		return inClassId==(int)0x7a492a0e;
	}
}

void Socket_obj::__init__(){
            	HX_STACKFRAME(&_hx_pos_c3275aecf8a0935b_295___init__)
HXDLIN( 295)		_hx_ssl_init();
            	}


void Socket_obj::init(){
            	HX_GC_STACKFRAME(&_hx_pos_cd49b9d3f62e0d57_138_init)
HXLINE( 139)		this->__s = _hx_std_socket_new(false);
HXLINE( 140)		this->input =  ::sys::ssl::_Socket::SocketInput_obj::__alloc( HX_CTX ,::hx::ObjectPtr<OBJ_>(this));
HXLINE( 141)		this->output =  ::sys::ssl::_Socket::SocketOutput_obj::__alloc( HX_CTX ,::hx::ObjectPtr<OBJ_>(this));
HXLINE( 142)		bool _hx_tmp;
HXDLIN( 142)		if (( (bool)(::sys::ssl::Socket_obj::DEFAULT_VERIFY_CERT) )) {
HXLINE( 142)			_hx_tmp = ::hx::IsNull( ::sys::ssl::Socket_obj::DEFAULT_CA );
            		}
            		else {
HXLINE( 142)			_hx_tmp = false;
            		}
HXDLIN( 142)		if (_hx_tmp) {
HXLINE( 143)			try {
            				HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 144)				::sys::ssl::Socket_obj::DEFAULT_CA = ::sys::ssl::Certificate_obj::loadDefaults();
            			} catch( ::Dynamic _hx_e) {
            				if (_hx_e.IsClass<  ::Dynamic >() ){
            					HX_STACK_BEGIN_CATCH
            					 ::Dynamic _g = _hx_e;
HXLINE( 145)					{
HXLINE( 145)						null();
            					}
            				}
            				else {
            					HX_STACK_DO_THROW(_hx_e);
            				}
            			}
            		}
HXLINE( 147)		this->caCert = ::sys::ssl::Socket_obj::DEFAULT_CA;
HXLINE( 148)		this->verifyCert = ::sys::ssl::Socket_obj::DEFAULT_VERIFY_CERT;
            	}


void Socket_obj::connect( ::sys::net::Host host,int port){
            	HX_STACKFRAME(&_hx_pos_cd49b9d3f62e0d57_152_connect)
HXDLIN( 152)		try {
            			HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 153)			this->conf = this->buildSSLConfig(false);
HXLINE( 154)			this->ssl = _hx_ssl_new(this->conf);
HXLINE( 155)			this->handshakeDone = false;
HXLINE( 156)			_hx_ssl_set_socket(this->ssl,this->__s);
HXLINE( 157)			if (::hx::IsNull( this->hostname )) {
HXLINE( 158)				this->hostname = host->host;
            			}
HXLINE( 159)			if (::hx::IsNotNull( this->hostname )) {
HXLINE( 160)				_hx_ssl_set_hostname(this->ssl,this->hostname);
            			}
HXLINE( 161)			_hx_std_socket_connect(this->__s,host->ip,port);
HXLINE( 162)			this->handshake();
            		} catch( ::Dynamic _hx_e) {
            			if (_hx_e.IsClass<  ::Dynamic >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::Dynamic _g = _hx_e;
HXLINE( 163)				{
HXLINE( 163)					null();
            				}
HXDLIN( 163)				 ::Dynamic _g1 = ::haxe::Exception_obj::caught(_g)->unwrap();
HXLINE( 152)				if (::Std_obj::isOfType(_g1,::hx::ClassOf< ::String >())) {
HXLINE( 163)					::String s = ( (::String)(_g1) );
HXLINE( 164)					if ((s == HX_("Invalid socket handle",6c,15,f9,09))) {
HXLINE( 165)						HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((((HX_("Failed to connect on ",a9,2b,e3,45) + host->host) + HX_(":",3a,00,00,00)) + port)));
            					}
            					else {
HXLINE( 167)						HX_STACK_DO_RETHROW(s);
            					}
            				}
            				else {
HXLINE( 168)					 ::Dynamic e = _g1;
HXLINE( 169)					HX_STACK_DO_RETHROW(e);
            				}
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
            	}


void Socket_obj::handshake(){
            	HX_STACKFRAME(&_hx_pos_cd49b9d3f62e0d57_174_handshake)
HXDLIN( 174)		if (!(this->handshakeDone)) {
HXLINE( 175)			try {
            				HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 176)				_hx_ssl_handshake(this->ssl);
HXLINE( 177)				this->handshakeDone = true;
            			} catch( ::Dynamic _hx_e) {
            				if (_hx_e.IsClass<  ::Dynamic >() ){
            					HX_STACK_BEGIN_CATCH
            					 ::Dynamic _g = _hx_e;
HXLINE( 178)					{
HXLINE( 178)						null();
            					}
HXDLIN( 178)					 ::Dynamic e = ::haxe::Exception_obj::caught(_g)->unwrap();
HXLINE( 179)					if (::hx::IsEq( e,HX_("Blocking",d5,e1,61,f3) )) {
HXLINE( 180)						HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::haxe::io::Error_obj::Blocked_dyn()));
            					}
            					else {
HXLINE( 182)						HX_STACK_DO_RETHROW(e);
            					}
            				}
            				else {
            					HX_STACK_DO_THROW(_hx_e);
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Socket_obj,handshake,(void))

void Socket_obj::close(){
            	HX_STACKFRAME(&_hx_pos_cd49b9d3f62e0d57_213_close)
HXLINE( 214)		if (::hx::IsNotNull( this->ssl )) {
HXLINE( 215)			_hx_ssl_close(this->ssl);
            		}
HXLINE( 216)		if (::hx::IsNotNull( this->conf )) {
HXLINE( 217)			_hx_ssl_conf_close(this->conf);
            		}
HXLINE( 218)		if (::hx::IsNotNull( this->altSNIContexts )) {
HXLINE( 219)			this->sniCallback = null();
            		}
HXLINE( 220)		_hx_std_socket_close(this->__s);
HXLINE( 221)		 ::sys::ssl::_Socket::SocketInput input = ( ( ::sys::ssl::_Socket::SocketInput)(this->input) );
HXLINE( 222)		 ::sys::ssl::_Socket::SocketOutput output = ( ( ::sys::ssl::_Socket::SocketOutput)(this->output) );
HXLINE( 223)		input->__s = (output->__s = null());
HXLINE( 224)		input->close();
HXLINE( 225)		output->close();
            	}


 ::Dynamic Socket_obj::buildSSLConfig(bool server){
            	HX_STACKFRAME(&_hx_pos_cd49b9d3f62e0d57_260_buildSSLConfig)
HXDLIN( 260)		 ::sys::ssl::Socket _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 261)		 ::Dynamic conf = _hx_ssl_conf_new(server);
HXLINE( 263)		bool _hx_tmp;
HXDLIN( 263)		if (::hx::IsNotNull( this->ownCert )) {
HXLINE( 263)			_hx_tmp = ::hx::IsNotNull( this->ownKey );
            		}
            		else {
HXLINE( 263)			_hx_tmp = false;
            		}
HXDLIN( 263)		if (_hx_tmp) {
HXLINE( 264)			_hx_ssl_conf_set_cert(conf,this->ownCert->_hx___x,this->ownKey->_hx___k);
            		}
HXLINE( 266)		if (::hx::IsNotNull( this->altSNIContexts )) {
            			HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::sys::ssl::Socket,_gthis) HXARGC(1)
            			 ::Dynamic _hx_run( ::Dynamic servername){
            				HX_STACKFRAME(&_hx_pos_cd49b9d3f62e0d57_267_buildSSLConfig)
HXLINE( 268)				::String servername1 = ::String(( (::String)(servername) ));
HXLINE( 269)				{
HXLINE( 269)					int _g = 0;
HXDLIN( 269)					::Array< ::Dynamic> _g1 = _gthis->altSNIContexts;
HXDLIN( 269)					while((_g < _g1->length)){
HXLINE( 269)						 ::Dynamic c = _g1->__get(_g);
HXDLIN( 269)						_g = (_g + 1);
HXLINE( 270)						if (( (bool)(c->__Field(HX_("match",45,49,23,03),::hx::paccDynamic)(servername1)) )) {
HXLINE( 271)							return  ::Dynamic(::hx::Anon_obj::Create(2)
            								->setFixed(0,HX_("key",9f,89,51,00),( ( ::sys::ssl::Key)(c->__Field(HX_("key",9f,89,51,00),::hx::paccDynamic)) )->_hx___k)
            								->setFixed(1,HX_("cert",e4,26,bd,41),( ( ::sys::ssl::Certificate)(c->__Field(HX_("cert",e4,26,bd,41),::hx::paccDynamic)) )->_hx___x));
            						}
            					}
            				}
HXLINE( 275)				bool _hx_tmp;
HXDLIN( 275)				if (::hx::IsNotNull( _gthis->ownKey )) {
HXLINE( 275)					_hx_tmp = ::hx::IsNotNull( _gthis->ownCert );
            				}
            				else {
HXLINE( 275)					_hx_tmp = false;
            				}
HXDLIN( 275)				if (_hx_tmp) {
HXLINE( 276)					return  ::Dynamic(::hx::Anon_obj::Create(2)
            						->setFixed(0,HX_("key",9f,89,51,00),_gthis->ownKey->_hx___k)
            						->setFixed(1,HX_("cert",e4,26,bd,41),_gthis->ownCert->_hx___x));
            				}
HXLINE( 279)				return null();
            			}
            			HX_END_LOCAL_FUNC1(return)

HXLINE( 267)			this->sniCallback =  ::Dynamic(new _hx_Closure_0(_gthis));
HXLINE( 281)			_hx_ssl_conf_set_servername_callback(conf,this->sniCallback);
            		}
HXLINE( 284)		if (::hx::IsNotNull( this->caCert )) {
HXLINE( 285)			 ::Dynamic _hx_tmp;
HXDLIN( 285)			if (::hx::IsNull( this->caCert )) {
HXLINE( 285)				_hx_tmp = null();
            			}
            			else {
HXLINE( 285)				_hx_tmp = this->caCert->_hx___x;
            			}
HXDLIN( 285)			_hx_ssl_conf_set_ca(conf,_hx_tmp);
            		}
HXLINE( 286)		if (::hx::IsNull( this->verifyCert )) {
HXLINE( 287)			_hx_ssl_conf_set_verify(conf,2);
            		}
            		else {
HXLINE( 289)			int _hx_tmp;
HXDLIN( 289)			if (( (bool)(this->verifyCert) )) {
HXLINE( 289)				_hx_tmp = 1;
            			}
            			else {
HXLINE( 289)				_hx_tmp = 0;
            			}
HXDLIN( 289)			_hx_ssl_conf_set_verify(conf,_hx_tmp);
            		}
HXLINE( 291)		return conf;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Socket_obj,buildSSLConfig,return )

 ::Dynamic Socket_obj::DEFAULT_VERIFY_CERT;

 ::sys::ssl::Certificate Socket_obj::DEFAULT_CA;


::hx::ObjectPtr< Socket_obj > Socket_obj::__new() {
	::hx::ObjectPtr< Socket_obj > __this = new Socket_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Socket_obj > Socket_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Socket_obj *__this = (Socket_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Socket_obj), true, "sys.ssl.Socket"));
	*(void **)__this = Socket_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Socket_obj::Socket_obj()
{
}

void Socket_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Socket);
	HX_MARK_MEMBER_NAME(conf,"conf");
	HX_MARK_MEMBER_NAME(ssl,"ssl");
	HX_MARK_MEMBER_NAME(verifyCert,"verifyCert");
	HX_MARK_MEMBER_NAME(caCert,"caCert");
	HX_MARK_MEMBER_NAME(hostname,"hostname");
	HX_MARK_MEMBER_NAME(ownCert,"ownCert");
	HX_MARK_MEMBER_NAME(ownKey,"ownKey");
	HX_MARK_MEMBER_NAME(altSNIContexts,"altSNIContexts");
	HX_MARK_MEMBER_NAME(sniCallback,"sniCallback");
	HX_MARK_MEMBER_NAME(handshakeDone,"handshakeDone");
	 ::sys::net::Socket_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Socket_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(conf,"conf");
	HX_VISIT_MEMBER_NAME(ssl,"ssl");
	HX_VISIT_MEMBER_NAME(verifyCert,"verifyCert");
	HX_VISIT_MEMBER_NAME(caCert,"caCert");
	HX_VISIT_MEMBER_NAME(hostname,"hostname");
	HX_VISIT_MEMBER_NAME(ownCert,"ownCert");
	HX_VISIT_MEMBER_NAME(ownKey,"ownKey");
	HX_VISIT_MEMBER_NAME(altSNIContexts,"altSNIContexts");
	HX_VISIT_MEMBER_NAME(sniCallback,"sniCallback");
	HX_VISIT_MEMBER_NAME(handshakeDone,"handshakeDone");
	 ::sys::net::Socket_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Socket_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"ssl") ) { return ::hx::Val( ssl ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"conf") ) { return ::hx::Val( conf ); }
		if (HX_FIELD_EQ(inName,"init") ) { return ::hx::Val( init_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"close") ) { return ::hx::Val( close_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"caCert") ) { return ::hx::Val( caCert ); }
		if (HX_FIELD_EQ(inName,"ownKey") ) { return ::hx::Val( ownKey ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"ownCert") ) { return ::hx::Val( ownCert ); }
		if (HX_FIELD_EQ(inName,"connect") ) { return ::hx::Val( connect_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"hostname") ) { return ::hx::Val( hostname ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"handshake") ) { return ::hx::Val( handshake_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"verifyCert") ) { return ::hx::Val( verifyCert ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"sniCallback") ) { return ::hx::Val( sniCallback ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"handshakeDone") ) { return ::hx::Val( handshakeDone ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"altSNIContexts") ) { return ::hx::Val( altSNIContexts ); }
		if (HX_FIELD_EQ(inName,"buildSSLConfig") ) { return ::hx::Val( buildSSLConfig_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Socket_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"DEFAULT_CA") ) { outValue = ( DEFAULT_CA ); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"DEFAULT_VERIFY_CERT") ) { outValue = ( DEFAULT_VERIFY_CERT ); return true; }
	}
	return false;
}

::hx::Val Socket_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"ssl") ) { ssl=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"conf") ) { conf=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"caCert") ) { caCert=inValue.Cast<  ::sys::ssl::Certificate >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ownKey") ) { ownKey=inValue.Cast<  ::sys::ssl::Key >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"ownCert") ) { ownCert=inValue.Cast<  ::sys::ssl::Certificate >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"hostname") ) { hostname=inValue.Cast< ::String >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"verifyCert") ) { verifyCert=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"sniCallback") ) { sniCallback=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"handshakeDone") ) { handshakeDone=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"altSNIContexts") ) { altSNIContexts=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Socket_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"DEFAULT_CA") ) { DEFAULT_CA=ioValue.Cast<  ::sys::ssl::Certificate >(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"DEFAULT_VERIFY_CERT") ) { DEFAULT_VERIFY_CERT=ioValue.Cast<  ::Dynamic >(); return true; }
	}
	return false;
}

void Socket_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("conf",e4,b9,c4,41));
	outFields->push(HX_("ssl",cc,a7,57,00));
	outFields->push(HX_("verifyCert",fd,86,cf,02));
	outFields->push(HX_("caCert",a2,50,c9,9b));
	outFields->push(HX_("hostname",b3,15,d2,52));
	outFields->push(HX_("ownCert",4a,90,f0,1e));
	outFields->push(HX_("ownKey",f9,ce,3a,2f));
	outFields->push(HX_("altSNIContexts",89,ca,20,8a));
	outFields->push(HX_("sniCallback",53,17,a6,61));
	outFields->push(HX_("handshakeDone",19,45,e6,99));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Socket_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Socket_obj,conf),HX_("conf",e4,b9,c4,41)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Socket_obj,ssl),HX_("ssl",cc,a7,57,00)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Socket_obj,verifyCert),HX_("verifyCert",fd,86,cf,02)},
	{::hx::fsObject /*  ::sys::ssl::Certificate */ ,(int)offsetof(Socket_obj,caCert),HX_("caCert",a2,50,c9,9b)},
	{::hx::fsString,(int)offsetof(Socket_obj,hostname),HX_("hostname",b3,15,d2,52)},
	{::hx::fsObject /*  ::sys::ssl::Certificate */ ,(int)offsetof(Socket_obj,ownCert),HX_("ownCert",4a,90,f0,1e)},
	{::hx::fsObject /*  ::sys::ssl::Key */ ,(int)offsetof(Socket_obj,ownKey),HX_("ownKey",f9,ce,3a,2f)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Socket_obj,altSNIContexts),HX_("altSNIContexts",89,ca,20,8a)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Socket_obj,sniCallback),HX_("sniCallback",53,17,a6,61)},
	{::hx::fsBool,(int)offsetof(Socket_obj,handshakeDone),HX_("handshakeDone",19,45,e6,99)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo Socket_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &Socket_obj::DEFAULT_VERIFY_CERT,HX_("DEFAULT_VERIFY_CERT",cc,6c,33,0e)},
	{::hx::fsObject /*  ::sys::ssl::Certificate */ ,(void *) &Socket_obj::DEFAULT_CA,HX_("DEFAULT_CA",bc,7e,2f,18)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String Socket_obj_sMemberFields[] = {
	HX_("conf",e4,b9,c4,41),
	HX_("ssl",cc,a7,57,00),
	HX_("verifyCert",fd,86,cf,02),
	HX_("caCert",a2,50,c9,9b),
	HX_("hostname",b3,15,d2,52),
	HX_("ownCert",4a,90,f0,1e),
	HX_("ownKey",f9,ce,3a,2f),
	HX_("altSNIContexts",89,ca,20,8a),
	HX_("sniCallback",53,17,a6,61),
	HX_("handshakeDone",19,45,e6,99),
	HX_("init",10,3b,bb,45),
	HX_("connect",ea,3b,80,15),
	HX_("handshake",f7,e0,35,b4),
	HX_("close",b8,17,63,48),
	HX_("buildSSLConfig",a0,66,29,1e),
	::String(null()) };

static void Socket_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Socket_obj::DEFAULT_VERIFY_CERT,"DEFAULT_VERIFY_CERT");
	HX_MARK_MEMBER_NAME(Socket_obj::DEFAULT_CA,"DEFAULT_CA");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Socket_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Socket_obj::DEFAULT_VERIFY_CERT,"DEFAULT_VERIFY_CERT");
	HX_VISIT_MEMBER_NAME(Socket_obj::DEFAULT_CA,"DEFAULT_CA");
};

#endif

::hx::Class Socket_obj::__mClass;

static ::String Socket_obj_sStaticFields[] = {
	HX_("DEFAULT_VERIFY_CERT",cc,6c,33,0e),
	HX_("DEFAULT_CA",bc,7e,2f,18),
	::String(null())
};

void Socket_obj::__register()
{
	Socket_obj _hx_dummy;
	Socket_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("sys.ssl.Socket",f6,c9,b1,35);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Socket_obj::__GetStatic;
	__mClass->mSetStaticField = &Socket_obj::__SetStatic;
	__mClass->mMarkFunc = Socket_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Socket_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Socket_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Socket_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Socket_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Socket_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Socket_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Socket_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_cd49b9d3f62e0d57_120_boot)
HXDLIN( 120)		DEFAULT_VERIFY_CERT = true;
            	}
}

} // end namespace sys
} // end namespace ssl