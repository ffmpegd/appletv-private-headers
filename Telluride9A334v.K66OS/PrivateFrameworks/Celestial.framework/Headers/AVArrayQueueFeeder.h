/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import "AVQueueFeeder.h"

@class NSMutableArray;

@interface AVArrayQueueFeeder : AVQueueFeeder {
@private
	NSMutableArray *_items;	// 4 = 0x4
}
- (id)init;	// 0x3504d519
- (id)initWithArray:(id)array;	// 0x3504d845
- (void)dealloc;	// 0x3504d7f9
- (void)insertObject:(id)object atIndex:(unsigned)index;	// 0x3504d691
- (unsigned)itemCount;	// 0x3504d7a9
- (id)itemForIndex:(unsigned)index;	// 0x3504d7b9
- (unsigned)numberOfPaths;	// 0x3504d789
- (id)pathAtIndex:(unsigned)index;	// 0x3504d6d1
- (void)removeObjectAtIndex:(unsigned)index;	// 0x3504d651
- (void)shuffleWithCurrentIndex:(unsigned)currentIndex;	// 0x3504d57d
@end

