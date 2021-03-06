/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:08 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/ExFAT.framework/ExFAT
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ExFAT/UserFSStream.h>

@class ExFATItem;

@interface ExFATStream : NSObject <UserFSStream> {

	ExFATItem* _item;

}

@property (nonatomic,retain) ExFATItem * item;                         //@synthesize item=_item - In the implementation block
@property (nonatomic,readonly) bool writable; 
@property (nonatomic,readonly) unsigned long long length; 
-(void)setItem:(id)arg1 ;
-(id)initWithItem:(id)arg1 ;
-(bool)writable;
-(void)dealloc;
-(unsigned long long)length;
-(id)item;
-(bool)close;
-(void).cxx_destruct;
-(long long)readBytesUpToLength:(unsigned long long)arg1 atOffset:(unsigned long long)arg2 toBuffer:(void*)arg3 ;
@end

