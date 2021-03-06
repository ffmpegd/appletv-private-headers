/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library

@class UIResponder, UIKeyboard, UIView;

__attribute__((visibility("hidden")))
@interface UIInputViewSet : NSObject {
	UIView *_inputView;	// 4 = 0x4
	UIView *_inputAccessoryView;	// 8 = 0x8
	BOOL _isKeyboard;	// 12 = 0xc
	BOOL _supportsSplit;	// 13 = 0xd
	BOOL _isSplit;	// 14 = 0xe
	float _splitHeightDelta;	// 16 = 0x10
	UIResponder *_restorableResponder;	// 20 = 0x14
}
@property(readonly, assign, nonatomic, getter=isEmpty) BOOL empty;	// G=0x31bd89e9; 
@property(retain, nonatomic) UIView *inputAccessoryView;	// G=0x31bd7b35; S=0x31bd7d7d; @synthesize=_inputAccessoryView
@property(readonly, assign, nonatomic) CGRect inputAccessoryViewBounds;	// G=0x31d07d55; 
@property(retain, nonatomic) UIView *inputView;	// G=0x31bd7b45; S=0x31bd7d8d; @synthesize=_inputView
@property(readonly, assign, nonatomic) CGRect inputViewBounds;	// G=0x31cf727d; 
@property(readonly, assign, nonatomic) BOOL inputViewKeyboardCanSplit;	// G=0x31f08e81; 
@property(readonly, assign, nonatomic) BOOL isSplit;	// G=0x31c4c465; @synthesize=_isSplit
@property(readonly, assign, nonatomic) UIKeyboard *keyboard;	// G=0x31c4c5a5; 
@property(readonly, assign, nonatomic) UIView *layeringView;	// G=0x31f08a25; 
@property(assign, nonatomic) UIResponder *restorableResponder;	// G=0x31f09985; S=0x31f09995; @synthesize=_restorableResponder
@property(assign, nonatomic) float splitHeightDelta;	// G=0x31f09965; S=0x31f09975; @synthesize=_splitHeightDelta
@property(readonly, assign, nonatomic) BOOL supportsSplit;	// G=0x31c4c4cd; @synthesize=_supportsSplit
+ (id)emptyInputSet;	// 0x31bd8a25
+ (id)inputSetWithInputView:(id)inputView accessoryView:(id)view;	// 0x31bd7b55
+ (id)inputSetWithKeyboardAndAccessoryView:(id)keyboardAndAccessoryView;	// 0x31cc5b29
- (id)initWithInputView:(id)inputView accessoryView:(id)view isKeyboard:(BOOL)keyboard;	// 0x31bd7ba9
- (BOOL)__isCKAccessoryView;	// 0x31f08e2d
- (BOOL)_accessorySuppressesShadow;	// 0x31f09421
- (void)_beginSplitTransitionIfNeeded;	// 0x31f09505
- (void)_endSplitTransitionIfNeeded;	// 0x31f096ed
- (BOOL)_inputAccessoryViewSupportsSplit;	// 0x31c4e1ad
- (BOOL)_inputViewIsSplit;	// 0x31f08ecd
- (BOOL)_inputViewIsVisible;	// 0x31f08b01
- (BOOL)_inputViewSetSupportsSplit;	// 0x31bd7da1
- (BOOL)_inputViewSupportsSplit;	// 0x31c4e131
- (CGRect)_leftInputViewSetFrame;	// 0x31f08f35
- (CGRect)_rightInputViewSetFrame;	// 0x31f091a1
- (void)_setSplitProgress:(float)progress;	// 0x31f09821
- (id)_splittableInputAccessoryView;	// 0x31c4e1f9
- (BOOL)canAnimateToInputViewSet:(id)inputViewSet;	// 0x31cb90b5
- (BOOL)containsResponder:(id)responder;	// 0x31bd7ecd
- (void)dealloc;	// 0x31bd8e95
- (id)description;	// 0x31f08b4d
- (BOOL)inSyncWithOrientation:(int)orientation forKeyboard:(id)keyboard;	// 0x31f08d81
// declared property getter: - (id)inputAccessoryView;	// 0x31bd7b35
// declared property getter: - (CGRect)inputAccessoryViewBounds;	// 0x31d07d55
// declared property getter: - (id)inputView;	// 0x31bd7b45
// declared property getter: - (CGRect)inputViewBounds;	// 0x31cf727d
// declared property getter: - (BOOL)inputViewKeyboardCanSplit;	// 0x31f08e81
// declared property getter: - (BOOL)isEmpty;	// 0x31bd89e9
- (BOOL)isEqual:(id)equal;	// 0x31bd8a89
// declared property getter: - (BOOL)isSplit;	// 0x31c4c465
- (BOOL)isStrictSupersetOfViewSet:(id)viewSet;	// 0x31d29935
// declared property getter: - (id)keyboard;	// 0x31c4c5a5
- (int)keyboardOrientation:(id)orientation;	// 0x31f08d0d
// declared property getter: - (id)layeringView;	// 0x31f08a25
- (void)refreshPresentation;	// 0x31c4df3d
// declared property getter: - (id)restorableResponder;	// 0x31f09985
// declared property setter: - (void)setInputAccessoryView:(id)view;	// 0x31bd7d7d
// declared property setter: - (void)setInputView:(id)view;	// 0x31bd7d8d
// declared property setter: - (void)setRestorableResponder:(id)responder;	// 0x31f09995
// declared property setter: - (void)setSplitHeightDelta:(float)delta;	// 0x31f09975
// declared property getter: - (float)splitHeightDelta;	// 0x31f09965
// declared property getter: - (BOOL)supportsSplit;	// 0x31c4c4cd
- (BOOL)usesKeyClicks;	// 0x31f08a5d
- (BOOL)visible;	// 0x31c4d2a5
@end

