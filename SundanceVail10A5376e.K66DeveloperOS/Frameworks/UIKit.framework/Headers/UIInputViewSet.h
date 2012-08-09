/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library

@class UIKeyboard, UIView;

__attribute__((visibility("hidden")))
@interface UIInputViewSet : NSObject {
	UIView *_inputView;	// 4 = 0x4
	UIView *_inputAccessoryView;	// 8 = 0x8
	BOOL _isKeyboard;	// 12 = 0xc
	BOOL _supportsSplit;	// 13 = 0xd
	BOOL _isSplit;	// 14 = 0xe
	float _splitHeightDelta;	// 16 = 0x10
}
@property(readonly, assign, nonatomic, getter=isEmpty) BOOL empty;	// G=0x30219111; 
@property(retain, nonatomic) UIView *inputAccessoryView;	// G=0x3021826d; S=0x302184b5; @synthesize=_inputAccessoryView
@property(readonly, assign, nonatomic) CGRect inputAccessoryViewBounds;	// G=0x30348445; 
@property(retain, nonatomic) UIView *inputView;	// G=0x3021827d; S=0x302184c5; @synthesize=_inputView
@property(readonly, assign, nonatomic) CGRect inputViewBounds;	// G=0x3033796d; 
@property(readonly, assign, nonatomic) BOOL inputViewKeyboardCanSplit;	// G=0x30547939; 
@property(readonly, assign, nonatomic) BOOL isSplit;	// G=0x3028ca25; @synthesize=_isSplit
@property(readonly, assign, nonatomic) UIKeyboard *keyboard;	// G=0x3028cb65; 
@property(readonly, assign, nonatomic) UIView *layeringView;	// G=0x305474dd; 
@property(assign, nonatomic) float splitHeightDelta;	// G=0x3054841d; S=0x3054842d; @synthesize=_splitHeightDelta
@property(readonly, assign, nonatomic) BOOL supportsSplit;	// G=0x3028ca8d; @synthesize=_supportsSplit
+ (id)emptyInputSet;	// 0x3021914d
+ (id)inputSetWithInputView:(id)inputView accessoryView:(id)view;	// 0x3021828d
+ (id)inputSetWithKeyboardAndAccessoryView:(id)keyboardAndAccessoryView;	// 0x30306351
- (id)initWithInputView:(id)inputView accessoryView:(id)view isKeyboard:(BOOL)keyboard;	// 0x302182e1
- (BOOL)__isCKAccessoryView;	// 0x305478e5
- (BOOL)_accessorySuppressesShadow;	// 0x30547ed9
- (void)_beginSplitTransitionIfNeeded;	// 0x30547fbd
- (void)_endSplitTransitionIfNeeded;	// 0x305481a5
- (BOOL)_inputAccessoryViewSupportsSplit;	// 0x3028e775
- (BOOL)_inputViewIsSplit;	// 0x30547985
- (BOOL)_inputViewIsVisible;	// 0x305475b9
- (BOOL)_inputViewSetSupportsSplit;	// 0x302184d9
- (BOOL)_inputViewSupportsSplit;	// 0x3028e6f9
- (CGRect)_leftInputViewSetFrame;	// 0x305479ed
- (CGRect)_rightInputViewSetFrame;	// 0x30547c59
- (void)_setSplitProgress:(float)progress;	// 0x305482d9
- (id)_splittableInputAccessoryView;	// 0x3028e7c1
- (BOOL)canAnimateToInputViewSet:(id)inputViewSet;	// 0x302f98ed
- (BOOL)containsResponder:(id)responder;	// 0x302185fd
- (void)dealloc;	// 0x302195b5
- (id)description;	// 0x30547605
- (BOOL)inSyncWithOrientation:(int)orientation forKeyboard:(id)keyboard;	// 0x30547839
// declared property getter: - (id)inputAccessoryView;	// 0x3021826d
// declared property getter: - (CGRect)inputAccessoryViewBounds;	// 0x30348445
// declared property getter: - (id)inputView;	// 0x3021827d
// declared property getter: - (CGRect)inputViewBounds;	// 0x3033796d
// declared property getter: - (BOOL)inputViewKeyboardCanSplit;	// 0x30547939
// declared property getter: - (BOOL)isEmpty;	// 0x30219111
- (BOOL)isEqual:(id)equal;	// 0x302191b1
// declared property getter: - (BOOL)isSplit;	// 0x3028ca25
- (BOOL)isStrictSupersetOfViewSet:(id)viewSet;	// 0x30369f85
// declared property getter: - (id)keyboard;	// 0x3028cb65
- (int)keyboardOrientation:(id)orientation;	// 0x305477c5
// declared property getter: - (id)layeringView;	// 0x305474dd
- (void)refreshPresentation;	// 0x3028e505
// declared property setter: - (void)setInputAccessoryView:(id)view;	// 0x302184b5
// declared property setter: - (void)setInputView:(id)view;	// 0x302184c5
// declared property setter: - (void)setSplitHeightDelta:(float)delta;	// 0x3054842d
// declared property getter: - (float)splitHeightDelta;	// 0x3054841d
// declared property getter: - (BOOL)supportsSplit;	// 0x3028ca8d
- (BOOL)usesKeyClicks;	// 0x30547515
- (BOOL)visible;	// 0x3028d875
@end
