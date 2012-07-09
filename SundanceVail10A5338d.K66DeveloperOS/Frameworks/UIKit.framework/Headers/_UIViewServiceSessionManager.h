/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class XPCListener, NSMutableArray;

__attribute__((visibility("hidden")))
@interface _UIViewServiceSessionManager : NSObject {
	int _lock;	// 4 = 0x4
	NSMutableArray *_sessions;	// 8 = 0x8
	XPCListener *_listener;	// 12 = 0xc
	NSMutableArray *_incomingConnections;	// 16 = 0x10
	int _connectionNotificationToken;	// 20 = 0x14
}
+ (BOOL)hasActiveSessions;	// 0x30febf3d
+ (void)startViewServiceSessionManager;	// 0x30febea1
- (id)init;	// 0x30febe49
- (id)_init;	// 0x30febfe9
- (void)_registerSessionForDefaultDeputies:(id)defaultDeputies;	// 0x30fec7c1
- (void)_startListener;	// 0x30fec16d
- (void)dealloc;	// 0x30febf61
- (BOOL)hasActiveSessions;	// 0x30fecc2d
@end
