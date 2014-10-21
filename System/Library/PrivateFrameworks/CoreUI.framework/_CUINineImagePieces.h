/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:59 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class CUIImage;

@interface _CUINineImagePieces : NSObject {

	CUIImage* _center;
	CUIImage* _topLeft;
	CUIImage* _top;
	CUIImage* _topRight;
	CUIImage* _right;
	CUIImage* _bottomRight;
	CUIImage* _bottom;
	CUIImage* _bottomLeft;
	CUIImage* _left;
	bool _tileCenterAndEdges;

}
-(void)dealloc;
-(id)center;
-(id)initWithCenter:(id)arg1 topLeft:(id)arg2 top:(id)arg3 topRight:(id)arg4 right:(id)arg5 bottomRight:(id)arg6 bottom:(id)arg7 bottomLeft:(id)arg8 left:(id)arg9 tileCenterAndEdges:(bool)arg10 ;
-(id)topLeft;
-(id)topRight;
-(id)bottomRight;
-(id)bottomLeft;
-(bool)tileCenterAndEdges;
-(id)bottom;
-(id)left;
-(id)right;
-(id)top;
@end
