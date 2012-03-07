/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIKeyboardImplGeometryDelegate.h"
#import "UIView.h"

@class UITextInputTraits, UIImage;

@interface UIKeyboard : UIView <UIKeyboardImplGeometryDelegate> {
	UIImage *m_snapshot;	// 48 = 0x30
	UITextInputTraits *m_defaultTraits;	// 52 = 0x34
	BOOL m_typingDisabled;	// 56 = 0x38
	BOOL m_minimized;	// 57 = 0x39
	BOOL m_respondingToImplGeometryChange;	// 58 = 0x3a
	int m_orientation;	// 60 = 0x3c
}
@property(retain) id defaultTextInputTraits;	// G=0x32e99259; S=0x32e992bd; converted property
@property(assign, nonatomic, getter=isMinimized) BOOL minimized;	// G=0x32d6743d; S=0x32e99aed; 
@property(readonly, assign) int orientation;	// G=0x32d6e405; converted property
@property(assign) BOOL returnKeyEnabled;	// G=0x32e991cd; S=0x32e99211; converted property
@property(assign, nonatomic) BOOL typingEnabled;	// G=0x32e99499; S=0x32e994b1; 
+ (void)initImplementationNow;	// 0x32e98d21
+ (void)_clearActiveKeyboard;	// 0x32e98d11
+ (id)activeKeyboard;	// 0x32ceb9cd
+ (CGRect)defaultFrameForInterfaceOrientation:(int)interfaceOrientation;	// 0x32e98d59
+ (CGSize)defaultSize;	// 0x32ddcf3d
+ (CGSize)defaultSizeForInterfaceOrientation:(int)interfaceOrientation;	// 0x32d6065d
+ (CGSize)defaultSizeForOrientation:(int)orientation;	// 0x32e9911d
+ (BOOL)isOnScreen;	// 0x32d708dd
+ (CGSize)keyboardSizeForInterfaceOrientation:(int)interfaceOrientation;	// 0x32e99149
+ (CGRect)onscreenFrameForTextInputTraits:(id)textInputTraits;	// 0x32e98e79
+ (void)removeAllDynamicDictionaries;	// 0x32e98d3d
+ (BOOL)respondsToProxGesture;	// 0x32e990d5
+ (CGSize)sizeForInterfaceOrientation:(int)interfaceOrientation;	// 0x32cf6f45
- (id)initWithDefaultSize;	// 0x32e98bf5
- (id)initWithFrame:(CGRect)frame;	// 0x32d60751
- (void)_acceptCurrentCandidate;	// 0x32e9a665
- (id)_baseKeyForRepresentedString:(id)representedString;	// 0x32e14fdd
- (void)_changeToKeyplane:(id)keyplane;	// 0x32e9a509
- (void)_clearCurrentInputManager;	// 0x32e9a699
- (id)_getAutocorrection;	// 0x32e9a631
- (id)_getCurrentKeyboardName;	// 0x32e9a459
- (id)_getCurrentKeyplaneName;	// 0x32e157cd
- (id)_getLocalizedInputMode;	// 0x32e9a48d
- (BOOL)_hasCandidates;	// 0x32e9a709
- (BOOL)_isAutomaticKeyboard;	// 0x32f92b3d
- (id)_keyplaneForKey:(id)key;	// 0x32e155e5
- (id)_keyplaneNamed:(id)named;	// 0x32e9a4c1
- (int)_positionInCandidateList:(id)candidateList;	// 0x32e9a765
- (void)_setAutocorrects:(BOOL)autocorrects;	// 0x32e9a5f9
- (void)_setInputMode:(id)mode;	// 0x32e9a5c1
- (id)_touchPoint:(CGPoint)point;	// 0x32e9a551
- (id)_typeCharacter:(id)character withError:(CGPoint)error shouldTypeVariants:(BOOL)variants baseKeyForVariants:(BOOL)variants4;	// 0x32e15869
- (void)acceptAutocorrection;	// 0x32d96c09
- (void)activate;	// 0x32d6e165
- (void)autoAdjustOrientation;	// 0x32d60cf9
- (void)autoAdjustOrientationForSize:(CGSize)size;	// 0x32d60a61
- (BOOL)canDismiss;	// 0x32e9a051
- (void)clearSnapshot;	// 0x32e99395
- (void)deactivate;	// 0x32e994cd
- (void)dealloc;	// 0x32e98c6d
// converted property getter: - (id)defaultTextInputTraits;	// 0x32e99259
- (id)delegate;	// 0x32e99351
- (void)displayLayer:(id)layer;	// 0x32d6fb6d
- (void)geometryChangeDone:(BOOL)done;	// 0x32d71515
- (UIPeripheralAnimationGeometry)geometryForImplHeightDelta:(float)implHeightDelta;	// 0x32e99c69
- (UIPeripheralAnimationGeometry)geometryForMinimize:(BOOL)minimize;	// 0x32e995e9
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x32d83cd9
- (void)implBoundsHeightChangeDone:(float)done suppressNotification:(BOOL)notification;	// 0x32e99eed
- (int)interfaceOrientation;	// 0x32e99175
- (BOOL)isActive;	// 0x32d6d851
// declared property getter: - (BOOL)isMinimized;	// 0x32d6743d
- (void)keyboardMinMaximized:(id)maximized finished:(id)finished context:(id)context;	// 0x32e99b69
- (void)manualKeyboardWasOrderedIn;	// 0x32e9a3b1
- (void)manualKeyboardWasOrderedOut;	// 0x32e9a421
- (void)manualKeyboardWillBeOrderedIn;	// 0x32e9a379
- (void)manualKeyboardWillBeOrderedOut;	// 0x32e9a3e9
- (void)maximize;	// 0x32e99931
- (void)minimize;	// 0x32e99775
- (void)movedFromSuperview:(id)superview;	// 0x32d6e06d
// converted property getter: - (int)orientation;	// 0x32d6e405
- (BOOL)pointInside:(CGPoint)inside forEvent:(GSEventRef)event;	// 0x32d72e89
- (BOOL)pointInside:(CGPoint)inside withEvent:(id)event;	// 0x32d72e4d
- (void)prepareForGeometryChange;	// 0x32d6e509
- (void)prepareForImplBoundsHeightChange:(float)implBoundsHeightChange suppressNotification:(BOOL)notification;	// 0x32e99e1d
- (void)removeAutocorrectPrompt;	// 0x32d96bc5
- (void)removeFromSuperview;	// 0x32db7541
- (void)resizeForKeyplaneSize:(CGSize)keyplaneSize;	// 0x32d93045
// converted property getter: - (BOOL)returnKeyEnabled;	// 0x32e991cd
- (void)setCaretBlinks:(BOOL)blinks;	// 0x32e99185
- (void)setCaretVisible:(BOOL)visible;	// 0x32dce639
// converted property setter: - (void)setDefaultTextInputTraits:(id)traits;	// 0x32e992bd
- (void)setFrame:(CGRect)frame;	// 0x32d6087d
// declared property setter: - (void)setMinimized:(BOOL)minimized;	// 0x32e99aed
- (void)setNeedsDisplay;	// 0x32d609e1
// converted property setter: - (void)setReturnKeyEnabled:(BOOL)enabled;	// 0x32e99211
// declared property setter: - (void)setTypingEnabled:(BOOL)enabled;	// 0x32e994b1
- (void)syncMinimizedStateToHardwareKeyboardAttachedState;	// 0x32d6def9
- (void)takeSnapshot;	// 0x32e993c1
- (int)textEffectsVisibilityLevel;	// 0x32e995c9
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x32e995d9
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x32e995e5
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x32e995e1
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x32e995dd
// declared property getter: - (BOOL)typingEnabled;	// 0x32e99499
- (void)updateLayout;	// 0x32d96df5
@end

