/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:05 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/UIAccessibility.framework/UIAccessibility
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <UIAccessibility/UIAccessibility-Structs.h>
@class NSString, NSMutableSet;

@interface UIAccessibilityRemoteElement : NSObject {

	NSString* _uuid;
	int _remotePid;
	unsigned _contextId;
	bool _onClientSide;
	id _remoteChildrenDelegate;
	NSMutableSet* _allChildren;
	unsigned _machPort;

}

@property (nonatomic,retain) NSString * uuid;                                                                            //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,readonly) unsigned long long uuidHash; 
@property (assign,nonatomic) int remotePid;                                                                              //@synthesize remotePid=_remotePid - In the implementation block
@property (assign,nonatomic) unsigned contextId;                                                                         //@synthesize contextId=_contextId - In the implementation block
@property (assign,nonatomic) unsigned machPort;                                                                          //@synthesize machPort=_machPort - In the implementation block
@property (assign,nonatomic) bool onClientSide;                                                                          //@synthesize onClientSide=_onClientSide - In the implementation block
@property (assign,nonatomic) UIView<UIAccessibilityRemoteElementChildrenDelegate> * remoteChildrenDelegate;              //@synthesize remoteChildrenDelegate=_remoteChildrenDelegate - In the implementation block
+(void)initialize;
+(id)remoteElementForBlock:(/*^block*/ id)arg1 ;
+(bool)registerRemoteElement:(id)arg1 ;
+(id)remoteElementForContextId:(unsigned)arg1 ;
-(unsigned)machPort;
-(void)dealloc;
-(id)description;
-(unsigned)contextId;
-(CGRect)accessibilityFrame;
-(bool)accessibilityViewIsModal;
-(void)unregister;
-(void)setContextId:(unsigned)arg1 ;
-(id)uuid;
-(void)setUuid:(id)arg1 ;
-(unsigned long long)uuidHash;
-(int)remotePid;
-(id)accessibilityContainerElements;
-(id)_accessibilityResponderElement;
-(id)remoteChildrenDelegate;
-(id)_accessibilityRemoteVisibleElementsGrouped:(bool)arg1 ;
-(bool)onClientSide;
-(void)setRemotePid:(int)arg1 ;
-(id)_remoteElementWithAttribute:(int)arg1 ;
-(id)initWithUUID:(id)arg1 andRemotePid:(int)arg2 andContextId:(unsigned)arg3 ;
-(id)_accessibilityFirstElement;
-(id)_accessibilityLastElement;
-(void)setOnClientSide:(bool)arg1 ;
-(void)setRemoteChildrenDelegate:(id)arg1 ;
-(void)setMachPort:(unsigned)arg1 ;
@end
