/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

#import "TelephonyUI-Structs.h"
#import "TPLCDView.h"

@class TPButton, TPWellButtonView;

@interface TPLCDDoubleButtonView : TPLCDView {
	TPWellButtonView *_leftWellButtonView;	// 128 = 0x80
	TPWellButtonView *_rightWellButtonView;	// 132 = 0x84
}
@property(readonly, assign, nonatomic) TPButton *leftButton;	// G=0x3793c589; 
@property(readonly, assign, nonatomic) TPButton *rightButton;	// G=0x3793c5a9; 
- (id)initWithDefaultSizeForOrientation:(int)orientation;	// 0x3793c2dd
- (CGRect)_leftWellFrame;	// 0x3793c281
- (CGRect)_rightWellFrame;	// 0x3793c1a5
- (void)dealloc;	// 0x3793c525
- (CGRect)fullSizedContentViewFrame;	// 0x3793c5c9
// declared property getter: - (id)leftButton;	// 0x3793c589
// declared property getter: - (id)rightButton;	// 0x3793c5a9
- (BOOL)shouldCenterContentView;	// 0x3793c689
- (BOOL)shouldCenterText;	// 0x3793c685
- (BOOL)showImageViewOnLeftSide;	// 0x3793c68d
@end
