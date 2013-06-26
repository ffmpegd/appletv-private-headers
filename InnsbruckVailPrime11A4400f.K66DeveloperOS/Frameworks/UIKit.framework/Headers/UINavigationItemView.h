/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIView.h"
#import "UIKit-Structs.h"

@class UINavigationItem, UILabel;

__attribute__((visibility("hidden")))
@interface UINavigationItemView : UIView {
	UINavigationItem *_item;	// 96 = 0x60
	CGSize _titleSize;	// 100 = 0x64
	UIView *_topCrossView;	// 108 = 0x6c
	UIView *_bottomCrossView;	// 112 = 0x70
	BOOL _isCrossFading;	// 116 = 0x74
	BOOL _customFontSet;	// 117 = 0x75
	UILabel *_label;	// 120 = 0x78
	BOOL _isFadingInFromCustomAlpha;	// 124 = 0x7c
}
@property(assign, nonatomic, setter=_setFadingInFromCustomAlpha:) BOOL _isFadingInFromCustomAlpha;	// G=0x2f5cedf5; S=0x2f5cee05; @synthesize
@property(retain) id font;	// G=0x2f5ce9b1; S=0x2f5ce969; converted property
@property(assign) BOOL titleAutoresizesToFit;	// G=0x2f5ce879; S=0x2f43b805; converted property
- (id)initWithNavigationItem:(id)navigationItem;	// 0x2f43b635
- (void)_cleanUpCrossView;	// 0x2f5ced81
- (void)_crossFadeHiddingButton:(BOOL)button;	// 0x2f5cec81
- (id)_currentTextColorForBarStyle:(int)barStyle;	// 0x2f455da5
- (id)_currentTextShadowColorForBarStyle:(int)barStyle;	// 0x2f455c95
- (CGSize)_currentTextShadowOffsetForBarStyle:(int)barStyle;	// 0x2f455b55
- (id)_defaultFont;	// 0x2f455ac1
// declared property getter: - (BOOL)_isFadingInFromCustomAlpha;	// 0x2f5cedf5
- (CGRect)_labelFrame;	// 0x2f5ce521
- (void)_prepareCrossViewsForNewSize:(CGSize)newSize;	// 0x2f5cea35
- (void)_resetTitleSize;	// 0x2f5ce799
- (id)_scriptingInfo;	// 0x2f5ce9d1
// declared property setter: - (void)_setFadingInFromCustomAlpha:(BOOL)customAlpha;	// 0x2f5cee05
- (void)_setFont:(id)font;	// 0x2f5ce8a1
- (void)_setLineBreakMode:(int)mode;	// 0x2f43f7f1
- (CGSize)_titleSize;	// 0x2f5ce7d5
- (void)_updateLabel;	// 0x2f5ce6fd
- (void)_updateLabelColor;	// 0x2f5ce2b1
- (void)_updateLabelContents;	// 0x2f5ce321
- (BOOL)_useSilverLookForBarStyle:(int)barStyle;	// 0x2f455c09
- (void)dealloc;	// 0x2f5ce255
// converted property getter: - (id)font;	// 0x2f5ce9b1
- (void)layoutSubviews;	// 0x2f5ce789
- (id)navigationItem;	// 0x2f5ce2a1
// converted property setter: - (void)setFont:(id)font;	// 0x2f5ce969
- (void)setFrame:(CGRect)frame;	// 0x2f40bb9d
// converted property setter: - (void)setTitleAutoresizesToFit:(BOOL)fit;	// 0x2f43b805
- (id)title;	// 0x2f4af7dd
// converted property getter: - (BOOL)titleAutoresizesToFit;	// 0x2f5ce879
@end
