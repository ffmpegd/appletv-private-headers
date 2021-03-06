/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, NSArray;

__attribute__((visibility("hidden")))
@interface BRIPConfiguration : XXUnknownSuperclass {
	NSString *_wirelessNetwork;	// 4 = 0x4
	NSString *_wirelessMACAddress;	// 8 = 0x8
	NSString *_wirelessIPAddress;	// 12 = 0xc
	NSString *_wirelessSubnetMask;	// 16 = 0x10
	NSString *_wirelessRouter;	// 20 = 0x14
	NSArray *_wirelessDNSAddresses;	// 24 = 0x18
	NSString *_wiredMACAddress;	// 28 = 0x1c
	NSString *_wiredIPAddress;	// 32 = 0x20
	NSString *_wiredSubnetMask;	// 36 = 0x24
	NSString *_wiredRouter;	// 40 = 0x28
	NSArray *_wiredDNSAddresses;	// 44 = 0x2c
	unsigned _wirelessUseDHCP : 1;	// 48 = 0x30
	BOOL _wirelessUseManualDNS;	// 49 = 0x31
	unsigned _wirelessActive : 1;	// 50 = 0x32
	unsigned _wiredUseDHCP : 1;	// 50 = 0x32
	BOOL _wiredUseManualDNS;	// 51 = 0x33
	unsigned _wiredActive : 1;	// 52 = 0x34
}
@property(readonly, retain) NSString *wirelessNetwork;	// G=0x3a4e1d; converted property
+ (SCDynamicStoreRef)_dynamicStoreSingleton;	// 0x3a4e49
+ (void)_pushWirelessUsageValues;	// 0x3a50ad
+ (id)currentConfiguration;	// 0x3a482d
+ (BOOL)internetAvailable;	// 0x3a4199
+ (BOOL)internetServerReachable:(id)reachable;	// 0x3a4381
+ (id)ipAddressesForHostName:(id)hostName;	// 0x3a4405
+ (BOOL)networkAvailable;	// 0x3a4049
+ (BOOL)networkTimeIsApproximatelyCorrect;	// 0x3a4589
+ (CFDictionaryRef)proxiesDictionaryRef;	// 0x3a4655
+ (BOOL)receivedNTPClockSetNotification;	// 0x3a4529
+ (void)setReceivedNTPClockSetNotification:(BOOL)notification;	// 0x3a4539
+ (void)setShowedNetworkTimeDialog:(BOOL)dialog;	// 0x3a4559
+ (void)setUserDismissedNetworkTimeDialog:(BOOL)dialog;	// 0x3a4579
+ (BOOL)showedNetworkTimeDialog;	// 0x3a4549
+ (void)startMonitoringNetworkChanges:(BOOL)changes;	// 0x3a45fd
+ (BOOL)userDismissedNetworkTimeDialog;	// 0x3a4569
+ (BOOL)usingWireless;	// 0x3a4301
- (id)initFromCurrentConfiguration;	// 0x3a4735
- (id)IPaddressForInterface:(int)interface;	// 0x3a4d9d
- (id)MACAddressForActiveInterface;	// 0x3a4d71
- (id)MACaddressForInterface:(int)interface;	// 0x3a4d51
- (id)_dnsAddressesForServiceID:(id)serviceID usingStore:(SCDynamicStoreRef)store;	// 0x3a5861
- (void)_examineService:(SCNetworkServiceRef)service usingStore:(SCDynamicStoreRef)store;	// 0x3a5145
- (void)_getStateForServiceID:(id)serviceID usingStore:(SCDynamicStoreRef)store ipAddress:(id *)address mask:(id *)mask router:(id *)router;	// 0x3a54ed
- (void)_getWirelessNetworkStateUsingStore:(SCDynamicStoreRef)store;	// 0x3a59d9
- (BOOL)_isActiveForInterface:(id)interface usingStore:(SCDynamicStoreRef)store;	// 0x3a5965
- (BOOL)_setDHCPForService:(SCNetworkServiceRef)service;	// 0x3a5b99
- (BOOL)_setDNSAddress:(id)address forService:(SCNetworkServiceRef)service;	// 0x3a5d2d
- (BOOL)_setIPAddress:(id)address subnetMask:(id)mask router:(id)router forService:(SCNetworkServiceRef)service;	// 0x3a5c05
- (BOOL)_usesManualDNSForServiceID:(id)serviceID usingStore:(SCDynamicStoreRef)store;	// 0x3a57e9
- (void)dealloc;	// 0x3a4875
- (id)description;	// 0x3a498d
- (id)dnsAddressesForInterface:(int)interface;	// 0x3a4dfd
- (BOOL)isActiveForInterface:(int)interface;	// 0x3a4ce1
- (id)routerForInterface:(int)interface;	// 0x3a4ddd
- (void)setAddress:(id)address subnetMask:(id)mask router:(id)router forInterface:(int)interface;	// 0x3a4b61
- (void)setDNSAddresses:(id)addresses forInterface:(int)interface;	// 0x3a4c95
- (void)setUseDHCPForInterface:(int)interface;	// 0x3a4b15
- (void)setUseManualDNSForInterface:(int)interface;	// 0x3a4b41
- (id)subnetMaskForInterface:(int)interface;	// 0x3a4dbd
- (BOOL)useDHCPForInterface:(int)interface;	// 0x3a4d05
- (BOOL)useManualDNSForInterface:(int)interface;	// 0x3a4d2d
// converted property getter: - (id)wirelessNetwork;	// 0x3a4e1d
- (long)wirelessSignalQuality;	// 0x3a4e2d
@end

