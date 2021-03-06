/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import "Celestial-Structs.h"
#import <NSObject.h> // Unknown library


@interface AVExternalAudio : NSObject {
	AVExternalAudioPrivate *_priv;	// 4 = 0x4
}
+ (id)avExternalAudio:(id)audio;	// 0x372d3345
- (id)initWithDelegate:(id)delegate;	// 0x372d3381
- (BOOL)activate:(id *)activate;	// 0x372d4055
- (id)attributeForKey:(id)key;	// 0x372d3a01
- (void)dealloc;	// 0x372d3845
- (void)fmpChangeConnectionActive:(BOOL)active;	// 0x372d4389
- (void)fmpServerConnectionDied;	// 0x372d3f95
- (void)fmpUserVolumeDidChange;	// 0x372d42bd
- (BOOL)isActive;	// 0x372d4195
- (void)makeError:(id *)error withDescription:(id)description code:(long)code;	// 0x372d3e1d
- (BOOL)okToNotifyFromThisThread;	// 0x372d4019
- (void)postServerConnectionDiedNotification:(id)notification;	// 0x372d3eed
- (void)postUserVolumeChangedNotification:(id)notification;	// 0x372d41c9
- (BOOL)setAttribute:(id)attribute forKey:(id)key error:(id *)error;	// 0x372d3a89
- (float)volume;	// 0x372d410d
@end

