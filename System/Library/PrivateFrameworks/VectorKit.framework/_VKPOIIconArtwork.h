/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:10 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VKIconArtwork.h>

@interface _VKPOIIconArtwork : VKIconArtwork {

	CGImageRef _glyphImage;
	SCD_Struct_VK110 _style;
	double _contentScale;

}
-(void)dealloc;
-(CGSize)size;
-(id).cxx_construct;
-(id)_newIcon;
-(void)_cleanUpAfterDrawing;
-(id)initWithGlyph:(CGImageRef)arg1 style:(SCD_Struct_VK111*)arg2 contentScale:(double)arg3 ;
@end

