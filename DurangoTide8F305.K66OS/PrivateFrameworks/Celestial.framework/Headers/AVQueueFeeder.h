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
- (id)init;	// 0x3264db51
- (double)bookmarkTimeForIndex:(unsigned)index;	// 0x3265cda9
- (void)contentInvalidatedWithCurrentItemMovedToIndex:(unsigned)index;	// 0x3265cff5
- (void)contentsDidChangeByInsertingRange:(NSRange)contents;	// 0x3265d171
- (void)contentsDidChangeByRemovingRange:(NSRange)contents;	// 0x3265d0b9
- (unsigned)itemCount;	// 0x32654f95
- (unsigned)numberOfPaths;	// 0x3265cda1
- (id)pathAtIndex:(unsigned)index;	// 0x3265cda5
- (id)playbackInfoAtIndex:(unsigned)index;	// 0x3264dfd5
@end

