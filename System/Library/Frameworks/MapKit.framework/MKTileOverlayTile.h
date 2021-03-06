/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:41 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <MapKit/MapKit-Structs.h>
@class NSData;

@interface MKTileOverlayTile : NSObject {

	SCD_Struct_MK21 _path;
	SCD_Struct_MK2 _frame;
	double _scale;
	NSData* _image;

}

@property (assign,nonatomic) SCD_Struct_MK21 path;              //@synthesize path=_path - In the implementation block
@property (assign,nonatomic) SCD_Struct_MK2 frame;              //@synthesize frame=_frame - In the implementation block
@property (assign,nonatomic) double scale;                      //@synthesize scale=_scale - In the implementation block
@property (nonatomic,retain) NSData * image;                    //@synthesize image=_image - In the implementation block
-(void)setImage:(id)arg1 ;
-(void)setFrame:(SCD_Struct_MK2)arg1 ;
-(SCD_Struct_MK2)frame;
-(id)description;
-(double)scale;
-(SCD_Struct_MK21)path;
-(id)image;
-(void)setScale:(double)arg1 ;
-(void)setPath:(SCD_Struct_MK21)arg1 ;
-(id).cxx_construct;
-(void).cxx_destruct;
@end

