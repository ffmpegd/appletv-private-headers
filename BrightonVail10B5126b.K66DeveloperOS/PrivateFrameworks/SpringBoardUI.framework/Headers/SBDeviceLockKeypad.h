/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

#import <TPPhonePad.h> // Unknown library
#import "SpringBoardUI-Structs.h"

@class UIButton;

@interface SBDeviceLockKeypad : TPPhonePad {
	UIButton *_deleteButton;	// 160 = 0xa0
	UIButton *_cancelButton;	// 164 = 0xa4
	BOOL _deleteEnabled;	// 168 = 0xa8
	BOOL _playKeyboardClicks;	// 169 = 0xa9
}
@property(readonly, assign, nonatomic) BOOL cancelKeyChar;	// G=0x354753b5; 
@property(assign, nonatomic, getter=isDeleteEnabled) BOOL deleteEnabled;	// G=0x35475401; S=0x35475411; @synthesize=_deleteEnabled
@property(readonly, assign, nonatomic) BOOL deleteKeyChar;	// G=0x354753b1; 
@property(readonly, assign, nonatomic) BOOL emergencyKeyChar;	// G=0x354753b9; 
@property(assign, nonatomic) BOOL playsKeyboardClicks;	// G=0x35475351; S=0x35475361; 
@property(assign, nonatomic) BOOL showsEmergencyCallButton;	// G=0x354753a9; S=0x354753ad; 
+ (CGSize)defaultSize;	// 0x354753c5
+ (id)keypadImage;	// 0x354753bd
+ (id)pressedImage;	// 0x354753c1
- (id)initWithDefaultSizeForStyle:(int)style;	// 0x35475215
- (id)initWithFrame:(CGRect)frame;	// 0x35475109
- (id)_keypadImage;	// 0x354751c5
- (id)_pressedImage;	// 0x354751ed
// declared property getter: - (BOOL)cancelKeyChar;	// 0x354753b5
- (void)dealloc;	// 0x3547516d
// declared property getter: - (BOOL)deleteKeyChar;	// 0x354753b1
// declared property getter: - (BOOL)emergencyKeyChar;	// 0x354753b9
- (void)hiddenFromView;	// 0x354751b1
// declared property getter: - (BOOL)isDeleteEnabled;	// 0x35475401
// declared property getter: - (BOOL)playsKeyboardClicks;	// 0x35475351
// declared property setter: - (void)setDeleteEnabled:(BOOL)enabled;	// 0x35475411
// declared property setter: - (void)setPlaysKeyboardClicks:(BOOL)clicks;	// 0x35475361
// declared property setter: - (void)setShowsEmergencyCallButton:(BOOL)button;	// 0x354753ad
// declared property getter: - (BOOL)showsEmergencyCallButton;	// 0x354753a9
- (void)willBecomeVisible;	// 0x354751b5
@end

