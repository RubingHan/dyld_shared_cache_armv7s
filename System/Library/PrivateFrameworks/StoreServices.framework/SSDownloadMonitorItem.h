/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:57 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreServices/SSXPCCoding.h>

@class NSString;

@interface SSDownloadMonitorItem : NSObject <SSXPCCoding> {

	NSString* _clientIdentifier;
	long long _itemState;
	NSString* _representativeTitle;
	NSString* _statusString;
	long long _totalNumberOfItems;
	unsigned long long _transferTypes;

}

@property (nonatomic,copy) NSString * clientIdentifier;                     //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
@property (assign,nonatomic) long long itemState;                           //@synthesize itemState=_itemState - In the implementation block
@property (nonatomic,copy) NSString * representativeTitle;                  //@synthesize representativeTitle=_representativeTitle - In the implementation block
@property (nonatomic,copy) NSString * statusString;                         //@synthesize statusString=_statusString - In the implementation block
@property (assign,nonatomic) long long totalNumberOfItems;                  //@synthesize totalNumberOfItems=_totalNumberOfItems - In the implementation block
@property (assign,nonatomic) unsigned long long transferTypes;              //@synthesize transferTypes=_transferTypes - In the implementation block
-(void)dealloc;
-(id)statusString;
-(void)setItemState:(long long)arg1 ;
-(long long)itemState;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(id)representativeTitle;
-(void)setRepresentativeTitle:(id)arg1 ;
-(void)setStatusString:(id)arg1 ;
-(long long)totalNumberOfItems;
-(void)setTotalNumberOfItems:(long long)arg1 ;
-(unsigned long long)transferTypes;
-(void)setTransferTypes:(unsigned long long)arg1 ;
-(id)clientIdentifier;
-(void)setClientIdentifier:(id)arg1 ;
@end
