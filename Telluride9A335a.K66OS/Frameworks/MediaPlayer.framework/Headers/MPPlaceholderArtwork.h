/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import <NSObject.h> // Unknown library


@interface MPPlaceholderArtwork : NSObject {
}
+ (unsigned)currentScreenFormatIDFrom1XFormatID:(unsigned)a1XFormatID;	// 0x3018007d
+ (id)noArtPlaceholderAudioBookImage;	// 0x3017f03d
+ (id)noArtPlaceholderImageForMediaType:(int)mediaType;	// 0x3017fabd
+ (id)noArtPlaceholderImageForMediaType:(int)mediaType withFormat:(unsigned)format;	// 0x3017ffe9
+ (id)noArtPlaceholderMusicImage;	// 0x3017e5c1
+ (id)noArtPlaceholderPodcastImage;	// 0x3017eb29
+ (id)noArtPlaceholderVideoImage;	// 0x3017f571
+ (id)scaleImage:(id)image withFormat:(unsigned)format;	// 0x3017fe59
+ (id)scaledNoArtPlaceholderAudioBookImageWithFormat:(unsigned)format;	// 0x3017f0ad
+ (id)scaledNoArtPlaceholderMusicImageWithFormat:(unsigned)format;	// 0x3017e631
+ (id)scaledNoArtPlaceholderPodcastImageWithFormat:(unsigned)format;	// 0x3017eb99
+ (id)scaledNoArtPlaceholderVideoImageWithFormat:(unsigned)format;	// 0x3017f5e5
+ (CGSize)unscaledArtworkSizeForFormatID:(unsigned)formatID;	// 0x301802ad
+ (id)wildcatNoArtPlaceholderAudioBookImage;	// 0x3017fcc9
+ (id)wildcatNoArtPlaceholderImageForMediaType:(int)mediaType;	// 0x3017fde9
+ (id)wildcatNoArtPlaceholderMusicImage;	// 0x3017fba9
+ (id)wildcatNoArtPlaceholderPodcastImage;	// 0x3017fc39
+ (id)wildcatNoArtPlaceholderVideoImage;	// 0x3017fd59
- (BOOL)isPlaceholder:(id)placeholder;	// 0x30180215
@end

