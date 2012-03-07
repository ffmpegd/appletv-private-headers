/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import <NSObject.h> // Unknown library
#import "AVPlaylistFeeder.h"

@class MPAVController, NSDictionary;

@interface MPQueueFeeder : NSObject <AVPlaylistFeeder> {
	MPAVController *_avController;	// 4 = 0x4
	CFSetRef _itemsWithReferencesToClear;	// 8 = 0x8
	unsigned _repeatType;	// 12 = 0xc
	unsigned _shuffleType;	// 16 = 0x10
	CFDictionaryRef _nextStartTimes;	// 20 = 0x14
	id _representedObject;	// 24 = 0x18
	BOOL _fullScreenPlaybackQueue;	// 28 = 0x1c
	BOOL _isSourceChangeInProgress;	// 29 = 0x1d
	BOOL _deallocating;	// 30 = 0x1e
}
@property(assign, nonatomic) MPAVController *AVController;	// G=0x34ddd9f1; S=0x34ddda01; @synthesize=_avController
@property(assign, nonatomic) BOOL fullScreenPlaybackQueue;	// G=0x34ddda85; S=0x34ddda95; @synthesize=_fullScreenPlaybackQueue
@property(assign, nonatomic) BOOL isSourceChangeInProgress;	// G=0x34dddaa5; S=0x34ddd2f9; @synthesize=_isSourceChangeInProgress
@property(readonly, assign, nonatomic) Class itemClass;	// G=0x34ddd461; 
@property(readonly, assign, nonatomic) NSDictionary *preferredLanguages;	// G=0x34ddd481; 
@property(readonly, assign, nonatomic) unsigned realRepeatType;	// G=0x34ddd551; 
@property(readonly, assign, nonatomic) unsigned realShuffleType;	// G=0x34ddd561; 
@property(assign, nonatomic) unsigned repeatType;	// G=0x34ddda11; S=0x34ddda21; @synthesize=_repeatType
@property(retain, nonatomic) id<NSObject> representedObject;	// G=0x34ddda51; S=0x34ddda61; @synthesize=_representedObject
@property(assign, nonatomic) unsigned shuffleType;	// G=0x34ddda31; S=0x34ddda41; @synthesize=_shuffleType
@property(readonly, assign, nonatomic) BOOL trackChangesCanEndPlayback;	// G=0x34ddd485; 
+ (void)restoreAVControllerPlaybackQueue:(id)queue fromUnarchiver:(id)unarchiver feederClass:(Class)aClass;	// 0x34ddd841
// declared property getter: - (id)AVController;	// 0x34ddd9f1
- (BOOL)_canPurgeNextStartTimes;	// 0x34ddd645
- (void)_fixNextStartTimesByInsertingRange:(NSRange)range;	// 0x34ddd0d1
- (void)_fixNextStartTimesByRemovingRange:(NSRange)range;	// 0x34ddd18d
- (void)addReferenceToItem:(id)item;	// 0x34ddd489
- (void)archiveAVControllerPlaybackQueue:(id)queue toArchiver:(id)archiver;	// 0x34ddd8bd
- (void)assumeOwnershipOfItems:(id)items;	// 0x34ddd7c1
- (void)beginSourceChange;	// 0x34ddd359
- (void)clearReferencesToItem:(id)item;	// 0x34ddd515
- (void)commitSourceChangeWithStartQueueIndex:(unsigned)startQueueIndex;	// 0x34ddd3c5
- (void)contentInvalidatedWithCurrentItemMovedToIndex:(unsigned)index;	// 0x34ddd5d9
- (void)contentsDidChangeByRemovingRange:(NSRange)contents;	// 0x34ddd571
- (id)copyRawItemAtIndex:(unsigned)index;	// 0x34ddd6dd
- (void)dealloc;	// 0x34ddd019
- (id)errorResolverForItem:(id)item;	// 0x34ddd451
// declared property getter: - (BOOL)fullScreenPlaybackQueue;	// 0x34ddda85
- (void)invalidateQueueCaches;	// 0x34ddd2b1
// declared property getter: - (BOOL)isSourceChangeInProgress;	// 0x34dddaa5
// declared property getter: - (Class)itemClass;	// 0x34ddd461
- (unsigned)itemCount;	// 0x34ddd9e1
- (id)itemForIndex:(unsigned)index;	// 0x34ddd75d
- (unsigned)itemTypeForIndex:(unsigned)index;	// 0x34ddd47d
- (id)localizedPositionInPlaylistString:(id)playlistString;	// 0x34ddd8e9
- (unsigned)numberOfPaths;	// 0x34ddd9dd
- (id)pathAtIndex:(unsigned)index;	// 0x34ddd9bd
- (id)playbackInfoAtIndex:(unsigned)index;	// 0x34ddd649
// declared property getter: - (id)preferredLanguages;	// 0x34ddd481
// declared property getter: - (unsigned)realRepeatType;	// 0x34ddd551
// declared property getter: - (unsigned)realShuffleType;	// 0x34ddd561
- (BOOL)reloadWithDataSource:(id)dataSource;	// 0x34ddd2dd
- (BOOL)reloadWithDataSource:(id)dataSource keepPlayingCurrentItemIfPossible:(BOOL)possible;	// 0x34ddd2f5
// declared property getter: - (unsigned)repeatType;	// 0x34ddda11
// declared property getter: - (id)representedObject;	// 0x34ddda51
- (void)restoreAVControllerPlaybackQueue:(id)queue fromUnarchiver:(id)unarchiver;	// 0x34ddd889
// declared property setter: - (void)setAVController:(id)controller;	// 0x34ddda01
// declared property setter: - (void)setFullScreenPlaybackQueue:(BOOL)queue;	// 0x34ddda95
// declared property setter: - (void)setIsSourceChangeInProgress:(BOOL)progress;	// 0x34ddd2f9
- (void)setNextStartTime:(double)time forIndex:(unsigned)index;	// 0x34ddd1f5
// declared property setter: - (void)setRepeatType:(unsigned)type;	// 0x34ddda21
// declared property setter: - (void)setRepresentedObject:(id)object;	// 0x34ddda61
// declared property setter: - (void)setShuffleType:(unsigned)type;	// 0x34ddda41
- (BOOL)shouldBeginPlaybackOfItem:(id)item error:(id *)error;	// 0x34ddd455
- (void)shuffleItemsWithAnchor:(unsigned *)anchor;	// 0x34ddd2d9
// declared property getter: - (unsigned)shuffleType;	// 0x34ddda31
// declared property getter: - (BOOL)trackChangesCanEndPlayback;	// 0x34ddd485
@end

