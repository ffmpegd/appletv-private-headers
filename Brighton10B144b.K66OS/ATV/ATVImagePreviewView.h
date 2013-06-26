/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRTextControl, BRAsyncImageControl;

__attribute__((visibility("hidden")))
@interface ATVImagePreviewView : BRControl {
	BRAsyncImageControl *image;	// 84 = 0x54
	BRTextControl *instructionsLabel;	// 88 = 0x58
	CGPoint imageOffset;	// 92 = 0x5c
	CGSize imageScale;	// 100 = 0x64
}
@property(retain, nonatomic) BRAsyncImageControl *image;	// G=0x40e9e9; S=0x40e9f9; @synthesize
@property(assign, nonatomic) CGPoint imageOffset;	// G=0x40ea59; S=0x40ea71; @synthesize
@property(assign, nonatomic) CGSize imageScale;	// G=0x40ea85; S=0x40ea9d; @synthesize
@property(retain, nonatomic) BRTextControl *instructionsLabel;	// G=0x40ea21; S=0x40ea31; @synthesize
- (id)init;	// 0x40dfa1
- (void).cxx_destruct;	// 0x40eab1
- (id)accessibilityLabel;	// 0x40e97d
- (void)dealloc;	// 0x40e1b5
// declared property getter: - (id)image;	// 0x40e9e9
// declared property getter: - (CGPoint)imageOffset;	// 0x40ea59
// declared property getter: - (CGSize)imageScale;	// 0x40ea85
// declared property getter: - (id)instructionsLabel;	// 0x40ea21
- (void)layoutSubcontrols;	// 0x40e28d
// declared property setter: - (void)setImage:(id)image;	// 0x40e9f9
// declared property setter: - (void)setImageOffset:(CGPoint)offset;	// 0x40ea71
- (void)setImageProxy:(id)proxy;	// 0x40e7a9
- (void)setImageProxy:(id)proxy withOffset:(CGPoint)offset scale:(CGSize)scale;	// 0x40e7d5
// declared property setter: - (void)setImageScale:(CGSize)scale;	// 0x40ea9d
- (void)setInstructionText:(id)text withAttributes:(id)attributes;	// 0x40e8e5
// declared property setter: - (void)setInstructionsLabel:(id)label;	// 0x40ea31
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x40e221
@end
