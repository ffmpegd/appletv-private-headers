/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <NSCondition.h> // Unknown library

@class NSMutableArray;

@interface AVRunLoopCondition : NSCondition {
	NSMutableArray *_runLoopStateList;	// 8 = 0x8
}
- (id)init;	// 0x30b13269
- (void)_signalRunLoopWithState:(id)state;	// 0x30b136f1
- (BOOL)_waitInMode:(id)mode untilDate:(id)date;	// 0x30b13375
- (void)broadcast;	// 0x30b13649
- (void)dealloc;	// 0x30b132cd
- (void)signal;	// 0x30b135f1
- (void)wait;	// 0x30b13319
- (void)waitInMode:(id)mode;	// 0x30b13345
- (BOOL)waitUntilDate:(id)date;	// 0x30b1332d
- (BOOL)waitUntilDate:(id)date inMode:(id)mode;	// 0x30b13359
@end

