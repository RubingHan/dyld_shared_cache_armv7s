/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:53 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface CoreDAVItemParserMapping : NSObject {

	NSString* _nameSpace;
	NSString* _name;
	Class _parseClass;

}

@property (retain) NSString * nameSpace;              //@synthesize nameSpace=_nameSpace - In the implementation block
@property (retain) NSString * name;                   //@synthesize name=_name - In the implementation block
@property (assign) Class parseClass;                  //@synthesize parseClass=_parseClass - In the implementation block
-(void)dealloc;
-(id)description;
-(void)setName:(id)arg1 ;
-(id)name;
-(id)nameSpace;
-(id)initWithNameSpace:(id)arg1 name:(id)arg2 parseClass:(Class)arg3 ;
-(void)setNameSpace:(id)arg1 ;
-(void)setParseClass:(Class)arg1 ;
-(Class)parseClass;
@end

