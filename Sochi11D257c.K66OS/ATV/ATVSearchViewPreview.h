/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"

@class BRTextControl, BRImageControl;

__attribute__((visibility("hidden")))
@interface ATVSearchViewPreview : BRControl {
	BRImageControl *_towerControl;	// 84 = 0x54
	BRTextControl *_titleControl;	// 88 = 0x58
	BRTextControl *_subtitleControl;	// 92 = 0x5c
}
@property(retain, nonatomic) BRTextControl *subtitleControl;	// G=0x83a31; S=0x83a41; @synthesize=_subtitleControl
@property(retain, nonatomic) BRTextControl *titleControl;	// G=0x839f9; S=0x83a09; @synthesize=_titleControl
@property(retain, nonatomic) BRImageControl *towerControl;	// G=0x839c1; S=0x839d1; @synthesize=_towerControl
- (id)initWithTitle:(id)title subTitle:(id)title2;	// 0x8336d
- (void).cxx_destruct;	// 0x83a69
- (void)layoutSubcontrols;	// 0x83611
// declared property setter: - (void)setSubtitleControl:(id)control;	// 0x83a41
// declared property setter: - (void)setTitleControl:(id)control;	// 0x83a09
// declared property setter: - (void)setTowerControl:(id)control;	// 0x839d1
// declared property getter: - (id)subtitleControl;	// 0x83a31
// declared property getter: - (id)titleControl;	// 0x839f9
// declared property getter: - (id)towerControl;	// 0x839c1
@end

