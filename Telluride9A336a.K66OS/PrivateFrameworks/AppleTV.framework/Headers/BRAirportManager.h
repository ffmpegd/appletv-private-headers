/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import <NSObject.h> // Unknown library


@interface BRAirportManager : NSObject {
}
+ (BOOL)associateWithNetwork:(id)network password:(id)password error:(id *)error;	// 0x33b16635
+ (void)checkAirportPower;	// 0x33b15e29
+ (void)collectWirelessNetworks;	// 0x33b16039
+ (void)collectWirelessNetworksWithSSID:(id)ssid;	// 0x33b16059
+ (WiFiDeviceClient *)copyCurrentWiFiDeviceClient;	// 0x33b15fcd
+ (id)currentWirelessBSSID;	// 0x33b16569
+ (int)currentWirelessChannel;	// 0x33b164d1
+ (BOOL)forgetCurrentNetworkWithError:(id *)error;	// 0x33b16a9d
+ (BOOL)forgetNetwork:(id)network error:(id *)error;	// 0x33b16b3d
+ (BOOL)forgetWiFiNetwork:(WiFiNetwork *)network error:(id *)error;	// 0x33b16b7d
+ (float)getCurrentRawWirelessSignalStrength;	// 0x33b163c5
+ (int)getCurrentWirelessSignalStrength;	// 0x33b16465
+ (int)getCurrentWirelessSignalStrengthForMaxBars:(unsigned char)maxBars;	// 0x33b16485
+ (void)initialize;	// 0x33b15cc5
+ (id)wirelessInterfaceName;	// 0x33b15f91
@end

