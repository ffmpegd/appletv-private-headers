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
@property(assign, nonatomic) BOOL allowsVOIP;	// G=0x3213bbd9; S=0x3213bbe9; @synthesize=_allowsVOIP
@property(retain, nonatomic) NSString *carrierName;	// G=0x3213bc29; S=0x3213bf29; @synthesize=_carrierName
@property(retain, nonatomic) NSString *isoCountryCode;	// G=0x3213bbf9; S=0x3213bfa1; @synthesize=_isoCountryCode
@property(retain, nonatomic) NSString *mobileCountryCode;	// G=0x3213bc19; S=0x3213bf51; @synthesize=_mobileCountryCode
@property(retain, nonatomic) NSString *mobileNetworkCode;	// G=0x3213bc09; S=0x3213bf79; @synthesize=_mobileNetworkCode
- (id)init;	// 0x3213bebd
// declared property getter: - (BOOL)allowsVOIP;	// 0x3213bbd9
// declared property getter: - (id)carrierName;	// 0x3213bc29
- (void)dealloc;	// 0x3213be19
- (id)description;	// 0x3213bd7d
- (BOOL)isEqual:(id)equal;	// 0x3213bc39
// declared property getter: - (id)isoCountryCode;	// 0x3213bbf9
// declared property getter: - (id)mobileCountryCode;	// 0x3213bc19
// declared property getter: - (id)mobileNetworkCode;	// 0x3213bc09
// declared property setter: - (void)setAllowsVOIP:(BOOL)voip;	// 0x3213bbe9
// declared property setter: - (void)setCarrierName:(id)name;	// 0x3213bf29
// declared property setter: - (void)setIsoCountryCode:(id)code;	// 0x3213bfa1
// declared property setter: - (void)setMobileCountryCode:(id)code;	// 0x3213bf51
// declared property setter: - (void)setMobileNetworkCode:(id)code;	// 0x3213bf79
@end

