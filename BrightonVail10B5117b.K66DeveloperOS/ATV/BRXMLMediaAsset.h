/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRSecureResource.h"
#import "BRBaseMediaAsset.h"

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface BRXMLMediaAsset : BRBaseMediaAsset <BRSecureResource> {
	NSMutableDictionary *_info;	// 8 = 0x8
}
@property(retain) id dictionary;	// G=0x2b1a91; S=0x2b1aa1; converted property
- (id)init;	// 0x2b0b45
- (id)initWithMediaProvider:(id)mediaProvider;	// 0x2b0b59
- (id)artist;	// 0x2b0cb5
- (id)assetID;	// 0x2b0c89
- (unsigned)bookmarkTimeInMS;	// 0x2b19a9
- (unsigned)bookmarkTimeInSeconds;	// 0x2b1979
- (id)cast;	// 0x2b1435
- (id)composer;	// 0x2b0f85
- (id)copyright;	// 0x2b0d39
- (id)coverArt;	// 0x2b1461
- (id)coverArtID;	// 0x2b1631
- (id)dateAcquired;	// 0x2b0f1d
- (id)dateCreated;	// 0x2b0f75
- (id)datePublished;	// 0x2b0ec5
- (void)dealloc;	// 0x2b0bc5
- (id)description;	// 0x2b1959
// converted property getter: - (id)dictionary;	// 0x2b1a91
- (id)directors;	// 0x2b0f89
- (long)duration;	// 0x2b10ed
- (BOOL)forceHDCPProtection;	// 0x2b1a49
- (id)genres;	// 0x2b1409
- (BOOL)hasCoverArt;	// 0x2b192d
- (BOOL)hasVideoContent;	// 0x2b1379
- (id)imageProxy;	// 0x2b0c11
- (BOOL)isExplicit;	// 0x2b12cd
- (id)mediaSummary;	// 0x2b0d0d
- (id)mediaType;	// 0x2b134d
- (id)mediaURL;	// 0x2b0e15
- (id)merchant;	// 0x2b1b85
- (long)parentalControlRatingRank;	// 0x2b124d
- (long)parentalControlRatingSystemID;	// 0x2b11cd
- (id)playbackMetadata;	// 0x2b19f5
- (id)previewURL;	// 0x2b0de9
- (id)primaryCollectionTitle;	// 0x2b0ce1
- (id)primaryGenre;	// 0x2b13c1
- (id)publisher;	// 0x2b0e99
- (id)rating;	// 0x2b11a1
- (id)resolution;	// 0x2b0c5d
- (id)secondScreenURL;	// 0x2b0e41
- (id)secureResourceAuthenticator;	// 0x2b1add
// converted property setter: - (void)setDictionary:(id)dictionary;	// 0x2b1aa1
- (void)setObject:(id)object forKey:(id)key;	// 0x2b0c31
- (id)thumbnailArt;	// 0x2b1549
- (id)thumbnailArtID;	// 0x2b17b1
- (id)thumbnailURL;	// 0x2b0dbd
- (id)title;	// 0x2b0e6d
- (id)trickPlayConfig;	// 0x2b0d91
- (id)trickPlayURL;	// 0x2b0d65
@end

