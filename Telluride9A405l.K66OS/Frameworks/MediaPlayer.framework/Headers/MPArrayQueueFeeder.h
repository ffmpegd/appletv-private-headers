/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MPQueueFeeder.h"

@class NSArray;

@interface MPArrayQueueFeeder : MPQueueFeeder {
	NSArray *_queueItems;	// 32 = 0x20
}
@property(readonly, assign, nonatomic) NSArray *items;	// G=0x33bb9f09; 
- (id)initWithItems:(id)items;	// 0x33bb9b3d
- (double)bookmarkTimeForIndex:(unsigned)index;	// 0x33bb9bd1
- (id)copyRawItemAtIndex:(unsigned)index;	// 0x33bb9c09
- (void)dealloc;	// 0x33bb9b7d
// declared property getter: - (id)items;	// 0x33bb9f09
- (unsigned)numberOfPaths;	// 0x33bb9d35
- (id)pathAtIndex:(unsigned)index;	// 0x33bb9d55
- (id)playbackInfoAtIndex:(unsigned)index;	// 0x33bb9d8d
@end

