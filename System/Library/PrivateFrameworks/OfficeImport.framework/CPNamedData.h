/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:46 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSData, NSString;

@interface CPNamedData : NSObject {

	NSData* mData;
	NSString* mName;

}

@property (nonatomic,readonly) NSData * data; 
@property (nonatomic,readonly) NSString * name; 
+(id)namedDataWithData:(id)arg1 named:(id)arg2 ;
-(void)dealloc;
-(id)data;
-(id)name;
-(id)initWithData:(id)arg1 named:(id)arg2 ;
@end

