/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:41 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/CMMapper.h>
#import <OfficeImport/CMMapperRoot.h>

@class CMArchiveManager, WDDocument, NSString;

@interface WMDocumentMapper : CMMapper <CMMapperRoot> {

	CMArchiveManager* mArchiver;
	WDDocument* wDom;
	NSString* mFileName;

}
-(double)rightMargin;
-(double)leftMargin;
-(double)topMargin;
-(double)headerMargin;
-(double)bottomMargin;
-(bool)hasSessionBreakAtIndex:(unsigned)arg1 ;
-(void)dealloc;
-(id)blipAtIndex:(unsigned)arg1 ;
-(int)defaultTabWidth;
-(CGSize)pageSizeForDevice;
-(CGSize)contentSizeForDevice;
-(id)documentTitle;
-(void)mapDefaultCssStylesAt:(id)arg1 ;
-(id)styleMatrix;
-(id)fileName;
-(id)archiver;
-(id)initWithWDom:(id)arg1 archiver:(id)arg2 ;
-(void)mapWithState:(id)arg1 ;
-(void)setFileName:(id)arg1 ;
@end

