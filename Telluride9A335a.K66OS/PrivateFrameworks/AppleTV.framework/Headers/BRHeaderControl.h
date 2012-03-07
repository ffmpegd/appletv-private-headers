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
@property(readonly, retain) BRImageControl *icon;	// G=0x341ebc21; converted property
@property(assign) float iconEdgeSpace;	// G=0x341ebd5d; S=0x341ebd0d; converted property
@property(assign) float iconHorizontalOffset;	// G=0x341ebc61; S=0x341ebc41; converted property
@property(assign) float iconKerningFactor;	// G=0x341ebc91; S=0x341ebc71; converted property
@property(assign) int iconPosition;	// G=0x341ebcfd; S=0x341ebcd1; converted property
@property(assign) float iconScaleFactor;	// G=0x341ebcc1; S=0x341ebca1; converted property
@property(retain) BRTextControl *subtitle;	// G=0x341eba59; S=0x341eba45; converted property
@property(retain) BRTextControl *title;	// G=0x341eb931; S=0x341eb91d; converted property
@property(assign, nonatomic) BOOL titleHidesIcon;	// G=0x341ec54d; S=0x341ec55d; @synthesize=_titleHidesIcon
- (id)init;	// 0x341eb691
- (id)accessibilityLabel;	// 0x341ec4a9
- (void)controlWasActivated;	// 0x341eb78d
- (void)dealloc;	// 0x341eb7cd
// converted property getter: - (id)icon;	// 0x341ebc21
// converted property getter: - (float)iconEdgeSpace;	// 0x341ebd5d
- (CGRect)iconFrame;	// 0x341ebd6d
// converted property getter: - (float)iconHorizontalOffset;	// 0x341ebc61
// converted property getter: - (float)iconKerningFactor;	// 0x341ebc91
// converted property getter: - (int)iconPosition;	// 0x341ebcfd
// converted property getter: - (float)iconScaleFactor;	// 0x341ebcc1
- (void)layoutSubcontrols;	// 0x341ebf59
- (void)setIcon:(id)icon horizontalOffset:(float)offset kerningFactor:(float)factor;	// 0x341eba91
- (void)setIcon:(id)icon position:(int)position edgeSpace:(float)space;	// 0x341ebbad
// converted property setter: - (void)setIconEdgeSpace:(float)space;	// 0x341ebd0d
- (void)setIconHidden:(BOOL)hidden;	// 0x341ebda1
// converted property setter: - (void)setIconHorizontalOffset:(float)offset;	// 0x341ebc41
// converted property setter: - (void)setIconKerningFactor:(float)factor;	// 0x341ebc71
// converted property setter: - (void)setIconPosition:(int)position;	// 0x341ebcd1
// converted property setter: - (void)setIconScaleFactor:(float)factor;	// 0x341ebca1
// converted property setter: - (void)setSubtitle:(id)subtitle;	// 0x341eba45
- (void)setSubtitle:(id)subtitle withAttributes:(id)attributes;	// 0x341eb969
// converted property setter: - (void)setTitle:(id)title;	// 0x341eb91d
- (void)setTitle:(id)title withAttributes:(id)attributes;	// 0x341eb841
// declared property setter: - (void)setTitleHidesIcon:(BOOL)icon;	// 0x341ec55d
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x341ebdc1
// converted property getter: - (id)subtitle;	// 0x341eba59
// converted property getter: - (id)title;	// 0x341eb931
// declared property getter: - (BOOL)titleHidesIcon;	// 0x341ec54d
@end

