/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:25 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSString.h>

@interface NSMutableString : NSString
+(id)stringWithCapacity:(unsigned long long)arg1 ;
+(id)allocWithZone:(NSZone)arg1 ;
+(void)initialize;
-(void)searchAndReplaceSet:(id)arg1 withString:(id)arg2 ;
-(void)replaceOccurrencesOfString:(id)arg1 withString:(id)arg2 ;
-(void)searchAndReplaceInString:(id)arg1 withString:(id)arg2 ;
-(void)convertLineEndingsTo:(id)arg1 ;
-(void)appendString:(id)arg1 withSeparator:(id)arg2 ;
-(void)replaceOccurrencesOfString:(id)arg1 withString:(id)arg2 ;
-(void)searchAndReplaceInString:(id)arg1 withString:(id)arg2 ;
-(void)dd_appendSpaces:(unsigned)arg1 ;
-(void)_ICSStripControlChracters;
-(void)_ICSEscapePropertyValue;
-(void)_ICSEscapeParameterValue;
-(void)_ICSEscapeParameterQuotedValue;
-(void)_ICSRemoveCharactersFromSet:(id)arg1 ;
-(void)_ICSStringAppendingParameterName:(id)arg1 ;
-(void)_ICSStringParameterName:(id)arg1 value:(id)arg2 ;
-(void)standardizeWhitespace;
-(void)addMathIndicators;
-(void)replaceNewlinesWithSpaces;
-(void)_removeCharactersFromSet:(CFCharacterSetRef)arg1 ;
-(void)_replaceOccurrencesOfCharacter:(unsigned)arg1 withCharacter:(unsigned)arg2 ;
-(void)_removeOccurrencesOfCharacter:(unsigned)arg1 ;
-(unsigned long long)_replaceOccurrencesOfRegularExpressionPattern:(id)arg1 withTemplate:(id)arg2 options:(unsigned long long)arg3 range:(NSRange)arg4 ;
-(void)appendCharacters:(const unsigned short*)arg1 length:(unsigned long long)arg2 ;
-(void)_cfAppendCString:(const char*)arg1 length:(long long)arg2 ;
-(void)_cfPad:(CFStringRef)arg1 length:(unsigned)arg2 padIndex:(unsigned)arg3 ;
-(void)_cfTrim:(CFStringRef)arg1 ;
-(void)_cfTrimWS;
-(void)_cfLowercase:(const void*)arg1 ;
-(void)_cfUppercase:(const void*)arg1 ;
-(void)_cfCapitalize:(const void*)arg1 ;
-(void)_cfNormalize:(long long)arg1 ;
-(void)_trimWithCharacterSet:(id)arg1 ;
-(void)insertString:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)replaceCharactersInRange:(NSRange)arg1 withCharacters:(const unsigned short*)arg2 length:(unsigned long long)arg3 ;
-(void)replaceCharactersInRange:(NSRange)arg1 withCString:(const char*)arg2 length:(unsigned long long)arg3 ;
-(void)appendFormat:(id)arg1 ;
-(void)appendString:(id)arg1 ;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(Class)classForCoder;
-(void)deleteCharactersInRange:(NSRange)arg1 ;
-(unsigned long long)replaceOccurrencesOfString:(id)arg1 withString:(id)arg2 options:(unsigned long long)arg3 range:(NSRange)arg4 ;
-(void)replaceCharactersInRange:(NSRange)arg1 withString:(id)arg2 ;
-(void)setString:(id)arg1 ;
@end
