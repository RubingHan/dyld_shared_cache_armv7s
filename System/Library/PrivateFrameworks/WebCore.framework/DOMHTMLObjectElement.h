/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:20 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebCore/DOMHTMLElement.h>

@class DOMHTMLFormElement, NSString, DOMDocument, NSURL;

@interface DOMHTMLObjectElement : DOMHTMLElement

@property (readonly) DOMHTMLFormElement * form; 
@property (copy) NSString * code; 
@property (copy) NSString * align; 
@property (copy) NSString * archive; 
@property (copy) NSString * border; 
@property (copy) NSString * codeBase; 
@property (copy) NSString * codeType; 
@property (copy) NSString * data; 
@property (assign) bool declare; 
@property (copy) NSString * height; 
@property (assign) int hspace; 
@property (copy) NSString * name; 
@property (copy) NSString * standby; 
@property (copy) NSString * type; 
@property (copy) NSString * useMap; 
@property (assign) int vspace; 
@property (copy) NSString * width; 
@property (readonly) DOMDocument * contentDocument; 
@property (readonly) NSURL * absoluteImageURL; 
-(bool)showsTapHighlight;
-(id)contentFrame;
-(void)setType:(id)arg1 ;
-(id)type;
-(id)code;
-(id)data;
-(void)setData:(id)arg1 ;
-(void)setName:(id)arg1 ;
-(id)name;
-(id)width;
-(id)height;
-(id)form;
-(id)absoluteImageURL;
-(void)setWidth:(id)arg1 ;
-(void)setHeight:(id)arg1 ;
-(id)border;
-(void)setBorder:(id)arg1 ;
-(id)align;
-(void)setAlign:(id)arg1 ;
-(id)archive;
-(void)setArchive:(id)arg1 ;
-(void)setCode:(id)arg1 ;
-(id)codeBase;
-(void)setCodeBase:(id)arg1 ;
-(int)hspace;
-(void)setHspace:(int)arg1 ;
-(int)vspace;
-(void)setVspace:(int)arg1 ;
-(bool)willValidate;
-(id)validity;
-(id)validationMessage;
-(bool)checkValidity;
-(void)setCustomValidity:(id)arg1 ;
-(id)contentDocument;
-(id)useMap;
-(void)setUseMap:(id)arg1 ;
-(id)codeType;
-(void)setCodeType:(id)arg1 ;
-(bool)declare;
-(void)setDeclare:(bool)arg1 ;
-(id)standby;
-(void)setStandby:(id)arg1 ;
@end
