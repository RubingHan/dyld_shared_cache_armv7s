/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:42 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray, NSString;

@interface MPRadioPerformanceSession : NSObject {

	NSMutableArray* _events;
	NSString* _label;
	double _startTime;

}

@property (nonatomic,readonly) NSString * logLine; 
-(void)addEventWithName:(id)arg1 ;
-(id)initWithLabel:(id)arg1 ;
-(id)logLine;
-(void).cxx_destruct;
@end
