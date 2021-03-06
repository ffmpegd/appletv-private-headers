/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library

@class NSMutableArray, NSMutableDictionary, NSString;

@interface TSUNumberFormatter : NSObject {
	CFLocaleRef mLocale;	// 4 = 0x4
	CFArrayRef mDecimalFormatters;	// 8 = 0x8
	CFArrayRef mCurrencyFormatters;	// 12 = 0xc
	CFArrayRef mPercentageFormatters;	// 16 = 0x10
	CFArrayRef mScientificFormatters;	// 20 = 0x14
	CFNumberFormatterRef mFractionFormatter;	// 24 = 0x18
	NSMutableDictionary *mCurrencyCodeToSymbolMap;	// 28 = 0x1c
	NSMutableDictionary *mCurrencyCodeToHalfWidthSymbolMap;	// 32 = 0x20
	NSString *mCurrencyString;	// 36 = 0x24
	NSString *mPercentageString;	// 40 = 0x28
	NSString *mScientificString;	// 44 = 0x2c
	NSString *mDecimalString;	// 48 = 0x30
	NSString *mPercentSymbol;	// 52 = 0x34
	NSMutableArray *mTransformedDecimalStrings;	// 56 = 0x38
	NSMutableArray *mTransformedCurrencyStrings;	// 60 = 0x3c
	NSMutableArray *mTransformedPercentageStrings;	// 64 = 0x40
	NSMutableArray *mTransformedScientificStrings;	// 68 = 0x44
	CFStringRef mAdditionalCurrencyCode;	// 72 = 0x48
	CFArrayRef mAdditionalCurrencyCodeFormatters;	// 76 = 0x4c
}
+ (id)availableCurrencyCodes;	// 0x33c30a6d
+ (id)currencySymbolForCurrencyCode:(id)currencyCode;	// 0x33c30ab9
+ (id)currentLocaleCurrencyCode;	// 0x33c30b8d
+ (id)currentLocaleDecimalSeparator;	// 0x33c30c21
+ (id)currentLocaleListSeparator;	// 0x33c30c5d
+ (id)currentNonCachedLocaleCurrencyCode;	// 0x33c30bb9
+ (id)currentNonCachedLocaleDecimalSeparator;	// 0x33c30c25
+ (unsigned short)defaultDecimalPlacesForCurrencyCode:(id)currencyCode;	// 0x33c30ae9
+ (id)defaultFormatStringForValueType:(int)valueType;	// 0x33c30cf1
+ (id)defaultFormatStringForValueType:(int)valueType negativeStyle:(int)style;	// 0x33c30cbd
+ (id)displayNameForCurrencyCode:(id)currencyCode;	// 0x33c30a89
+ (void)formatString:(id)string replaceOccurencesOfUnescapedString:(id)unescapedString withString:(id)string3;	// 0x33c30865
+ (id)formatString:(id)string transformedForNegativeStyle:(int)negativeStyle;	// 0x33c305a5
+ (id)formatterForLocale:(CFLocaleRef)locale;	// 0x33c30f61
+ (void)initialize;	// 0x33c30421
+ (id)localizedPercentSymbol;	// 0x33c30d21
+ (id)numberFormatStringSpecialSymbols;	// 0x33c30c61
+ (int)positionOfCurrencySymbolInNumberFormatSubpattern:(id)numberFormatSubpattern;	// 0x33c30511
+ (int)positionOfMinusSignInNumberFormatSubpattern:(id)numberFormatSubpattern;	// 0x33c3055d
+ (int)positionOfSymbol:(id)symbol inNumberFormatSubpattern:(id)numberFormatSubpattern;	// 0x33c304b5
+ (id)userVisibleCurrencyCodes;	// 0x33c30d4d
- (id)initWithLocale:(CFLocaleRef)locale;	// 0x33c31221
- (BOOL)currencyFromString:(CFStringRef)string additionalCurrencyCode:(CFStringRef)code value:(double *)value formatString:(const CFStringRef *)string4 currencyCode:(const CFStringRef *)code5;	// 0x33c3193d
- (id)currencySymbolForCurrencyCode:(id)currencyCode;	// 0x33c32125
- (id)currentLocaleCurrencyCode;	// 0x33c324dd
- (void)dealloc;	// 0x33c31579
- (BOOL)decimalFromString:(CFStringRef)string value:(double *)value formatString:(const CFStringRef *)string3;	// 0x33c318f5
- (id)defaultFormatStringForValueType:(int)valueType;	// 0x33c32591
- (id)defaultFormatStringForValueType:(int)valueType negativeStyle:(int)style;	// 0x33c32535
- (id)displayNameForCurrencyCode:(id)currencyCode;	// 0x33c320ed
- (BOOL)findCurrencySymbolInString:(CFStringRef)string additionalCurrencyCode:(CFStringRef)code succesTSUlString:(const CFStringRef *)string3;	// 0x33c31f41
- (BOOL)fractionFromString:(CFStringRef)string value:(double *)value;	// 0x33c31b11
- (id)halfWidthCurrencySymbolForCurrencyCode:(id)currencyCode;	// 0x33c32389
- (id)localizedPercentSymbol;	// 0x33c325d5
- (void)numberPreferencesChanged:(id)changed;	// 0x33c31769
- (CFArrayRef)p_currencyFormatters;	// 0x33c326d5
- (CFArrayRef)p_decimalFormatters;	// 0x33c325e5
- (CFArrayRef)p_percentageFormatters;	// 0x33c327d9
- (CFArrayRef)p_scientificFormatters;	// 0x33c328c9
- (BOOL)percentageFromString:(CFStringRef)string value:(double *)value formatString:(const CFStringRef *)string3;	// 0x33c31a7d
- (BOOL)scientificFromString:(CFStringRef)string value:(double *)value formatString:(const CFStringRef *)string3;	// 0x33c31ac5
- (BOOL)valueFromString:(CFStringRef)string formatters:(CFArrayRef)formatters value:(double *)value formatString:(const CFStringRef *)string4 currencyCode:(const CFStringRef *)code;	// 0x33c31ea9
@end

