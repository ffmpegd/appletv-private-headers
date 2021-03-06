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
+ (id)allArtworkFormatSizes;	// 0x341dd4ed
+ (unsigned)currentScreenFormatIDFrom1XFormatID:(unsigned)a1XFormatID;	// 0x341dd351
+ (id)noArtMusicPlaceholderAudioBookImage;	// 0x341dbfcd
+ (id)noArtMusicPlaceholderImageForMediaType:(int)mediaType size:(CGSize)size;	// 0x341dcba9
+ (id)noArtMusicPlaceholderMusicImageForSize:(CGSize)size;	// 0x341db361
+ (id)noArtMusicPlaceholderPodcastImage;	// 0x341dba45
+ (id)noArtPlaceholderAudioBookImage;	// 0x341dbf5d
+ (id)noArtPlaceholderImageForMediaType:(int)mediaType;	// 0x341dca69
+ (id)noArtPlaceholderImageForMediaType:(int)mediaType size:(CGSize)size;	// 0x341dcae5
+ (id)noArtPlaceholderImageForMediaType:(int)mediaType withFormat:(unsigned)format;	// 0x341dd2b5
+ (id)noArtPlaceholderMusicImage;	// 0x341db2d1
+ (id)noArtPlaceholderMusicImageForSize:(CGSize)size;	// 0x341db2f1
+ (id)noArtPlaceholderPodcastImage;	// 0x341db9d5
+ (id)noArtPlaceholderVideoImage;	// 0x341dc519
+ (id)padNoArtPlaceholderAudioBookImageForSize:(CGSize)size;	// 0x341dce21
+ (id)padNoArtPlaceholderImageForMediaType:(int)mediaType size:(CGSize)size;	// 0x341dd0d5
+ (id)padNoArtPlaceholderMusicImageForSize:(CGSize)size;	// 0x341dcc11
+ (id)padNoArtPlaceholderPodcastImageForSize:(CGSize)size;	// 0x341dcd19
+ (id)padNoArtPlaceholderVideoImageForSize:(CGSize)size;	// 0x341dcf29
+ (id)scaleImage:(id)image withFormat:(unsigned)format;	// 0x341dd131
+ (id)scaledNoArtPlaceholderAudioBookImageWithFormat:(unsigned)format;	// 0x341dc03d
+ (id)scaledNoArtPlaceholderMusicImageWithFormat:(unsigned)format;	// 0x341db4d9
+ (id)scaledNoArtPlaceholderPodcastImageWithFormat:(unsigned)format;	// 0x341dbab5
+ (id)scaledNoArtPlaceholderVideoImageWithFormat:(unsigned)format;	// 0x341dc58d
+ (CGSize)unscaledArtworkSizeForFormatID:(unsigned)formatID;	// 0x341dd6a1
- (BOOL)isPlaceholder:(id)placeholder;	// 0x341dd609
@end

