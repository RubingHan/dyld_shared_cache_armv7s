/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:48 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class EDString, EDAlignmentInfo, EDProtection;

@interface EDTextBox : NSObject {

	EDString* mText;
	EDAlignmentInfo* mAlignmentInfo;
	EDProtection* mProtection;

}
+(id)textBox;
-(void)dealloc;
-(id)text;
-(void)setText:(id)arg1 ;
-(id)alignmentInfo;
-(void)setAlignmentInfo:(id)arg1 ;
-(void)setProtection:(id)arg1 ;
-(id)protection;
@end
