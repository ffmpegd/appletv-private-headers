/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"

@class ATVImage, BRReflectionControl, BRHeaderControl, BRHorizontalDividerControl, NSString, BRImageControl, BRTableView;

__attribute__((visibility("hidden")))
@interface ATVThunderStandingsView : BRControl {
	BRHorizontalDividerControl *_leftDivider;	// 84 = 0x54
	BRImageControl *_leftBackgroundImageControl;	// 88 = 0x58
	BRReflectionControl *_leftReflectionControl;	// 92 = 0x5c
	BRHorizontalDividerControl *_rightDivider;	// 96 = 0x60
	BRImageControl *_rightBackgroundImageControl;	// 100 = 0x64
	BRReflectionControl *_rightReflectionControl;	// 104 = 0x68
	BRControl *_dimControl;	// 108 = 0x6c
	BRHeaderControl *_headerControl;	// 112 = 0x70
	BRTableView *_leftTable;	// 116 = 0x74
	BRTableView *_rightTable;	// 120 = 0x78
}
@property(retain, nonatomic) ATVImage *headerImage;	// G=0x2855e1; S=0x28556d; 
@property(retain, nonatomic) ATVImage *leftBackgroundImage;	// G=0x285645; S=0x285601; 
@property(readonly, assign, nonatomic) BRTableView *leftTable;	// G=0x285d21; @synthesize=_leftTable
@property(retain, nonatomic) ATVImage *rightBackgroundImage;	// G=0x2856a9; S=0x285665; 
@property(readonly, assign, nonatomic) BRTableView *rightTable;	// G=0x285d31; @synthesize=_rightTable
@property(readonly, assign, nonatomic) float tableWidth;	// G=0x2856c9; 
@property(copy, nonatomic) NSString *title;	// G=0x28554d; S=0x28552d; 
- (id)init;	// 0x285175
- (id)accessibilityLabel;	// 0x285ca9
- (id)accessibilityNonFocusableElements;	// 0x285cc9
- (void)dealloc;	// 0x285429
// declared property getter: - (id)headerImage;	// 0x2855e1
- (void)layoutSubcontrols;	// 0x2856d5
// declared property getter: - (id)leftBackgroundImage;	// 0x285645
// declared property getter: - (id)leftTable;	// 0x285d21
// declared property getter: - (id)rightBackgroundImage;	// 0x2856a9
// declared property getter: - (id)rightTable;	// 0x285d31
// declared property setter: - (void)setHeaderImage:(id)image;	// 0x28556d
// declared property setter: - (void)setLeftBackgroundImage:(id)image;	// 0x285601
// declared property setter: - (void)setRightBackgroundImage:(id)image;	// 0x285665
// declared property setter: - (void)setTitle:(id)title;	// 0x28552d
// declared property getter: - (float)tableWidth;	// 0x2856c9
// declared property getter: - (id)title;	// 0x28554d
@end

