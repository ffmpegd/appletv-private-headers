/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library

@class UIView, NSUndoManager;

@interface UIResponder : NSObject {
}
@property(readonly, assign, nonatomic) UIResponder *_editingDelegate;	// G=0x351c09f1; 
@property(readonly, assign, nonatomic) UIResponder *_responderForEditing;	// G=0x351c09cd; 
@property(readonly, assign) UIView *inputAccessoryView;	// G=0x350ba2dd; 
@property(readonly, assign) UIView *inputView;	// G=0x350ba24d; 
@property(readonly, assign, nonatomic) NSUndoManager *undoManager;	// G=0x352a4485; 
- (void)_becomeFirstResponder;	// 0x350b9a31
- (void)_becomeFirstResponderAndMakeVisible;	// 0x352a4609
- (BOOL)_becomeFirstResponderWhenPossible;	// 0x3512af9d
- (void)_beginPinningInputViews;	// 0x351ee3d5
- (void)_clearBecomeFirstResponderWhenCapable;	// 0x35155bdd
- (void)_completeForwardingTouches:(id)touches phase:(int)phase event:(id)event;	// 0x350cfba9
- (void)_completeForwardingTouches:(id)touches phase:(int)phase event:(id)event index:(unsigned)index;	// 0x350cfbcd
- (BOOL)_containedInAbsoluteResponderChain;	// 0x35112f15
- (BOOL)_containsResponder:(id)responder;	// 0x350d7681
- (void)_controlMouseDown:(GSEventRef)down;	// 0x352a459d
- (void)_controlMouseDragged:(GSEventRef)dragged;	// 0x352a45a5
- (void)_controlMouseUp:(GSEventRef)up;	// 0x352a45a1
- (void)_controlTouchBegan:(id)began withEvent:(id)event;	// 0x350d0b55
- (void)_controlTouchEnded:(id)ended withEvent:(id)event;	// 0x350d1e8d
- (void)_controlTouchMoved:(id)moved withEvent:(id)event;	// 0x351f9d1d
- (id)_deepestDefaultFirstResponder;	// 0x350dfe39
- (id)_deepestDefaultFirstResponderMatching:(id)matching;	// 0x352a4619
// declared property getter: - (id)_editingDelegate;	// 0x351c09f1
- (void)_endPinningInputViews;	// 0x35191e89
- (void)_finishResignFirstResponder;	// 0x350d77a1
- (id)_firstResponder;	// 0x350d81cd
- (void)_handleKeyEvent:(GSEventRef)event;	// 0x351cd825
- (BOOL)_isPinningInputViews;	// 0x35191e2d
- (BOOL)_isRootForKeyResponderCycle;	// 0x352a4481
- (BOOL)_isSettingFirstResponder;	// 0x350b9855
- (BOOL)_isTransitioningFromView:(id)view;	// 0x351d237d
- (id)_keyboardResponder;	// 0x350ba3b1
- (id)_nextFirstResponderIfAllowed;	// 0x350d76c1
- (id)_nextKeyResponder;	// 0x352a4479
- (id)_previousKeyResponder;	// 0x352a447d
- (BOOL)_promoteDeepestDefaultFirstResponder;	// 0x350dfce1
- (BOOL)_requiresKeyboardResetOnReload;	// 0x350ba0a1
- (BOOL)_requiresKeyboardWhenFirstResponder;	// 0x350ba331
- (void)_resignFirstResponder;	// 0x350d8111
- (id)_responderForBecomeFirstResponder;	// 0x350d767d
// declared property getter: - (id)_responderForEditing;	// 0x351c09cd
- (void)_setFirstResponder:(id)responder;	// 0x350b9a45
- (void)_setIsSettingFirstResponder:(BOOL)responder;	// 0x350b9975
- (BOOL)_shouldUseDefaultFirstResponder;	// 0x350dfed1
- (BOOL)_shouldUseKeyWindowStack;	// 0x350d81f5
- (BOOL)_shouldUseNextFirstResponder;	// 0x350d7709
- (id)_targetForAction:(SEL)action withSender:(id)sender;	// 0x352a45a9
- (id)_window;	// 0x3513678d
- (void)_windowBecameKey;	// 0x351d2311
- (void)_windowResignedKey;	// 0x351d230d
- (BOOL)becomeFirstResponder;	// 0x350b95e1
- (BOOL)canBecomeFirstResponder;	// 0x350d81c9
- (BOOL)canPerformAction:(SEL)action withSender:(id)sender;	// 0x35192821
- (BOOL)canResignFirstResponder;	// 0x350d76bd
- (id)defaultFirstResponder;	// 0x350dfecd
- (id)firstResponder;	// 0x350b98e9
- (void)gestureChanged:(GSEventRef)changed;	// 0x352a4475
- (void)gestureEnded:(GSEventRef)ended;	// 0x352a4471
- (void)gestureStarted:(GSEventRef)started;	// 0x352a446d
// declared property getter: - (id)inputAccessoryView;	// 0x350ba2dd
// declared property getter: - (id)inputView;	// 0x350ba24d
- (BOOL)isFirstResponder;	// 0x350b9c71
- (void)motionBegan:(int)began withEvent:(id)event;	// 0x352a4459
- (void)motionCancelled:(int)cancelled withEvent:(id)event;	// 0x352a4461
- (void)motionEnded:(int)ended withEvent:(id)event;	// 0x352a445d
- (void)mouseDown:(GSEventRef)down;	// 0x352a4405
- (void)mouseDragged:(GSEventRef)dragged;	// 0x352a4449
- (void)mouseEntered:(GSEventRef)entered;	// 0x352a444d
- (void)mouseExited:(GSEventRef)exited;	// 0x352a4451
- (void)mouseMoved:(GSEventRef)moved;	// 0x352a4455
- (void)mouseUp:(GSEventRef)up;	// 0x352a4445
- (id)nextFirstResponder;	// 0x350d773d
- (id)nextResponder;	// 0x350ba2d9
- (void)reloadInputViews;	// 0x350b9bc9
- (void)reloadInputViewsWithoutReset;	// 0x352a44c1
- (void)remoteControlReceivedWithEvent:(id)event;	// 0x352a4465
- (BOOL)resignFirstResponder;	// 0x350b7429
- (void)scrollWheel:(GSEventRef)wheel;	// 0x352a4469
- (id)textInputView;	// 0x353a8325
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x351dd801
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x351d3651
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x351dfd59
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x352137c9
// declared property getter: - (id)undoManager;	// 0x352a4485
@end

