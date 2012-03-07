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
@property(readonly, assign, nonatomic) NSArray *items;	// G=0x35b4407d; 
- (id)initWithItems:(id)items;	// 0x35b43cb1
- (double)bookmarkTimeForIndex:(unsigned)index;	// 0x35b43d45
- (id)copyRawItemAtIndex:(unsigned)index;	// 0x35b43d7d
- (void)dealloc;	// 0x35b43cf1
// declared property getter: - (id)items;	// 0x35b4407d
- (unsigned)numberOfPaths;	// 0x35b43ea9
- (id)pathAtIndex:(unsigned)index;	// 0x35b43ec9
- (id)playbackInfoAtIndex:(unsigned)index;	// 0x35b43f01
@end

