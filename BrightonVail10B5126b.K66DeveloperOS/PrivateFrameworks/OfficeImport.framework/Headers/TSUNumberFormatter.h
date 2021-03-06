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
+ (id)availableCurrencyCodes;	// 0x34adba5d
+ (id)currencySymbolForCurrencyCode:(id)currencyCode;	// 0x34adbaa9
+ (id)currentLocaleCurrencyCode;	// 0x34adbb7d
+ (id)currentLocaleDecimalSeparator;	// 0x34adbc11
+ (id)currentLocaleListSeparator;	// 0x34adbc4d
+ (id)currentNonCachedLocaleCurrencyCode;	// 0x34adbba9
+ (id)currentNonCachedLocaleDecimalSeparator;	// 0x34adbc15
+ (unsigned short)defaultDecimalPlacesForCurrencyCode:(id)currencyCode;	// 0x34adbad9
+ (id)defaultFormatStringForValueType:(int)valueType;	// 0x34adbce1
+ (id)defaultFormatStringForValueType:(int)valueType negativeStyle:(int)style;	// 0x34adbcad
+ (id)displayNameForCurrencyCode:(id)currencyCode;	// 0x34adba79
+ (void)formatString:(id)string replaceOccurencesOfUnescapedString:(id)unescapedString withString:(id)string3;	// 0x34adb855
+ (id)formatString:(id)string transformedForNegativeStyle:(int)negativeStyle;	// 0x34adb595
+ (id)formatterForLocale:(CFLocaleRef)locale;	// 0x34adbf51
+ (void)initialize;	// 0x34adb411
+ (id)localizedPercentSymbol;	// 0x34adbd11
+ (id)numberFormatStringSpecialSymbols;	// 0x34adbc51
+ (int)positionOfCurrencySymbolInNumberFormatSubpattern:(id)numberFormatSubpattern;	// 0x34adb501
+ (int)positionOfMinusSignInNumberFormatSubpattern:(id)numberFormatSubpattern;	// 0x34adb54d
+ (int)positionOfSymbol:(id)symbol inNumberFormatSubpattern:(id)numberFormatSubpattern;	// 0x34adb4a5
+ (id)userVisibleCurrencyCodes;	// 0x34adbd3d
- (id)initWithLocale:(CFLocaleRef)locale;	// 0x34adc211
- (BOOL)currencyFromString:(CFStringRef)string additionalCurrencyCode:(CFStringRef)code value:(double *)value formatString:(const CFStringRef *)string4 currencyCode:(const CFStringRef *)code5;	// 0x34adc92d
- (id)currencySymbolForCurrencyCode:(id)currencyCode;	// 0x34add115
- (id)currentLocaleCurrencyCode;	// 0x34add4cd
- (void)dealloc;	// 0x34adc569
- (BOOL)decimalFromString:(CFStringRef)string value:(double *)value formatString:(const CFStringRef *)string3;	// 0x34adc8e5
- (id)defaultFormatStringForValueType:(int)valueType;	// 0x34add581
- (id)defaultFormatStringForValueType:(int)valueType negativeStyle:(int)style;	// 0x34add525
- (id)displayNameForCurrencyCode:(id)currencyCode;	// 0x34add0dd
- (BOOL)findCurrencySymbolInString:(CFStringRef)string additionalCurrencyCode:(CFStringRef)code succesTSUlString:(const CFStringRef *)string3;	// 0x34adcf31
- (BOOL)fractionFromString:(CFStringRef)string value:(double *)value;	// 0x34adcb01
- (id)halfWidthCurrencySymbolForCurrencyCode:(id)currencyCode;	// 0x34add379
- (id)localizedPercentSymbol;	// 0x34add5c5
- (void)numberPreferencesChanged:(id)changed;	// 0x34adc759
- (CFArrayRef)p_currencyFormatters;	// 0x34add6c5
- (CFArrayRef)p_decimalFormatters;	// 0x34add5d5
- (CFArrayRef)p_percentageFormatters;	// 0x34add7c9
- (CFArrayRef)p_scientificFormatters;	// 0x34add8b9
- (BOOL)percentageFromString:(CFStringRef)string value:(double *)value formatString:(const CFStringRef *)string3;	// 0x34adca6d
- (BOOL)scientificFromString:(CFStringRef)string value:(double *)value formatString:(const CFStringRef *)string3;	// 0x34adcab5
- (BOOL)valueFromString:(CFStringRef)string formatters:(CFArrayRef)formatters value:(double *)value formatString:(const CFStringRef *)string4 currencyCode:(const CFStringRef *)code;	// 0x34adce99
@end

