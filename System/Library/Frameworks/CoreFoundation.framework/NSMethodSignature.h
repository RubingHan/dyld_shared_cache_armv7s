/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:12 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CoreFoundation/CoreFoundation-Structs.h>
@interface NSMethodSignature : NSObject {

	void* _private;
	void** _reserved[6];

}
+(id)cd_signatureWithObjCTypes:(const char*)arg1 ;
+(id)signatureWithObjCTypes:(const char*)arg1 ;
-(bool)_gkTakesBlockAtIndex:(unsigned long long)arg1 ;
-(bool)_gkHasReplyBlock;
-(const char*)cd_getArgumentTypeAtIndex:(int)arg1 ;
-(bool)_cheapTypeString:(char*)arg1 maxLength:(long long)arg2 ;
-(SCD_Struct_NS17*)_frameDescriptor;
-(NSMethodFrameArgInfo*)_argInfo:(long long)arg1 ;
-(id)_typeString;
-(id)_signatureForBlockAtArgumentIndex:(long long)arg1 ;
-(Class)_classForObjectAtArgumentIndex:(long long)arg1 ;
-(id)_protocolsForObjectAtArgumentIndex:(long long)arg1 ;
-(bool)isOneway;
-(void)dealloc;
-(id)init;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)debugDescription;
-(const char*)getArgumentTypeAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)numberOfArguments;
-(unsigned long long)methodReturnLength;
-(const char*)methodReturnType;
-(unsigned long long)frameLength;
-(void)finalize;
@end

