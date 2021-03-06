/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "LTAVPlaylist.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class LTAVPlayer, NSArray;

@interface LTAVPlaylist : XXUnknownSuperclass {
	NSArray *_mediaList;	// 4 = 0x4
	NSArray *_shuffleIndexes;	// 8 = 0x8
	LTAVPlayer *_player;	// 12 = 0xc
	long _sequentialIndex;	// 16 = 0x10
	BOOL _shuffleEnabled;	// 20 = 0x14
	int _repeatMode;	// 24 = 0x18
	BOOL _skipExplicit;	// 28 = 0x1c
}
@property(readonly, retain) NSArray *mediaList;	// G=0x275ad; converted property
@property(assign) int repeatMode;	// G=0x27015; S=0x27005; converted property
@property(assign) BOOL shuffleEnabled;	// G=0x26ff5; S=0x27819; converted property
@property(assign) BOOL skipExplicit;	// G=0x27035; S=0x27025; converted property
+ (id)generateShuffleIndexesForCollectionCount:(unsigned)collectionCount;	// 0x276cd
- (id)initWithIndex:(long)index inMediaList:(id)mediaList;	// 0x27639
- (void)appendMediaToSlidingWindow:(id)slidingWindow;	// 0x274f5
- (id)changeMedia:(int)media;	// 0x273cd
- (long)count;	// 0x274b5
- (id)currentMedia;	// 0x27495
- (void)dealloc;	// 0x275dd
- (BOOL)isEqual:(id)equal;	// 0x271fd
- (long)mediaIndex;	// 0x274d5
// converted property getter: - (id)mediaList;	// 0x275ad
- (BOOL)moreItemsAvailable:(int)available;	// 0x27401
- (id)nextMedia;	// 0x27469
// converted property getter: - (int)repeatMode;	// 0x27015
- (void)setPlayer:(id)player;	// 0x26fe5
// converted property setter: - (void)setRepeatMode:(int)mode;	// 0x27005
// converted property setter: - (void)setShuffleEnabled:(BOOL)enabled;	// 0x27819
// converted property setter: - (void)setSkipExplicit:(BOOL)anExplicit;	// 0x27025
// converted property getter: - (BOOL)shuffleEnabled;	// 0x26ff5
// converted property getter: - (BOOL)skipExplicit;	// 0x27035
@end

@interface LTAVPlaylist (Private)
- (BOOL)_assetValidForPlayback:(id)playback;	// 0x2797d
- (id)_mediaForSequentialIndex:(long)sequentialIndex;	// 0x27149
- (long)_mediaIndexForSequentialIndex:(long)sequentialIndex;	// 0x2719d
- (long)_nextSequentialIndexInDirection:(int)direction;	// 0x27055
- (long)_sequentialIndex;	// 0x27045
@end

