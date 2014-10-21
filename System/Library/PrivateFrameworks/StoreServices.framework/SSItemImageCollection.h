/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:55 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreServices/StoreServices-Structs.h>
#import <CoreFoundation/NSCopying.h>

@class NSArray;

@interface SSItemImageCollection : NSObject <NSCopying> {

	NSArray* _itemImages;

}

@property (nonatomic,readonly) NSArray * itemImages;              //@synthesize itemImages=_itemImages - In the implementation block
-(void)dealloc;
-(id)copyWithZone:(NSZone)arg1 ;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(id)_newImagesForDictionary:(id)arg1 ;
-(id)imagesForSize:(CGSize)arg1 ;
-(id)_imagesForSize:(CGSize)arg1 scale:(double)arg2 ;
-(id)itemImages;
-(id)bestImageForSize:(CGSize)arg1 ;
-(id)imagesForKind:(id)arg1 ;
-(id)initWithItemImages:(id)arg1 ;
-(id)initWithImageCollection:(id)arg1 ;
@end
