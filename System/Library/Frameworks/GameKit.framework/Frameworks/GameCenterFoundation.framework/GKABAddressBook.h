/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:33 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GameCenterFoundation/GKABObject.h>

@interface GKABAddressBook : GKABObject
+(id)addressBook;
-(void)save;
-(void*)ABAddressBook;
-(id)personWithUniqueID:(id)arg1 ;
-(void)enumeratePersonsUsingBlock:(/*^block*/ id)arg1 ;
-(void)findPeopleWithEmailAddresses:(id)arg1 onQueue:(id)arg2 complete:(/*^block*/ id)arg3 ;
@end

