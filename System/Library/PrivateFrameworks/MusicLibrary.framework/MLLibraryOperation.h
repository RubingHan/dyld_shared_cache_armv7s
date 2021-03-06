/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:36 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class ML3MusicLibrary, NSError;

@interface MLLibraryOperation : NSOperation {

	bool _operationSuccess;
	ML3MusicLibrary* _library;
	NSError* _operationError;

}

@property (nonatomic,readonly) ML3MusicLibrary * library;              //@synthesize library=_library - In the implementation block
@property (assign,nonatomic) bool operationSuccess;                    //@synthesize operationSuccess=_operationSuccess - In the implementation block
@property (nonatomic,retain) NSError * operationError;                 //@synthesize operationError=_operationError - In the implementation block
-(id)operationError;
-(void)main;
-(void).cxx_destruct;
-(id)initWithLibrary:(id)arg1 ;
-(id)library;
-(bool)operationSuccess;
-(void)setOperationError:(id)arg1 ;
-(void)setOperationSuccess:(bool)arg1 ;
-(bool)isWorkIdenticalToOperation:(id)arg1 ;
@end

