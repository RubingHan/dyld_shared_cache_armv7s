/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:41 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface MKCALayerCompletionDelegate : NSObject {

	/*^block*/ id _completion;

}

@property (nonatomic,copy) id completion;              //@synthesize completion=_completion - In the implementation block
+(id)delegateWithCompletion:(/*^block*/ id)arg1 ;
-(void)animationDidStop:(id)arg1 finished:(bool)arg2 ;
-(/*^block*/ id)completion;
-(void)setCompletion:(/*^block*/ id)arg1 ;
-(void).cxx_destruct;
@end
