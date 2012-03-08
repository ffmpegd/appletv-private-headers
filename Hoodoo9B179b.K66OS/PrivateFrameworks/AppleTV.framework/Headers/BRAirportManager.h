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
+ (id)_wirelessInterfaceNameForDeviceClient:(WiFiDeviceClient *)deviceClient;	// 0x303226d1
+ (BOOL)associateWithNetwork:(id)network password:(id)password error:(id *)error;	// 0x30322e2d
+ (void)checkAirportPower;	// 0x30322545
+ (void)collectWirelessNetworks;	// 0x3032276d
+ (void)collectWirelessNetworksWithSSID:(id)ssid;	// 0x3032278d
+ (WiFiDeviceClient *)copyCurrentWiFiDeviceClient;	// 0x303226e5
+ (id)currentWirelessBSSID;	// 0x30322d09
+ (int)currentWirelessChannel;	// 0x30322c01
+ (BOOL)forgetCurrentNetworkWithError:(id *)error;	// 0x303232c1
+ (BOOL)forgetNetwork:(id)network error:(id *)error;	// 0x30323379
+ (BOOL)forgetWiFiNetwork:(WiFiNetwork *)network error:(id *)error;	// 0x303233b9
+ (float)getCurrentRawWirelessSignalStrength;	// 0x30322b01
+ (int)getCurrentWirelessSignalStrength;	// 0x30322b95
+ (int)getCurrentWirelessSignalStrengthForMaxBars:(unsigned char)maxBars;	// 0x30322bb5
+ (void)initialize;	// 0x303223b9
+ (id)wirelessInterfaceName;	// 0x303226c1
@end
