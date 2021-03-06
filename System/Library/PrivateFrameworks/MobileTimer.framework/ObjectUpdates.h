/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:33 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray;

@interface ObjectUpdates : NSObject {

	NSMutableArray* _addedObjects;
	NSMutableArray* _removedObjects;

}

@property (nonatomic,readonly) NSMutableArray * addedObjects;                //@synthesize addedObjects=_addedObjects - In the implementation block
@property (nonatomic,readonly) NSMutableArray * removedObjects;              //@synthesize removedObjects=_removedObjects - In the implementation block
-(void)dealloc;
-(id)init;
-(id)description;
-(id)addedObjects;
-(id)removedObjects;
@end

