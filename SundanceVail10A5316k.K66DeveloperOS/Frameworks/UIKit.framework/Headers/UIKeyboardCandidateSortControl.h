/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UISegmentedControl;

__attribute__((visibility("hidden")))
@interface UIKeyboardCandidateSortControl : UIView {
@private
	UISegmentedControl *_segmentedControl;	// 84 = 0x54
}
@property(readonly, assign) UISegmentedControl *segmentedControl;	// G=0x304347d1; @synthesize=_segmentedControl
- (id)initWithFrame:(CGRect)frame;	// 0x304342f1
- (void)addSegmentedControlWithFrame:(CGRect)frame;	// 0x30433e61
- (void)dealloc;	// 0x304343c5
- (void)layoutSubviews;	// 0x30434411
// declared property getter: - (id)segmentedControl;	// 0x304347d1
- (void)selectNextSegment;	// 0x304345ed
- (void)selectPreviousSegment;	// 0x3043458d
- (void)setSortControlTitles:(id)titles;	// 0x30434669
@end
