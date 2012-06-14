/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRTextControl, BRImageControl;

@interface BRHeaderControl : BRControl {
@private
	BRTextControl *_title;	// 48 = 0x30
	BRTextControl *_subtitle;	// 52 = 0x34
	BRImageControl *_icon;	// 56 = 0x38
	float _iconHorizontalOffset;	// 60 = 0x3c
	float _iconKerningFactor;	// 64 = 0x40
	float _iconScaleFactor;	// 68 = 0x44
	float _iconEdgeSpace;	// 72 = 0x48
	int _iconPosition;	// 76 = 0x4c
	BOOL _titleHidesIcon;	// 80 = 0x50
}
@property(readonly, retain) BRImageControl *icon;	// G=0x36698595; converted property
@property(assign) float iconEdgeSpace;	// G=0x366986d1; S=0x36698681; converted property
@property(assign) float iconHorizontalOffset;	// G=0x366985d5; S=0x366985b5; converted property
@property(assign) float iconKerningFactor;	// G=0x36698605; S=0x366985e5; converted property
@property(assign) int iconPosition;	// G=0x36698671; S=0x36698645; converted property
@property(assign) float iconScaleFactor;	// G=0x36698635; S=0x36698615; converted property
@property(retain) BRTextControl *subtitle;	// G=0x366983cd; S=0x366983b9; converted property
@property(retain) BRTextControl *title;	// G=0x366982a5; S=0x36698291; converted property
@property(assign, nonatomic) BOOL titleHidesIcon;	// G=0x36698ec1; S=0x36698ed1; @synthesize=_titleHidesIcon
- (id)init;	// 0x36698005
- (id)accessibilityLabel;	// 0x36698e1d
- (void)controlWasActivated;	// 0x36698101
- (void)dealloc;	// 0x36698141
// converted property getter: - (id)icon;	// 0x36698595
// converted property getter: - (float)iconEdgeSpace;	// 0x366986d1
- (CGRect)iconFrame;	// 0x366986e1
// converted property getter: - (float)iconHorizontalOffset;	// 0x366985d5
// converted property getter: - (float)iconKerningFactor;	// 0x36698605
// converted property getter: - (int)iconPosition;	// 0x36698671
// converted property getter: - (float)iconScaleFactor;	// 0x36698635
- (void)layoutSubcontrols;	// 0x366988cd
- (void)setIcon:(id)icon horizontalOffset:(float)offset kerningFactor:(float)factor;	// 0x36698405
- (void)setIcon:(id)icon position:(int)position edgeSpace:(float)space;	// 0x36698521
// converted property setter: - (void)setIconEdgeSpace:(float)space;	// 0x36698681
- (void)setIconHidden:(BOOL)hidden;	// 0x36698715
// converted property setter: - (void)setIconHorizontalOffset:(float)offset;	// 0x366985b5
// converted property setter: - (void)setIconKerningFactor:(float)factor;	// 0x366985e5
// converted property setter: - (void)setIconPosition:(int)position;	// 0x36698645
// converted property setter: - (void)setIconScaleFactor:(float)factor;	// 0x36698615
// converted property setter: - (void)setSubtitle:(id)subtitle;	// 0x366983b9
- (void)setSubtitle:(id)subtitle withAttributes:(id)attributes;	// 0x366982dd
// converted property setter: - (void)setTitle:(id)title;	// 0x36698291
- (void)setTitle:(id)title withAttributes:(id)attributes;	// 0x366981b5
// declared property setter: - (void)setTitleHidesIcon:(BOOL)icon;	// 0x36698ed1
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x36698735
// converted property getter: - (id)subtitle;	// 0x366983cd
// converted property getter: - (id)title;	// 0x366982a5
// declared property getter: - (BOOL)titleHidesIcon;	// 0x36698ec1
@end
