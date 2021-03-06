/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class NSAttributedString, BRListControl, BRVerticalScrollBarControl;

__attribute__((visibility("hidden")))
@interface BRScrollingTextBoxControl : BRControl {
	BRListControl *_list;	// 84 = 0x54
	NSAttributedString *_text;	// 88 = 0x58
	BRVerticalScrollBarControl *_scrollBar;	// 92 = 0x5c
	float _textHeightFactor;	// 96 = 0x60
	long _upperFocusLimit;	// 100 = 0x64
	long _lowerFocusLimit;	// 104 = 0x68
}
@property(retain) NSAttributedString *text;	// G=0x309969; S=0x3098e9; converted property
@property(assign) float textHeightFactor;	// G=0x309989; S=0x309979; converted property
- (id)init;	// 0x3095d9
- (void)_calculateFocusLimitsWithTextBoxSize:(CGSize)textBoxSize;	// 0x309de1
- (void)_forceSelectionToFocusLimit;	// 0x309d0d
- (void)_listSelectionChanged:(id)changed;	// 0x309cfd
- (void)_providerCountChanged:(id)changed;	// 0x309fa9
- (id)accessibilityLabel;	// 0x309cd5
- (BOOL)brEventAction:(id)action;	// 0x309999
- (void)dealloc;	// 0x309845
- (void)layoutSubcontrols;	// 0x309a35
// converted property setter: - (void)setText:(id)text;	// 0x3098e9
// converted property setter: - (void)setTextHeightFactor:(float)factor;	// 0x309979
// converted property getter: - (id)text;	// 0x309969
// converted property getter: - (float)textHeightFactor;	// 0x309989
@end

