/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:05 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <Foundation/NSIndexPath.h>

@interface UIMutableIndexPath : NSIndexPath {

	unsigned long long* _mutableIndexes;
	bool _locked;

}
+(void)setIndex:(unsigned long long)arg1 atPosition:(unsigned long long)arg2 forIndexPath:(id*)arg3 ;
-(id)retain;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone)arg1 ;
-(long long)compare:(id)arg1 ;
-(id)initWithIndexes:(const unsigned long long*)arg1 length:(unsigned long long)arg2 ;
-(unsigned long long)indexAtPosition:(unsigned long long)arg1 ;
-(void)getIndexes:(unsigned long long*)arg1 ;
@end

