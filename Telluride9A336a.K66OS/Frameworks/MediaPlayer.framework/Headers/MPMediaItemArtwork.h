/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import <NSObject.h> // Unknown library


@interface MPMediaItemArtwork : NSObject {
@private
	MPMediaItemArtworkInternal _internal;	// 4 = 0x4
}
@property(assign, nonatomic) MPMediaItemArtworkInternal _internal;	// G=0x35b8e665; S=0x35b8e679; @synthesize
@property(readonly, assign, nonatomic) CGRect bounds;	// G=0x35b8e5d9; 
@property(readonly, assign, nonatomic) CGRect imageCropRect;	// G=0x35b8e641; 
- (id)initWithImage:(id)image;	// 0x35b8e3e5
// declared property getter: - (MPMediaItemArtworkInternal)_internal;	// 0x35b8e665
- (id)albumImageDataWithSize:(CGSize)size;	// 0x35b8e5b1
- (id)albumImageWithSize:(CGSize)size;	// 0x35b8e589
// declared property getter: - (CGRect)bounds;	// 0x35b8e5d9
- (id)coverFlowImageWithSize:(CGSize)size;	// 0x35b8e561
- (void)dealloc;	// 0x35b8e485
- (BOOL)hasArtworkAvailable;	// 0x35b8e4d1
// declared property getter: - (CGRect)imageCropRect;	// 0x35b8e641
- (id)imageDataWithSize:(CGSize)size atPlaybackTime:(double)playbackTime;	// 0x35b8e535
- (id)imageWithSize:(CGSize)size;	// 0x35b8e4d5
- (id)imageWithSize:(CGSize)size atPlaybackTime:(double)playbackTime;	// 0x35b8e4fd
// declared property setter: - (void)set_internal:(MPMediaItemArtworkInternal)internal;	// 0x35b8e679
@end

