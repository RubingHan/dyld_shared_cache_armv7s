/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:46 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface CXNamespace : NSObject {

	const char* mUri;
	xmlDoc* mDocument;
	xmlNs* mDocumentNamespace;

}
+(void)registerNamespace:(id)arg1 ;
+(bool)isPrefixSupportedFromNodeContext:(xmlNode*)arg1 prefix:(const char*)arg2 ;
+(bool)isNamespaceSupported:(const char*)arg1 ;
+(bool)isPrefixSupportedFromStream:(xmlTextReaderRef)arg1 prefix:(const char*)arg2 ;
+(void)clearRegisteredNamespaces;
-(bool)containsNode:(xmlNode*)arg1 ;
-(bool)containsAttribute:(xmlAttr*)arg1 ;
-(const char*)uri;
-(id)initWithUri:(const char*)arg1 ;
-(id)initUnsupportedNsWithUri:(const char*)arg1 ;
@end

