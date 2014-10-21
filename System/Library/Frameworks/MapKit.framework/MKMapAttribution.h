/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:40 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSAttributedString, NSURL;

@interface MKMapAttribution : NSObject {

	NSAttributedString* _string;
	NSURL* _url;

}

@property (nonatomic,readonly) NSAttributedString * string;                       //@synthesize string=_string - In the implementation block
@property (nonatomic,readonly) NSURL * url;                                       //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) NSAttributedString * disclosureArrow; 
-(id)initWithStringAttributes:(id)arg1 regionalAttributions:(id)arg2 globalAttributions:(id)arg3 ;
-(id)attributedStringWithImage:(id)arg1 ;
-(id)disclosureArrow;
-(id)string;
-(id)url;
-(void).cxx_destruct;
@end
