/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library
#import "MediaPlayer-Structs.h"

@class MPAVItem, NSURL;

@interface MPMovie : NSObject {
	MPAVItem *_item;	// 4 = 0x4
	NSURL *_url;	// 8 = 0x8
	int _movieSourceType;	// 12 = 0xc
	double _startPlaybackTime;	// 16 = 0x10
	double _endPlaybackTime;	// 24 = 0x18
	BOOL _explicitlySetMovieSourceType;	// 32 = 0x20
	BOOL _movieIsUnplayable;	// 33 = 0x21
	double _lastKnownDuration;	// 36 = 0x24
	CGSize _lastKnownNaturalSize;	// 44 = 0x2c
	unsigned _lastKnownType;	// 52 = 0x34
}
@property(readonly, assign, nonatomic) double duration;	// G=0x31d2d2d9; 
@property(assign, nonatomic) double endPlaybackTime;	// G=0x31d2d3f1; S=0x31d2d3dd; 
@property(readonly, assign, nonatomic) int movieMediaTypes;	// G=0x31d2d20d; 
@property(assign, nonatomic) int movieSourceType;	// G=0x31d2d2c9; S=0x31d2d24d; 
@property(readonly, assign, nonatomic) CGSize naturalSize;	// G=0x31d2d369; 
@property(readonly, assign, nonatomic) double playableDuration;	// G=0x31d2d321; 
@property(assign, nonatomic) double startPlaybackTime;	// G=0x31d2d3c5; S=0x31d2d3b1; 
@property(readonly, assign, nonatomic) NSURL *url;	// G=0x31d2d1fd; 
+ (id)movieWithURL:(id)url options:(id)options error:(id *)error;	// 0x31d2cf09
- (id)_MPArrayQueueItem;	// 0x31d2d65d
- (void)_determineMediaType;	// 0x31d2d719
- (void)_durationAvailableNotification:(id)notification;	// 0x31d2d409
- (id)_initWithURL:(id)url options:(id)options error:(id *)error;	// 0x31d2cf5d
- (void)_naturalSizeAvailableNotification:(id)notification;	// 0x31d2d4c9
- (void)_typeAvailableNotification:(id)notification;	// 0x31d2d5ad
- (void)dealloc;	// 0x31d2d111
// declared property getter: - (double)duration;	// 0x31d2d2d9
// declared property getter: - (double)endPlaybackTime;	// 0x31d2d3f1
// declared property getter: - (int)movieMediaTypes;	// 0x31d2d20d
// declared property getter: - (int)movieSourceType;	// 0x31d2d2c9
// declared property getter: - (CGSize)naturalSize;	// 0x31d2d369
// declared property getter: - (double)playableDuration;	// 0x31d2d321
// declared property setter: - (void)setEndPlaybackTime:(double)time;	// 0x31d2d3dd
// declared property setter: - (void)setMovieSourceType:(int)type;	// 0x31d2d24d
// declared property setter: - (void)setStartPlaybackTime:(double)time;	// 0x31d2d3b1
// declared property getter: - (double)startPlaybackTime;	// 0x31d2d3c5
// declared property getter: - (id)url;	// 0x31d2d1fd
@end
