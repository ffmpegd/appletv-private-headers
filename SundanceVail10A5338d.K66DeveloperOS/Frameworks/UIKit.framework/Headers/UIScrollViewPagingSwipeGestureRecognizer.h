/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIGestureRecognizer.h"

@class UIDelayedAction;

__attribute__((visibility("hidden")))
@interface UIScrollViewPagingSwipeGestureRecognizer : UIGestureRecognizer {
	UIDelayedAction *_swipeFailureDelay;	// 56 = 0x38
	CGPoint _startLocation;	// 60 = 0x3c
	CGPoint _lastLocation;	// 68 = 0x44
	double _lastTime;	// 76 = 0x4c
	int _directionalFailureCount;	// 84 = 0x54
}
- (void)_processNewLocation:(CGPoint)location;	// 0x30f0f849
- (void)_resetGestureRecognizer;	// 0x30d7f55d
- (void)clearTimer;	// 0x30d7f4e5
- (void)dealloc;	// 0x30d805dd
- (void)enoughTimeElapsed:(id)elapsed;	// 0x30f0f831
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x30d7f359
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x30f0fc79
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x30f0fb01
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x30f0faa5
@end
