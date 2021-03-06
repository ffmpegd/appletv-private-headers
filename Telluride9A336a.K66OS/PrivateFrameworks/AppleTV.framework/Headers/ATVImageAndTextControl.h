/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRImage, NSAttributedString, BRTextControl, BRImageControl;

@interface ATVImageAndTextControl : BRControl {
@private
	BRImage *_image;	// 48 = 0x30
	NSAttributedString *_text;	// 52 = 0x34
	BOOL _imageOnLeft;	// 56 = 0x38
	float _preferredImageHeight;	// 60 = 0x3c
	float _gapBetweenImageAndText;	// 64 = 0x40
	BRImageControl *_imageControl;	// 68 = 0x44
	BRTextControl *_textControl;	// 72 = 0x48
}
@property(assign, nonatomic) float gapBetweenImageAndText;	// G=0x33bfc351; S=0x33bfc361; @synthesize=_gapBetweenImageAndText
@property(assign, nonatomic) BRImage *image;	// G=0x33bfc2d1; S=0x33bfc2e1; @synthesize=_image
@property(retain) BRImageControl *imageControl;	// G=0x33bfc371; S=0x33bfc385; @synthesize=_imageControl
@property(assign, nonatomic) BOOL imageOnLeft;	// G=0x33bfc311; S=0x33bfc321; @synthesize=_imageOnLeft
@property(assign, nonatomic) float preferredImageHeight;	// G=0x33bfc331; S=0x33bfc341; @synthesize=_preferredImageHeight
@property(assign, nonatomic) NSAttributedString *text;	// G=0x33bfc2f1; S=0x33bfc301; @synthesize=_text
@property(retain) BRTextControl *textControl;	// G=0x33bfc3a9; S=0x33bfc3bd; @synthesize=_textControl
- (id)initWithImage:(id)image text:(id)text;	// 0x33bfbd6d
- (void)_imageDidChange;	// 0x33bfc3e1
- (void)_textDidChange;	// 0x33bfc48d
- (void)dealloc;	// 0x33bfbee9
// declared property getter: - (float)gapBetweenImageAndText;	// 0x33bfc351
// declared property getter: - (id)image;	// 0x33bfc2d1
// declared property getter: - (id)imageControl;	// 0x33bfc371
// declared property getter: - (BOOL)imageOnLeft;	// 0x33bfc311
- (void)layoutSubcontrols;	// 0x33bfc149
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x33bfbfb9
// declared property getter: - (float)preferredImageHeight;	// 0x33bfc331
// declared property setter: - (void)setGapBetweenImageAndText:(float)text;	// 0x33bfc361
// declared property setter: - (void)setImage:(id)image;	// 0x33bfc2e1
// declared property setter: - (void)setImageControl:(id)control;	// 0x33bfc385
// declared property setter: - (void)setImageOnLeft:(BOOL)left;	// 0x33bfc321
// declared property setter: - (void)setPreferredImageHeight:(float)height;	// 0x33bfc341
// declared property setter: - (void)setText:(id)text;	// 0x33bfc301
// declared property setter: - (void)setTextControl:(id)control;	// 0x33bfc3bd
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x33bfc071
// declared property getter: - (id)text;	// 0x33bfc2f1
// declared property getter: - (id)textControl;	// 0x33bfc3a9
@end

