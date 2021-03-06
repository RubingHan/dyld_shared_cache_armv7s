/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:47 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class EDString, EDReference;

@interface EDHyperlink : NSObject {

	EDString* mPath;
	EDString* mDosPath;
	EDString* mDescriptionText;
	EDString* mTextMark;
	EDString* mToolTip;
	EDReference* mReference;
	int mType;

}
+(id)hyperlink;
-(void)dealloc;
-(void)setType:(int)arg1 ;
-(int)type;
-(id)path;
-(void)setPath:(id)arg1 ;
-(id)reference;
-(void)setDescriptionText:(id)arg1 ;
-(void)setDosPath:(id)arg1 ;
-(void)setTextMark:(id)arg1 ;
-(void)setReference:(id)arg1 ;
-(void)setToolTip:(id)arg1 ;
-(id)dosPath;
-(id)descriptionText;
-(id)textMark;
-(id)toolTip;
@end

