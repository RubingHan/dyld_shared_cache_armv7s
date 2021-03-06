/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:52 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class CALayer, CAState, CAStateControllerUndo, NSMutableArray, NSTimer;

@interface CAStateControllerLayer : NSObject {

	CALayer* _layer;
	CAState* _currentState;
	CAStateControllerUndo* _undoStack;
	NSMutableArray* _transitions;
	NSTimer* _nextTimer;
	CAState* _nextState;
	float _nextSpeed;

}

@property (readonly) CALayer * layer;                                //@synthesize layer=_layer - In the implementation block
@property (nonatomic,retain) CAState * currentState;                 //@synthesize currentState=_currentState - In the implementation block
@property (readonly) CAStateControllerUndo * undoStack;              //@synthesize undoStack=_undoStack - In the implementation block
-(void)addTransition:(id)arg1 ;
-(void)removeTransition:(id)arg1 ;
-(id)undoStack;
-(void)dealloc;
-(id)layer;
-(void)invalidate;
-(id)currentState;
-(id)initWithLayer:(id)arg1 ;
-(void)setCurrentState:(id)arg1 ;
@end

