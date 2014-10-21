/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:53 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface SKUIItemOfferButtonState : NSObject {

	bool _highlighted;
	bool _showingConfirmation;
	bool _hasImage;
	long long _progressType;

}

@property (assign,nonatomic) bool highlighted;                      //@synthesize highlighted=_highlighted - In the implementation block
@property (assign,nonatomic) bool showingConfirmation;              //@synthesize showingConfirmation=_showingConfirmation - In the implementation block
@property (assign,nonatomic) long long progressType;                //@synthesize progressType=_progressType - In the implementation block
@property (assign,nonatomic) bool hasImage;                         //@synthesize hasImage=_hasImage - In the implementation block
-(void)setShowingConfirmation:(bool)arg1 ;
-(void)setHighlighted:(bool)arg1 ;
-(bool)highlighted;
-(bool)hasImage;
-(long long)progressType;
-(void)setProgressType:(long long)arg1 ;
-(void)setHasImage:(bool)arg1 ;
-(bool)showingConfirmation;
@end
