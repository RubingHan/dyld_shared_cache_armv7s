/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:48 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface EDTokenTreeNode : NSObject {

	unsigned mTokenIndex;
	int mTokenType;
	EDTokenTreeNode* mFirstChild;
	EDTokenTreeNode* mSibling;

}
+(id)tokenTreeNodeWithIndexAndType:(unsigned)arg1 type:(int)arg2 ;
-(void)dealloc;
-(id)init;
-(id)firstChild;
-(unsigned)tokenIndex;
-(id)sibling;
-(void)setFirstChild:(id)arg1 ;
-(void)setSibling:(id)arg1 ;
-(id)initWithIndexAndType:(unsigned)arg1 type:(int)arg2 ;
@end

