/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import <NSObject.h> // Unknown library

@class NSString;
@protocol OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface EKWatchdog : NSObject {
	double _timeout;	// 4 = 0x4
	NSString *_identifier;	// 12 = 0xc
	NSObject<OS_dispatch_source> *_timer;	// 16 = 0x10
}
+ (void)executeWithTimeout:(double)timeout identifier:(id)identifier block:(id)block;	// 0x368005d1
- (id)initWithTimeout:(double)timeout identifier:(id)identifier;	// 0x368005d9
- (id)initWithTimeout:(double)timeout identifier:(id)identifier block:(id)block;	// 0x368005f1
- (void)dealloc;	// 0x36800671
- (void)invalidate;	// 0x368006d9
- (void)start;	// 0x368006f1
@end

