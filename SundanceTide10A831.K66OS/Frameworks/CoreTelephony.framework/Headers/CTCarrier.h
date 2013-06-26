/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

#import <NSObject.h> // Unknown library

@class NSString;

@interface CTCarrier : NSObject {
	NSString *_carrierName;	// 4 = 0x4
	NSString *_mobileCountryCode;	// 8 = 0x8
	NSString *_mobileNetworkCode;	// 12 = 0xc
	NSString *_isoCountryCode;	// 16 = 0x10
	BOOL _allowsVOIP;	// 20 = 0x14
}
@property(assign, nonatomic) BOOL allowsVOIP;	// G=0x30e0c7f1; S=0x30e0c801; @synthesize=_allowsVOIP
@property(retain, nonatomic) NSString *carrierName;	// G=0x30e0c771; S=0x30e0c781; @synthesize=_carrierName
@property(retain, nonatomic) NSString *isoCountryCode;	// G=0x30e0c7d1; S=0x30e0c7e1; @synthesize=_isoCountryCode
@property(retain, nonatomic) NSString *mobileCountryCode;	// G=0x30e0c791; S=0x30e0c7a1; @synthesize=_mobileCountryCode
@property(retain, nonatomic) NSString *mobileNetworkCode;	// G=0x30e0c7b1; S=0x30e0c7c1; @synthesize=_mobileNetworkCode
- (id)init;	// 0x30e0c4f1
// declared property getter: - (BOOL)allowsVOIP;	// 0x30e0c7f1
// declared property getter: - (id)carrierName;	// 0x30e0c771
- (void)dealloc;	// 0x30e0c569
- (id)description;	// 0x30e0c449
- (BOOL)isEqual:(id)equal;	// 0x30e0c611
// declared property getter: - (id)isoCountryCode;	// 0x30e0c7d1
// declared property getter: - (id)mobileCountryCode;	// 0x30e0c791
// declared property getter: - (id)mobileNetworkCode;	// 0x30e0c7b1
// declared property setter: - (void)setAllowsVOIP:(BOOL)voip;	// 0x30e0c801
// declared property setter: - (void)setCarrierName:(id)name;	// 0x30e0c781
// declared property setter: - (void)setIsoCountryCode:(id)code;	// 0x30e0c7e1
// declared property setter: - (void)setMobileCountryCode:(id)code;	// 0x30e0c7a1
// declared property setter: - (void)setMobileNetworkCode:(id)code;	// 0x30e0c7c1
@end
