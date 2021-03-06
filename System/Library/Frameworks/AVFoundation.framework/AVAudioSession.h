/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:58:59 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/libAVFAudio.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <libAVFAudio.dylib/libAVFAudio.dylib-Structs.h>
@class NSString, AVAudioSessionRouteDescription, AVAudioSessionPortDescription, NSArray;

@interface AVAudioSession : NSObject {

	void* _impl;

}

@property (readonly) NSString * category; 
@property (readonly) unsigned long long categoryOptions; 
@property (readonly) NSString * mode; 
@property (getter=isOtherAudioPlaying,readonly) bool otherAudioPlaying; 
@property (readonly) AVAudioSessionRouteDescription * currentRoute; 
@property (readonly) AVAudioSessionPortDescription * preferredInput; 
@property (readonly) NSArray * availableInputs; 
+(void)privateAllocInitSingleton;
+(id)sharedInstance;
+(id)allocWithZone:(NSZone)arg1 ;
-(long long)inputNumberOfChannels;
-(bool)setActive:(bool)arg1 withFlags:(long long)arg2 error:(id*)arg3 ;
-(bool)setPreferredHardwareSampleRate:(double)arg1 error:(id*)arg2 ;
-(double)preferredHardwareSampleRate;
-(bool)inputIsAvailable;
-(double)currentHardwareSampleRate;
-(long long)currentHardwareInputNumberOfChannels;
-(long long)currentHardwareOutputNumberOfChannels;
-(void)privateMarkKVOPropertiesDirty:(unsigned long long)arg1 ;
-(bool)privateSetPropertyValue:(unsigned)arg1 withBool:(bool)arg2 error:(id*)arg3 ;
-(bool)setActive:(bool)arg1 withOptions:(unsigned long long)arg2 error:(id*)arg3 ;
-(void)privateUpdateInputGain:(id)arg1 ;
-(id)privateGetDataSources:(bool)arg1 ;
-(id)privateGetSelectedDataSource:(bool)arg1 ;
-(id)privateConfigureRouteDescription:(id)arg1 ;
-(id)privateRefreshAvailableInputs;
-(bool)isInputAvailable;
-(double)preferredSampleRate;
-(void)privateUpdateOutputVolume:(id)arg1 ;
-(void)privateUpdateDataSources:(id)arg1 forInput:(bool)arg2 ;
-(void)privateUpdatePromptStyle:(id)arg1 ;
-(void)privateUpdateAudioFormats:(id)arg1 ;
-(void)privateUpdateAudioFormat:(id)arg1 ;
-(void)requestRecordPermission:(/*^block*/ id)arg1 ;
-(bool)setPreferredInputNumberOfChannels:(long long)arg1 error:(id*)arg2 ;
-(bool)setPreferredOutputNumberOfChannels:(long long)arg1 error:(id*)arg2 ;
-(bool)setInputGain:(float)arg1 error:(id*)arg2 ;
-(bool)setInputDataSource:(id)arg1 error:(id*)arg2 ;
-(bool)setOutputDataSource:(id)arg1 error:(id*)arg2 ;
-(float)outputVolume;
-(long long)audioFormat;
-(bool)isEarpieceActiveNoiseCancelationEnabled;
-(bool)allowAllBuiltInDataSources;
-(void)setAllowAllBuiltInDataSources:(bool)arg1 ;
-(float)inputGain;
-(AVAudioSessionImpl*)privateGetImplementation;
-(id)inputDataSources;
-(id)inputDataSource;
-(id)outputDataSources;
-(id)outputDataSource;
-(bool)isInputGainSettable;
-(bool)isOtherAudioPlaying;
-(long long)preferredInputNumberOfChannels;
-(long long)preferredOutputNumberOfChannels;
-(long long)maximumInputNumberOfChannels;
-(long long)maximumOutputNumberOfChannels;
-(bool)overrideOutputAudioPort:(unsigned long long)arg1 error:(id*)arg2 ;
-(bool)setPreferredInput:(id)arg1 error:(id*)arg2 ;
-(id)preferredInput;
-(id)availableInputs;
-(bool)setActivationContext:(id)arg1 error:(id*)arg2 ;
-(bool)setDefaultChatMode:(id)arg1 error:(id*)arg2 ;
-(bool)setIAmTheAssistant:(bool)arg1 error:(id*)arg2 ;
-(void)privateInputIsAvailableChanged:(id)arg1 ;
-(void)privateBeginInterruption;
-(void)privateEndInterruptionWithFlags:(id)arg1 ;
-(void)privateHandleInputGainChange:(id)arg1 ;
-(void)privateHandleOutputVolumeChange:(id)arg1 ;
-(void)privateHandleInputDataSourcesChange:(id)arg1 ;
-(void)privateHandleOutputDataSourcesChange:(id)arg1 ;
-(void)privateHandlePromptStyleChange:(id)arg1 ;
-(void)privateHandleFormatsChange:(id)arg1 ;
-(void)privateHandleFormatChange:(id)arg1 ;
-(void)privateHandleServerDied;
-(void)privateUpdateInputChannelCount:(id)arg1 ;
-(void)privateUpdateOutputChannelCount:(id)arg1 ;
-(bool)silenceOutput:(unsigned long long)arg1 error:(id*)arg2 ;
-(id)audioFormats;
-(bool)setMode:(id)arg1 error:(id*)arg2 ;
-(bool)forceSoundCheck;
-(bool)setForceSoundCheck:(bool)arg1 error:(id*)arg2 ;
-(oneway void)release;
-(id)retain;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)autorelease;
-(unsigned long long)retainCount;
-(id)delegate;
-(id)copyWithZone:(NSZone)arg1 ;
-(id)mode;
-(id)category;
-(unsigned long long)promptStyle;
-(bool)setPreferredSampleRate:(double)arg1 error:(id*)arg2 ;
-(unsigned long long)categoryOptions;
-(bool)setCategory:(id)arg1 withOptions:(unsigned long long)arg2 error:(id*)arg3 ;
-(double)outputLatency;
-(double)inputLatency;
-(double)IOBufferDuration;
-(id)currentRoute;
-(unsigned)opaqueSessionID;
-(bool)setCategory:(id)arg1 error:(id*)arg2 ;
-(double)sampleRate;
-(long long)outputNumberOfChannels;
-(bool)setActive:(bool)arg1 error:(id*)arg2 ;
-(double)preferredIOBufferDuration;
-(bool)setPreferredIOBufferDuration:(double)arg1 error:(id*)arg2 ;
@end

