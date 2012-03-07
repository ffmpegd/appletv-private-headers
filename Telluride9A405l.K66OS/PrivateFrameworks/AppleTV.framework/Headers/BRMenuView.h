/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"

@class BRImageControl, BRTextControl, BRListView, BRScrollControl;

@interface BRMenuView : BRControl {
@private
	float _verticalSpacer;	// 48 = 0x30
	BRImageControl *_titleImage;	// 52 = 0x34
	float _titleImageVerticalOffset;	// 56 = 0x38
	BRTextControl *_title;	// 60 = 0x3c
	BRTextControl *_description;	// 64 = 0x40
	BRListView *_list;	// 68 = 0x44
	BRScrollControl *_scroller;	// 72 = 0x48
	int _listAlignment;	// 76 = 0x4c
	float _listWidth;	// 80 = 0x50
	float _listLeadingGap;	// 84 = 0x54
	float _listTrailingGap;	// 88 = 0x58
}
@property(retain) BRTextControl *description;	// G=0x35e50475; S=0x35e50461; converted property
@property(readonly, retain) BRListView *list;	// G=0x35e504ad; converted property
@property(readonly, assign, nonatomic) int listAlignment;	// G=0x35e50d39; @synthesize=_listAlignment
@property(assign) CGRect listFrame;	// G=0x35e504f9; S=0x35e504bd; converted property
@property(assign, nonatomic) float listLeadingGap;	// G=0x35e50d69; S=0x35e50d79; @synthesize=_listLeadingGap
@property(assign, nonatomic) float listTrailingGap;	// G=0x35e50d89; S=0x35e50d99; @synthesize=_listTrailingGap
@property(assign, nonatomic) float listWidth;	// G=0x35e50d49; S=0x35e50d59; @synthesize=_listWidth
@property(retain) BRTextControl *title;	// G=0x35e502d1; S=0x35e502bd; converted property
+ (id)menuViewWithListAlignment:(int)listAlignment;	// 0x35e4fd99
- (id)init;	// 0x35e4fdd5
- (id)initWithListAlignment:(int)listAlignment;	// 0x35e4fde9
- (id)accessibilityLabel;	// 0x35e50d19
- (id)accessibilitySecondaryLabel;	// 0x35e50d29
- (void)dealloc;	// 0x35e5007d
// converted property getter: - (id)description;	// 0x35e50475
- (void)layoutSubcontrols;	// 0x35e5052d
// converted property getter: - (id)list;	// 0x35e504ad
// declared property getter: - (int)listAlignment;	// 0x35e50d39
// converted property getter: - (CGRect)listFrame;	// 0x35e504f9
// declared property getter: - (float)listLeadingGap;	// 0x35e50d69
// declared property getter: - (float)listTrailingGap;	// 0x35e50d89
// declared property getter: - (float)listWidth;	// 0x35e50d49
// converted property setter: - (void)setDescription:(id)description;	// 0x35e50461
- (void)setDescription:(id)description withAttributes:(id)attributes;	// 0x35e50309
// converted property setter: - (void)setListFrame:(CGRect)frame;	// 0x35e504bd
// declared property setter: - (void)setListLeadingGap:(float)gap;	// 0x35e50d79
// declared property setter: - (void)setListTrailingGap:(float)gap;	// 0x35e50d99
// declared property setter: - (void)setListWidth:(float)width;	// 0x35e50d59
// converted property setter: - (void)setTitle:(id)title;	// 0x35e502bd
- (void)setTitle:(id)title withAttributes:(id)attributes;	// 0x35e501e1
- (void)setTitleImage:(id)image withVerticalOffset:(float)verticalOffset;	// 0x35e50129
- (void)setVerticalSpacer:(float)spacer;	// 0x35e50119
// converted property getter: - (id)title;	// 0x35e502d1
@end

