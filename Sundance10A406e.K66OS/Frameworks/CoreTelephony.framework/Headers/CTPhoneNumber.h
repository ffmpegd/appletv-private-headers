/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

#import "NSCopying.h"
#import "CTMessageAddress.h"
#import "CoreTelephony-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString;

@interface CTPhoneNumber : NSObject <NSCopying, CTMessageAddress> {
	NSString *_digits;	// 4 = 0x4
	NSString *_countryCode;	// 8 = 0x8
	BOOL _isShortCode;	// 12 = 0xc
}
@property(readonly, assign) NSString *countryCode;	// G=0x31170785; @synthesize=_countryCode
@property(readonly, assign) NSString *digits;	// G=0x31170771; @synthesize=_digits
@property(assign) BOOL isShortCode;	// G=0x31170799; S=0x311707b1; @synthesize=_isShortCode
+ (id)phoneNumberWithDigits:(id)digits countryCode:(id)code;	// 0x3117036d
- (id)initWithDigits:(id)digits countryCode:(id)code;	// 0x31170461
- (id)canonicalFormat;	// 0x31170719
- (id)copyWithZone:(NSZone *)zone;	// 0x31170659
// declared property getter: - (id)countryCode;	// 0x31170785
- (void)dealloc;	// 0x311705f5
// declared property getter: - (id)digits;	// 0x31170771
- (id)encodedString;	// 0x31170729
- (id)formatForCallingCountry:(id)callingCountry;	// 0x311706cd
// declared property getter: - (BOOL)isShortCode;	// 0x31170799
- (int)numberOfDigitsForShortCodeNumber;	// 0x311703ad
// declared property setter: - (void)setIsShortCode:(BOOL)code;	// 0x311707b1
@end
