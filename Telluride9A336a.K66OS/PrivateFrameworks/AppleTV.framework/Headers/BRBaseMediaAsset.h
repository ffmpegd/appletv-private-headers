/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRMediaAsset.h"
#import <NSObject.h> // Unknown library

@protocol BRMediaProvider;

@interface BRBaseMediaAsset : NSObject <BRMediaAsset> {
@private
	id<BRMediaProvider> _provider;	// 4 = 0x4
}
@property(assign) unsigned bookmarkTimeInMS;	// G=0x33a58399; S=0x33a58361; converted property
@property(assign) unsigned bookmarkTimeInSeconds;	// G=0x33a58365; S=0x33a58349; converted property
@property(assign) BOOL hasBeenPlayed;	// G=0x33a58275; S=0x33a58279; converted property
@property(retain) id lastPlayed;	// G=0x33a5839d; S=0x33a583a1; converted property
@property(assign) float userStarRating;	// G=0x33a582fd; S=0x33a58305; converted property
- (id)initWithMediaProvider:(id)mediaProvider;	// 0x33a580f9
- (BOOL)alwaysRequiresAuthorization;	// 0x33a58619
- (id)artist;	// 0x33a581c1
- (id)artistCollection;	// 0x33a58409
- (id)artistForSorting;	// 0x33a581c5
- (id)assetID;	// 0x33a581a9
- (id)authorName;	// 0x33a58511
// converted property getter: - (unsigned)bookmarkTimeInMS;	// 0x33a58399
// converted property getter: - (unsigned)bookmarkTimeInSeconds;	// 0x33a58365
- (id)broadcaster;	// 0x33a582e9
- (BOOL)canBePlayedInShuffle;	// 0x33a5852d
- (id)cast;	// 0x33a58215
- (id)category;	// 0x33a5851d
- (void)cleanUpPlaybackContext;	// 0x33a5860d
- (BOOL)closedCaptioned;	// 0x33a58315
- (id)collections;	// 0x33a5845d
- (id)composer;	// 0x33a5832d
- (id)composerForSorting;	// 0x33a58331
- (id)copyright;	// 0x33a58209
- (void *)createMovieWithProperties:(void *)properties count:(long)count;	// 0x33a5862d
- (id)dateAcquired;	// 0x33a582a1
- (id)dateAcquiredString;	// 0x33a58479
- (id)dateCreated;	// 0x33a582a5
- (id)dateCreatedString;	// 0x33a584a1
- (id)datePublished;	// 0x33a582a9
- (id)datePublishedString;	// 0x33a584c9
- (void)dealloc;	// 0x33a5814d
- (id)directors;	// 0x33a58231
- (BOOL)dolbyDigital;	// 0x33a58319
- (long)duration;	// 0x33a5820d
- (unsigned)episode;	// 0x33a582f5
- (id)episodeNumber;	// 0x33a582ed
- (BOOL)forceHDCPProtection;	// 0x33a58341
- (id)genres;	// 0x33a582b5
- (int)grFormat;	// 0x33a58525
// converted property getter: - (BOOL)hasBeenPlayed;	// 0x33a58275
- (BOOL)hasCoverArt;	// 0x33a5829d
- (BOOL)hasVideoContent;	// 0x33a58335
- (unsigned)hash;	// 0x33a585e1
- (id)imageProxy;	// 0x33a58289
- (id)imageProxyWithBookMarkTimeInMS:(unsigned)ms;	// 0x33a5828d
- (void)incrementPerformanceCount;	// 0x33a58269
- (void)incrementPerformanceOrSkipCount:(unsigned)count;	// 0x33a5826d
- (BOOL)isAvailable;	// 0x33a58571
- (BOOL)isCheckedOut;	// 0x33a58635
- (BOOL)isDisabled;	// 0x33a58339
- (BOOL)isEqual:(id)equal;	// 0x33a5857d
- (BOOL)isExplicit;	// 0x33a5861d
- (BOOL)isHD;	// 0x33a5830d
- (BOOL)isInappropriate;	// 0x33a58521
- (BOOL)isLocal;	// 0x33a58531
- (BOOL)isPlaying;	// 0x33a58661
- (BOOL)isPlayingOrPaused;	// 0x33a5879d
- (BOOL)isProtectedContent;	// 0x33a5833d
- (BOOL)isValid;	// 0x33a581ad
- (BOOL)isWidescreen;	// 0x33a58311
- (id)keywords;	// 0x33a58515
// converted property getter: - (id)lastPlayed;	// 0x33a5839d
- (void)logDescription;	// 0x33a584f1
- (id)mediaCollections;	// 0x33a582f9
- (id)mediaDescription;	// 0x33a58205
- (id)mediaObjectID;	// 0x33a581b1
- (id)mediaSummary;	// 0x33a58201
- (id)mediaType;	// 0x33a582ad
- (id)mediaURL;	// 0x33a5827d
- (id)merchant;	// 0x33a58325
- (long)parentalControlRatingRank;	// 0x33a58615
- (long)parentalControlRatingSystemID;	// 0x33a58611
- (void)performSelector:(SEL)selector target:(id)target;	// 0x33a58639
- (void)performSelector:(SEL)selector target:(id)target withObject:(id)object;	// 0x33a5864d
- (long)performanceCount;	// 0x33a58211
- (int)physicalMediaID;	// 0x33a582d9
- (BOOL)playable;	// 0x33a58621
- (id)playbackMetadata;	// 0x33a58625
- (id)playbackRightsOwner;	// 0x33a58345
- (void)preparePlaybackContext;	// 0x33a58609
- (id)previewURL;	// 0x33a58281
- (id)primaryCollection;	// 0x33a58405
- (int)primaryCollectionOrder;	// 0x33a582d1
- (id)primaryCollectionTitle;	// 0x33a5840d
- (id)primaryCollectionTitleForSorting;	// 0x33a58435
- (id)primaryGenre;	// 0x33a582b1
- (id)producers;	// 0x33a5824d
- (id)provider;	// 0x33a58199
- (id)publisher;	// 0x33a58329
- (id)rating;	// 0x33a58309
- (id)resolution;	// 0x33a584f5
- (unsigned)season;	// 0x33a582f1
- (id)seriesName;	// 0x33a582e1
- (id)seriesNameForSorting;	// 0x33a582e5
// converted property setter: - (void)setBookmarkTimeInMS:(unsigned)ms;	// 0x33a58361
// converted property setter: - (void)setBookmarkTimeInSeconds:(unsigned)seconds;	// 0x33a58349
// converted property setter: - (void)setHasBeenPlayed:(BOOL)played;	// 0x33a58279
// converted property setter: - (void)setLastPlayed:(id)played;	// 0x33a583a1
- (void)setPlaybackMetadataValue:(id)value forKey:(id)key;	// 0x33a58629
// converted property setter: - (void)setUserStarRating:(float)rating;	// 0x33a58305
- (void)skip;	// 0x33a58575
- (id)sourceID;	// 0x33a58631
- (float)starRating;	// 0x33a5831d
- (id)startDate;	// 0x33a583d9
- (unsigned)startTimeInMS;	// 0x33a583d5
- (unsigned)startTimeInSeconds;	// 0x33a583a5
- (unsigned)stopTimeInMS;	// 0x33a58401
- (unsigned)stopTimeInSeconds;	// 0x33a583dd
- (id)title;	// 0x33a581c9
- (id)titleForSorting;	// 0x33a581f1
- (id)trickPlayURL;	// 0x33a58285
// converted property getter: - (float)userStarRating;	// 0x33a582fd
- (id)viewCount;	// 0x33a58519
- (void)willBeDeleted;	// 0x33a58579
- (void)willBeginPlayback;	// 0x33a58271
@end

