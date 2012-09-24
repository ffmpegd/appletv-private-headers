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
+ (void)executeWithTimeout:(double)timeout identifier:(id)identifier block:(id)block;	// 0x313c84f1
- (id)initWithTimeout:(double)timeout identifier:(id)identifier;	// 0x313c84f9
- (id)initWithTimeout:(double)timeout identifier:(id)identifier block:(id)block;	// 0x313c8511
- (void)dealloc;	// 0x313c8591
- (void)invalidate;	// 0x313c85f9
- (void)start;	// 0x313c8611
@end
