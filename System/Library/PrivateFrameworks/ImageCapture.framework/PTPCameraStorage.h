/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:23 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ImageCapture/PTPCameraFolder.h>

@class NSMutableArray;

@interface PTPCameraStorage : PTPCameraFolder {

	NSMutableArray* _tempArrayOfAllObjectHandles;
	NSMutableArray* _tempArrayOfAllObjectHandlesToBeIgnored;

}
-(void)dealloc;
-(id)tempArrayOfAllObjectHandles;
-(id)tempArrayOfAllObjectHandlesToBeIgnored;
-(void)refreshInfo;
-(id)initWithStorageID:(unsigned)arg1 device:(id)arg2 ;
-(void)prime;
@end

