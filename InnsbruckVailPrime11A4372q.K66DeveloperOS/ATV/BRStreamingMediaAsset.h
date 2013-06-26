/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRBaseMediaAsset.h"
#import "BRMediaAssetDerivesMediaURL.h"
#import "BRSecureResource.h"
#import "BRATVMediaItem.h"

@class NSMutableDictionary, ATVDataItem, NSString;

__attribute__((visibility("hidden")))
@interface BRStreamingMediaAsset : BRBaseMediaAsset <BRATVMediaItem, BRMediaAssetDerivesMediaURL, BRSecureResource> {
	ATVDataItem *_mediaItem;	// 8 = 0x8
	NSMutableDictionary *_metadata;	// 12 = 0xc
	NSString *_assetID;	// 16 = 0x10
}
@property(readonly, retain) NSString *assetID;	// G=0x30d12d; converted property
@property(assign) unsigned bookmarkTimeInMS;	// G=0x30d6a9; S=0x30d711; converted property
+ (void)setImplementationClass:(Class)aClass;	// 0x30d0d5
+ (id)streamingMediaAssetWithMediaItem:(id)mediaItem;	// 0x30d0e5
- (id)initWithMediaItem:(id)mediaItem;	// 0x30e215
- (void)_playerStateChanged:(id)changed;	// 0x30e29d
- (BOOL)_supportsBookmarkProperty;	// 0x30e2fd
- (BOOL)alwaysRequiresAuthorization;	// 0x30df29
- (id)artist;	// 0x30d449
// converted property getter: - (id)assetID;	// 0x30d12d
// converted property getter: - (unsigned)bookmarkTimeInMS;	// 0x30d6a9
- (void)dealloc;	// 0x30d031
- (long)duration;	// 0x30d659
- (BOOL)hasVideoContent;	// 0x30d2bd
- (id)imageProxy;	// 0x30da19
- (BOOL)incrementPlayCount:(unsigned)count;	// 0x30d8e1
- (BOOL)isHD;	// 0x30d585
- (BOOL)isScrubbable;	// 0x30d5cd
- (id)mediaDescription;	// 0x30d4d9
- (id)mediaFlavor;	// 0x30d629
- (id)mediaItemRef;	// 0x30dfe1
- (id)mediaSummary;	// 0x30d4a9
- (id)mediaType;	// 0x30d291
- (id)mediaURL;	// 0x30d1bd
- (id)playbackMetadata;	// 0x30db45
- (id)primaryCollectionTitle;	// 0x30d479
- (id)primaryGenre;	// 0x30d509
- (void)resolveMediaURL:(id)url;	// 0x30dff1
- (id)secureResourceAuthenticator;	// 0x30e1b5
// converted property setter: - (void)setBookmarkTimeInMS:(unsigned)ms;	// 0x30d711
- (void)setPlaybackMetadataValue:(id)value forKey:(id)key;	// 0x30db09
- (void)setWatched:(BOOL)watched;	// 0x30ddad
- (BOOL)shouldShowTrackPopup;	// 0x30e1b9
- (unsigned)startTimeInMS;	// 0x30d891
- (id)title;	// 0x30d419
@end
