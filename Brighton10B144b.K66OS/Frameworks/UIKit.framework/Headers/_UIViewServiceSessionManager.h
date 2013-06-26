/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class NSMutableArray, _UIViewServiceXPCListener;

__attribute__((visibility("hidden")))
@interface _UIViewServiceSessionManager : NSObject {
	int _lock;	// 4 = 0x4
	NSMutableArray *_sessions;	// 8 = 0x8
	_UIViewServiceXPCListener *_listener;	// 12 = 0xc
	NSMutableArray *_incomingConnections;	// 16 = 0x10
	int _connectionNotificationToken;	// 20 = 0x14
}
+ (BOOL)hasActiveSessions;	// 0x32b3c29d
+ (void)startViewServiceSessionManager;	// 0x32b3ac35
- (id)init;	// 0x32ee1a49
- (id)_init;	// 0x32b3ac61
- (void)_registerSessionForDefaultDeputies:(id)defaultDeputies;	// 0x32ee2235
- (void)_startListener;	// 0x32ee1bc1
- (void)dealloc;	// 0x32ee1b11
- (BOOL)hasActiveSessions;	// 0x32b3c2c1
@end
