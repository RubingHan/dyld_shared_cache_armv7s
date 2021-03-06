/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:46 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /usr/lib/libacmobileshim.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <libacmobileshim.dylib/libacmobileshim.dylib-Structs.h>
@class NSDictionary, NSString;

@interface ACMSettings : NSObject {

	id _delegate;
	bool _shouldNotifyDelegate;
	NSDictionary* _realmNamesCache;
	NSDictionary* _realmShortNamesCache;
	NSDictionary* _realmServersCache;
	bool _isUsingLocalTestEndPoint;

}

@property (assign,nonatomic) id delegate;                            //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) NSString * recentUserName; 
@property (assign,nonatomic) int logLevel; 
@property (nonatomic,copy) NSString * defaultUserName; 
@property (assign,nonatomic) NSDictionary * allValues; 
@property (assign) bool shouldNotifyDelegate;                        //@synthesize shouldNotifyDelegate=_shouldNotifyDelegate - In the implementation block
@property (retain) NSDictionary * realmNamesCache;                   //@synthesize realmNamesCache=_realmNamesCache - In the implementation block
@property (retain) NSDictionary * realmServersCache;                 //@synthesize realmServersCache=_realmServersCache - In the implementation block
@property (retain) NSDictionary * realmShortNamesCache;              //@synthesize realmShortNamesCache=_realmShortNamesCache - In the implementation block
+(id)sharedInstance;
-(int)logLevel;
-(void)setLogLevel:(int)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(id)allValues;
-(id)realmNames;
-(id)publicKeyVersionForRealm:(id)arg1 ;
-(id)authenticateURLStringForRealm:(id)arg1 ;
-(id)verifyTicketURLStringForRealm:(id)arg1 ;
-(id)iForgotLinkForRealm:(id)arg1 ;
-(void)performNotifyDelegateAboutChange;
-(void)setRealmServersCache:(id)arg1 ;
-(void)setRealmNamesCache:(id)arg1 ;
-(void)setRealmShortNamesCache:(id)arg1 ;
-(id)realmNamesCache;
-(id)realmShortNamesCache;
-(id)realmServersCache;
-(id)realmServersMap;
-(id)realmServers;
-(id)iForgotSettings;
-(id)serverForRealm:(id)arg1 ;
-(CFStringRef)preferenceID;
-(void)notifyDelegateAboutChange;
-(bool)shouldNotifyDelegate;
-(void)setShouldNotifyDelegate:(bool)arg1 ;
-(id)realmShortNames;
-(id)recentUserName;
-(void)setRecentUserName:(id)arg1 ;
-(id)defaultUserName;
-(void)setDefaultUserName:(id)arg1 ;
-(id)publicKeyCertificateNameForRealm:(id)arg1 ;
-(void)setPublicKeyCertificateName:(id)arg1 forRealm:(id)arg2 ;
-(void)setPublicKeyVersion:(id)arg1 forRealm:(id)arg2 ;
-(void)setAllValues:(id)arg1 ;
-(void)purgeAllValues;
@end

