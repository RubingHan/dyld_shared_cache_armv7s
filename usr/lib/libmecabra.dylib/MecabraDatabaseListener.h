/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:48 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /usr/lib/libmecabra.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <libmecabra.dylib/libmecabra.dylib-Structs.h>
@interface MecabraDatabaseListener : NSObject {

	LearningDictionary* target;

}
-(void)dealloc;
-(void)databaseChanged;
-(void)databaseShouldRefresh;
-(id)initWithLearningDictionary:(LearningDictionary*)arg1 ;
@end

