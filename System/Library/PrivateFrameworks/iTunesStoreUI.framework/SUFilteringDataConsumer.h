/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:34 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/SUDataConsumer.h>

@protocol SUDataConsumer;
@interface SUFilteringDataConsumer : NSObject <SUDataConsumer> {

	<SUDataConsumer>* _consumer;

}

@property (nonatomic,retain) <SUDataConsumer> * dataConsumer;              //@synthesize consumer=_consumer - In the implementation block
+(long long)maxConsumeLengthForReadLength:(long long)arg1 ;
+(long long)outputLengthForInputLength:(long long)arg1 ;
-(void)dealloc;
-(id)init;
-(void)finish;
-(void)setDataConsumer:(id)arg1 ;
-(id)dataConsumer;
-(int)consumeData:(id)arg1 ;
-(id)initWithDataConsumer:(id)arg1 ;
-(unsigned long long)minimumConsumeLength;
@end
