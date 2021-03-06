/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MPAVQueuePlayerFeederSource.h"
#import <NSObject.h> // Unknown library
#import "MediaPlayer-Structs.h"

@class NSString, MPAVItem, MPAVQueuePlayerFeeder, MPQueuePlayer;
@protocol MPAVPlaylistFeeder;

@interface MPAVPlaylistManager : NSObject <MPAVQueuePlayerFeederSource> {
	NSString *_audioSessionModeOverride;	// 4 = 0x4
	MPAVItem *_currentItem;	// 8 = 0x8
	MPAVQueuePlayerFeeder *_feeder;	// 12 = 0xc
	BOOL _goToTargetIndex;	// 16 = 0x10
	int _isChangingPlaylistFeeder;	// 20 = 0x14
	int _lastSelectionDirection;	// 24 = 0x18
	MPQueuePlayer *_player;	// 28 = 0x1c
	id<MPAVPlaylistFeeder> _playlistFeeder;	// 32 = 0x20
	int _repeatMode;	// 36 = 0x24
	int _retainCount;	// 40 = 0x28
	int _targetIndex;	// 44 = 0x2c
	BOOL _updatedAudioSessionMode;	// 48 = 0x30
}
@property(retain, nonatomic) NSString *audioSessionModeOverride;	// G=0x341e99a1; S=0x341e99b1; @synthesize=_audioSessionModeOverride
@property(readonly, assign, nonatomic) BOOL canChangePlaylistFeeder;	// G=0x341e9061; 
@property(readonly, assign) int currentIndex;	// G=0x341e8f85; 
@property(readonly, assign) MPAVItem *currentItem;	// G=0x341e99c1; @synthesize=_currentItem
@property(assign, nonatomic) BOOL forceSynchronousQueueFilling;	// G=0x341e8a85; S=0x341e8b0d; 
@property(readonly, assign, nonatomic) BOOL isChangingPlaylistFeeder;	// G=0x341e9049; 
@property(readonly, assign) int lastSelectionDirection;	// G=0x341e99f9; @synthesize=_lastSelectionDirection
@property(assign, nonatomic) BOOL managesSystemDownloads;	// G=0x341e8aa9; S=0x341e8b2d; 
@property(assign, nonatomic) unsigned maxQueueDepth;	// G=0x341e8acd; S=0x341e8b4d; 
@property(assign, nonatomic) unsigned minQueueDepth;	// G=0x341e8aed; S=0x341e8b6d; 
@property(readonly, assign) MPQueuePlayer *player;	// G=0x341e99d5; @synthesize=_player
@property(retain, nonatomic) id<MPAVPlaylistFeeder> playlistFeeder;	// G=0x341e99e9; S=0x341e9079; @synthesize=_playlistFeeder
@property(assign) int repeatMode;	// G=0x341e8fb9; S=0x341e8fc9; 
- (id)init;	// 0x341e8269
- (void)_assetCancelNotification:(id)notification;	// 0x341e8751
- (id)_audioSessionModeForMediaType:(int)mediaType;	// 0x341e978d
- (id)_feeder;	// 0x341e977d
- (id)_feederItemForIndex:(int)index;	// 0x341e8bed
- (BOOL)_isDeallocating;	// 0x341e823d
- (id)_itemToFollowItemIndex:(int)followItemIndex skipUnavailableContent:(BOOL)content;	// 0x341e9575
- (void)_mediaLibraryDisplayValuesDidChangeNotification:(id)_mediaLibraryDisplayValues;	// 0x341e8939
- (void)_networkTypeDidChangeNotification:(id)_networkType;	// 0x341e89b5
- (int)_nextItemIndex:(int)index repeatMode:(int)mode;	// 0x341e9485
- (int)_prepareToQueuePlaybackIndex:(int)queuePlaybackIndex selectionDirection:(int)direction;	// 0x341e8d15
- (void)_reloadQueuedItemsIfPathBecameAvailable;	// 0x341e9201
- (BOOL)_tryRetain;	// 0x341e81ed
- (void)_updateAudioSessionMode;	// 0x341e97cd
// declared property getter: - (id)audioSessionModeOverride;	// 0x341e99a1
// declared property getter: - (BOOL)canChangePlaylistFeeder;	// 0x341e9061
- (void)contentInvalidated;	// 0x341e9425
- (void)contentInvalidatedWithCurrentItemMovedToIndex:(unsigned)index;	// 0x341e93dd
- (void)contentInvalidatedWithNewIndex:(unsigned)newIndex;	// 0x341e9445
- (void)contentsDidChangeByRemovingRange:(NSRange)contents;	// 0x341e9315
// declared property getter: - (int)currentIndex;	// 0x341e8f85
// declared property getter: - (id)currentItem;	// 0x341e99c1
- (void)dealloc;	// 0x341e8459
// declared property getter: - (BOOL)forceSynchronousQueueFilling;	// 0x341e8a85
// declared property getter: - (BOOL)isChangingPlaylistFeeder;	// 0x341e9049
// declared property getter: - (int)lastSelectionDirection;	// 0x341e99f9
// declared property getter: - (BOOL)managesSystemDownloads;	// 0x341e8aa9
// declared property getter: - (unsigned)maxQueueDepth;	// 0x341e8acd
// declared property getter: - (unsigned)minQueueDepth;	// 0x341e8aed
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x341e85d9
// declared property getter: - (id)player;	// 0x341e99d5
// declared property getter: - (id)playlistFeeder;	// 0x341e99e9
- (id)queuePlayerFeeder:(id)feeder itemToFollowItem:(id)followItem;	// 0x341e9659
- (BOOL)queuePlayerFeeder:(id)feeder willInsertItem:(id)item;	// 0x341e9695
- (void)queuePlayerFeeder:(id)feeder willRemoveItem:(id)item;	// 0x341e9691
- (void)queuePlayerFeederDidUpdateQueue:(id)queuePlayerFeeder queuedItems:(id)items dequeuedItems:(id)items3;	// 0x341e9699
- (void)queuePlayerFeederFailedToQueueAnyItems:(id)queueAnyItems;	// 0x341e9711
- (oneway void)release;	// 0x341e8165
// declared property getter: - (int)repeatMode;	// 0x341e8fb9
- (id)retain;	// 0x341e812d
- (unsigned)retainCount;	// 0x341e81d9
// declared property setter: - (void)setAudioSessionModeOverride:(id)override;	// 0x341e99b1
- (void)setCurrentIndex:(int)index selectionDirection:(int)direction;	// 0x341e8ea9
// declared property setter: - (void)setForceSynchronousQueueFilling:(BOOL)filling;	// 0x341e8b0d
// declared property setter: - (void)setManagesSystemDownloads:(BOOL)downloads;	// 0x341e8b2d
// declared property setter: - (void)setMaxQueueDepth:(unsigned)depth;	// 0x341e8b4d
// declared property setter: - (void)setMinQueueDepth:(unsigned)depth;	// 0x341e8b6d
// declared property setter: - (void)setPlaylistFeeder:(id)feeder;	// 0x341e9079
- (BOOL)setPlaylistFeeder:(id)feeder startIndex:(int)index;	// 0x341e9169
// declared property setter: - (void)setRepeatMode:(int)mode;	// 0x341e8fc9
- (void)updateForSoundCheckDefaultsChange;	// 0x341e8b8d
@end

