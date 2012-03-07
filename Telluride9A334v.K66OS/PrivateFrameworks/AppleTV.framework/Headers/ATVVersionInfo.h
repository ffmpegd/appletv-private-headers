/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library


@interface ATVVersionInfo : NSObject {
}
+ (int)compareEFIVersion:(id)version withEFIVersion:(id)efiversion;	// 0x3312a481
+ (int)compareIRVersion:(id)version withIRVersion:(id)irversion;	// 0x3312a4e9
+ (int)compareOSVersion:(id)version andBuild:(id)build withOSVersion:(id)osversion andBuild:(id)build4;	// 0x3312a2f5
+ (int)compareSIVersion:(id)version withSIVersion:(id)siversion;	// 0x3312a5f9
+ (id)currentEFIVersion;	// 0x3312a405
+ (id)currentIRVersion;	// 0x3312a4b5
+ (id)currentOSBuildVersion;	// 0x3312a2cd
+ (id)currentOSVersion;	// 0x3312a2a5
+ (id)currentSIBootVersion;	// 0x3312a5d5
+ (id)currentSIMainVersion;	// 0x3312a5c9
+ (BOOL)isSIFirmwareValid;	// 0x3312a5f5
@end

