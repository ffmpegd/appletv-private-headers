/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRControl.h"

@class BRReflectionControl, BRHeaderControl, BRTableView, BRImageControl, BRDividerControl, NSString, BRImage;

__attribute__((visibility("hidden")))
@interface ATVThunderStandingsView : BRControl {
@private
	BRDividerControl *_leftDivider;	// 48 = 0x30
	BRImageControl *_leftBackgroundImageControl;	// 52 = 0x34
	BRReflectionControl *_leftReflectionControl;	// 56 = 0x38
	BRDividerControl *_rightDivider;	// 60 = 0x3c
	BRImageControl *_rightBackgroundImageControl;	// 64 = 0x40
	BRReflectionControl *_rightReflectionControl;	// 68 = 0x44
	BRControl *_dimControl;	// 72 = 0x48
	BRHeaderControl *_headerControl;	// 76 = 0x4c
	BRTableView *_leftTable;	// 80 = 0x50
	BRTableView *_rightTable;	// 84 = 0x54
}
@property(retain, nonatomic) BRImage *headerImage;	// G=0x35d5db19; S=0x35d5dab1; 
@property(retain, nonatomic) BRImage *leftBackgroundImage;	// G=0x35d5db7d; S=0x35d5db39; 
@property(readonly, assign, nonatomic) BRTableView *leftTable;	// G=0x35d5e191; @synthesize=_leftTable
@property(retain, nonatomic) BRImage *rightBackgroundImage;	// G=0x35d5dbe1; S=0x35d5db9d; 
@property(readonly, assign, nonatomic) BRTableView *rightTable;	// G=0x35d5e1a1; @synthesize=_rightTable
@property(readonly, assign, nonatomic) float tableWidth;	// G=0x35d5dc01; 
@property(copy, nonatomic) NSString *title;	// G=0x35d5da91; S=0x35d5da71; 
- (id)init;	// 0x35d5d6e1
- (id)accessibilityLabel;	// 0x35d5e119
- (id)accessibilityNonFocusableElements;	// 0x35d5e139
- (void)dealloc;	// 0x35d5d971
// declared property getter: - (id)headerImage;	// 0x35d5db19
- (void)layoutSubcontrols;	// 0x35d5dc0d
// declared property getter: - (id)leftBackgroundImage;	// 0x35d5db7d
// declared property getter: - (id)leftTable;	// 0x35d5e191
// declared property getter: - (id)rightBackgroundImage;	// 0x35d5dbe1
// declared property getter: - (id)rightTable;	// 0x35d5e1a1
// declared property setter: - (void)setHeaderImage:(id)image;	// 0x35d5dab1
// declared property setter: - (void)setLeftBackgroundImage:(id)image;	// 0x35d5db39
// declared property setter: - (void)setRightBackgroundImage:(id)image;	// 0x35d5db9d
// declared property setter: - (void)setTitle:(id)title;	// 0x35d5da71
// declared property getter: - (float)tableWidth;	// 0x35d5dc01
// declared property getter: - (id)title;	// 0x35d5da91
@end

