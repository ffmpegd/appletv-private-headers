/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRTextControl, BRReflectionControl, BRAsyncImageControl;

__attribute__((visibility("hidden")))
@interface ATVImagePreviewView : BRControl {
	BRAsyncImageControl *image;	// 84 = 0x54
	BRTextControl *instructionsLabel;	// 88 = 0x58
	XXStruct_qlg9jA _textWidth;	// 92 = 0x5c
	XXStruct_qlg9jA _textYOffset;	// 96 = 0x60
	BRReflectionControl *_reflection;	// 100 = 0x64
	CGPoint imageOffset;	// 104 = 0x68
	CGSize imageScale;	// 112 = 0x70
}
@property(retain, nonatomic) BRAsyncImageControl *image;	// G=0x1003f1; S=0x100401; @synthesize
@property(assign, nonatomic) CGPoint imageOffset;	// G=0x100461; S=0x100479; @synthesize
@property(assign, nonatomic) CGSize imageScale;	// G=0x10048d; S=0x1004a5; @synthesize
@property(retain, nonatomic) BRTextControl *instructionsLabel;	// G=0x100429; S=0x100439; @synthesize
@property(retain, nonatomic) BRReflectionControl *reflection;	// G=0x100511; S=0x100521; @synthesize=_reflection
@property(assign, nonatomic) float reflectionAmount;	// G=0x1001dd; S=0x100219; 
@property(assign, nonatomic) XXStruct_qlg9jA textWidth;	// G=0x1004b9; S=0x1004d5; @synthesize=_textWidth
@property(assign, nonatomic) XXStruct_qlg9jA textYOffset;	// G=0x1004e5; S=0x100501; @synthesize=_textYOffset
- (id)init;	// 0xff75d
- (void).cxx_destruct;	// 0x100549
- (void)_imageLoaded:(id)loaded;	// 0x10026d
- (id)accessibilityLabel;	// 0x100385
- (void)dealloc;	// 0xffa31
// declared property getter: - (id)image;	// 0x1003f1
// declared property getter: - (CGPoint)imageOffset;	// 0x100461
// declared property getter: - (CGSize)imageScale;	// 0x10048d
// declared property getter: - (id)instructionsLabel;	// 0x100429
- (void)layoutSubcontrols;	// 0xffb11
// declared property getter: - (id)reflection;	// 0x100511
// declared property getter: - (float)reflectionAmount;	// 0x1001dd
// declared property setter: - (void)setImage:(id)image;	// 0x100401
// declared property setter: - (void)setImageOffset:(CGPoint)offset;	// 0x100479
- (void)setImageProxy:(id)proxy;	// 0x1000a1
- (void)setImageProxy:(id)proxy withOffset:(CGPoint)offset scale:(CGSize)scale;	// 0x1000cd
// declared property setter: - (void)setImageScale:(CGSize)scale;	// 0x1004a5
- (void)setInstructionText:(id)text withAttributes:(id)attributes;	// 0x1002ed
// declared property setter: - (void)setInstructionsLabel:(id)label;	// 0x100439
// declared property setter: - (void)setReflection:(id)reflection;	// 0x100521
// declared property setter: - (void)setReflectionAmount:(float)amount;	// 0x100219
// declared property setter: - (void)setTextWidth:(XXStruct_qlg9jA)width;	// 0x1004d5
// declared property setter: - (void)setTextYOffset:(XXStruct_qlg9jA)offset;	// 0x100501
- (CGSize)sizeThatFits:(CGSize)fits;	// 0xffa9d
// declared property getter: - (XXStruct_qlg9jA)textWidth;	// 0x1004b9
// declared property getter: - (XXStruct_qlg9jA)textYOffset;	// 0x1004e5
@end

