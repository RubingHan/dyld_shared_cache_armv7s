/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:48 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MessageUI/MessageUI-Structs.h>
#import <MIME/MFMessageTextAttachment.h>

@class MFMimeTextAttachment, NSData;

@interface MFMailInlineTextAttachment : MFMessageTextAttachment {

	MFMimeTextAttachment* _original;
	NSData* _iconImageData;
	CGSize _cachedImageSize;
	unsigned _hasBeenDownloaded : 1;
	bool _displayableAsIcon;

}

@property (assign) bool displayableAsIcon;              //@synthesize displayableAsIcon=_displayableAsIcon - In the implementation block
+(unsigned long long)precedenceLevel;
-(void)download;
-(bool)isDisplayableInline;
-(unsigned)approximateSize;
-(void)setDisplayableInline:(bool)arg1 ;
-(bool)isDisplayableInsidePlugin;
-(id)initWithWrapper:(id)arg1 ;
-(id)initWithMimeTextAttachment:(id)arg1 andMessageBody:(id)arg2 ;
-(void)setupForComposition;
-(void)_cacheImageSizeIfNecessary;
-(void)setDisplayableAsIcon:(bool)arg1 ;
-(bool)displayableAsIcon;
-(id)persistentUniqueIdentifier;
-(id)textEncodingGuess;
-(id)mimeTextAttachment;
-(double)constrainedWidth;
-(CGSize)imageDimensions;
-(void)_setImageDimensions:(CGSize)arg1 ;
-(void)setDisplayableInsidePlugin:(bool)arg1 ;
-(void)setNeedsRedownload:(bool)arg1 ;
-(bool)needsRedownload;
-(void)dealloc;
-(void)inlineDisplayData:(id*)arg1 mimeType:(id*)arg2 ;
-(bool)hasBeenDownloaded;
-(bool)shouldDownloadAttachmentOnDisplay;
-(void)setFileWrapper:(id)arg1 ;
@end
