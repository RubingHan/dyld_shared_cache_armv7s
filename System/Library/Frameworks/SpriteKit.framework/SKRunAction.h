/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:58 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpriteKit/SpriteKit-Structs.h>
#import <SpriteKit/SKAction.h>

@class SKAction, NSString;

@interface SKRunAction : SKAction {

	SKAction* _action;
	NSString* _subSpriteKey;
	NSString* _actionKey;
	bool _waitForKeyedAction;
	bool _runOnSubSprite;
	bool _fired;

}
+(id)runAction:(id)arg1 onFirstChildWithName:(id)arg2 ;
+(id)runAction:(id)arg1 afterActionWithKey:(id)arg2 ;
-(id)reversedAction;
-(void)willStartWithTarget:(id)arg1 atTime:(double)arg2 ;
-(void)updateWithTarget:(id)arg1 forTime:(double)arg2 ;
-(id)init;
-(id)copyWithZone:(NSZone)arg1 ;
-(void).cxx_destruct;
@end

