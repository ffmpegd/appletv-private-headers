/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library
#import "MediaPlayer-Structs.h"


@interface MPMediaItemArtwork : NSObject {
}
@property(readonly, assign, nonatomic) CGRect bounds;	// G=0x31db7915; 
@property(readonly, assign, nonatomic) CGRect imageCropRect;	// G=0x31db7885; 
- (id)albumImageWithSize:(CGSize)size;	// 0x31db79a5
// declared property getter: - (CGRect)bounds;	// 0x31db7915
- (id)coverFlowImageWithSize:(CGSize)size;	// 0x31db7a21
- (BOOL)hasArtworkAvailable;	// 0x31db7b41
// declared property getter: - (CGRect)imageCropRect;	// 0x31db7885
- (id)imageWithSize:(CGSize)size;	// 0x31db7b19
- (id)imageWithSize:(CGSize)size atPlaybackTime:(double)playbackTime;	// 0x31db7a9d
@end

