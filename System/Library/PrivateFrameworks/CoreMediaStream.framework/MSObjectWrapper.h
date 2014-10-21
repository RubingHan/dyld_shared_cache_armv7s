/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:54 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol NSObjectNSCoding;
@interface MSObjectWrapper : NSObject {

	long long _size;
	long long _uniqueID;
	<NSObject><NSCoding>* _object;
	int _errorCount;

}

@property (assign,nonatomic) long long size;                     //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) long long uniqueID;                 //@synthesize uniqueID=_uniqueID - In the implementation block
@property (nonatomic,readonly) <NSCoding> * object;              //@synthesize object=_object - In the implementation block
@property (assign,nonatomic) int errorCount;                     //@synthesize errorCount=_errorCount - In the implementation block
+(id)wrapperWithObject:(id)arg1 size:(long long)arg2 ;
+(id)objectsFromWrappers:(id)arg1 ;
+(long long)indexOfObject:(id)arg1 inWrapperArray:(id)arg2 ;
+(id)objectsFromWrappers:(id)arg1 equalToObject:(id)arg2 ;
-(long long)size;
-(void)setSize:(long long)arg1 ;
-(id)object;
-(void).cxx_destruct;
-(int)errorCount;
-(void)setErrorCount:(int)arg1 ;
-(long long)uniqueID;
-(void)setUniqueID:(long long)arg1 ;
-(id)initWithObject:(id)arg1 size:(long long)arg2 ;
@end
