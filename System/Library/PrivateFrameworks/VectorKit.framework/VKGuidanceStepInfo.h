/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:13 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface VKGuidanceStepInfo : NSObject {

	NSString* _roadName;
	int _routePoint;

}

@property (nonatomic,readonly) NSString * roadName;              //@synthesize roadName=_roadName - In the implementation block
@property (nonatomic,readonly) int routePoint;                   //@synthesize routePoint=_routePoint - In the implementation block
-(void)dealloc;
-(id)initWithRoadName:(id)arg1 point:(int)arg2 ;
-(int)routePoint;
-(id)roadName;
@end

