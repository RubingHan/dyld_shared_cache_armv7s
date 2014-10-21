/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:04 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DAEAS/DAEAS-Structs.h>
#import <DAEAS/ASParsingLeafNode.h>
#import <CoreFoundation/NSCopying.h>

@class NSDate, NSString;

@interface ASEventUID : NSObject <ASParsingLeafNode, NSCopying> {

	NSDate* _exceptionDate;
	NSString* _uidWithoutExceptionDate;
	bool _isOutlookCreatedUid;

}
+(bool)expectsContent;
+(bool)acceptsTopLevelLeaves;
+(bool)parsingLeafNode;
+(bool)parsingWithSubItems;
+(bool)frontingBasicTypes;
+(bool)notifyOfUnknownTokens;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone)arg1 ;
-(id)initWithASParseContext:(id)arg1 root:(id)arg2 parent:(id)arg3 callbackDict:(id)arg4 streamCallbackDict:(id)arg5 lengthUntilEndOfTerminator:(int)arg6 ;
-(int)parsingState;
-(id)uidForCalFramework;
-(id)recurrenceIDForResponseEmail;
-(id)initWithCalFrameworkString:(id)arg1 ;
-(id)_uidStringBySettingExceptionDateInOutlookUUIDString:(id)arg1 withTimeZone:(id)arg2 ;
-(id)uidFromGlobalObjId:(id)arg1 outIsOutlookCreatedUid:(bool*)arg2 ;
-(id)uidForResponseEmailWithTimeZone:(id)arg1 ;
-(id)uidWithoutExceptionDate;
-(id)uidForActiveSyncWithTimeZone:(id)arg1 ;
-(id)exceptionDate;
-(void)setExceptionDate:(id)arg1 ;
@end
