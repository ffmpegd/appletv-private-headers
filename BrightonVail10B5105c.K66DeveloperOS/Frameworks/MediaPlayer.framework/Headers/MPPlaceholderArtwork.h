/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library
#import "MediaPlayer-Structs.h"


@interface MPPlaceholderArtwork : NSObject {
}
+ (id)allArtworkFormatSizes;	// 0x35018eb9
+ (unsigned)currentScreenFormatIDFrom1XFormatID:(unsigned)a1XFormatID;	// 0x35018d1d
+ (id)noArtMusicPlaceholderAudioBookImage;	// 0x350178b5
+ (id)noArtMusicPlaceholderImageForMediaType:(int)mediaType size:(CGSize)size;	// 0x350184bd
+ (id)noArtMusicPlaceholderMusicImageForSize:(CGSize)size;	// 0x35016bd9
+ (id)noArtMusicPlaceholderPodcastImage;	// 0x35017305
+ (id)noArtPlaceholderAudioBookImage;	// 0x35017831
+ (id)noArtPlaceholderImageForMediaType:(int)mediaType;	// 0x3501837d
+ (id)noArtPlaceholderImageForMediaType:(int)mediaType size:(CGSize)size;	// 0x350183f9
+ (id)noArtPlaceholderImageForMediaType:(int)mediaType withFormat:(unsigned)format;	// 0x35018c81
+ (id)noArtPlaceholderMusicImage;	// 0x35016b35
+ (id)noArtPlaceholderMusicImageForSize:(CGSize)size;	// 0x35016b55
+ (id)noArtPlaceholderPodcastImage;	// 0x35017281
+ (id)noArtPlaceholderVideoImage;	// 0x35017e15
+ (id)padNoArtPlaceholderAudioBookImageForSize:(CGSize)size;	// 0x35018775
+ (id)padNoArtPlaceholderImageForMediaType:(int)mediaType size:(CGSize)size;	// 0x35018a79
+ (id)padNoArtPlaceholderMusicImageForSize:(CGSize)size;	// 0x35018525
+ (id)padNoArtPlaceholderPodcastImageForSize:(CGSize)size;	// 0x3501864d
+ (id)padNoArtPlaceholderVideoImageForSize:(CGSize)size;	// 0x3501889d
+ (id)scaleImage:(id)image withFormat:(unsigned)format;	// 0x35018ad5
+ (id)scaledNoArtPlaceholderAudioBookImageWithFormat:(unsigned)format;	// 0x35017939
+ (id)scaledNoArtPlaceholderMusicImageWithFormat:(unsigned)format;	// 0x35016d85
+ (id)scaledNoArtPlaceholderPodcastImageWithFormat:(unsigned)format;	// 0x35017389
+ (id)scaledNoArtPlaceholderVideoImageWithFormat:(unsigned)format;	// 0x35017ea1
+ (CGSize)unscaledArtworkSizeForFormatID:(unsigned)formatID;	// 0x3501906d
- (BOOL)isPlaceholder:(id)placeholder;	// 0x35018fd5
@end
