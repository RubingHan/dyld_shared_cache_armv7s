/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:50 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class UIImage, UINavigationButton;

@interface SKUIAddToWishlistAnimation : NSObject {

	/*^block*/ id _completionBlock;
	UIImage* _image;
	UINavigationButton* _targetButton;

}
-(void)animationDidStop:(id)arg1 finished:(bool)arg2 ;
-(void).cxx_destruct;
-(id)initWithImage:(id)arg1 buttonItem:(id)arg2 navigationBar:(id)arg3 ;
-(void)animateWithCompletionBlock:(/*^block*/ id)arg1 ;
@end
