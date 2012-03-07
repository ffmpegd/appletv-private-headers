/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import <NSObject.h> // Unknown library

@class NSLocale, NSString, NSDecimalNumber;

__attribute__((visibility("hidden")))
@interface SKProduct : NSObject {
@private
	id _internal;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) NSString *localizedDescription;	// G=0x35f2e2f9; 
@property(readonly, assign, nonatomic) NSString *localizedTitle;	// G=0x35f2e33d; 
@property(readonly, assign, nonatomic) NSDecimalNumber *price;	// G=0x35f2e381; 
@property(readonly, assign, nonatomic) NSLocale *priceLocale;	// G=0x35f2e3c5; 
@property(readonly, assign, nonatomic) NSString *productIdentifier;	// G=0x35f2e409; 
- (id)init;	// 0x35f2df81
- (id)initWithDictionary:(id)dictionary;	// 0x35f2dfe5
- (void)dealloc;	// 0x35f2e2a5
- (OpaqueJSValue *)jsCopyObjectWithContext:(OpaqueJSContext *)context withException:(const OpaqueJSValue **)exception;	// 0x35f25f7d
// declared property getter: - (id)localizedDescription;	// 0x35f2e2f9
// declared property getter: - (id)localizedTitle;	// 0x35f2e33d
// declared property getter: - (id)price;	// 0x35f2e381
// declared property getter: - (id)priceLocale;	// 0x35f2e3c5
// declared property getter: - (id)productIdentifier;	// 0x35f2e409
- (void)setLocale:(id)locale;	// 0x35f2e44d
@end

