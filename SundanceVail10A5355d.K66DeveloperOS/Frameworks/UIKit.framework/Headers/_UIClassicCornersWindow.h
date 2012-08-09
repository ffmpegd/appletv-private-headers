/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIStatusBarAdornmentWindow.h"
#import "UIKit-Structs.h"

@class UIView, NSArray;

__attribute__((visibility("hidden")))
@interface _UIClassicCornersWindow : UIStatusBarAdornmentWindow {
	int _visibleCorners;	// 144 = 0x90
	UIView *_contentView;	// 148 = 0x94
	unsigned _hiddenStatusBarStyles;	// 152 = 0x98
	NSArray *_cornerViews;	// 156 = 0x9c
	BOOL _hidesWithStatusBar;	// 160 = 0xa0
	CGRect _cornerFrame;	// 164 = 0xa4
}
@property(assign, nonatomic) CGRect cornerFrame;	// G=0x33ce1921; S=0x33ce10f5; @synthesize=_cornerFrame
@property(assign, nonatomic) BOOL hidesWithStatusBar;	// G=0x33ce1901; S=0x33ce1911; @synthesize=_hidesWithStatusBar
@property(readonly, assign, nonatomic) int visibleCorners;	// G=0x33ce18f1; @synthesize=_visibleCorners
- (id)initWithFrame:(CGRect)frame andVisibleCorners:(int)corners;	// 0x33ce0fb5
- (id)_cornerViewWithImage:(id)image forCorner:(int)corner;	// 0x33ce11e9
- (BOOL)_hidesWithStatusBarStyle:(int)statusBarStyle;	// 0x33ce11cd
- (void)_setCorners:(unsigned)corners visible:(BOOL)visible;	// 0x33ce1571
- (void)_updateForRotationFromInterfaceOrientation:(int)interfaceOrientation toInterfaceOrientation:(int)interfaceOrientation2 withStatusBarStyle:(int)statusBarStyle statusBarShouldHide:(BOOL)statusBar;	// 0x33ce1621
// declared property getter: - (CGRect)cornerFrame;	// 0x33ce1921
- (void)dealloc;	// 0x33ce1091
// declared property getter: - (BOOL)hidesWithStatusBar;	// 0x33ce1901
- (void)layoutSubviews;	// 0x33ce1355
// declared property setter: - (void)setCornerFrame:(CGRect)frame;	// 0x33ce10f5
// declared property setter: - (void)setHidesWithStatusBar:(BOOL)statusBar;	// 0x33ce1911
- (void)setHidesWithStatusBarStyle:(int)statusBarStyle;	// 0x33ce11b1
// declared property getter: - (int)visibleCorners;	// 0x33ce18f1
@end
