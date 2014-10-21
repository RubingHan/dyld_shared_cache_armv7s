/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:54 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <QuickLook/QuickLook-Structs.h>
@class UIWebBrowserView, NSURLRequest, NSString, QLPreviewConverter;

@interface QLRemotePrintPageHelper : NSObject {

	UIWebBrowserView* _browserView;
	NSURLRequest* _request;
	NSString* _documentType;
	QLPreviewConverter* _previewConverter;
	CGSize _printableSize;

}

@property (retain) QLPreviewConverter * previewConverter;              //@synthesize previewConverter=_previewConverter - In the implementation block
@property (assign) CGSize printableSize;                               //@synthesize printableSize=_printableSize - In the implementation block
+(id)printPageRendererWithBrowserView:(id)arg1 request:(id)arg2 documentType:(id)arg3 ;
+(bool)_isXPathType:(id)arg1 ;
-(id)previewConverter;
-(void)setPreviewConverter:(id)arg1 ;
-(id)initWithWebBrowserView:(id)arg1 request:(id)arg2 documentType:(id)arg3 ;
-(void)_waitForPreview;
-(id)pdfDataForPageAtIndex:(long long)arg1 withSize:(CGSize)arg2 printingDone:(bool*)arg3 ;
-(CGSize)printableSize;
-(void)setPrintableSize:(CGSize)arg1 ;
-(void)dealloc;
-(long long)numberOfPages;
-(void)prepareForDrawingPages:(NSRange)arg1 ;
@end
