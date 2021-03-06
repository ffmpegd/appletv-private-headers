/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface BRAirportManager : XXUnknownSuperclass {
}
+ (void)_checkForNeedToSetupDevice;	// 0x361859
+ (void)_setupForDevice:(WiFiDeviceClient *)device;	// 0x3618dd
+ (BOOL)associateWithNetwork:(id)network password:(id)password error:(id *)error;	// 0x3610e5
+ (void)checkAirportPower;	// 0x360229
+ (void)collectWirelessNetworks;	// 0x3609e9
+ (void)collectWirelessNetworksWithSSID:(id)ssid;	// 0x360a09
+ (WiFiDeviceClient *)copyCurrentWiFiDeviceClient;	// 0x3604b5
+ (BOOL)currentNetworkIsManaged;	// 0x360811
+ (id)currentWirelessBSSID;	// 0x360fad
+ (int)currentWirelessChannel;	// 0x360e95
+ (BOOL)forgetCurrentNetworkWithError:(id *)error;	// 0x361631
+ (BOOL)forgetNetwork:(id)network error:(id *)error;	// 0x3616ed
+ (BOOL)forgetWiFiNetwork:(WiFiNetwork *)network error:(id *)error;	// 0x36172d
+ (float)getCurrentRawWirelessSignalStrength;	// 0x360da1
+ (int)getCurrentWirelessSignalStrength;	// 0x360e31
+ (int)getCurrentWirelessSignalStrengthForMaxBars:(unsigned char)maxBars;	// 0x360e51
+ (void)initialize;	// 0x35fff5
+ (BOOL)prepareNetworkIfKnown:(id)known;	// 0x3608e5
+ (void)setAirportEnabled:(BOOL)enabled;	// 0x3602e9
+ (void)updateManagedNetworks;	// 0x360571
+ (id)wirelessInterfaceName;	// 0x36042d
@end

