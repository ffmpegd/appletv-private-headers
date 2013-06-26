/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import "Celestial-Structs.h"
#import <NSObject.h> // Unknown library


@interface AVQueueFeeder : NSObject {
}
- (id)init;	// 0x3377ce11
- (double)bookmarkTimeForIndex:(unsigned)index;	// 0x33790be1
- (void)contentInvalidatedWithCurrentItemMovedToIndex:(unsigned)index;	// 0x33790b11
- (void)contentsDidChangeByInsertingRange:(NSRange)contents;	// 0x33790979
- (void)contentsDidChangeByRemovingRange:(NSRange)contents;	// 0x33790a45
- (unsigned)itemCount;	// 0x33785011
- (unsigned)numberOfPaths;	// 0x3379096d
- (id)pathAtIndex:(unsigned)index;	// 0x33790971
- (id)playbackInfoAtIndex:(unsigned)index;	// 0x3377d375
@end
