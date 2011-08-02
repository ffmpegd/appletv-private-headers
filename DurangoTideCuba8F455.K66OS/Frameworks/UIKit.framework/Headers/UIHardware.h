/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library


@interface UIHardware : NSObject {
}
+ (float)TVAspectRatio;	// 0x301ee185
+ (BOOL)TVOutCapable;	// 0x301734f1
+ (BOOL)TVOutCapableAndPreferred;	// 0x301ee091
+ (void)TVOutResetPreferred;	// 0x301ee2d9
+ (CGSize)TVScreenSize;	// 0x301732e9
+ (BOOL)_TVOutStatus:(BOOL)status;	// 0x30173509
+ (void)_playSystemSound:(unsigned long)sound;	// 0x30143e35
+ (void)_registerForSystemSounds:(id)systemSounds;	// 0x30138e45
+ (void)_unregisterForSystemSounds:(id)systemSounds;	// 0x3007ec45
+ (void)_updateSystemSoundActiveStatus:(id)status;	// 0x30150381
+ (void)accessoryAvailabilityChanged;	// 0x301ee07d
+ (void)alertSheet:(id)sheet buttonClicked:(int)clicked;	// 0x301ee21d
+ (id)deviceName;	// 0x301ee365
+ (int)deviceOrientation:(BOOL)orientation;	// 0x300e40dd
+ (CGRect)fullScreenApplicationContentRect;	// 0x301ee0a9
+ (BOOL)isTTYEnabled;	// 0x301ee11d
+ (id)localizedDeviceName;	// 0x301ee371
+ (CGSize)mainScreenSize;	// 0x300ae8bd
+ (int)ringerState;	// 0x301ee0dd
+ (BOOL)setSpeakerPhoneEnabled:(BOOL)enabled;	// 0x301ee0f9
+ (float)statusBarHeight;	// 0x301139a5
@end
