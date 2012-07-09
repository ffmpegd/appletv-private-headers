/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library

@class NSMutableString, NSString;

@interface EMNumberFormatter : NSObject {
	CFNumberFormatterRef mGenericFormatter;	// 4 = 0x4
	CFNumberFormatterRef mBigNumberFormatter;	// 8 = 0x8
	CFNumberFormatterRef mSmallNumberFormatter;	// 12 = 0xc
	CFDateFormatterRef mDateFormatter;	// 16 = 0x10
	CFNumberFormatterRef mCurrencyFormatter;	// 20 = 0x14
	NSString *excelFormatString;	// 24 = 0x18
	NSMutableString *icuFormatString;	// 28 = 0x1c
	bool mIsNegativeRed;	// 32 = 0x20
	unsigned short mCurrencySymbol;	// 34 = 0x22
	int formatType;	// 36 = 0x24
}
@property(readonly, assign) int formatType;	// G=0x33a12db1; converted property
@property(readonly, retain) NSMutableString *icuFormatString;	// G=0x33b3aa65; converted property
+ (void)initFormatterCache;	// 0x339f8719
+ (id)formatterForFormat:(id)format;	// 0x33a12949
+ (void)releaseFormatterCache;	// 0x33a17601
- (id)initWithDefaultFormatString;	// 0x33a1d04d
- (id)initWithExcelFormatString:(id)excelFormatString;	// 0x33a12a61
- (CFNumberFormatterRef)_bigNumberFormatter;	// 0x33b04ead
- (CFNumberFormatterRef)_currencyFormatter;	// 0x33a12e41
- (CFDateFormatterRef)_dateFormatter;	// 0x33a64f69
- (CFNumberFormatterRef)_genericFormatter;	// 0x33a1d21d
- (CFNumberFormatterRef)_genericFormatterForDouble;	// 0x33a1326d
- (CFNumberFormatterRef)_genericFormatterForPercent;	// 0x33a1317d
- (CFNumberFormatterRef)_smallNumberFormatter;	// 0x33ad8909
- (void)convertCurrencyFormat;	// 0x33a12f11
- (void)convertDateFormat;	// 0x33a65025
- (void)convertGenericNumberFormat;	// 0x33a1301d
- (void)dealloc;	// 0x33a1762d
- (id)formatCurrency:(double)currency;	// 0x33a12dd9
- (id)formatDate:(id)date;	// 0x33a64f25
- (id)formatDefault:(double)aDefault;	// 0x33a1d101
- (id)formatDoubleValue:(double)value;	// 0x33a13205
- (id)formatFraction:(double)fraction;	// 0x33b3ab59
- (id)formatPercent:(double)percent;	// 0x33a13111
- (id)formatPhoneNumber:(double)number;	// 0x33b3aa79
// converted property getter: - (int)formatType;	// 0x33a12db1
// converted property getter: - (id)icuFormatString;	// 0x33b3aa65
- (bool)isNegativeRed;	// 0x33a12dc1
- (void)preprocessIcuString;	// 0x33a12b2d
@end
