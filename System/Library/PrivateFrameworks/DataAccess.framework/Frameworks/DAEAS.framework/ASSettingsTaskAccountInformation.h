/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:04 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DAEAS/ASItem.h>

@class ASSettingsTaskAccountEmailAddresses, NSString;

@interface ASSettingsTaskAccountInformation : ASItem {

	ASSettingsTaskAccountEmailAddresses* _emailAddressList;
	NSString* _accountId;

}

@property (retain) ASSettingsTaskAccountEmailAddresses * emailAddressList;              //@synthesize emailAddressList=_emailAddressList - In the implementation block
@property (retain) NSString * accountId;                                                //@synthesize accountId=_accountId - In the implementation block
+(bool)acceptsTopLevelLeaves;
+(bool)parsingLeafNode;
+(bool)parsingWithSubItems;
+(bool)frontingBasicTypes;
+(bool)notifyOfUnknownTokens;
+(id)asParseRules;
-(void)dealloc;
-(id)description;
-(void)parseASParseContext:(id)arg1 root:(id)arg2 parent:(id)arg3 callbackDict:(id)arg4 streamCallbackDict:(id)arg5 account:(id)arg6 ;
-(id)emailAddressList;
-(id)accountId;
-(void)setEmailAddressList:(id)arg1 ;
-(void)setAccountId:(id)arg1 ;
@end

