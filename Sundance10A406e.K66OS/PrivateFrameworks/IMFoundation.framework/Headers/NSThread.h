/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

#import <NSThread.h> // Unknown library


@interface NSThread (_IMThreadBlockSupport)
+ (void)_im_runBlock:(id)block;	// 0x368786a1
- (void)__im_performBlock:(id)block;	// 0x36878731
- (void)__im_performBlock:(id)block afterDelay:(double)delay;	// 0x368788f5
- (void)__im_performBlock:(id)block afterDelay:(double)delay modes:(id)modes;	// 0x3687894d
- (void)__im_performBlock:(id)block modes:(id)modes;	// 0x36878791
- (void)__im_performBlock:(id)block waitUntilDone:(BOOL)done;	// 0x36878819
- (void)__im_performBlock:(id)block waitUntilDone:(BOOL)done modes:(id)modes;	// 0x36878885
@end

