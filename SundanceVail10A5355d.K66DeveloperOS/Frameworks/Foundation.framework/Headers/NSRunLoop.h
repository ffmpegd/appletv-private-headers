/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import <NSRunLoop.h> // Unknown library


@interface NSRunLoop (NSRunLoop)
+ (id)_new:(id)aNew;	// 0x346531dd
+ (id)currentRunLoop;	// 0x346383d1
+ (id)mainRunLoop;	// 0x34669bd9
- (id)init;	// 0x346d67c1
- (void)_addPort:(id)port forMode:(id)mode;	// 0x346d6245
- (BOOL)_containsPort:(id)port forMode:(id)mode;	// 0x346d6091
- (void)_enumerateInfoPairsWithBlock:(id)block;	// 0x346d5be1
- (void)_invalidateTimers;	// 0x346d6e09
- (void)_portInvalidated:(id)invalidated;	// 0x346d5cc9
- (void)_removePort:(id)port forMode:(id)mode;	// 0x346d6469
- (void)_wakeup;	// 0x346d6f31
- (void)acceptInputForMode:(id)mode beforeDate:(id)date;	// 0x346d6f5d
- (void)addPort:(id)port forMode:(id)mode;	// 0x346d683d
- (void)addTimer:(id)timer forMode:(id)mode;	// 0x3465fcf1
- (id)allModes;	// 0x346d6db1
- (void)cancelPerformSelector:(SEL)selector target:(id)target argument:(id)argument;	// 0x346d73d1
- (void)cancelPerformSelectorsWithTarget:(id)target;	// 0x34662cdd
- (BOOL)containsPort:(id)port forMode:(id)mode;	// 0x346d6a81
- (BOOL)containsTimer:(id)timer forMode:(id)mode;	// 0x346d6cbd
- (id)copyWithZone:(NSZone *)zone;	// 0x346d67ad
- (id)currentMode;	// 0x3463dc5d
- (void)dealloc;	// 0x34656709
- (id)description;	// 0x346d67d9
- (CFRunLoopRef)getCFRunLoop;	// 0x34638405
- (id)limitDateForMode:(id)mode;	// 0x346d6e0d
- (void)performSelector:(SEL)selector target:(id)target argument:(id)argument order:(unsigned)order modes:(id)modes;	// 0x346537ad
- (id)portsForMode:(id)mode;	// 0x346d6b85
- (void)removePort:(id)port forMode:(id)mode;	// 0x346d6975
- (void)removeTimer:(id)timer forMode:(id)mode;	// 0x346d6ba5
- (void)run;	// 0x346547b5
- (BOOL)runBeforeDate:(id)date;	// 0x346d716d
- (BOOL)runMode:(id)mode beforeDate:(id)date;	// 0x3463a9b1
- (BOOL)runMode:(id)mode untilDate:(id)date;	// 0x346d706d
- (void)runUntilDate:(id)date;	// 0x3465fdf1
- (id)timersForMode:(id)mode;	// 0x346d6ca1
@end

