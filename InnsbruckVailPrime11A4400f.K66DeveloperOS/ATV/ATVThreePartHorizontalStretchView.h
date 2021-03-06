/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"

@class BRImageControl;

__attribute__((visibility("hidden")))
@interface ATVThreePartHorizontalStretchView : BRControl {
	BRImageControl *_leftImageView;	// 84 = 0x54
	BRImageControl *_centerImageView;	// 88 = 0x58
	BRImageControl *_rightImageView;	// 92 = 0x5c
	XXStruct_qlg9jA _padding;	// 96 = 0x60
	BRControl *_contentView;	// 100 = 0x64
}
@property(readonly, assign, nonatomic) BRImageControl *centerImageView;	// G=0x190ef5; @synthesize=_centerImageView
@property(retain, nonatomic) BRControl *contentView;	// G=0x190f41; S=0x1908f1; @synthesize=_contentView
@property(readonly, assign, nonatomic) BRImageControl *leftImageView;	// G=0x190ee5; @synthesize=_leftImageView
@property(assign, nonatomic) XXStruct_qlg9jA padding;	// G=0x190f15; S=0x190f31; @synthesize=_padding
@property(readonly, assign, nonatomic) BRImageControl *rightImageView;	// G=0x190f05; @synthesize=_rightImageView
- (id)init;	// 0x1907f1
- (void).cxx_destruct;	// 0x190f51
- (id)accessibilityLabel;	// 0x190e65
// declared property getter: - (id)centerImageView;	// 0x190ef5
// declared property getter: - (id)contentView;	// 0x190f41
- (void)layoutSubcontrols;	// 0x190b4d
// declared property getter: - (id)leftImageView;	// 0x190ee5
// declared property getter: - (XXStruct_qlg9jA)padding;	// 0x190f15
// declared property getter: - (id)rightImageView;	// 0x190f05
// declared property setter: - (void)setContentView:(id)view;	// 0x1908f1
// declared property setter: - (void)setPadding:(XXStruct_qlg9jA)padding;	// 0x190f31
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x19094d
@end

