/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:05 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <CoreFoundation/NSDiscardableContent.h>

@class UIImage, UIColor;

@interface _UIDiscardableTintedDisclosureImageCacheItem : NSObject <NSDiscardableContent> {

	UIImage* _tintedImage;
	UIColor* _tintColor;
	struct {
		unsigned isDiscarded : 1;
		unsigned isPressed : 1;
		unsigned useCount;
	}  _flags;

}

@property (nonatomic,readonly) UIImage * tintedImage;              //@synthesize tintedImage=_tintedImage - In the implementation block
@property (nonatomic,readonly) UIColor * tintColor;                //@synthesize tintColor=_tintColor - In the implementation block
-(void)dealloc;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)tintColor;
-(id)_tintedDisclosureImage:(bool)arg1 ;
-(bool)beginContentAccess;
-(void)endContentAccess;
-(void)discardContentIfPossible;
-(bool)isContentDiscarded;
-(id)initWithPressed:(bool)arg1 tintColor:(id)arg2 ;
-(id)tintedImage;
@end
