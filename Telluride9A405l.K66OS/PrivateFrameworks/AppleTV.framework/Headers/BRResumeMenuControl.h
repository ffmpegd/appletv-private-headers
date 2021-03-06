/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"

@class BRImageControl, BRTextControl, BRListControl, BRResumeMenuControlLayoutManager;

@interface BRResumeMenuControl : BRControl {
@private
	BRTextControl *_title;	// 48 = 0x30
	BRTextControl *_footnote;	// 52 = 0x34
	BRListControl *_resumeMenu;	// 56 = 0x38
	BRImageControl *_blurControl;	// 60 = 0x3c
	BRResumeMenuControlLayoutManager *_layoutManager;	// 64 = 0x40
	float _blurOversizeFactor;	// 68 = 0x44
}
@property(retain) BRTextControl *footnote;	// G=0x35e2009d; S=0x35e1ffa1; converted property
@property(retain) BRTextControl *title;	// G=0x35e1ff69; S=0x35e1fe5d; converted property
- (id)init;	// 0x35e1fc1d
- (CGColorRef)blurControlBackgroundColor;	// 0x35e20619
- (BOOL)brEventAction:(id)action;	// 0x35e20371
- (void)dealloc;	// 0x35e1fdc1
// converted property getter: - (id)footnote;	// 0x35e2009d
- (void)layoutSubcontrols;	// 0x35e200d5
- (id)list;	// 0x35e2040d
- (id)preferredActionForKey:(id)key;	// 0x35e20529
- (void)setBlurOversizeFactor:(float)factor;	// 0x35e20509
// converted property setter: - (void)setFootnote:(id)footnote;	// 0x35e1ffa1
- (void)setImage:(id)image;	// 0x35e2041d
// converted property setter: - (void)setTitle:(id)title;	// 0x35e1fe5d
// converted property getter: - (id)title;	// 0x35e1ff69
@end

