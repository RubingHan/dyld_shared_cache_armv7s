/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:59 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OISFUCryptoKey.h>

@interface OISFUTangierCryptoKey : OISFUCryptoKey {

	char* mKey;
	unsigned long long mKeyLength;

}
-(const char*)keyData;
-(unsigned long long)keyLength;
-(void)dealloc;
-(id)initAes128KeyFromPassphrase:(const char*)arg1 length:(unsigned)arg2 iterationCount:(unsigned)arg3 ;
-(id)initAes128KeyFromPassphrase:(const char*)arg1 length:(unsigned)arg2 ;
@end
