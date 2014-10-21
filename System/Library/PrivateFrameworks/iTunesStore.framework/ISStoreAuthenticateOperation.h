/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:29 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>
#import <iTunesStore/SSAuthenticateRequestDelegate.h>

@class NSNumber, SSMutableAuthenticationContext, SSAuthenticationContext;

@interface ISStoreAuthenticateOperation : ISOperation <SSAuthenticateRequestDelegate> {

	NSNumber* _authenticatedDSID;
	SSMutableAuthenticationContext* _authenticationContext;

}

@property (readonly) SSAuthenticationContext * authenticationContext; 
-(id)uniqueKey;
-(void)dealloc;
-(void)run;
-(id)_authenticatedDSID;
-(void)_handleAuthenticateResponse:(id)arg1 ;
-(void)_setAuthenticatedDSID:(id)arg1 ;
-(id)authenticationContext;
-(id)authenticatedAccountDSID;
-(id)initWithAuthenticationContext:(id)arg1 ;
@end
