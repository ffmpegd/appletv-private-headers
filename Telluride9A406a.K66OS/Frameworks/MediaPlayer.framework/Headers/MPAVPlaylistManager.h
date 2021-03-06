/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MPAVQueuePlayerFeederSource.h"
#import "MediaPlayer-Structs.h"
#import <NSObject.h> // Unknown library

@class MPQueuePlayer, MPAVQueuePlayerFeeder, MPAVItem;
@protocol AVPlaylistFeeder;

@interface MPAVPlaylistManager : NSObject <MPAVQueuePlayerFeederSource> {
	id<AVPlaylistFeeder> _playlistFeeder;	// 4 = 0x4
	MPQueuePlayer *_player;	// 8 = 0x8
	MPAVQueuePlayerFeeder *_feeder;	// 12 = 0xc
	int _repeatMode;	// 16 = 0x10
	MPAVItem *_currentItem;	// 20 = 0x14
	int _isChangingPlaylistFeeder;	// 24 = 0x18
	int _targetIndex;	// 28 = 0x1c
	int _lastSelectionDirection;	// 32 = 0x20
	unsigned _goToTargetIndex : 1;	// 36 = 0x24
@private
	int _retainCount;	// 40 = 0x28
}
@property(readonly, assign, nonatomic) BOOL canChangePlaylistFeeder;	// G=0x31a55319; 
@property(readonly, assign) int currentIndex;	// G=0x31a55239; 
@property(readonly, assign) MPAVItem *currentItem;	// G=0x31a55a79; @synthesize=_currentItem
@property(assign, nonatomic) BOOL forceSynchronousQueueFilling;	// G=0x31a54e69; S=0x31a54e8d; 
@property(readonly, assign, nonatomic) BOOL isChangingPlaylistFeeder;	// G=0x31a55301; 
@property(readonly, assign) int lastSelectionDirection;	// G=0x31a55a99; @synthesize=_lastSelectionDirection
@property(readonly, assign) MPQueuePlayer *player;	// G=0x31a55a69; @synthesize=_player
@property(retain, nonatomic) id<AVPlaylistFeeder> playlistFeeder;	// G=0x31a55a89; S=0x31a55331; @synthesize=_playlistFeeder
@property(assign) int repeatMode;	// G=0x31a55275; S=0x31a55285; 
- (id)init;	// 0x31a54709
- (id)_feeder;	// 0x31a55a59
- (id)_feederItemForIndex:(int)index;	// 0x31a54ead
- (BOOL)_isDeallocating;	// 0x31a546dd
- (id)_itemToFollowItemIndex:(int)followItemIndex skipUnavailableContent:(BOOL)content;	// 0x31a557f1
- (int)_nextItemIndex:(int)index repeatMode:(int)mode;	// 0x31a556fd
- (int)_prepareToQueuePlaybackIndex:(int)queuePlaybackIndex selectionDirection:(int)direction;	// 0x31a54fd5
- (void)_reloadQueuedItemsIfPathBecameAvailable;	// 0x31a5546d
- (BOOL)_tryRetain;	// 0x31a54681
// declared property getter: - (BOOL)canChangePlaylistFeeder;	// 0x31a55319
- (void)contentInvalidated;	// 0x31a5569d
- (void)contentInvalidatedWithCurrentItemMovedToIndex:(unsigned)index;	// 0x31a55655
- (void)contentInvalidatedWithNewIndex:(unsigned)newIndex;	// 0x31a556bd
- (void)contentsDidChangeByRemovingRange:(NSRange)contents;	// 0x31a5558d
// declared property getter: - (int)currentIndex;	// 0x31a55239
// declared property getter: - (id)currentItem;	// 0x31a55a79
- (void)dealloc;	// 0x31a54c45
// declared property getter: - (BOOL)forceSynchronousQueueFilling;	// 0x31a54e69
// declared property getter: - (BOOL)isChangingPlaylistFeeder;	// 0x31a55301
// declared property getter: - (int)lastSelectionDirection;	// 0x31a55a99
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x31a54cf9
// declared property getter: - (id)player;	// 0x31a55a69
// declared property getter: - (id)playlistFeeder;	// 0x31a55a89
- (id)queuePlayerFeeder:(id)feeder itemToFollowItem:(id)followItem;	// 0x31a558c1
- (BOOL)queuePlayerFeeder:(id)feeder willInsertItem:(id)item;	// 0x31a558fd
- (void)queuePlayerFeeder:(id)feeder willRemoveItem:(id)item;	// 0x31a558f9
- (void)queuePlayerFeederDidUpdateQueue:(id)queuePlayerFeeder queuedItems:(id)items dequeuedItems:(id)items3;	// 0x31a55935
- (void)queuePlayerFeederFailedToQueueAnyItems:(id)queueAnyItems;	// 0x31a559ed
- (oneway void)release;	// 0x31a545f1
// declared property getter: - (int)repeatMode;	// 0x31a55275
- (id)retain;	// 0x31a545b9
- (unsigned)retainCount;	// 0x31a5466d
- (void)setCurrentIndex:(int)index selectionDirection:(int)direction;	// 0x31a55159
// declared property setter: - (void)setForceSynchronousQueueFilling:(BOOL)filling;	// 0x31a54e8d
// declared property setter: - (void)setPlaylistFeeder:(id)feeder;	// 0x31a55331
- (BOOL)setPlaylistFeeder:(id)feeder startIndex:(int)index;	// 0x31a553d1
// declared property setter: - (void)setRepeatMode:(int)mode;	// 0x31a55285
@end

