/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVFeedCyclerController.h"

@class BRCyclerControl, NSArray;

__attribute__((visibility("hidden")))
@interface ATVFlagstaffPreviewImageCyclerController : ATVFeedCyclerController {
	NSArray *_controls;	// 4 = 0x4
	BRCyclerControl *_cycler;	// 8 = 0x8
}
- (void)_firstItemReady:(id)ready;	// 0x187681
- (id)cycler:(id)cycler itemAtIndex:(int)index;	// 0x187579
- (long)cycler:(id)cycler willCycleToItemAtIndex:(long)index;	// 0x187599
- (void)dealloc;	// 0x1872a9
- (void)setItems:(id)items;	// 0x187325
@end
