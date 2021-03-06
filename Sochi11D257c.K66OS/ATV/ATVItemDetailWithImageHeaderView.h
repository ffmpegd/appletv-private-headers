/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRCursorControl, ATVItemDetailWithImageHeaderTopPart, ATVItemDetailWithImageHeaderBottomPart;

__attribute__((visibility("hidden")))
@interface ATVItemDetailWithImageHeaderView : BRControl {
	ATVItemDetailWithImageHeaderTopPart *_topPart;	// 84 = 0x54
	ATVItemDetailWithImageHeaderBottomPart *_bottomPart;	// 88 = 0x58
	BRCursorControl *_cursor;	// 92 = 0x5c
}
@property(readonly, assign, nonatomic) ATVItemDetailWithImageHeaderBottomPart *bottomPart;	// G=0x4579a1; @synthesize=_bottomPart
@property(retain, nonatomic) BRCursorControl *cursor;	// G=0x4579b1; S=0x4579c1; @synthesize=_cursor
@property(assign, nonatomic) int displayMode;	// G=0x457481; S=0x457415; 
@property(assign, nonatomic) int layoutStyle;	// G=0x4573d9; S=0x457385; 
@property(assign, nonatomic) int mainImageStyle;	// G=0x4574f9; S=0x4574bd; 
@property(readonly, assign, nonatomic) ATVItemDetailWithImageHeaderTopPart *topPart;	// G=0x457991; @synthesize=_topPart
- (id)init;	// 0x457225
- (void).cxx_destruct;	// 0x4579e9
- (id)accessibilityLabel;	// 0x457801
- (id)accessibilityScreenContent;	// 0x457929
// declared property getter: - (id)bottomPart;	// 0x4579a1
// declared property getter: - (id)cursor;	// 0x4579b1
// declared property getter: - (int)displayMode;	// 0x457481
// declared property getter: - (int)layoutStyle;	// 0x4573d9
- (void)layoutSubcontrols;	// 0x457681
// declared property getter: - (int)mainImageStyle;	// 0x4574f9
// declared property setter: - (void)setCursor:(id)cursor;	// 0x4579c1
// declared property setter: - (void)setDisplayMode:(int)mode;	// 0x457415
// declared property setter: - (void)setLayoutStyle:(int)style;	// 0x457385
// declared property setter: - (void)setMainImageStyle:(int)style;	// 0x4574bd
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x457535
// declared property getter: - (id)topPart;	// 0x457991
@end

