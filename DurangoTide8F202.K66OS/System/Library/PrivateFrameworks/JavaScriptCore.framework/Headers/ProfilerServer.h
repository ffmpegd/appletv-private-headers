/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/JavaScriptCore.framework/JavaScriptCore
 */

#import <NSObject.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface ProfilerServer : NSObject {
@private
	NSString *_serverName;	// 4 = 0x4
	unsigned _listenerCount;	// 8 = 0x8
}
+ (id)sharedProfileServer;	// 0x325f6425
- (id)init;	// 0x325f646d
- (void)startProfiling;	// 0x32697d19
- (void)stopProfiling;	// 0x32697be9
@end
