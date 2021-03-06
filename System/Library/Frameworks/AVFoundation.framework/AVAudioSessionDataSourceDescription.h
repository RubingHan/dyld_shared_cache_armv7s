/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:58:59 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/libAVFAudio.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <libAVFAudio.dylib/libAVFAudio.dylib-Structs.h>
@class NSNumber, NSString, NSArray;

@interface AVAudioSessionDataSourceDescription : NSObject {

	void* _impl;

}

@property (readonly) NSNumber * dataSourceID; 
@property (readonly) NSString * dataSourceName; 
@property (readonly) NSString * location; 
@property (readonly) NSString * orientation; 
@property (readonly) NSArray * supportedPolarPatterns; 
@property (readonly) NSString * selectedPolarPattern; 
@property (readonly) NSString * preferredPolarPattern; 
+(id)privateCreateOrConfigureArray:(id)arg1 withRawSourceArray:(id)arg2 portID:(id)arg3 ;
+(id)privateCreateOrConfigure:(id)arg1 withRawSourceDescription:(id)arg2 portID:(id)arg3 ;
-(DataSourceDescriptionImpl*)privateGetImplementation;
-(id)dataSourceID;
-(id)dataSourceName;
-(bool)privateMatchesRawDescription:(id)arg1 ;
-(bool)isEqualToDataSource:(id)arg1 ;
-(id)privateGetOwningPortID;
-(id)selectedPolarPattern;
-(id)initWithRawSourceDescription:(id)arg1 andOwningPortID:(id)arg2 ;
-(void)configurePolarPatterns:(id)arg1 ;
-(id)preferredPolarPattern;
-(id)supportedPolarPatterns;
-(bool)setPreferredPolarPattern:(id)arg1 error:(id*)arg2 ;
-(void)dealloc;
-(id)init;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)orientation;
-(id)location;
@end

