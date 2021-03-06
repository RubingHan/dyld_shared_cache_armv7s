/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:21 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebCore/WebCore-Structs.h>
#import <CoreFoundation/NSData.h>

@interface WebCoreSharedBufferData : NSData {

	RefPtr<WebCore::SharedBuffer>* sharedBuffer;

}
+(void)initialize;
-(void)dealloc;
-(unsigned long long)length;
-(const void*)bytes;
-(id).cxx_construct;
-(void).cxx_destruct;
-(void)finalize;
-(id)initWithSharedBuffer:(SharedBuffer*)arg1 ;
@end

