/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface SFUNumberFormatter : NSObject {
@private
	CFLocaleRef mLocale;	// 4 = 0x4
	CFArrayRef mDecimalFormatters;	// 8 = 0x8
	CFArrayRef mCurrencyFormatters;	// 12 = 0xc
	CFArrayRef mPercentageFormatters;	// 16 = 0x10
	CFArrayRef mScientificFormatters;	// 20 = 0x14
	CFNumberFormatterRef mFractionFormatter;	// 24 = 0x18
	NSMutableDictionary *mCurrencyCodeToSymbolMap;	// 28 = 0x1c
	NSString *mCurrencyString;	// 32 = 0x20
	NSString *mPercentageString;	// 36 = 0x24
	NSString *mScientificString;	// 40 = 0x28
	NSString *mDecimalString;	// 44 = 0x2c
	NSString *mPercentSymbol;	// 48 = 0x30
}
+ (id)availableCurrencyCodes;	// 0x3540f091
+ (id)currencySymbolForCurrencyCode:(id)currencyCode;	// 0x3540f031
+ (id)currentLocaleCurrencyCode;	// 0x3540f005
+ (id)defaultFormatStringForValueType:(int)valueType;	// 0x3540ef79
+ (id)displayNameForCurrencyCode:(id)currencyCode;	// 0x3540f061
+ (void)formatString:(id)string replaceOccurencesOfUnescapedString:(id)unescapedString withString:(id)string3;	// 0x3540f0ad
+ (id)formatString:(id)string transformedForNegativeStyle:(int)negativeStyle;	// 0x3540ec85
+ (id)formatterForLocale:(CFLocaleRef)locale;	// 0x3540f4c1
+ (id)localizedPercentSymbol;	// 0x3540ef4d
+ (id)numberFormatStringSpecialSymbols;	// 0x3540efa9
+ (int)positionOfCurrencySymbolInNumberFormatSubpattern:(id)numberFormatSubpattern;	// 0x3540ebed
+ (int)positionOfMinusSignInNumberFormatSubpattern:(id)numberFormatSubpattern;	// 0x3540ec39
+ (int)positionOfSymbol:(id)symbol inNumberFormatSubpattern:(id)numberFormatSubpattern;	// 0x3540f2bd
- (id)initWithLocale:(CFLocaleRef)locale;	// 0x35411991
- (BOOL)currencyFromString:(CFStringRef)string value:(double *)value formatString:(const CFStringRef *)string3 currencyCode:(const CFStringRef *)code;	// 0x3540f3ed
- (id)currencySymbolForCurrencyCode:(id)currencyCode;	// 0x3540ffad
- (id)currentLocaleCurrencyCode;	// 0x354100a9
- (void)dealloc;	// 0x3540fe59
- (BOOL)decimalFromString:(CFStringRef)string value:(double *)value formatString:(const CFStringRef *)string3;	// 0x3540f3b1
- (id)defaultFormatStringForValueType:(int)valueType;	// 0x3540ea29
- (id)displayNameForCurrencyCode:(id)currencyCode;	// 0x3540ff75
- (BOOL)findCurrencySymbolInString:(CFStringRef)string;	// 0x35410161
- (BOOL)fractionFromString:(CFStringRef)string value:(double *)value;	// 0x354102a1
- (id)localizedPercentSymbol;	// 0x3540ea6d
- (void)numberPreferencesChanged:(id)changed;	// 0x3540f311
- (BOOL)percentageFromString:(CFStringRef)string value:(double *)value formatString:(const CFStringRef *)string3;	// 0x3540f449
- (BOOL)scientificFromString:(CFStringRef)string value:(double *)value formatString:(const CFStringRef *)string3;	// 0x3540f485
- (BOOL)valueFromString:(CFStringRef)string formatters:(CFArrayRef)formatters value:(double *)value formatString:(const CFStringRef *)string4 currencyCode:(const CFStringRef *)code;	// 0x35410595
@end

