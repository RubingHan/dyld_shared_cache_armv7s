/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:43 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/CMMapper.h>

@class PDSlideBase;

@interface PMSlideMapper : CMMapper {

	PDSlideBase* mSlide;
	CGRect mRect;

}
-(void)mapDrawablesAt:(id)arg1 withState:(id)arg2 ;
-(void)mapMasterSlideAt:(id)arg1 withState:(id)arg2 ;
-(void)mapBackgroundAt:(id)arg1 recursive:(bool)arg2 withState:(id)arg3 ;
-(void)mapMasterGraphicsAt:(id)arg1 withState:(id)arg2 ;
-(id).cxx_construct;
-(void)mapAt:(id)arg1 withState:(id)arg2 ;
-(id)styleMatrix;
-(CGRect)slideRect;
-(id)defaultTheme;
-(id)initWithPDSlide:(id)arg1 slideRect:(CGRect)arg2 parent:(id)arg3 ;
-(id)slideName;
@end
