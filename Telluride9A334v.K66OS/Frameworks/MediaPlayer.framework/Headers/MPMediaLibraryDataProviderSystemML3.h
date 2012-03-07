/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import "MPMediaLibraryDataProviderML3.h"


@interface MPMediaLibraryDataProviderSystemML3 : MPMediaLibraryDataProviderML3 {
}
+ (id)_localizedGeniusErrorForError:(id)error;	// 0x34e646c5
- (id)_cacheIDForItemIdentifier:(long long)itemIdentifier;	// 0x34e651a5
- (id)_cacheIDForItemIdentifier:(long long)itemIdentifier atPlaybackTime:(double)playbackTime;	// 0x34e65239
- (void)_loadArtworkImageDataForMLArtworkFormatID:(unsigned)mlartworkFormatID artworkCacheID:(id)anId completionBlock:(id)block;	// 0x34e64959
- (void)_loadArtworkImageForMLArtworkFormatID:(unsigned)mlartworkFormatID artworkCacheID:(id)anId completionBlock:(id)block;	// 0x34e64ae9
- (void *)createGeniusClusterPlaylistWithSeedItemIdentifiers:(long long *)seedItemIdentifiers count:(unsigned)count error:(id *)error;	// 0x34e64515
- (long long *)generateItemIdentifiersForGeniusClusterPlaylist:(void *)geniusClusterPlaylist count:(unsigned *)count error:(id *)error;	// 0x34e64615
- (BOOL)hasArtworkImageForItemWithIdentifier:(long long)identifier;	// 0x34e65525
- (BOOL)isArtworkImageIdenticalForItemWithIdentifier:(long long)identifier otherItemWithIdentifier:(long long)identifier2 compareRepresentativeItemArtwork:(BOOL)artwork missingAlwaysComparesEqual:(BOOL)equal;	// 0x34e65529
- (BOOL)isGeniusEnabled;	// 0x34e64195
- (void)loadArtworkImageForFormat:(int)format ofItemWithArtworkCacheID:(id)artworkCacheID completionBlock:(id)block;	// 0x34e653f9
- (void)loadArtworkImageForFormat:(int)format ofItemWithIdentifier:(long long)identifier completionBlock:(id)block;	// 0x34e653b1
- (void)loadBestArtworkImageDataForSize:(CGSize)size ofItemWithIdentifier:(long long)identifier completionBlock:(id)block;	// 0x34e652c1
- (void)loadBestArtworkImageForSize:(CGSize)size ofItemWithIdentifier:(long long)identifier completionBlock:(id)block;	// 0x34e65421
- (void)loadBestTimedArtworkImageDataForSize:(CGSize)size ofItemWithIdentifier:(long long)identifier atPlaybackTime:(double)playbackTime completionBlock:(id)block;	// 0x34e65315
- (void)loadBestTimedArtworkImageForSize:(CGSize)size ofItemWithIdentifier:(long long)identifier atPlaybackTime:(double)playbackTime completionBlock:(id)block;	// 0x34e65475
- (void)loadCoverFlowArtworkImageForSize:(CGSize)size ofItemWithIdentifier:(long long)identifier completionBlock:(id)block;	// 0x34e654d1
- (void)releaseGeniusClusterPlaylist:(void *)playlist;	// 0x34e646b1
- (void)seedPlaylistWithIdentifier:(long long)identifier withItemWithIdentifier:(long long)identifier2 completionBlock:(id)block;	// 0x34e641f5
@end

