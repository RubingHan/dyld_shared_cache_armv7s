/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:57 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

typedef struct __CFSet* CFSetRef;

typedef struct _NSZone* NSZoneRef;

typedef struct _CFCachedURLResponse* CFCachedURLResponseRef;

typedef struct IONotificationPort* IONotificationPortRef;

typedef struct __CFString* CFStringRef;

typedef struct __CFArray* CFArrayRef;

typedef struct sqlite3_stmt* sqlite3_stmtRef;

typedef struct SecCmsMessageStr* SecCmsMessageStrRef;

typedef struct SecCmsSignedDataStr* SecCmsSignedDataStrRef;

typedef struct __SecTrust* SecTrustRef;

typedef struct sqlite3* sqlite3Ref;

typedef struct __CFDictionary* CFDictionaryRef;

typedef struct SBSProcessAssertion* SBSProcessAssertionRef;

typedef struct dispatch_source_type_s* dispatch_source_type_sRef;

typedef struct z_stream_s {
	char* next_in;
	unsigned avail_in;
	unsigned long long total_in;
	char* next_out;
	unsigned avail_out;
	unsigned long long total_out;
	char* msg;
	internal_state state;
	/*function pointer*/ void* zalloc;
	/*function pointer*/ void* zfree;
	void opaque;
	int data_type;
	unsigned long long adler;
	unsigned long long reserved;
} z_stream_s;
