/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:18 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class _IDSDevice, NSString;

@interface IDSDevice : NSObject {

	_IDSDevice* _internal;

}

@property (nonatomic,readonly) NSString * modelIdentifier; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSString * service; 
-(id)service;
-(id)_internal;
-(void)dealloc;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(id)name;
-(id)_initWithDictionary:(id)arg1 ;
-(id)_pushToken;
-(id)_identities;
-(void)_addIdentity:(id)arg1 ;
-(id)modelIdentifier;
@end

