/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface ATVVersionInfo : XXUnknownSuperclass {
}
+ (int)compare3PartVersion:(id)version with3PartVersion:(id)a3PartVersion;	// 0x265ffd
+ (int)compareEFIVersion:(id)version withEFIVersion:(id)efiversion;	// 0x2662bd
+ (int)compareIRVersion:(id)version withIRVersion:(id)irversion;	// 0x266335
+ (int)compareOSVersion:(id)version andBuild:(id)build withOSVersion:(id)osversion andBuild:(id)build4;	// 0x266195
+ (int)compareSIVersion:(id)version withSIVersion:(id)siversion;	// 0x266489
+ (id)currentEFIVersion;	// 0x266241
+ (id)currentIRVersion;	// 0x266301
+ (id)currentOSBuildVersion;	// 0x265fd5
+ (id)currentOSVersion;	// 0x265fad
+ (id)currentSIBootVersion;	// 0x266459
+ (id)currentSIMainVersion;	// 0x26644d
+ (BOOL)isSIFirmwareValid;	// 0x266485
@end
