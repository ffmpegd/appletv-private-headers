/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"

@class ATVThunderGameCourtView, ATVThunderLineScoreView;

__attribute__((visibility("hidden")))
@interface ATVThunderGamePreviewControl : BRControl {
	ATVThunderLineScoreView *_lineScore;	// 84 = 0x54
	ATVThunderGameCourtView *_gameCourt;	// 88 = 0x58
}
- (id)initWithDictionary:(id)dictionary;	// 0x244ad1
- (id)accessibilityLabel;	// 0x244d61
- (void)dealloc;	// 0x244bd5
- (void)layoutSubcontrols;	// 0x244c39
@end
