/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library
#import "NSCoding.h"
#import "NSCopying.h"
#import "ATVSlideshow-Structs.h"

@class NSString, MPSongInternal, MPAudioPlaylist, NSURL, MCSong;

@interface MPSong : NSObject <NSCoding, NSCopying> {
	NSString *_path;	// 4 = 0x4
	MCSong *_song;	// 8 = 0x8
	MPAudioPlaylist *_parentPlaylist;	// 12 = 0xc
	MPSongInternal *_internal;	// 16 = 0x10
}
@property(copy, nonatomic) NSURL *URL;	// G=0x3621f919; S=0x3621f951; @dynamic
@property(assign, nonatomic) float audioVolume;	// G=0x362200b1; S=0x362200fd; @dynamic
@property(assign, nonatomic) double duration;	// G=0x3621fd21; S=0x3621fd99; @dynamic
@property(assign, nonatomic) double fadeInDuration;	// G=0x3621ffb9; S=0x3621ffd9; @dynamic
@property(assign, nonatomic) double fadeOutDuration;	// G=0x36220035; S=0x36220055; @dynamic
@property(retain) MPAudioPlaylist *parentPlaylist;	// G=0x36220175; S=0x3622057d; converted property
@property(copy, nonatomic) NSString *path;	// G=0x3621f7b5; S=0x3621f7c5; @dynamic
@property(retain) MCSong *song;	// G=0x36220185; S=0x362203d5; converted property
@property(assign, nonatomic) double startTime;	// G=0x3621f981; S=0x3621fa51; @dynamic
+ (id)song;	// 0x3621ef19
+ (id)songWithPath:(id)path;	// 0x3621ef8d
+ (id)songWithURL:(id)url;	// 0x3621ef51
- (id)init;	// 0x3621efc9
- (id)initWithCoder:(id)coder;	// 0x3621f3a9
- (id)initWithPath:(id)path;	// 0x3621f599
// declared property getter: - (id)URL;	// 0x3621f919
// declared property getter: - (float)audioVolume;	// 0x362200b1
- (void)copyStruct:(id)aStruct;	// 0x362202e5
- (id)copyWithZone:(NSZone *)zone;	// 0x3621f5d9
- (void)dealloc;	// 0x3621f67d
- (id)description;	// 0x3621f6fd
// declared property getter: - (double)duration;	// 0x3621fd21
- (void)encodeWithCoder:(id)coder;	// 0x3621f121
// declared property getter: - (double)fadeInDuration;	// 0x3621ffb9
// declared property getter: - (double)fadeOutDuration;	// 0x36220035
- (int)index;	// 0x36220155
- (double)maxDuration;	// 0x36220195
- (id)parentDocument;	// 0x362202bd
// converted property getter: - (id)parentPlaylist;	// 0x36220175
// declared property getter: - (id)path;	// 0x3621f7b5
// declared property setter: - (void)setAudioVolume:(float)volume;	// 0x362200fd
// declared property setter: - (void)setDuration:(double)duration;	// 0x3621fd99
// declared property setter: - (void)setFadeInDuration:(double)duration;	// 0x3621ffd9
// declared property setter: - (void)setFadeOutDuration:(double)duration;	// 0x36220055
- (void)setInternalDuration;	// 0x362205dd
- (void)setInternalStartTime;	// 0x36220619
// converted property setter: - (void)setParentPlaylist:(id)playlist;	// 0x3622057d
// declared property setter: - (void)setPath:(id)path;	// 0x3621f7c5
// converted property setter: - (void)setSong:(id)song;	// 0x362203d5
// declared property setter: - (void)setStartTime:(double)time;	// 0x3621fa51
// declared property setter: - (void)setURL:(id)url;	// 0x3621f951
// converted property getter: - (id)song;	// 0x36220185
// declared property getter: - (double)startTime;	// 0x3621f981
- (double)stopTime;	// 0x36220229
@end
