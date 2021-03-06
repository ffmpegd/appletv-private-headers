/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRImageControl, BRTextControl;

__attribute__((visibility("hidden")))
@interface BRIconPreviewController : BRControl {
	BRTextControl *_message;	// 84 = 0x54
	BRTextControl *_instruction;	// 88 = 0x58
	BRImageControl *_image;	// 92 = 0x5c
	float _iconHeightFactor;	// 96 = 0x60
	float _horizontalPosition;	// 100 = 0x64
	float _verticalPosition;	// 104 = 0x68
	float _messageVerticalPosition;	// 108 = 0x6c
}
- (id)init;	// 0x334e21
- (id)accessibilityLabel;	// 0x33563d
- (void)dealloc;	// 0x334f39
- (void)layoutSubcontrols;	// 0x334fb1
- (void)setIconHeightFactor:(float)factor;	// 0x3355dd
- (void)setIconHorizontalPosition:(float)position;	// 0x3355fd
- (void)setIconVerticalPosition:(float)position;	// 0x33561d
- (void)setImage:(id)image;	// 0x335525
- (void)setInstructions:(id)instructions;	// 0x335545
- (void)setMessage:(id)message;	// 0x33546d
- (void)setMessageVerticalPosition:(float)position;	// 0x335505
@end

