/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIInternalEvent.h"

@class NSMutableSet;

__attribute__((visibility("hidden")))
@interface UITouchesEvent : UIInternalEvent {
@private
	NSMutableSet *_touches;	// 16 = 0x10
	CFDictionaryRef _keyedTouches;	// 20 = 0x14
	CFDictionaryRef _keyedTouchesByWindow;	// 24 = 0x18
	CFDictionaryRef _gestureRecognizersByWindow;	// 28 = 0x1c
}
- (BOOL)_addGestureRecognizersForView:(id)view toTouch:(id)touch currentTouchMap:(CFDictionaryRef)map newTouchMap:(CFDictionaryRef)map4;	// 0x33994749
- (void)_addTouch:(id)touch forDelayedDelivery:(BOOL)delayedDelivery;	// 0x33994485
- (id)_allTouches;	// 0x33bac35d
- (void)_clearTouches;	// 0x33993631
- (void)_clearViewForTouch:(id)touch;	// 0x33998061
- (id)_cloneEvent;	// 0x33a7b719
- (void)_dismissSharedCalloutBarIfNeeded;	// 0x33994abd
- (id)_firstTouchForView:(id)view;	// 0x339963cd
- (id)_gestureRecognizersForWindow:(id)window;	// 0x33995229
- (id)_init;	// 0x339aa27d
- (id)_initWithEvent:(GSEventRef)event touches:(id)touches;	// 0x33a588f9
- (void)_invalidateGestureRecognizerForWindowCache;	// 0x339a4dc1
- (void)_moveTouchesFromView:(id)view toView:(id)view2;	// 0x33bac381
- (void)_removeTouch:(id)touch;	// 0x33997e91
- (void)_removeTouch:(id)touch fromGestureRecognizer:(id)gestureRecognizer;	// 0x33a7c565
- (void)_removeTouchesForKey:(id)key;	// 0x33998105
- (void)_removeTouchesForWindow:(id)window;	// 0x33998281
- (id)_touchesForGesture:(id)gesture withPhase:(int)phase;	// 0x33a0f6d5
- (void)_touchesForGesture:(id)gesture withPhase:(int)phase intoSet:(id)set;	// 0x33a79315
- (id)_touchesForGestureRecognizer:(id)gestureRecognizer;	// 0x33bac36d
- (id)_touchesForKey:(id)key;	// 0x339946c1
- (id)_touchesForView:(id)view withPhase:(int)phase;	// 0x33995699
- (id)_touchesForWindow:(id)window;	// 0x33994a75
- (id)_viewsForWindow:(id)window;	// 0x339955b1
- (id)_windows;	// 0x33994c95
- (id)allTouches;	// 0x33994d75
- (void)dealloc;	// 0x33a59305
- (id)description;	// 0x33bac3e9
- (id)touchesForGestureRecognizer:(id)gestureRecognizer;	// 0x33a0f7c9
- (id)touchesForView:(id)view;	// 0x339957c5
- (id)touchesForWindow:(id)window;	// 0x33995379
- (int)type;	// 0x33ae3159
@end

