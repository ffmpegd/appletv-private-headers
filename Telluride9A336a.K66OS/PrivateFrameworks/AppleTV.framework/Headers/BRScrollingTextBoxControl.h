/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class NSAttributedString, BRListControl, BRVerticalScrollBarControl;

@interface BRScrollingTextBoxControl : BRControl {
@private
	BRListControl *_list;	// 48 = 0x30
	NSAttributedString *_text;	// 52 = 0x34
	BRVerticalScrollBarControl *_scrollBar;	// 56 = 0x38
	float _textHeightFactor;	// 60 = 0x3c
	long _upperFocusLimit;	// 64 = 0x40
	long _lowerFocusLimit;	// 68 = 0x44
}
@property(retain) NSAttributedString *text;	// G=0x33ab5a21; S=0x33ab59a1; converted property
@property(assign) float textHeightFactor;	// G=0x33ab5a41; S=0x33ab5a31; converted property
- (id)init;	// 0x33ab5689
- (void)_calculateFocusLimitsWithTextBoxSize:(CGSize)textBoxSize;	// 0x33ab5e89
- (void)_forceSelectionToFocusLimit;	// 0x33ab5dad
- (void)_listSelectionChanged:(id)changed;	// 0x33ab5d9d
- (void)_providerCountChanged:(id)changed;	// 0x33ab604d
- (id)accessibilityLabel;	// 0x33ab5d75
- (BOOL)brEventAction:(id)action;	// 0x33ab5a51
- (void)dealloc;	// 0x33ab58fd
- (void)layoutSubcontrols;	// 0x33ab5aed
// converted property setter: - (void)setText:(id)text;	// 0x33ab59a1
// converted property setter: - (void)setTextHeightFactor:(float)factor;	// 0x33ab5a31
// converted property getter: - (id)text;	// 0x33ab5a21
// converted property getter: - (float)textHeightFactor;	// 0x33ab5a41
@end

