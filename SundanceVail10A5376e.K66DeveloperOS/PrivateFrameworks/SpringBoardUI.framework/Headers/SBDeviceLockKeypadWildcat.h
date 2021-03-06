/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

#import "SBDeviceLockKeypad.h"
#import "SpringBoardUI-Structs.h"

@class UIView;

@interface SBDeviceLockKeypadWildcat : SBDeviceLockKeypad {
	UIView *_glowView;	// 172 = 0xac
}
+ (id)keypadImage;	// 0x3570b17d
+ (id)pressedImage;	// 0x3570b1a5
- (id)initWithFrame:(CGRect)frame;	// 0x3570abcd
- (CGRect)_rectForKey:(int)key;	// 0x3570b0e1
- (float)_yFudge;	// 0x3570b0dd
- (BOOL)cancelKeyChar;	// 0x3570b1cd
- (void)dealloc;	// 0x3570aeed
- (BOOL)deleteKeyChar;	// 0x3570b1b5
- (void)setHighlighted:(BOOL)highlighted;	// 0x3570af39
@end

