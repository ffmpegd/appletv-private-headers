/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class NSTimer, NSMutableArray, NSMutableSet;

__attribute__((visibility("hidden")))
@interface _UIViewServiceFencingController : NSObject {
	int _lock;	// 4 = 0x4
	NSMutableSet *_pendingFenceSendRights;	// 8 = 0x8
	NSMutableArray *_resumeActions;	// 12 = 0xc
	unsigned _expectedParticipatingFencingProxyCount;	// 16 = 0x10
	NSTimer *_fencingControlTimeoutTimer;	// 20 = 0x14
}
- (id)init;	// 0x33e385f9
- (void)_fencingControlTimedOut;	// 0x33e38d19
- (void)dealloc;	// 0x33e38689
- (void)fencingControlProxy:(id)proxy didBeginFencingWithSendRight:(id)sendRight expectedParticipatingFencingProxyCount:(unsigned)count;	// 0x33e387bd
- (void)fencingControlProxy:(id)proxy didEndFencingWithSendRight:(id)sendRight;	// 0x33e389f1
@end
