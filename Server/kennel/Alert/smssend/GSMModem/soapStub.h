/* soapStub.h
   Generated by gSOAP 2.7.12 from GSM.h
   Copyright(C) 2000-2008, Robert van Engelen, Genivia Inc. All Rights Reserved.
   This part of the software is released under one of the following licenses:
   GPL, the gSOAP public license, or Genivia's license for commercial use.
*/

#ifndef soapStub_H
#define soapStub_H
#include <vector>
#include "stdsoap2.h"

/******************************************************************************\
 *                                                                            *
 * Enumerations                                                               *
 *                                                                            *
\******************************************************************************/


/******************************************************************************\
 *                                                                            *
 * Classes and Structs                                                        *
 *                                                                            *
\******************************************************************************/


#if 0 /* volatile type: do not redeclare here */

#endif

#if 0 /* volatile type: do not redeclare here */

#endif

#ifndef SOAP_TYPE__ns1__SendNoteInfoForUser
#define SOAP_TYPE__ns1__SendNoteInfoForUser (8)
/* ns1:SendNoteInfoForUser */
class SOAP_CMAC _ns1__SendNoteInfoForUser
{
public:
	std::string *phoneNo;	/* optional element of type xsd:string */
	std::string *notinfo;	/* optional element of type xsd:string */
	std::string *vFlag;	/* optional element of type xsd:string */
	std::string *destineDateTime;	/* optional element of type xsd:string */
	bool needNCallBack;	/* required element of type xsd:boolean */
	struct soap *soap;	/* transient */
public:
	virtual int soap_type() const { return 8; } /* = unique id SOAP_TYPE__ns1__SendNoteInfoForUser */
	virtual void soap_default(struct soap*);
	virtual void soap_serialize(struct soap*) const;
	virtual int soap_put(struct soap*, const char*, const char*) const;
	virtual int soap_out(struct soap*, const char*, int, const char*) const;
	virtual void *soap_get(struct soap*, const char*, const char*);
	virtual void *soap_in(struct soap*, const char*, const char*);
	         _ns1__SendNoteInfoForUser() : phoneNo(NULL), notinfo(NULL), vFlag(NULL), destineDateTime(NULL), needNCallBack((bool)0), soap(NULL) { }
	virtual ~_ns1__SendNoteInfoForUser() { }
};
#endif

#ifndef SOAP_TYPE__ns1__SendNoteInfoForUserResponse
#define SOAP_TYPE__ns1__SendNoteInfoForUserResponse (9)
/* ns1:SendNoteInfoForUserResponse */
class SOAP_CMAC _ns1__SendNoteInfoForUserResponse
{
public:
	bool SendNoteInfoForUserResult;	/* SOAP 1.2 RPC return element (when namespace qualified) */	/* required element of type xsd:boolean */
	struct soap *soap;	/* transient */
public:
	virtual int soap_type() const { return 9; } /* = unique id SOAP_TYPE__ns1__SendNoteInfoForUserResponse */
	virtual void soap_default(struct soap*);
	virtual void soap_serialize(struct soap*) const;
	virtual int soap_put(struct soap*, const char*, const char*) const;
	virtual int soap_out(struct soap*, const char*, int, const char*) const;
	virtual void *soap_get(struct soap*, const char*, const char*);
	virtual void *soap_in(struct soap*, const char*, const char*);
	         _ns1__SendNoteInfoForUserResponse() : SendNoteInfoForUserResult((bool)0), soap(NULL) { }
	virtual ~_ns1__SendNoteInfoForUserResponse() { }
};
#endif

#ifndef SOAP_TYPE__ns1__SendNoteInfo
#define SOAP_TYPE__ns1__SendNoteInfo (10)
/* ns1:SendNoteInfo */
class SOAP_CMAC _ns1__SendNoteInfo
{
public:
	std::string *phoneNo;	/* optional element of type xsd:string */
	std::string *notinfo;	/* optional element of type xsd:string */
	std::string *vFlag;	/* optional element of type xsd:string */
	std::string *destineDateTime;	/* optional element of type xsd:string */
	struct soap *soap;	/* transient */
public:
	virtual int soap_type() const { return 10; } /* = unique id SOAP_TYPE__ns1__SendNoteInfo */
	virtual void soap_default(struct soap*);
	virtual void soap_serialize(struct soap*) const;
	virtual int soap_put(struct soap*, const char*, const char*) const;
	virtual int soap_out(struct soap*, const char*, int, const char*) const;
	virtual void *soap_get(struct soap*, const char*, const char*);
	virtual void *soap_in(struct soap*, const char*, const char*);
	         _ns1__SendNoteInfo() : phoneNo(NULL), notinfo(NULL), vFlag(NULL), destineDateTime(NULL), soap(NULL) { }
	virtual ~_ns1__SendNoteInfo() { }
};
#endif

#ifndef SOAP_TYPE__ns1__SendNoteInfoResponse
#define SOAP_TYPE__ns1__SendNoteInfoResponse (11)
/* ns1:SendNoteInfoResponse */
class SOAP_CMAC _ns1__SendNoteInfoResponse
{
public:
	bool SendNoteInfoResult;	/* SOAP 1.2 RPC return element (when namespace qualified) */	/* required element of type xsd:boolean */
	struct soap *soap;	/* transient */
public:
	virtual int soap_type() const { return 11; } /* = unique id SOAP_TYPE__ns1__SendNoteInfoResponse */
	virtual void soap_default(struct soap*);
	virtual void soap_serialize(struct soap*) const;
	virtual int soap_put(struct soap*, const char*, const char*) const;
	virtual int soap_out(struct soap*, const char*, int, const char*) const;
	virtual void *soap_get(struct soap*, const char*, const char*);
	virtual void *soap_in(struct soap*, const char*, const char*);
	         _ns1__SendNoteInfoResponse() : SendNoteInfoResult((bool)0), soap(NULL) { }
	virtual ~_ns1__SendNoteInfoResponse() { }
};
#endif

#ifndef SOAP_TYPE__ns1__SendNoteInfoForUserOutID
#define SOAP_TYPE__ns1__SendNoteInfoForUserOutID (12)
/* ns1:SendNoteInfoForUserOutID */
class SOAP_CMAC _ns1__SendNoteInfoForUserOutID
{
public:
	std::string *phoneNo;	/* optional element of type xsd:string */
	std::string *notinfo;	/* optional element of type xsd:string */
	std::string *vFlag;	/* optional element of type xsd:string */
	std::string *destineDateTime;	/* optional element of type xsd:string */
	bool needNCallBack;	/* required element of type xsd:boolean */
	struct soap *soap;	/* transient */
public:
	virtual int soap_type() const { return 12; } /* = unique id SOAP_TYPE__ns1__SendNoteInfoForUserOutID */
	virtual void soap_default(struct soap*);
	virtual void soap_serialize(struct soap*) const;
	virtual int soap_put(struct soap*, const char*, const char*) const;
	virtual int soap_out(struct soap*, const char*, int, const char*) const;
	virtual void *soap_get(struct soap*, const char*, const char*);
	virtual void *soap_in(struct soap*, const char*, const char*);
	         _ns1__SendNoteInfoForUserOutID() : phoneNo(NULL), notinfo(NULL), vFlag(NULL), destineDateTime(NULL), needNCallBack((bool)0), soap(NULL) { }
	virtual ~_ns1__SendNoteInfoForUserOutID() { }
};
#endif

#ifndef SOAP_TYPE__ns1__SendNoteInfoForUserOutIDResponse
#define SOAP_TYPE__ns1__SendNoteInfoForUserOutIDResponse (13)
/* ns1:SendNoteInfoForUserOutIDResponse */
class SOAP_CMAC _ns1__SendNoteInfoForUserOutIDResponse
{
public:
	bool SendNoteInfoForUserOutIDResult;	/* SOAP 1.2 RPC return element (when namespace qualified) */	/* required element of type xsd:boolean */
	std::string *id;	/* optional element of type xsd:string */
	struct soap *soap;	/* transient */
public:
	virtual int soap_type() const { return 13; } /* = unique id SOAP_TYPE__ns1__SendNoteInfoForUserOutIDResponse */
	virtual void soap_default(struct soap*);
	virtual void soap_serialize(struct soap*) const;
	virtual int soap_put(struct soap*, const char*, const char*) const;
	virtual int soap_out(struct soap*, const char*, int, const char*) const;
	virtual void *soap_get(struct soap*, const char*, const char*);
	virtual void *soap_in(struct soap*, const char*, const char*);
	         _ns1__SendNoteInfoForUserOutIDResponse() : SendNoteInfoForUserOutIDResult((bool)0), id(NULL), soap(NULL) { }
	virtual ~_ns1__SendNoteInfoForUserOutIDResponse() { }
};
#endif

#ifndef SOAP_TYPE__ns1__SendNoteInfoOutID
#define SOAP_TYPE__ns1__SendNoteInfoOutID (14)
/* ns1:SendNoteInfoOutID */
class SOAP_CMAC _ns1__SendNoteInfoOutID
{
public:
	std::string *phoneNo;	/* optional element of type xsd:string */
	std::string *notinfo;	/* optional element of type xsd:string */
	std::string *vFlag;	/* optional element of type xsd:string */
	std::string *destineDateTime;	/* optional element of type xsd:string */
	struct soap *soap;	/* transient */
public:
	virtual int soap_type() const { return 14; } /* = unique id SOAP_TYPE__ns1__SendNoteInfoOutID */
	virtual void soap_default(struct soap*);
	virtual void soap_serialize(struct soap*) const;
	virtual int soap_put(struct soap*, const char*, const char*) const;
	virtual int soap_out(struct soap*, const char*, int, const char*) const;
	virtual void *soap_get(struct soap*, const char*, const char*);
	virtual void *soap_in(struct soap*, const char*, const char*);
	         _ns1__SendNoteInfoOutID() : phoneNo(NULL), notinfo(NULL), vFlag(NULL), destineDateTime(NULL), soap(NULL) { }
	virtual ~_ns1__SendNoteInfoOutID() { }
};
#endif

#ifndef SOAP_TYPE__ns1__SendNoteInfoOutIDResponse
#define SOAP_TYPE__ns1__SendNoteInfoOutIDResponse (15)
/* ns1:SendNoteInfoOutIDResponse */
class SOAP_CMAC _ns1__SendNoteInfoOutIDResponse
{
public:
	bool SendNoteInfoOutIDResult;	/* SOAP 1.2 RPC return element (when namespace qualified) */	/* required element of type xsd:boolean */
	std::string *id;	/* optional element of type xsd:string */
	struct soap *soap;	/* transient */
public:
	virtual int soap_type() const { return 15; } /* = unique id SOAP_TYPE__ns1__SendNoteInfoOutIDResponse */
	virtual void soap_default(struct soap*);
	virtual void soap_serialize(struct soap*) const;
	virtual int soap_put(struct soap*, const char*, const char*) const;
	virtual int soap_out(struct soap*, const char*, int, const char*) const;
	virtual void *soap_get(struct soap*, const char*, const char*);
	virtual void *soap_in(struct soap*, const char*, const char*);
	         _ns1__SendNoteInfoOutIDResponse() : SendNoteInfoOutIDResult((bool)0), id(NULL), soap(NULL) { }
	virtual ~_ns1__SendNoteInfoOutIDResponse() { }
};
#endif

#ifndef SOAP_TYPE___ns2__SendNoteInfoForUser
#define SOAP_TYPE___ns2__SendNoteInfoForUser (23)
/* Operation wrapper: */
struct __ns2__SendNoteInfoForUser
{
public:
	_ns1__SendNoteInfoForUser *ns1__SendNoteInfoForUser;	/* optional element of type ns1:SendNoteInfoForUser */
};
#endif

#ifndef SOAP_TYPE___ns2__SendNoteInfo
#define SOAP_TYPE___ns2__SendNoteInfo (27)
/* Operation wrapper: */
struct __ns2__SendNoteInfo
{
public:
	_ns1__SendNoteInfo *ns1__SendNoteInfo;	/* optional element of type ns1:SendNoteInfo */
};
#endif

#ifndef SOAP_TYPE___ns2__SendNoteInfoForUserOutID
#define SOAP_TYPE___ns2__SendNoteInfoForUserOutID (31)
/* Operation wrapper: */
struct __ns2__SendNoteInfoForUserOutID
{
public:
	_ns1__SendNoteInfoForUserOutID *ns1__SendNoteInfoForUserOutID;	/* optional element of type ns1:SendNoteInfoForUserOutID */
};
#endif

#ifndef SOAP_TYPE___ns2__SendNoteInfoOutID
#define SOAP_TYPE___ns2__SendNoteInfoOutID (35)
/* Operation wrapper: */
struct __ns2__SendNoteInfoOutID
{
public:
	_ns1__SendNoteInfoOutID *ns1__SendNoteInfoOutID;	/* optional element of type ns1:SendNoteInfoOutID */
};
#endif

#ifndef SOAP_TYPE___ns3__SendNoteInfoForUser
#define SOAP_TYPE___ns3__SendNoteInfoForUser (37)
/* Operation wrapper: */
struct __ns3__SendNoteInfoForUser
{
public:
	_ns1__SendNoteInfoForUser *ns1__SendNoteInfoForUser;	/* optional element of type ns1:SendNoteInfoForUser */
};
#endif

#ifndef SOAP_TYPE___ns3__SendNoteInfo
#define SOAP_TYPE___ns3__SendNoteInfo (39)
/* Operation wrapper: */
struct __ns3__SendNoteInfo
{
public:
	_ns1__SendNoteInfo *ns1__SendNoteInfo;	/* optional element of type ns1:SendNoteInfo */
};
#endif

#ifndef SOAP_TYPE___ns3__SendNoteInfoForUserOutID
#define SOAP_TYPE___ns3__SendNoteInfoForUserOutID (41)
/* Operation wrapper: */
struct __ns3__SendNoteInfoForUserOutID
{
public:
	_ns1__SendNoteInfoForUserOutID *ns1__SendNoteInfoForUserOutID;	/* optional element of type ns1:SendNoteInfoForUserOutID */
};
#endif

#ifndef SOAP_TYPE___ns3__SendNoteInfoOutID
#define SOAP_TYPE___ns3__SendNoteInfoOutID (43)
/* Operation wrapper: */
struct __ns3__SendNoteInfoOutID
{
public:
	_ns1__SendNoteInfoOutID *ns1__SendNoteInfoOutID;	/* optional element of type ns1:SendNoteInfoOutID */
};
#endif

#ifndef SOAP_TYPE_SOAP_ENV__Header
#define SOAP_TYPE_SOAP_ENV__Header (44)
/* SOAP Header: */
struct SOAP_ENV__Header
{
#ifdef WITH_NOEMPTYSTRUCT
private:
	char dummy;	/* dummy member to enable compilation */
#endif
};
#endif

#ifndef SOAP_TYPE_SOAP_ENV__Code
#define SOAP_TYPE_SOAP_ENV__Code (45)
/* SOAP Fault Code: */
struct SOAP_ENV__Code
{
public:
	char *SOAP_ENV__Value;	/* optional element of type xsd:QName */
	struct SOAP_ENV__Code *SOAP_ENV__Subcode;	/* optional element of type SOAP-ENV:Code */
};
#endif

#ifndef SOAP_TYPE_SOAP_ENV__Detail
#define SOAP_TYPE_SOAP_ENV__Detail (47)
/* SOAP-ENV:Detail */
struct SOAP_ENV__Detail
{
public:
	int __type;	/* any type of element <fault> (defined below) */
	void *fault;	/* transient */
	char *__any;
};
#endif

#ifndef SOAP_TYPE_SOAP_ENV__Reason
#define SOAP_TYPE_SOAP_ENV__Reason (50)
/* SOAP-ENV:Reason */
struct SOAP_ENV__Reason
{
public:
	char *SOAP_ENV__Text;	/* optional element of type xsd:string */
};
#endif

#ifndef SOAP_TYPE_SOAP_ENV__Fault
#define SOAP_TYPE_SOAP_ENV__Fault (51)
/* SOAP Fault: */
struct SOAP_ENV__Fault
{
public:
	char *faultcode;	/* optional element of type xsd:QName */
	char *faultstring;	/* optional element of type xsd:string */
	char *faultactor;	/* optional element of type xsd:string */
	struct SOAP_ENV__Detail *detail;	/* optional element of type SOAP-ENV:Detail */
	struct SOAP_ENV__Code *SOAP_ENV__Code;	/* optional element of type SOAP-ENV:Code */
	struct SOAP_ENV__Reason *SOAP_ENV__Reason;	/* optional element of type SOAP-ENV:Reason */
	char *SOAP_ENV__Node;	/* optional element of type xsd:string */
	char *SOAP_ENV__Role;	/* optional element of type xsd:string */
	struct SOAP_ENV__Detail *SOAP_ENV__Detail;	/* optional element of type SOAP-ENV:Detail */
};
#endif

/******************************************************************************\
 *                                                                            *
 * Types with Custom Serializers                                              *
 *                                                                            *
\******************************************************************************/


/******************************************************************************\
 *                                                                            *
 * Typedefs                                                                   *
 *                                                                            *
\******************************************************************************/

#ifndef SOAP_TYPE__QName
#define SOAP_TYPE__QName (5)
typedef char *_QName;
#endif

#ifndef SOAP_TYPE__XML
#define SOAP_TYPE__XML (6)
typedef char *_XML;
#endif


/******************************************************************************\
 *                                                                            *
 * Typedef Synonyms                                                           *
 *                                                                            *
\******************************************************************************/


/******************************************************************************\
 *                                                                            *
 * Externals                                                                  *
 *                                                                            *
\******************************************************************************/


/******************************************************************************\
 *                                                                            *
 * Stubs                                                                      *
 *                                                                            *
\******************************************************************************/


SOAP_FMAC5 int SOAP_FMAC6 soap_call___ns2__SendNoteInfoForUser(struct soap *soap, const char *soap_endpoint, const char *soap_action, _ns1__SendNoteInfoForUser *ns1__SendNoteInfoForUser, _ns1__SendNoteInfoForUserResponse *ns1__SendNoteInfoForUserResponse);

SOAP_FMAC5 int SOAP_FMAC6 soap_call___ns2__SendNoteInfo(struct soap *soap, const char *soap_endpoint, const char *soap_action, _ns1__SendNoteInfo *ns1__SendNoteInfo, _ns1__SendNoteInfoResponse *ns1__SendNoteInfoResponse);

SOAP_FMAC5 int SOAP_FMAC6 soap_call___ns2__SendNoteInfoForUserOutID(struct soap *soap, const char *soap_endpoint, const char *soap_action, _ns1__SendNoteInfoForUserOutID *ns1__SendNoteInfoForUserOutID, _ns1__SendNoteInfoForUserOutIDResponse *ns1__SendNoteInfoForUserOutIDResponse);

SOAP_FMAC5 int SOAP_FMAC6 soap_call___ns2__SendNoteInfoOutID(struct soap *soap, const char *soap_endpoint, const char *soap_action, _ns1__SendNoteInfoOutID *ns1__SendNoteInfoOutID, _ns1__SendNoteInfoOutIDResponse *ns1__SendNoteInfoOutIDResponse);

SOAP_FMAC5 int SOAP_FMAC6 soap_call___ns3__SendNoteInfoForUser(struct soap *soap, const char *soap_endpoint, const char *soap_action, _ns1__SendNoteInfoForUser *ns1__SendNoteInfoForUser, _ns1__SendNoteInfoForUserResponse *ns1__SendNoteInfoForUserResponse);

SOAP_FMAC5 int SOAP_FMAC6 soap_call___ns3__SendNoteInfo(struct soap *soap, const char *soap_endpoint, const char *soap_action, _ns1__SendNoteInfo *ns1__SendNoteInfo, _ns1__SendNoteInfoResponse *ns1__SendNoteInfoResponse);

SOAP_FMAC5 int SOAP_FMAC6 soap_call___ns3__SendNoteInfoForUserOutID(struct soap *soap, const char *soap_endpoint, const char *soap_action, _ns1__SendNoteInfoForUserOutID *ns1__SendNoteInfoForUserOutID, _ns1__SendNoteInfoForUserOutIDResponse *ns1__SendNoteInfoForUserOutIDResponse);

SOAP_FMAC5 int SOAP_FMAC6 soap_call___ns3__SendNoteInfoOutID(struct soap *soap, const char *soap_endpoint, const char *soap_action, _ns1__SendNoteInfoOutID *ns1__SendNoteInfoOutID, _ns1__SendNoteInfoOutIDResponse *ns1__SendNoteInfoOutIDResponse);

#endif

/* End of soapStub.h */
