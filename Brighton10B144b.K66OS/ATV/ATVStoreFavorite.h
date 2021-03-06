/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVFavorite.h"

@class NSArray, NSDate, NSNumber, NSDictionary, NSString, NSSet, ATVStoreFavoriteRefreshTask;

__attribute__((visibility("hidden")))
@interface ATVStoreFavorite : ATVFavorite {
	int _itemType;	// 16 = 0x10
	NSString *_artworkURL;	// 20 = 0x14
	NSDictionary *_multiResolutionArtworkURLs;	// 24 = 0x18
	NSString *_thumbnailArtworkURL;	// 28 = 0x1c
	NSDictionary *_multiResolutionThumbnailArtworkURLs;	// 32 = 0x20
	NSString *_latestContentURL;	// 36 = 0x24
	ATVStoreFavoriteRefreshTask *_refreshTask;	// 40 = 0x28
	unsigned _userOrder;	// 44 = 0x2c
	NSDate *_autoBlueDotStartDate;	// 48 = 0x30
	id _completionHandler;	// 52 = 0x34
	NSSet *_autoBlueDotSeasons;	// 56 = 0x38
	NSNumber *_latestSeasonID;	// 60 = 0x3c
	NSArray *_blueDotParamsForLatestSeason;	// 64 = 0x40
}
@property(readonly, retain) NSSet *autoBlueDotSeasons;	// G=0x150365; converted property
@property(readonly, retain) NSDate *autoBlueDotStartDate;	// G=0x150355; converted property
@property(assign) int itemType;	// G=0x150469; S=0x15047d; @synthesize=_itemType
@property(readonly, retain) NSNumber *latestSeasonID;	// G=0x15023d; converted property
@property(assign) unsigned userOrder;	// G=0x150441; S=0x150451; 
+ (id)_artworkURLFromMultiResolutionURLs:(id)multiResolutionURLs backup:(id)backup;	// 0x15025d
+ (id)lookupStoreFavoriteFromATVFeedDictionary:(id)atvfeedDictionary initIfNotFound:(BOOL)found;	// 0x14f65d
+ (id)lookupStoreFavoriteFromFeed:(id)feed initIfNotFound:(BOOL)found;	// 0x14f4fd
- (id)initWithATVFeedDictionary:(id)atvfeedDictionary;	// 0x14fa99
- (id)initWithCatalogItem:(id)catalogItem;	// 0x14fa31
- (id)initWithDictionary:(id)dictionary;	// 0x14fca9
- (void)_cancelRefreshBackgroundTask;	// 0x151269
- (id)_dateOfMostRecentEpisodeWithBlueDot;	// 0x150b49
- (void)_setupRefreshBackgroundTask;	// 0x1511fd
- (BOOL)_setupWithCatalogItem:(id)catalogItem;	// 0x14f701
- (id)artworkURLString;	// 0x1502cd
// converted property getter: - (id)autoBlueDotSeasons;	// 0x150365
// converted property getter: - (id)autoBlueDotStartDate;	// 0x150355
- (void)dealloc;	// 0x14febd
- (void)didCompleteRefreshStoreDataAttempt;	// 0x1501e5
- (void)encodeWithDictionary:(id)dictionary;	// 0x14ffd1
- (id)episodeBlueDotParametersForLatestSeason;	// 0x15024d
// declared property getter: - (int)itemType;	// 0x150469
- (id)latestContentURLString;	// 0x150345
// converted property getter: - (id)latestSeasonID;	// 0x15023d
- (void)refreshStoreData:(id)data;	// 0x150191
- (void)remove;	// 0x150401
- (void)save;	// 0x150375
// declared property setter: - (void)setItemType:(int)type;	// 0x15047d
// declared property setter: - (void)setUserOrder:(unsigned)order;	// 0x150451
- (id)thumbnailArtworkURLString;	// 0x150309
- (void)updateWithPageDictionaryFromLatestSeason:(id)latestSeason;	// 0x150495
// declared property getter: - (unsigned)userOrder;	// 0x150441
@end

