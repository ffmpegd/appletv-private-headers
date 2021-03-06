/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIView.h"
#import "UIKit-Structs.h"

@class UIKBScreenTraits, UITouch, UITextInputTraits, NSMutableArray, UIKeyboardTaskQueue;

@interface UIKeyboardLayout : UIView {
	UITextInputTraits *_inputTraits;	// 96 = 0x60
	UIKBScreenTraits *_screenTraits;	// 100 = 0x64
	NSMutableArray *_uncommittedTouches;	// 104 = 0x68
	UITouch *_activeTouch;	// 108 = 0x6c
	UITouch *_shiftKeyTouch;	// 112 = 0x70
	UIKeyboardTaskQueue *_taskQueue;	// 116 = 0x74
}
@property(retain, nonatomic) UITouch *activeTouch;	// G=0x2f4eee49; S=0x2f4ec749; @synthesize=_activeTouch
@property(readonly, assign, nonatomic) int orientation;	// G=0x2f4ce62d; 
@property(retain, nonatomic) UITouch *shiftKeyTouch;	// G=0x2f660519; S=0x2f4ce321; @synthesize=_shiftKeyTouch
@property(retain, nonatomic) UIKeyboardTaskQueue *taskQueue;	// G=0x2f65f539; S=0x2f65f589; 
- (id)initWithFrame:(CGRect)frame;	// 0x2f4c334d
- (BOOL)acceptsDirectionInput;	// 0x2f6604cd
- (id)activationIndicatorView;	// 0x2f65f6a9
// declared property getter: - (id)activeTouch;	// 0x2f4eee49
- (void)addWipeRecognizer;	// 0x2f65f4a1
- (id)baseKeyForString:(id)string;	// 0x2f6604f1
- (BOOL)canForceTouchCommit:(id)commit;	// 0x2f66044d
- (BOOL)canMultitap;	// 0x2f65f67d
- (BOOL)canProduceString:(id)string;	// 0x2f65f6b1
- (id)candidateList;	// 0x2f65f671
- (void)changeToKeyplane:(id)keyplane;	// 0x2f6604fd
- (void)clearShiftIfNecessaryForEndedTouch:(id)endedTouch;	// 0x2f65fda5
- (void)clearUnusedObjects:(BOOL)objects;	// 0x2f65f639
- (void)commitTouches:(id)touches;	// 0x2f6600d9
- (void)commitTouches:(id)touches executionContext:(id)context;	// 0x2f66028d
- (id)currentKeyplane;	// 0x2f6604ed
- (void)deactivateActiveKeys;	// 0x2f65f63d
- (void)deactivateActiveKeysClearingTouchInfo:(BOOL)info clearingDimming:(BOOL)dimming;	// 0x2f65f6a5
- (void)dealloc;	// 0x2f55cbf9
- (void)didClearInput;	// 0x2f4ea6f5
- (void)didCommitTouch:(id)touch;	// 0x2f65fb31
- (CGSize)dragGestureSize;	// 0x2f6604a5
- (void)fadeWithInvocation:(id)invocation;	// 0x2f6604d1
- (float)flickDistance;	// 0x2f660461
- (void)forceUpdatesForCommittedTouch;	// 0x2f660259
- (CGRect)frameForKeylayoutName:(id)keylayoutName;	// 0x2f6604b1
- (SEL)handlerForNotification:(id)notification;	// 0x2f6604c9
- (BOOL)hasAccentKey;	// 0x2f65f679
- (BOOL)hasCandidateKeys;	// 0x2f65f675
- (float)hitBuffer;	// 0x2f66045d
- (BOOL)ignoresShiftState;	// 0x2f65f649
- (BOOL)isAlphabeticPlane;	// 0x2f65f64d
- (BOOL)isShiftKeyBeingHeld;	// 0x2f65f659
- (BOOL)isShiftKeyPlaneChooser;	// 0x2f65f65d
- (id)keyplaneForKey:(id)key;	// 0x2f6604f5
- (id)keyplaneNamed:(id)named;	// 0x2f6604f9
- (void)longPressAction;	// 0x2f65f661
// declared property getter: - (int)orientation;	// 0x2f4ce62d
- (BOOL)performReturnAction;	// 0x2f65f669
- (BOOL)performSpaceAction;	// 0x2f65f66d
- (void)physicalKeyDownWithEvent:(id)event;	// 0x2f660455
- (void)physicalKeyUpWithEvent:(id)event;	// 0x2f660459
- (void)remoteControlReceivedWithEvent:(id)event;	// 0x2f660451
- (void)restoreDefaultsForAllKeys;	// 0x2f65f69d
- (void)restoreDefaultsForKey:(id)key;	// 0x2f65f699
- (void)setAction:(SEL)action forKey:(id)key;	// 0x2f65f691
// declared property setter: - (void)setActiveTouch:(id)touch;	// 0x2f4ec749
- (void)setAutoshift:(BOOL)autoshift;	// 0x2f65f655
- (void)setLabel:(id)label forKey:(id)key;	// 0x2f65f689
- (void)setLayoutTag:(id)tag;	// 0x2f65f685
- (void)setLongPressAction:(SEL)action forKey:(id)key;	// 0x2f65f695
- (void)setRenderConfig:(id)config;	// 0x2f65f681
- (void)setReturnKeyEnabled:(BOOL)enabled withDisplayName:(id)displayName withType:(int)type;	// 0x2f65f6a1
- (void)setShift:(BOOL)shift;	// 0x2f65f651
// declared property setter: - (void)setShiftKeyTouch:(id)touch;	// 0x2f4ce321
- (void)setTarget:(id)target forKey:(id)key;	// 0x2f65f68d
// declared property setter: - (void)setTaskQueue:(id)queue;	// 0x2f65f589
// declared property getter: - (id)shiftKeyTouch;	// 0x2f660519
- (BOOL)shouldFadeFromLayout;	// 0x2f6604e5
- (BOOL)shouldFadeToLayout;	// 0x2f6604e9
- (BOOL)shouldShowIndicator;	// 0x2f65f6ad
- (void)showKeyboardWithInputTraits:(id)inputTraits screenTraits:(id)traits splitTraits:(id)traits3;	// 0x2f65f5cd
- (id)simulateTouch:(CGPoint)touch;	// 0x2f660501
- (id)simulateTouchForCharacter:(id)character errorVector:(CGPoint)vector shouldTypeVariants:(BOOL)variants baseKeyForVariants:(BOOL)variants4;	// 0x2f66050d
// declared property getter: - (id)taskQueue;	// 0x2f65f539
- (void)touchCancelled:(id)cancelled;	// 0x2f65fb9d
- (void)touchCancelled:(id)cancelled executionContext:(id)context;	// 0x2f65fd8d
- (void)touchDown:(id)down;	// 0x2f65f6b5
- (void)touchDown:(id)down executionContext:(id)context;	// 0x2f65f79d
- (void)touchDragged:(id)dragged;	// 0x2f65f7b1
- (void)touchDragged:(id)dragged executionContext:(id)context;	// 0x2f65f8c1
- (void)touchUp:(id)up;	// 0x2f65f8d9
- (void)touchUp:(id)up executionContext:(id)context;	// 0x2f65fb89
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x2f4eb6c1
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x2f65feed
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x2f4ec759
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x2f51f20d
- (id)touchesToCommitBeforeTouch:(id)commitBeforeTouch;	// 0x2f65fff5
- (void)updateLocalizedKeys:(BOOL)keys;	// 0x2f65f641
- (BOOL)usesAutoShift;	// 0x2f65f645
- (void)wipeGestureRecognized:(id)recognized;	// 0x2f65f44d
@end

