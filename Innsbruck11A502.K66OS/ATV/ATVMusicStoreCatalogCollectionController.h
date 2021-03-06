/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVMusicStoreCatalogItemController.h"

@class NSNumber, BRMediaListControl, BRMediaType;

__attribute__((visibility("hidden")))
@interface ATVMusicStoreCatalogCollectionController : ATVMusicStoreCatalogItemController {
	BRMediaListControl *_mediaListControl;	// 112 = 0x70
	NSNumber *_seasonID;	// 116 = 0x74
	BRMediaType *_mediaType;	// 120 = 0x78
}
- (id)initWithItemDictionary:(id)itemDictionary;	// 0x1dd4d9
- (void).cxx_destruct;	// 0x1df7a1
- (void)_blueDotInfoChanged;	// 0x1de3c9
- (id)_favorite;	// 0x1de629
- (void)_favoriteItemsChanged:(id)changed;	// 0x1de401
- (void)_getBlueDotCount:(long *)count nonBlueDotCount:(long *)count2 withProvider:(id)provider;	// 0x1deb51
- (void)_getEpisodeForSelectedItem:(id *)selectedItem andProvider:(id *)provider;	// 0x1dea2d
- (void)_highlightFirstNonHeaderRow;	// 0x1de491
- (BOOL)_highlightItemSelectedByUser;	// 0x1de439
- (void)_markAllAsWatched:(BOOL)watched;	// 0x1df469
- (void)_markSelectedEpisodeAsWatched:(BOOL)watched;	// 0x1df299
- (void)_podcastSubscriptionChanged;	// 0x1de311
- (id)_providerForSelectedItem;	// 0x1deb21
- (void)_resetProviders;	// 0x1de219
- (void)_resetProvidersAndReloadList;	// 0x1de129
- (id)_userSelectedItemWithListIndex:(long *)listIndex;	// 0x1de681
- (id)accessibilityLabel;	// 0x1de1a9
- (id)accessibilitySecondaryLabel;	// 0x1de1c9
- (id)cancelProviderForContextMenu;	// 0x1df295
- (void)controlWasActivated;	// 0x1de165
- (void)dealloc;	// 0x1de04d
- (id)episodeForSelectedItem;	// 0x1de1e9
- (void)markAsUnwatched;	// 0x1df455
- (void)markAsWatched;	// 0x1df441
- (void)markSeasonAsUnwatched;	// 0x1df78d
- (void)markSeasonAsWatched;	// 0x1df779
- (id)providersForContextMenu;	// 0x1dec91
- (void)relatedContentLoaded:(id)loaded;	// 0x1de1a5
- (void)wasExhumed;	// 0x1de0e5
- (void)wasPushed;	// 0x1de0b9
@end

