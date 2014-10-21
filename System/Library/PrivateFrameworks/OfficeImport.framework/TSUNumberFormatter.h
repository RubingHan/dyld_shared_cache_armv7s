/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:00 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class NSMutableDictionary, NSString, NSMutableArray;

@interface TSUNumberFormatter : NSObject {

	CFLocaleRef mLocale;
	CFArrayRef mDecimalFormatters;
	CFArrayRef mCurrencyFormatters;
	CFArrayRef mPercentageFormatters;
	CFArrayRef mScientificFormatters;
	CFNumberFormatterRef mFractionFormatter;
	NSMutableDictionary* mCurrencyCodeToSymbolMap;
	NSMutableDictionary* mCurrencyCodeToHalfWidthSymbolMap;
	NSString* mCurrencyString;
	NSString* mPercentageString;
	NSString* mScientificString;
	NSString* mDecimalString;
	NSString* mPercentSymbol;
	NSMutableArray* mTransformedDecimalStrings;
	NSMutableArray* mTransformedCurrencyStrings;
	NSMutableArray* mTransformedPercentageStrings;
	NSMutableArray* mTransformedScientificStrings;
	CFStringRef mAdditionalCurrencyCode;
	CFArrayRef mAdditionalCurrencyCodeFormatters;

}
+(id)formatterForLocale:(CFLocaleRef)arg1 ;
+(void)initialize;
+(id)currentLocaleCurrencyCode;
+(id)currencySymbolForCurrencyCode:(id)arg1 ;
+(int)positionOfSymbol:(id)arg1 inNumberFormatSubpattern:(id)arg2 ;
+(void)formatString:(id)arg1 replaceOccurencesOfUnescapedString:(id)arg2 withString:(id)arg3 ;
+(int)positionOfMinusSignInNumberFormatSubpattern:(id)arg1 ;
+(id)displayNameForCurrencyCode:(id)arg1 ;
+(id)defaultFormatStringForValueType:(int)arg1 negativeStyle:(int)arg2 ;
+(id)defaultFormatStringForValueType:(int)arg1 ;
+(id)localizedPercentSymbol;
+(int)positionOfCurrencySymbolInNumberFormatSubpattern:(id)arg1 ;
+(id)formatString:(id)arg1 transformedForNegativeStyle:(int)arg2 ;
+(id)availableCurrencyCodes;
+(unsigned short)defaultDecimalPlacesForCurrencyCode:(id)arg1 ;
+(id)currentNonCachedLocaleCurrencyCode;
+(id)currentLocaleDecimalSeparator;
+(id)currentNonCachedLocaleDecimalSeparator;
+(id)currentLocaleListSeparator;
+(id)numberFormatStringSpecialSymbols;
+(id)userVisibleCurrencyCodes;
-(void)dealloc;
-(id)currentLocaleCurrencyCode;
-(id)currencySymbolForCurrencyCode:(id)arg1 ;
-(id)initWithLocale:(CFLocaleRef)arg1 ;
-(bool)decimalFromString:(CFStringRef)arg1 value:(double*)arg2 formatString:(const _CFString*)arg3 ;
-(bool)currencyFromString:(CFStringRef)arg1 additionalCurrencyCode:(CFStringRef)arg2 value:(double*)arg3 formatString:(const _CFString*)arg4 currencyCode:(const _CFString*)arg5 ;
-(bool)percentageFromString:(CFStringRef)arg1 value:(double*)arg2 formatString:(const _CFString*)arg3 ;
-(bool)scientificFromString:(CFStringRef)arg1 value:(double*)arg2 formatString:(const _CFString*)arg3 ;
-(bool)fractionFromString:(CFStringRef)arg1 value:(double*)arg2 ;
-(id)displayNameForCurrencyCode:(id)arg1 ;
-(id)defaultFormatStringForValueType:(int)arg1 negativeStyle:(int)arg2 ;
-(id)defaultFormatStringForValueType:(int)arg1 ;
-(id)localizedPercentSymbol;
-(void)numberPreferencesChanged:(id)arg1 ;
-(CFArrayRef)p_decimalFormatters;
-(bool)valueFromString:(CFStringRef)arg1 formatters:(CFArrayRef)arg2 value:(double*)arg3 formatString:(const _CFString*)arg4 currencyCode:(const _CFString*)arg5 ;
-(bool)findCurrencySymbolInString:(CFStringRef)arg1 additionalCurrencyCode:(CFStringRef)arg2 succesTSUlString:(const _CFString*)arg3 ;
-(CFArrayRef)p_currencyFormatters;
-(CFArrayRef)p_percentageFormatters;
-(CFArrayRef)p_scientificFormatters;
-(id)halfWidthCurrencySymbolForCurrencyCode:(id)arg1 ;
@end
