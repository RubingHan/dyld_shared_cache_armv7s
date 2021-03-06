/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:10 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UITextSelectionRect.h>

@class WebSelectionRect;

@interface UITextSelectionRectImpl : UITextSelectionRect {

	WebSelectionRect* webRect;

}

@property (nonatomic,retain) WebSelectionRect * webRect; 
+(id)rectsWithWebRects:(id)arg1 ;
+(id)rectWithWebRect:(id)arg1 ;
-(void)dealloc;
-(id)webRect;
-(CGRect)rect;
-(id)range;
-(bool)isVertical;
-(bool)containsStart;
-(long long)writingDirection;
-(bool)containsEnd;
-(void)setWebRect:(id)arg1 ;
-(id)initWithWebRect:(id)arg1 ;
@end

