/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:14 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol UIWebPDFViewDelegate
@optional
-(id)passwordForPDFView:(id)arg1;
-(void)didDetermineDocumentBounds:(id)arg1;
-(void)pdfView:(id)arg1 zoomToRect:(CGRect)arg2 forPoint:(CGPoint)arg3 considerHeight:(bool)arg4;
-(void)resetZoom:(id)arg1;
-(void)handleLinkClick:(id)arg1 inRect:(CGRect)arg2;
-(void)handleLongPressOnLink:(id)arg1 atPoint:(CGPoint)arg2 inRect:(CGRect)arg3 contentRect:(CGRect)arg4;
@end

