/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "AppleTV-Structs.h"

@class NSArray, NSString;

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
@property(readonly, retain) NSString *wirelessNetwork;	// G=0x3af5b1; converted property
+ (SCDynamicStoreRef)_dynamicStoreSingleton;	// 0x3af5dd
+ (void)_pushWirelessUsageValues;	// 0x3af841
+ (void)clearCachedNetworkStates;	// 0x3ae7c9
+ (id)currentConfiguration;	// 0x3aefc1
+ (BOOL)internetAvailable;	// 0x3ae92d
+ (BOOL)internetServerReachable:(id)reachable;	// 0x3aeb15
+ (id)ipAddressesForHostName:(id)hostName;	// 0x3aeb99
+ (BOOL)networkAvailable;	// 0x3ae7dd
+ (BOOL)networkTimeIsApproximatelyCorrect;	// 0x3aed1d
+ (CFDictionaryRef)proxiesDictionaryRef;	// 0x3aede9
+ (BOOL)receivedNTPClockSetNotification;	// 0x3aecbd
+ (void)setReceivedNTPClockSetNotification:(BOOL)notification;	// 0x3aeccd
+ (void)setShowedNetworkTimeDialog:(BOOL)dialog;	// 0x3aeced
+ (void)setUserDismissedNetworkTimeDialog:(BOOL)dialog;	// 0x3aed0d
+ (BOOL)showedNetworkTimeDialog;	// 0x3aecdd
+ (void)startMonitoringNetworkChanges:(BOOL)changes;	// 0x3aed91
+ (BOOL)userDismissedNetworkTimeDialog;	// 0x3aecfd
+ (BOOL)usingWireless;	// 0x3aea95
- (id)initFromCurrentConfiguration;	// 0x3aeec9
- (id)IPaddressForInterface:(int)interface;	// 0x3af531
- (id)MACAddressForActiveInterface;	// 0x3af505
- (id)MACaddressForInterface:(int)interface;	// 0x3af4e5
- (id)_dnsAddressesForServiceID:(id)serviceID usingStore:(SCDynamicStoreRef)store;	// 0x3afff5
- (void)_examineService:(SCNetworkServiceRef)service usingStore:(SCDynamicStoreRef)store;	// 0x3af8d9
- (void)_getStateForServiceID:(id)serviceID usingStore:(SCDynamicStoreRef)store ipAddress:(id *)address mask:(id *)mask router:(id *)router;	// 0x3afc81
- (void)_getWirelessNetworkStateUsingStore:(SCDynamicStoreRef)store;	// 0x3b016d
- (BOOL)_isActiveForInterface:(id)interface usingStore:(SCDynamicStoreRef)store;	// 0x3b00f9
- (BOOL)_setDHCPForService:(SCNetworkServiceRef)service;	// 0x3b032d
- (BOOL)_setDNSAddress:(id)address forService:(SCNetworkServiceRef)service;	// 0x3b04c1
- (BOOL)_setIPAddress:(id)address subnetMask:(id)mask router:(id)router forService:(SCNetworkServiceRef)service;	// 0x3b0399
- (BOOL)_usesManualDNSForServiceID:(id)serviceID usingStore:(SCDynamicStoreRef)store;	// 0x3aff7d
- (void)dealloc;	// 0x3af009
- (id)description;	// 0x3af121
- (id)dnsAddressesForInterface:(int)interface;	// 0x3af591
- (BOOL)isActiveForInterface:(int)interface;	// 0x3af475
- (id)routerForInterface:(int)interface;	// 0x3af571
- (void)setAddress:(id)address subnetMask:(id)mask router:(id)router forInterface:(int)interface;	// 0x3af2f5
- (void)setDNSAddresses:(id)addresses forInterface:(int)interface;	// 0x3af429
- (void)setUseDHCPForInterface:(int)interface;	// 0x3af2a9
- (void)setUseManualDNSForInterface:(int)interface;	// 0x3af2d5
- (id)subnetMaskForInterface:(int)interface;	// 0x3af551
- (BOOL)useDHCPForInterface:(int)interface;	// 0x3af499
- (BOOL)useManualDNSForInterface:(int)interface;	// 0x3af4c1
// converted property getter: - (id)wirelessNetwork;	// 0x3af5b1
- (long)wirelessSignalQuality;	// 0x3af5c1
@end

