/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRRSSMediaAsset.h"

@class ATVMusicStoreShowInfo, NSDictionary;

@interface ATVMusicStorePodcastAsset : BRRSSMediaAsset {
@private
	NSDictionary *_feedInfo;	// 16 = 0x10
	ATVMusicStoreShowInfo *_showInfo;	// 20 = 0x14
}
@property(assign) unsigned bookmarkTimeInMS;	// G=0x3398a6f1; S=0x3398a6c5; converted property
@property(retain) NSDictionary *feedInfo;	// G=0x33989f15; S=0x33989ed5; converted property
- (id)initWithFeedInfo:(id)feedInfo;	// 0x33989db9
- (id)_podcastID;	// 0x3398a8a5
- (id)_showInfo;	// 0x3398a901
- (id)artist;	// 0x3398a4bd
- (id)assetID;	// 0x33989f25
// converted property getter: - (unsigned)bookmarkTimeInMS;	// 0x3398a6f1
- (id)cast;	// 0x3398a059
- (id)copyright;	// 0x3398a555
- (id)coverArtID;	// 0x3398a225
- (id)dateAcquired;	// 0x3398a2dd
- (id)datePublished;	// 0x3398a2a5
- (id)datePublishedString;	// 0x3398a495
- (void)dealloc;	// 0x33989e75
- (id)description;	// 0x3398a5a1
- (id)directors;	// 0x3398a0d9
- (long)duration;	// 0x33989fdd
// converted property getter: - (id)feedInfo;	// 0x33989f15
- (id)genres;	// 0x3398a3ed
- (BOOL)hasCoverArt;	// 0x3398a1f5
- (BOOL)hasVideoContent;	// 0x3398a415
- (void)incrementPerformanceCount;	// 0x3398a659
- (BOOL)isExplicit;	// 0x3398a5c9
- (id)mediaDescription;	// 0x33989fa5
- (id)mediaSummary;	// 0x3398a545
- (id)mediaType;	// 0x3398a2ed
- (id)mediaURL;	// 0x3398a111
- (long)performanceCount;	// 0x3398a631
- (id)previewURL;	// 0x3398a179
- (id)primaryCollectionTitle;	// 0x3398a501
- (id)primaryGenre;	// 0x3398a341
- (id)primaryGenreAsString;	// 0x3398a309
- (id)producers;	// 0x3398a0f5
- (id)publisher;	// 0x3398a59d
- (id)rating;	// 0x3398a411
// converted property setter: - (void)setBookmarkTimeInMS:(unsigned)ms;	// 0x3398a6c5
// converted property setter: - (void)setFeedInfo:(id)info;	// 0x33989ed5
- (void)setHasBeenPlayed:(BOOL)played;	// 0x3398a699
- (id)thumbnailArtID;	// 0x3398a295
- (id)thumbnailURL;	// 0x3398a58d
- (id)title;	// 0x33989f6d
- (float)userStarRating;	// 0x3398a409
- (void)willBeginPlayback;	// 0x3398a719
@end
