/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import "NSCoding.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library

@class MCAudioPlaylist, NSMutableDictionary, NSMutableArray, MCMontage, MPPlaylistInternal, MCPlug;
@protocol MPAudioSupport;

@interface MPAudioPlaylist : NSObject <NSCopying, NSCoding> {
@private
	NSMutableArray *_songs;	// 4 = 0x4
	MCAudioPlaylist *_audioPlaylist;	// 8 = 0x8
	MCPlug *_plug;	// 12 = 0xc
	NSObject<MPAudioSupport> *_parentObject;	// 16 = 0x10
	MCMontage *_montage;	// 20 = 0x14
	NSMutableDictionary *_attributes;	// 24 = 0x18
	MPPlaylistInternal *_internal;	// 28 = 0x1c
}
@property(retain) MCAudioPlaylist *audioPlaylist;	// G=0x34265959; S=0x34265b9d; converted property
@property(assign) double duckInDuration;	// G=0x342656d9; S=0x342656f9; @dynamic
@property(assign) float duckLevel;	// G=0x34265891; S=0x342658b1; @dynamic
@property(assign) double duckOutDuration;	// G=0x342657b5; S=0x342657d5; @dynamic
@property(assign) double duration;	// G=0x342654a1; S=0x3426610d; converted property
@property(assign) double fadeInDuration;	// G=0x342654c1; S=0x342654e1; @dynamic
@property(assign) double fadeOutDuration;	// G=0x3426559d; S=0x342655bd; @dynamic
@property(retain) MCMontage *montage;	// G=0x34265b7d; S=0x34265b8d; converted property
@property(retain) id parentObject;	// G=0x34265491; S=0x342660b1; converted property
@property(readonly, retain) NSMutableArray *songs;	// G=0x34264cd1; converted property
+ (id)audioPlaylist;	// 0x342642c1
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x34264291
- (id)init;	// 0x342642f9
- (id)initWithCoder:(id)coder;	// 0x34264821
- (void)addSong:(id)song;	// 0x34264ce1
- (void)addSongs:(id)songs;	// 0x34264d3d
// converted property getter: - (id)audioPlaylist;	// 0x34265959
- (void)cleanup;	// 0x34265b6d
- (void)copySongs:(id)songs;	// 0x34265a79
- (void)copyStruct:(id)aStruct;	// 0x34265969
- (id)copyWithZone:(NSZone *)zone;	// 0x34264b79
- (int)countOfSongs;	// 0x342663c9
- (void)dealloc;	// 0x342644c9
- (id)description;	// 0x34264bfd
// declared property getter: - (double)duckInDuration;	// 0x342656d9
// declared property getter: - (float)duckLevel;	// 0x34265891
// declared property getter: - (double)duckOutDuration;	// 0x342657b5
// converted property getter: - (double)duration;	// 0x342654a1
- (void)encodeWithCoder:(id)coder;	// 0x342645a1
// declared property getter: - (double)fadeInDuration;	// 0x342654c1
// declared property getter: - (double)fadeOutDuration;	// 0x3426559d
- (void)finalize;	// 0x3426449d
- (void)insertObject:(id)object inSongsAtIndex:(int)index;	// 0x34266409
- (void)insertSongs:(id)songs atIndex:(int)index;	// 0x34264d7d
// converted property getter: - (id)montage;	// 0x34265b7d
- (void)moveSongsFromIndices:(id)indices toIndex:(int)index;	// 0x34265391
- (id)objectInSongsAtIndex:(int)index;	// 0x342663e9
- (id)parentDocument;	// 0x34266261
// converted property getter: - (id)parentObject;	// 0x34265491
- (void)removeAllSongs;	// 0x34265331
- (void)removeObjectFromSongsAtIndex:(int)index;	// 0x34266449
- (void)removeSongsAtIndices:(id)indices;	// 0x34265105
- (void)replaceObjectInSongsAtIndex:(int)index withObject:(id)object;	// 0x34266485
// converted property setter: - (void)setAudioPlaylist:(id)playlist;	// 0x34265b9d
// declared property setter: - (void)setDuckInDuration:(double)duration;	// 0x342656f9
// declared property setter: - (void)setDuckLevel:(float)level;	// 0x342658b1
// declared property setter: - (void)setDuckOutDuration:(double)duration;	// 0x342657d5
// converted property setter: - (void)setDuration:(double)duration;	// 0x3426610d
// declared property setter: - (void)setFadeInDuration:(double)duration;	// 0x342654e1
// declared property setter: - (void)setFadeOutDuration:(double)duration;	// 0x342655bd
// converted property setter: - (void)setMontage:(id)montage;	// 0x34265b8d
// converted property setter: - (void)setParentObject:(id)object;	// 0x342660b1
- (void)setPlug:(id)plug;	// 0x34265f65
// converted property getter: - (id)songs;	// 0x34264cd1
@end

