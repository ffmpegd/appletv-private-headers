/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface ECCurrencyConverter : NSObject {
@private
	NSMutableDictionary *mXlToLassoCurrencyCode;	// 4 = 0x4
	NSMutableDictionary *mLassoToXlCurrencyCode;	// 8 = 0x8
	NSMutableDictionary *mXlAccountingFormat;	// 12 = 0xc
	NSMutableDictionary *mXlToLassoCurrencyCodeBySymbol;	// 16 = 0x10
}
+ (id)currencyConverter;	// 0x35736b31
- (void)dealloc;	// 0x3573909d
- (id)lassoCurrencyCodeForDollar;	// 0x35739359
- (id)lassoCurrencyCodeFromXl:(id)xl;	// 0x35739125
- (void)populateDictionaries;	// 0x35736b79
- (int)xlAccountFormatFromLasso:(id)lasso;	// 0x35736acd
- (id)xlCurrencyCodeFromLasso:(id)lasso;	// 0x35736a4d
@end

