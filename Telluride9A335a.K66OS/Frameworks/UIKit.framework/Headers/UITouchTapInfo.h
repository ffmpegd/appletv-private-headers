/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface UITouchTapInfo : NSObject {
@private
	unsigned _tapCount;	// 4 = 0x4
	float _multiTapDelay;	// 8 = 0x8
	float _rejectAsTapThrehold;	// 12 = 0xc
	float _viewTouchPauseThreshold;	// 16 = 0x10
	CGPoint _startPosition;	// 20 = 0x14
	double _startTime;	// 28 = 0x1c
}
- (BOOL)_touchLocationConsideredMovement:(id)movement;	// 0x33bad355
- (BOOL)cancelTouchTracking;	// 0x33bad539
- (void)clearTapState;	// 0x33bad1e5
- (void)releaseAndClearWeakRefs;	// 0x33bad1a9
- (void)touchBegan:(id)began withEvent:(id)event;	// 0x33bad235
- (void)touchEnded:(id)ended withEvent:(id)event;	// 0x33bad459
- (void)touchMoved:(id)moved withEvent:(id)event;	// 0x33bad415
@end

