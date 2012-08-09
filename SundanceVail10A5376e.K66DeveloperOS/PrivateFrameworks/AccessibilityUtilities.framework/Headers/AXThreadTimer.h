/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

#import "AXTimer.h"

@class NSThread, AXThreadTimerTask;

@interface AXThreadTimer : AXTimer {
	NSThread *_thread;	// 16 = 0x10
	id _cancelBlock;	// 20 = 0x14
	AXThreadTimerTask *_task;	// 24 = 0x18
}
@property(retain, nonatomic) AXThreadTimerTask *task;	// G=0x341b46ad; S=0x341b46bd; @synthesize=_task
- (id)initWithThread:(id)thread;	// 0x341b4331
- (void)_runAfterDelay:(id)delay;	// 0x341b4389
- (void)afterDelay:(double)delay processBlock:(id)block;	// 0x341b43e9
- (void)afterDelay:(double)delay processBlock:(id)block cancelBlock:(id)block3;	// 0x341b440d
- (void)cancel;	// 0x341b4575
- (void)dealloc;	// 0x341b464d
- (BOOL)isCancelled;	// 0x341b45dd
- (BOOL)isPending;	// 0x341b4605
// declared property setter: - (void)setTask:(id)task;	// 0x341b46bd
// declared property getter: - (id)task;	// 0x341b46ad
@end
