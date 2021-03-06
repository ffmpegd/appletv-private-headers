/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SkankKit.framework/SkankKit
 */

#import <NSObject.h> // Unknown library

@class NSMutableArray;

@interface JAVNotificationCenter : NSObject {
	int _fd;	// 4 = 0x4
	int _listeningPort;	// 8 = 0x8
	NSMutableArray *_listenerArray;	// 12 = 0xc
}
+ (id)sharedInstance;	// 0x33123255
- (id)init;	// 0x33123325
- (void)acceptThread;	// 0x3312350d
- (void)addObserverForNotificationsFromPort:(int)port;	// 0x33123acd
- (void)dealloc;	// 0x331233a1
- (int)openConnectionToPort:(int)port;	// 0x33123a41
- (void)postNotification:(id)notification;	// 0x331237b1
- (void)postNotificationName:(id)name object:(id)object;	// 0x3312390d
- (void)postNotificationName:(id)name object:(id)object userInfo:(id)info;	// 0x33123949
- (void)processSocket:(int)socket;	// 0x331235d5
- (void)sendNotification:(id)notification toPort:(int)port;	// 0x33123991
- (void)setPort:(int)port;	// 0x33123381
- (void)startAcceptThread;	// 0x331234d1
- (void)startListeningThread;	// 0x331233ed
@end

