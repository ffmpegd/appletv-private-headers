/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRRSSMediaAsset.h"

@class ATVMusicStoreShowInfo, NSDictionary;

__attribute__((visibility("hidden")))
@interface ATVMusicStorePodcastAsset : BRRSSMediaAsset {
	NSDictionary *_feedInfo;	// 16 = 0x10
	ATVMusicStoreShowInfo *_showInfo;	// 20 = 0x14
}
@property(assign) unsigned bookmarkTimeInMS;	// G=0x1fdca1; S=0x1fdb99; converted property
@property(retain) NSDictionary *feedInfo;	// G=0x1fd3e1; S=0x1fd3a5; converted property
- (id)initWithFeedInfo:(id)feedInfo;	// 0x1fd241
- (void)_playerStateChanged:(id)changed;	// 0x1fdea5
- (id)_podcastID;	// 0x1fdde9
- (id)_showInfo;	// 0x1fde45
- (id)artist;	// 0x1fd985
- (id)assetID;	// 0x1fd3f1
// converted property getter: - (unsigned)bookmarkTimeInMS;	// 0x1fdca1
- (id)cast;	// 0x1fd529
- (id)copyright;	// 0x1fda25
- (id)coverArtID;	// 0x1fd6f1
- (id)dateAcquired;	// 0x1fd7a9
- (id)datePublished;	// 0x1fd771
- (id)datePublishedString;	// 0x1fd95d
- (void)dealloc;	// 0x1fd315
- (id)description;	// 0x1fda71
- (id)directors;	// 0x1fd5a9
- (long)duration;	// 0x1fd4a9
// converted property getter: - (id)feedInfo;	// 0x1fd3e1
- (id)genres;	// 0x1fd8b9
- (BOOL)hasCoverArt;	// 0x1fd6c5
- (BOOL)hasVideoContent;	// 0x1fd8e1
- (BOOL)incrementPlayCount:(unsigned)count;	// 0x1fdb29
- (BOOL)isExplicit;	// 0x1fda99
- (id)mediaDescription;	// 0x1fd471
- (id)mediaSummary;	// 0x1fda15
- (id)mediaType;	// 0x1fd7b9
- (id)mediaURL;	// 0x1fd5e1
- (long)performanceCount;	// 0x1fdb01
- (id)previewURL;	// 0x1fd649
- (id)primaryCollectionTitle;	// 0x1fd9cd
- (id)primaryGenre;	// 0x1fd80d
- (id)primaryGenreAsString;	// 0x1fd7d5
- (id)producers;	// 0x1fd5c5
- (id)publisher;	// 0x1fda6d
- (id)rating;	// 0x1fd8dd
// converted property setter: - (void)setBookmarkTimeInMS:(unsigned)ms;	// 0x1fdb99
// converted property setter: - (void)setFeedInfo:(id)info;	// 0x1fd3a5
- (void)setHasBeenPlayed:(BOOL)played;	// 0x1fdb69
- (id)thumbnailArtID;	// 0x1fd761
- (id)thumbnailURL;	// 0x1fda5d
- (id)title;	// 0x1fd439
- (float)userStarRating;	// 0x1fd8d5
- (void)willBeginPlayback;	// 0x1fdcc9
@end

