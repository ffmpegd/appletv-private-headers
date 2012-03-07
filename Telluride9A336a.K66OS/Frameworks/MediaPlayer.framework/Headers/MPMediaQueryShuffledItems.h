/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "NSCoding.h"
#import "NSCopying.h"
#import "MediaPlayer-Structs.h"
#import <NSObject.h> // Unknown library

@class NSArray, NSMutableArray, MPMediaQuery;

@interface MPMediaQueryShuffledItems : NSObject <NSCoding, NSCopying> {
	unsigned _activeShuffleType;	// 4 = 0x4
	BOOL _dirty;	// 8 = 0x8
	NSMutableArray *_orderedArray;	// 12 = 0xc
	MPMediaQuery *_sourceMediaQuery;	// 16 = 0x10
	NSArray *_sourceMediaQueryItems;	// 20 = 0x14
}
@property(readonly, assign, nonatomic) MPMediaQuery *sourceMediaQuery;	// G=0x35bd1e65; @synthesize=_sourceMediaQuery
- (id)initWithCoder:(id)coder;	// 0x35bd0759
- (id)initWithSourceMediaQuery:(id)sourceMediaQuery;	// 0x35bd06c5
- (id)initWithSourceMediaQuery:(id)sourceMediaQuery orderedItems:(id)items shuffleType:(unsigned)type;	// 0x35bd05f9
- (id)_includeInShuffleItemsForQuery:(id)query;	// 0x35bd1391
- (void)_rebuildCaches;	// 0x35bd140d
- (void)_rebuildCachesWithInitialIndex:(unsigned)initialIndex;	// 0x35bd1421
- (void)_rebuildGroupedCachesWithInitialItemIndex:(unsigned)initialItemIndex;	// 0x35bd14c1
- (void)_rebuildItemCachesWithInitialItemIndex:(unsigned)initialItemIndex;	// 0x35bd1aa1
- (void)_resetCaches;	// 0x35bd1d95
- (void)_shuffleMutableArray:(id)array withInitialIndex:(unsigned)initialIndex;	// 0x35bd1ded
- (id)copyWithZone:(NSZone *)zone;	// 0x35bd08e5
- (unsigned)count;	// 0x35bd0955
- (void)dealloc;	// 0x35bd06e5
- (void)encodeWithCoder:(id)coder;	// 0x35bd084d
- (unsigned)indexOfItemWithPersistentID:(unsigned long long)persistentID;	// 0x35bd0a7d
- (unsigned)indexOfObject:(id)object;	// 0x35bd0c99
- (void)invalidateSourceMediaQueryAndLoadItems;	// 0x35bd0ded
- (id)objectAtIndex:(unsigned)index;	// 0x35bd0e39
- (void)shuffleAlbumsWithInitialIndex:(unsigned)initialIndex;	// 0x35bd0fd5
- (void)shuffleItemsWithInitialIndex:(unsigned)initialIndex;	// 0x35bd11ed
// declared property getter: - (id)sourceMediaQuery;	// 0x35bd1e65
- (void)unshuffle;	// 0x35bd1371
@end

