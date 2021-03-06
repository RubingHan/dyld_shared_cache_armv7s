/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:24 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Radio/Radio-Structs.h>
@class RadioFairPlaySAPContext;

@interface RadioFairPlaySAPExchanger : NSObject {

	FairPlayHWInfo_ _hardwareInfo;
	FPSAPContextOpaque_Ref _session;
	RadioFairPlaySAPContext* _SAPContext;

}

@property (setter=APContext,nonatomic,readonly) RadioFairPlaySAPContext * SAPContext;              //@synthesize SAPContext=_SAPContext - In the implementation block
-(void)dealloc;
-(id)init;
-(void).cxx_destruct;
-(id)SAPContext;
-(id)exchangeData:(id)arg1 error:(id*)arg2 ;
@end

