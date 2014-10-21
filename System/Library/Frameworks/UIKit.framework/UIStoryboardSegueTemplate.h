/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:13 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/NSCoding.h>

@class NSString, UIViewController;

@interface UIStoryboardSegueTemplate : NSObject <NSCoding> {

	NSString* _identifier;
	NSString* _segueClassName;
	UIViewController* _viewController;
	NSString* _destinationViewControllerIdentifier;
	bool _performOnViewLoad;

}

@property (nonatomic,readonly) NSString * identifier;                        //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) UIViewController * viewController;              //@synthesize viewController=_viewController - In the implementation block
@property (assign,nonatomic) bool performOnViewLoad;                         //@synthesize performOnViewLoad=_performOnViewLoad - In the implementation block
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)perform:(id)arg1 ;
-(void)setViewController:(id)arg1 ;
-(id)viewController;
-(bool)performOnViewLoad;
-(id)identifier;
-(void)_perform:(id)arg1 ;
-(id)defaultSegueClassName;
-(Class)effectiveSegueClass;
-(id)segueWithDestinationViewController:(id)arg1 ;
-(void)setPerformOnViewLoad:(bool)arg1 ;
@end
