/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library

@class UIView;

__attribute__((visibility("hidden")))
@interface UIViewTapInfo : NSObject {
@private
	id _delegate;	// 4 = 0x4
	UIView *_view;	// 8 = 0x8
	int _tapDownCount;	// 12 = 0xc
	int _fingerCount;	// 16 = 0x10
	float _multiTapDelay;	// 20 = 0x14
	float _rejectAsTapThrehold;	// 24 = 0x18
	float _viewTouchPauseThreshold;	// 28 = 0x1c
	CGPoint _startPosition;	// 32 = 0x20
	double _startTime;	// 40 = 0x28
	struct {
		unsigned shouldSendTouchPauseUp : 1;
		unsigned delegateViewHandleTapWithCountEvent : 1;
		unsigned delegateViewHandleTapWithCountEventFingerCount : 1;
		unsigned delegateViewHandleTouchPauseIsDown : 1;
		unsigned reserved : 28;
	} _tapInfoFlags;	// 48 = 0x30
}
- (id)initWithDelegate:(id)delegate view:(id)view;	// 0x32e388e5
- (BOOL)_eventLocationConsideredMovement:(GSEventRef)movement;	// 0x32e3905d
- (void)_handleTapWithCount:(int)count event:(GSEventRef)event;	// 0x32e38bb5
- (void)_sendTouchPauseDownIfNecessary;	// 0x32e38df9
- (void)_sendTouchPauseUpIfNecessary;	// 0x32e38e8d
- (BOOL)cancelMouseTracking;	// 0x32e392dd
- (void)clearTapState;	// 0x32e38995
- (void)handleDoubleTapEvent:(GSEventRef)event;	// 0x32e38cc5
- (void)handleSingleTapEvent:(GSEventRef)event;	// 0x32e38cb1
- (void)mouseDown:(GSEventRef)down;	// 0x32e38f05
- (void)mouseDragged:(GSEventRef)dragged;	// 0x32e390d9
- (void)mouseUp:(GSEventRef)up;	// 0x32e3915d
- (void)releaseAndClearWeakRefs;	// 0x32e3893d
- (void)scheduleSingleTapHandlerForEvent:(GSEventRef)event;	// 0x32e38cd9
- (void)setDelegate:(id)delegate;	// 0x32e389f5
@end

