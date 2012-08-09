/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "BRMediaAsset.h"

@protocol BRMediaProvider;

__attribute__((visibility("hidden")))
@interface BRBaseMediaAsset : XXUnknownSuperclass <BRMediaAsset> {
	id<BRMediaProvider> _provider;	// 4 = 0x4
}
@property(assign) unsigned bookmarkTimeInMS;	// G=0x28c53d; S=0x28c505; converted property
@property(assign) unsigned bookmarkTimeInSeconds;	// G=0x28c509; S=0x28c4ed; converted property
@property(assign) BOOL hasBeenPlayed;	// G=0x28c40d; S=0x28c411; converted property
@property(retain) id lastPlayed;	// G=0x28c541; S=0x28c545; converted property
@property(assign) float userStarRating;	// G=0x28c49d; S=0x28c4a5; converted property
- (id)initWithMediaProvider:(id)mediaProvider;	// 0x28c295
- (BOOL)alwaysRequiresAuthorization;	// 0x28c7c1
- (id)artist;	// 0x28c35d
- (id)artistCollection;	// 0x28c5ad
- (id)artistForSorting;	// 0x28c361
- (id)assetID;	// 0x28c345
- (id)authorName;	// 0x28c6b5
// converted property getter: - (unsigned)bookmarkTimeInMS;	// 0x28c53d
// converted property getter: - (unsigned)bookmarkTimeInSeconds;	// 0x28c509
- (id)broadcaster;	// 0x28c489
- (BOOL)canBePlayedInShuffle;	// 0x28c6d1
- (id)cast;	// 0x28c3b1
- (id)category;	// 0x28c6c1
- (void)cleanUpPlaybackContext;	// 0x28c7b5
- (BOOL)closedCaptioned;	// 0x28c4b9
- (id)collections;	// 0x28c601
- (id)composer;	// 0x28c4d1
- (id)composerForSorting;	// 0x28c4d5
- (id)copyright;	// 0x28c3a5
- (void *)createMovieWithProperties:(void *)properties count:(long)count;	// 0x28c7d5
- (id)dateAcquired;	// 0x28c441
- (id)dateAcquiredString;	// 0x28c61d
- (id)dateCreated;	// 0x28c445
- (id)dateCreatedString;	// 0x28c645
- (id)datePublished;	// 0x28c449
- (id)datePublishedString;	// 0x28c66d
- (void)dealloc;	// 0x28c2e9
- (id)directors;	// 0x28c3cd
- (BOOL)dolbyDigital;	// 0x28c4bd
- (long)duration;	// 0x28c3a9
- (unsigned)episode;	// 0x28c495
- (id)episodeNumber;	// 0x28c48d
- (BOOL)forceHDCPProtection;	// 0x28c4e5
- (id)genres;	// 0x28c455
- (int)grFormat;	// 0x28c6c9
// converted property getter: - (BOOL)hasBeenPlayed;	// 0x28c40d
- (BOOL)hasCoverArt;	// 0x28c43d
- (BOOL)hasVideoContent;	// 0x28c4d9
- (unsigned)hash;	// 0x28c789
- (id)imageProxy;	// 0x28c429
- (id)imageProxyWithBookMarkTimeInMS:(unsigned)ms;	// 0x28c42d
- (BOOL)incrementPlayCount:(unsigned)count;	// 0x28c405
- (BOOL)isAvailable;	// 0x28c715
- (BOOL)isCheckedOut;	// 0x28c7dd
- (BOOL)isDisabled;	// 0x28c4dd
- (BOOL)isEqual:(id)equal;	// 0x28c721
- (BOOL)isExplicit;	// 0x28c7c5
- (BOOL)isHD;	// 0x28c4ad
- (BOOL)isInappropriate;	// 0x28c6c5
- (BOOL)isLocal;	// 0x28c6d5
- (BOOL)isPlaying;	// 0x28c809
- (BOOL)isPlayingOrPaused;	// 0x28c945
- (BOOL)isProtectedContent;	// 0x28c4e1
- (BOOL)isValid;	// 0x28c349
- (BOOL)isWidescreen;	// 0x28c4b5
- (id)keywords;	// 0x28c6b9
// converted property getter: - (id)lastPlayed;	// 0x28c541
- (void)logDescription;	// 0x28c695
- (id)mediaCollections;	// 0x28c499
- (id)mediaDescription;	// 0x28c3a1
- (id)mediaFlavor;	// 0x28c4b1
- (id)mediaObjectID;	// 0x28c34d
- (id)mediaSummary;	// 0x28c39d
- (id)mediaType;	// 0x28c44d
- (id)mediaURL;	// 0x28c415
- (id)merchant;	// 0x28c4c9
- (long)parentalControlRatingRank;	// 0x28c7bd
- (long)parentalControlRatingSystemID;	// 0x28c7b9
- (void)performSelector:(SEL)selector target:(id)target;	// 0x28c7e1
- (void)performSelector:(SEL)selector target:(id)target withObject:(id)object;	// 0x28c7f5
- (long)performanceCount;	// 0x28c3ad
- (int)physicalMediaID;	// 0x28c479
- (BOOL)playable;	// 0x28c7c9
- (id)playbackMetadata;	// 0x28c7cd
- (id)playbackRightsOwner;	// 0x28c4e9
- (void)preparePlaybackContext;	// 0x28c7b1
- (id)previewURL;	// 0x28c419
- (id)primaryCollection;	// 0x28c5a9
- (int)primaryCollectionOrder;	// 0x28c471
- (id)primaryCollectionTitle;	// 0x28c5b1
- (id)primaryCollectionTitleForSorting;	// 0x28c5d9
- (id)primaryGenre;	// 0x28c451
- (id)producers;	// 0x28c3e9
- (id)provider;	// 0x28c335
- (id)publisher;	// 0x28c4cd
- (id)rating;	// 0x28c4a9
- (id)resolution;	// 0x28c699
- (unsigned)season;	// 0x28c491
- (id)secondScreenURL;	// 0x28c41d
- (id)seriesName;	// 0x28c481
- (id)seriesNameForSorting;	// 0x28c485
// converted property setter: - (void)setBookmarkTimeInMS:(unsigned)ms;	// 0x28c505
// converted property setter: - (void)setBookmarkTimeInSeconds:(unsigned)seconds;	// 0x28c4ed
// converted property setter: - (void)setHasBeenPlayed:(BOOL)played;	// 0x28c411
// converted property setter: - (void)setLastPlayed:(id)played;	// 0x28c545
- (void)setPlaybackMetadataValue:(id)value forKey:(id)key;	// 0x28c7d1
// converted property setter: - (void)setUserStarRating:(float)rating;	// 0x28c4a5
- (void)skip;	// 0x28c719
- (id)sourceID;	// 0x28c7d9
- (float)starRating;	// 0x28c4c1
- (id)startDate;	// 0x28c57d
- (unsigned)startTimeInMS;	// 0x28c579
- (unsigned)startTimeInSeconds;	// 0x28c549
- (unsigned)stopTimeInMS;	// 0x28c5a5
- (unsigned)stopTimeInSeconds;	// 0x28c581
- (id)title;	// 0x28c365
- (id)titleForSorting;	// 0x28c38d
- (id)trickPlayConfig;	// 0x28c425
- (id)trickPlayURL;	// 0x28c421
// converted property getter: - (float)userStarRating;	// 0x28c49d
- (id)viewCount;	// 0x28c6bd
- (void)willBeDeleted;	// 0x28c71d
- (void)willBeginPlayback;	// 0x28c409
@end
