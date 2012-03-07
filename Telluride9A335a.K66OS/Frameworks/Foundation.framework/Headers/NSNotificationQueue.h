/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library


@interface NSNotificationQueue : NSObject {
@private
	id _notificationCenter;	// 4 = 0x4
	id _asapQueue;	// 8 = 0x8
	id _asapObs;	// 12 = 0xc
	id _idleQueue;	// 16 = 0x10
	id _idleObs;	// 20 = 0x14
}
+ (id)defaultQueue;	// 0x32090c31
- (id)init;	// 0x32090ce1
- (id)initWithNotificationCenter:(id)notificationCenter;	// 0x32090d1d
- (void)_flushNotificationQueue;	// 0x32090e2d
- (void)dealloc;	// 0x32090dcd
- (void)dequeueNotificationsMatching:(id)matching coalesceMask:(unsigned)mask;	// 0x32091295
- (void)enqueueNotification:(id)notification postingStyle:(unsigned)style;	// 0x32090e75
- (void)enqueueNotification:(id)notification postingStyle:(unsigned)style coalesceMask:(unsigned)mask forModes:(id)modes;	// 0x32090e99
@end

