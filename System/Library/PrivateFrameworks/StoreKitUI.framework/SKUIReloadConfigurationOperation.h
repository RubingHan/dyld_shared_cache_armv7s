/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:54 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@protocol OS_dispatch_queue;
@class NSObject;

@interface SKUIReloadConfigurationOperation : NSOperation {

	/*^block*/ id _outputBlock;
	NSObject<OS_dispatch_queue>* _dispatchQueue;

}

@property (copy) id outputBlock; 
-(id)init;
-(void)main;
-(void).cxx_destruct;
-(/*^block*/ id)outputBlock;
-(void)setOutputBlock:(/*^block*/ id)arg1 ;
@end
