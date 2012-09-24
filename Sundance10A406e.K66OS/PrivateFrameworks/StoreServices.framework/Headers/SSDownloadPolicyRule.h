/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "SSXPCCoding.h"
#import "StoreServices-Structs.h"
#import "NSCoding.h"
#import <NSObject.h> // Unknown library
#import "NSCopying.h"

@class NSSet;

@interface SSDownloadPolicyRule : NSObject <NSCoding, SSXPCCoding, NSCopying> {
	NSSet *_applicationStates;	// 4 = 0x4
	float _batteryLevel;	// 8 = 0x8
	int _cellularDataStates;	// 12 = 0xc
	long long _downloadSizeLimit;	// 16 = 0x10
	NSSet *_networkTypes;	// 24 = 0x18
	int _powerStates;	// 28 = 0x1c
	int _registrationStates;	// 32 = 0x20
	int _timeLimitStates;	// 36 = 0x24
}
@property(copy, nonatomic) NSSet *applicationStates;	// G=0x312e42dd; S=0x312e42f1; @synthesize=_applicationStates
@property(assign, nonatomic) float batteryLevel;	// G=0x312e4301; S=0x312e4311; @synthesize=_batteryLevel
@property(readonly, assign, nonatomic, getter=isCellularAllowed) BOOL cellularAllowed;	// G=0x312e3521; 
@property(assign, nonatomic) int cellularDataStates;	// G=0x312e4321; S=0x312e4331; @synthesize=_cellularDataStates
@property(assign, nonatomic) long long downloadSizeLimit;	// G=0x312e4341; S=0x312e4359; @synthesize=_downloadSizeLimit
@property(copy, nonatomic) NSSet *networkTypes;	// G=0x312e436d; S=0x312e4381; @synthesize=_networkTypes
@property(assign, nonatomic) int powerStates;	// G=0x312e4391; S=0x312e43a1; @synthesize=_powerStates
@property(assign, nonatomic) int registrationStates;	// G=0x312e43b1; S=0x312e43c1; @synthesize=_registrationStates
@property(assign, nonatomic) int timeLimitStates;	// G=0x312e43d1; S=0x312e43e1; @synthesize=_timeLimitStates
@property(readonly, assign, nonatomic, getter=isWiFiAllowed) BOOL wiFiAllowed;	// G=0x312e35f9; 
- (id)init;	// 0x312e3285
- (id)initWithCoder:(id)coder;	// 0x312e3c3d
- (id)initWithXPCEncoding:(id)xpcencoding;	// 0x312e40a5
- (void)addApplicationState:(id)state;	// 0x312e3351
- (void)addNetworkType:(int)type;	// 0x312e3425
// declared property getter: - (id)applicationStates;	// 0x312e42dd
// declared property getter: - (float)batteryLevel;	// 0x312e4301
// declared property getter: - (int)cellularDataStates;	// 0x312e4321
- (id)copyWithZone:(NSZone *)zone;	// 0x312e3e6d
- (id)copyXPCEncoding;	// 0x312e3f69
- (void)dealloc;	// 0x312e32ed
// declared property getter: - (long long)downloadSizeLimit;	// 0x312e4341
- (void)encodeWithCoder:(id)coder;	// 0x312e3acd
- (unsigned)hash;	// 0x312e38e1
// declared property getter: - (BOOL)isCellularAllowed;	// 0x312e3521
- (BOOL)isEqual:(id)equal;	// 0x312e3901
// declared property getter: - (BOOL)isWiFiAllowed;	// 0x312e35f9
// declared property getter: - (id)networkTypes;	// 0x312e436d
// declared property getter: - (int)powerStates;	// 0x312e4391
// declared property getter: - (int)registrationStates;	// 0x312e43b1
// declared property setter: - (void)setApplicationStates:(id)states;	// 0x312e42f1
// declared property setter: - (void)setBatteryLevel:(float)level;	// 0x312e4311
// declared property setter: - (void)setCellularDataStates:(int)states;	// 0x312e4331
// declared property setter: - (void)setDownloadSizeLimit:(long long)limit;	// 0x312e4359
// declared property setter: - (void)setNetworkTypes:(id)types;	// 0x312e4381
// declared property setter: - (void)setPowerStates:(int)states;	// 0x312e43a1
// declared property setter: - (void)setRegistrationStates:(int)states;	// 0x312e43c1
// declared property setter: - (void)setTimeLimitStates:(int)states;	// 0x312e43e1
// declared property getter: - (int)timeLimitStates;	// 0x312e43d1
- (void)unionPolicyRule:(id)rule;	// 0x312e367d
@end
