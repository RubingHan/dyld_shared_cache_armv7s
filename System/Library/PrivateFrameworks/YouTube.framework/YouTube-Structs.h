/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:27 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/YouTube.framework/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

typedef struct __CFRunLoop* CFRunLoopRef;

typedef struct __CFRunLoopSource* CFRunLoopSourceRef;

typedef struct opaque_pthread_mutex_t {
	long long __sig;
	BOOL __opaque[56];
} opaque_pthread_mutex_t;

typedef struct opaque_pthread_cond_t {
	long long __sig;
	BOOL __opaque[40];
} opaque_pthread_cond_t;

typedef struct CGImage* CGImageRef;

typedef struct xmlSAXHandler {
	/*function pointer*/ void* internalSubset;
	/*function pointer*/ void* isStandalone;
	/*function pointer*/ void* hasInternalSubset;
	/*function pointer*/ void* hasExternalSubset;
	/*function pointer*/ void* resolveEntity;
	/*function pointer*/ void* getEntity;
	/*function pointer*/ void* entityDecl;
	/*function pointer*/ void* notationDecl;
	/*function pointer*/ void* attributeDecl;
	/*function pointer*/ void* elementDecl;
	/*function pointer*/ void* unparsedEntityDecl;
	/*function pointer*/ void* setDocumentLocator;
	/*function pointer*/ void* startDocument;
	/*function pointer*/ void* endDocument;
	/*function pointer*/ void* startElement;
	/*function pointer*/ void* endElement;
	/*function pointer*/ void* reference;
	/*function pointer*/ void* characters;
	/*function pointer*/ void* ignorableWhitespace;
	/*function pointer*/ void* processingInstruction;
	/*function pointer*/ void* comment;
	/*function pointer*/ void* warning;
	/*function pointer*/ void* error;
	/*function pointer*/ void* fatalError;
	/*function pointer*/ void* getParameterEntity;
	/*function pointer*/ void* cdataBlock;
	/*function pointer*/ void* externalSubset;
	unsigned initialized;
	void _private;
	/*function pointer*/ void* startElementNs;
	/*function pointer*/ void* endElementNs;
	/*function pointer*/ void* serror;
} xmlSAXHandler;
