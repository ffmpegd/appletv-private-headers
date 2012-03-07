/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ISSingleton.h"
#import "AppleTV-Structs.h"
#import <NSObject.h> // Unknown library

@class NSLock, NSString;

__attribute__((visibility("hidden")))
@interface ISDevice : NSObject <ISSingleton> {
@private
	unsigned _daemonLaunchCount;	// 4 = 0x4
	NSString *_guid;	// 8 = 0x8
	NSString *_hardwareModel;	// 12 = 0xc
	NSLock *_lock;	// 16 = 0x10
	NSString *_productVersion;	// 20 = 0x14
	int _type;	// 24 = 0x18
}
@property(readonly, assign) unsigned daemonLaunchCount;	// G=0x33bc1f25; converted property
@property(readonly, assign) NSString *deviceName;	// G=0x33bc1a7d; 
@property(readonly, assign) NSString *guid;	// G=0x33bc1ae1; 
@property(readonly, assign) NSString *hardwareModel;	// G=0x33bc1bcd; 
@property(readonly, assign) NSString *hardwareName;	// G=0x33bc1c55; 
@property(readonly, assign) NSString *productVersion;	// G=0x33bc1df5; 
@property(readonly, assign) NSString *serialNumber;	// G=0x33bc1e01; 
@property(readonly, assign) NSString *systemName;	// G=0x33bc1e55; 
@property(readonly, assign) int type;	// G=0x33bc1eb9; 
+ (void)setSharedInstance:(id)instance;	// 0x33bc1669
+ (id)sharedInstance;	// 0x33bc16bd
- (id)init;	// 0x33bc14c9
- (void)_cancelScheduledPowerAssertionRelease:(id)release;	// 0x33bc2111
- (id)_copyCapabilityValueForKey:(CFStringRef)key;	// 0x33bc2149
- (int)_deviceTypeForModelString:(id)modelString;	// 0x33bc2195
- (void)_initDeviceType;	// 0x33bc2401
- (BOOL)_isHDVideoCapable;	// 0x33bc23c9
- (BOOL)_isPodcastCapable;	// 0x33bc23fd
- (BOOL)_releasePowerAssertion:(id)assertion;	// 0x33bc245d
- (void)_schedulePowerAssertionRelease:(id)release;	// 0x33bc24bd
- (BOOL)checkCapabilities:(id)capabilities withMismatches:(id *)mismatches;	// 0x33bc1739
- (id)copyProtocolConditionalContext;	// 0x33bc173d
- (id)copyPurchaseValidationContext;	// 0x33bc1819
- (void)daemonDidLaunch;	// 0x33bc1f35
// converted property getter: - (unsigned)daemonLaunchCount;	// 0x33bc1f25
- (void)daemonWillExitCleanly;	// 0x33bc1fc1
- (void)dealloc;	// 0x33bc152d
// declared property getter: - (id)deviceName;	// 0x33bc1a7d
// declared property getter: - (id)guid;	// 0x33bc1ae1
// declared property getter: - (id)hardwareModel;	// 0x33bc1bcd
// declared property getter: - (id)hardwareName;	// 0x33bc1c55
- (BOOL)hasCapability:(int)capability;	// 0x33bc1ca5
- (BOOL)isAnyIPhone;	// 0x33bc1d21
- (BOOL)isAnyIPod;	// 0x33bc1d75
- (BOOL)isAnyWildcat;	// 0x33bc1da9
// declared property getter: - (id)productVersion;	// 0x33bc1df5
- (BOOL)releasePowerAssertion:(id)assertion;	// 0x33bc15b5
// declared property getter: - (id)serialNumber;	// 0x33bc1e01
- (id)supportedOfferDeviceForDevices:(id)devices;	// 0x33bc2001
// declared property getter: - (id)systemName;	// 0x33bc1e55
- (BOOL)takePowerAssertion:(id)assertion;	// 0x33bc160d
// declared property getter: - (int)type;	// 0x33bc1eb9
@end

