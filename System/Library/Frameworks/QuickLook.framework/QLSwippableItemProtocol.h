/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:54 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol QLSwippableItemProtocol <NSObject>
@property (assign) long long index; 
@property (retain) <QLPreviewItem> * previewItem; 
@required
-(id)previewItem;
-(void)setPreviewItem:(id)arg1;
-(void)willStartSwiping;
-(void)didFinishSwiping;
-(long long)index;
-(void)setIndex:(long long)arg1;
@end
