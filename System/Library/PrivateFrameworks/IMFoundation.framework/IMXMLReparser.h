/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:21 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/NSXMLParserDelegate.h>

@class NSXMLParser, NSMutableString, IMXMLReparserContext, NSError;

@interface IMXMLReparser : NSObject <NSXMLParserDelegate> {

	NSXMLParser* _parser;
	NSMutableString* _output;
	IMXMLReparserContext* _context;
	NSError* _error;
	unsigned long long _depth;

}
-(void)parser:(id)arg1 parseErrorOccurred:(id)arg2 ;
-(void)parser:(id)arg1 foundCharacters:(id)arg2 ;
-(void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 ;
-(void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5 ;
-(bool)parseWithContext:(id)arg1 ;
@end
