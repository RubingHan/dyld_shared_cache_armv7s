/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:25 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface MCDependencyManager : NSObject {

	NSMutableDictionary* _domainsDict;
	NSMutableDictionary* _orphansDict;

}
+(void)_setDependencyFilePath:(id)arg1 ;
+(id)sharedManager;
-(id)init;
-(id)_init;
-(void).cxx_destruct;
-(id)_domainsDict;
-(id)_domainsDictionaryForDomain:(id)arg1 parent:(id)arg2 outParentsDict:(id*)arg3 outDependents:(id*)arg4 ;
-(void)_removeOrphanParent:(id)arg1 fromDomain:(id)arg2 ;
-(void)_addOrphanParent:(id)arg1 forDomain:(id)arg2 ;
-(void)addDependent:(id)arg1 ofParent:(id)arg2 inDomain:(id)arg3 ;
-(void)removeDependent:(id)arg1 fromParent:(id)arg2 inDomain:(id)arg3 ;
-(void)commitChanges;
-(id)orphanedParentsForDomain:(id)arg1 ;
-(void)addDependent:(id)arg1 ofParent:(id)arg2 inDomain:(id)arg3 reciprocalDomain:(id)arg4 ;
-(void)removeDependent:(id)arg1 fromParent:(id)arg2 inDomain:(id)arg3 reciprocalDomain:(id)arg4 ;
-(id)parentsInDomain:(id)arg1 ;
-(void)removeParent:(id)arg1 fromDomain:(id)arg2 ;
-(id)dependentsOfParent:(id)arg1 inDomain:(id)arg2 ;
@end
