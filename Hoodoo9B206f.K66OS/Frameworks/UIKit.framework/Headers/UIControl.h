/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class NSMutableArray;

@interface UIControl : UIView {
@private
	NSMutableArray *_targetActions;	// 48 = 0x30
	CGPoint _previousPoint;	// 52 = 0x34
	double _downTime;	// 60 = 0x3c
	struct {
		unsigned disabled : 1;
		unsigned tracking : 1;
		unsigned touchInside : 1;
		unsigned touchDragged : 1;
		unsigned requiresDisplayOnTracking : 1;
		unsigned highlighted : 1;
		unsigned dontHighlightOnTouchDown : 1;
		unsigned delayActions : 1;
		unsigned allowActionsToQueue : 1;
		unsigned pendingUnhighlight : 1;
		unsigned selected : 1;
		unsigned verticalAlignment : 2;
		unsigned horizontalAlignment : 2;
	} _controlFlags;	// 68 = 0x44
}
@property(assign, nonatomic) int contentHorizontalAlignment;	// G=0x35324461; S=0x3535111d; @dynamic
@property(assign, nonatomic) int contentVerticalAlignment;	// G=0x35324475; S=0x3535119d; @dynamic
@property(assign, nonatomic, getter=isEnabled) BOOL enabled;	// G=0x35321631; S=0x35332815; @dynamic
@property(assign, nonatomic, getter=isHighlighted) BOOL highlighted;	// G=0x35321e15; S=0x35321e29; @dynamic
@property(assign) BOOL requiresDisplayOnTracking;	// G=0x35321ee1; S=0x35385f49; converted property
@property(assign, nonatomic, getter=isSelected) BOOL selected;	// G=0x35323e6d; S=0x353d6629; @dynamic
@property(readonly, assign, nonatomic) unsigned state;	// G=0x35323e05; @dynamic
@property(readonly, assign, nonatomic, getter=isTouchInside) BOOL touchInside;	// G=0x3532259d; @dynamic
@property(readonly, assign, nonatomic, getter=isTracking) BOOL tracking;	// G=0x35321911; @dynamic
- (id)initWithCoder:(id)coder;	// 0x354e0899
- (id)initWithFrame:(CGRect)frame;	// 0x353509a5
- (void)_cancelDelayedActions;	// 0x3536fb45
- (void)_connectInterfaceBuilderEventConnection:(id)connection;	// 0x3557ed91
- (void)_delayActions;	// 0x354e15a9
- (void)_didMoveFromWindow:(id)window toWindow:(id)window2;	// 0x3532dd7d
- (BOOL)_hasActionForEventMask:(int)eventMask;	// 0x354e1539
- (void)_sendActionsForEventMask:(int)eventMask withEvent:(GSEventRef)event;	// 0x353ee4c1
- (void)_sendActionsForEvents:(int)events withEvent:(id)event;	// 0x35321925
- (void)_sendDelayedActions;	// 0x354e15c1
- (void)_sendDelayedActions:(BOOL)actions;	// 0x35321b39
- (void)_setHighlightOnMouseDown:(BOOL)down;	// 0x353ab28d
- (void)_unhighlight;	// 0x35328b99
- (id)actionsForTarget:(id)target forControlEvent:(unsigned)controlEvent;	// 0x354e141d
- (void)addTarget:(id)target action:(SEL)action forControlEvents:(unsigned)controlEvents;	// 0x35353a5d
- (void)addTarget:(id)target action:(SEL)action forEvents:(int)events;	// 0x35373155
- (unsigned)allControlEvents;	// 0x354e1371
- (id)allTargets;	// 0x354e1279
- (BOOL)beginTrackingAt:(CGPoint)at withEvent:(GSEventRef)event;	// 0x354e16d1
- (BOOL)beginTrackingWithTouch:(id)touch withEvent:(id)event;	// 0x353218bd
- (BOOL)cancelMouseTracking;	// 0x35472b8d
- (BOOL)cancelTouchTracking;	// 0x354e0b1d
- (void)cancelTrackingWithEvent:(id)event;	// 0x3545eba5
// declared property getter: - (int)contentHorizontalAlignment;	// 0x35324461
// declared property getter: - (int)contentVerticalAlignment;	// 0x35324475
- (BOOL)continueTrackingAt:(CGPoint)at previous:(CGPoint)previous withEvent:(GSEventRef)event;	// 0x354e16d5
- (BOOL)continueTrackingWithTouch:(id)touch withEvent:(id)event;	// 0x35465111
- (void)dealloc;	// 0x35374cb1
- (void)encodeWithCoder:(id)coder;	// 0x354e0a1d
- (void)endTrackingAt:(CGPoint)at previous:(CGPoint)previous withEvent:(GSEventRef)event;	// 0x354e16d9
- (void)endTrackingWithTouch:(id)touch withEvent:(id)event;	// 0x353225b1
- (BOOL)hasOneOrMoreTargets;	// 0x354e1671
- (id)hitTest:(CGPoint)test forEvent:(GSEventRef)event;	// 0x354e0b55
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x353215d9
// declared property getter: - (BOOL)isEnabled;	// 0x35321631
// declared property getter: - (BOOL)isHighlighted;	// 0x35321e15
// declared property getter: - (BOOL)isSelected;	// 0x35323e6d
// declared property getter: - (BOOL)isTouchInside;	// 0x3532259d
// declared property getter: - (BOOL)isTracking;	// 0x35321911
- (void)mouseDown:(GSEventRef)down;	// 0x354e0bad
- (void)mouseDragged:(GSEventRef)dragged;	// 0x354e0d1d
- (BOOL)mouseInside;	// 0x354e16b9
- (void)mouseUp:(GSEventRef)up;	// 0x354e0f15
- (BOOL)pointMostlyInside:(CGPoint)inside forEvent:(GSEventRef)event;	// 0x354e15d5
- (BOOL)pointMostlyInside:(CGPoint)inside withEvent:(id)event;	// 0x353e74e9
- (void)removeTarget:(id)target action:(SEL)action forControlEvents:(unsigned)controlEvents;	// 0x3536fa61
- (void)removeTarget:(id)target forEvents:(int)events;	// 0x354e1699
// converted property getter: - (BOOL)requiresDisplayOnTracking;	// 0x35321ee1
- (void)sendAction:(SEL)action to:(id)to forEvent:(id)event;	// 0x35321d75
- (void)sendAction:(SEL)action toTarget:(id)target forEvent:(GSEventRef)event;	// 0x3544462d
- (void)sendActionsForControlEvents:(unsigned)controlEvents;	// 0x35428165
// declared property setter: - (void)setContentHorizontalAlignment:(int)alignment;	// 0x3535111d
// declared property setter: - (void)setContentVerticalAlignment:(int)alignment;	// 0x3535119d
// declared property setter: - (void)setEnabled:(BOOL)enabled;	// 0x35332815
// declared property setter: - (void)setHighlighted:(BOOL)highlighted;	// 0x35321e29
// converted property setter: - (void)setRequiresDisplayOnTracking:(BOOL)tracking;	// 0x35385f49
// declared property setter: - (void)setSelected:(BOOL)selected;	// 0x353d6629
- (void)setTracking:(BOOL)tracking;	// 0x353218ed
- (BOOL)shouldTrack;	// 0x353217a9
// declared property getter: - (unsigned)state;	// 0x35323e05
- (BOOL)touchDragged;	// 0x354e165d
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x35321649
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x3544204d
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x3532226d
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x3544b26d
@end

