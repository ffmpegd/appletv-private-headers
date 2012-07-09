/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MPAVErrorResolver.h"

@class MPMediaItem;

@interface MPDownloadErrorResolver : MPAVErrorResolver {
	MPMediaItem *_mediaItem;	// 8 = 0x8
}
@property(readonly, assign) MPMediaItem *mediaItem;	// G=0x3420807d; 
- (id)initWithMediaItem:(id)mediaItem;	// 0x34207fdd
- (void)dealloc;	// 0x34208031
// declared property getter: - (id)mediaItem;	// 0x3420807d
- (void)resolveError:(id)error;	// 0x342080b5
@end
