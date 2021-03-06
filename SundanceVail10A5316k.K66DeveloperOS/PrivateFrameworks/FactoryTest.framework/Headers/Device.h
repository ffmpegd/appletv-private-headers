/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/FactoryTest.framework/FactoryTest
 */

#import <NSObject.h> // Unknown library

@class NSString, NSDictionary;

@interface Device : NSObject {
	NSString *_deviceName;	// 4 = 0x4
	NSDictionary *_versionDict;	// 8 = 0x8
}
@property(readonly, retain) NSString *deviceName;	// G=0x32ea6b79; converted property
@property(readonly, retain) NSDictionary *versionDict;	// G=0x32ea6bfd; converted property
+ (BOOL)hasBaseband;	// 0x32ea6fa1
+ (BOOL)hasCompass;	// 0x32ea6db9
+ (BOOL)hasGyro;	// 0x32ea6e95
+ (BOOL)hasWiFi;	// 0x32ea6c75
+ (id)productBuildVersion;	// 0x32ea6c25
+ (id)sharedInstance;	// 0x32ea6a2d
- (id)init;	// 0x32ea6a69
- (void)dealloc;	// 0x32ea6abd
// converted property getter: - (id)deviceName;	// 0x32ea6b79
- (id)modelName;	// 0x32ea6ae9
// converted property getter: - (id)versionDict;	// 0x32ea6bfd
@end

