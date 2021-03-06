/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRMusicContextMenuUtility.h"


__attribute__((visibility("hidden")))
@interface MusicContextMenuUtility : BRMusicContextMenuUtility {
	BOOL _nowPlayingActive;	// 11 = 0xb
}
@property(assign, nonatomic) BOOL nowPlayingActive;	// G=0x1c4511; S=0x1c4521; @synthesize=_nowPlayingActive
+ (void)initialize;	// 0x1c1495
- (BOOL)_favoriteExists:(id)exists;	// 0x1c3715
- (void)_handleAddRadioStationToFavoritesForObject:(id)object sender:(id)sender context:(id)context;	// 0x1c40fd
- (void)_handleAddToOnTheGoForObject:(id)object sender:(id)sender context:(id)context;	// 0x1c3bed
- (void)_handleAirTunesSetSpeakerForObject:(id)object sender:(id)sender context:(id)context;	// 0x1c3c4d
- (void)_handleAirTunesSettingsForObject:(id)object sender:(id)sender context:(id)context;	// 0x1c3d19
- (void)_handleBrowseAlbumForObject:(id)object sender:(id)sender context:(id)context;	// 0x1c3f4d
- (void)_handleBrowseArtistForObject:(id)object sender:(id)sender context:(id)context;	// 0x1c3d9d
- (void)_handleRemoveRadioStationFromFavoritesForObject:(id)object sender:(id)sender context:(id)context;	// 0x1c41b5
- (void)_handleStartGeniusForObject:(id)object sender:(id)sender context:(id)context;	// 0x1c391d
- (BOOL)_isMusicItem:(id)item;	// 0x1c42a5
- (id)_providerForCollection:(id)collection target:(id)target selector:(SEL)selector;	// 0x1c29d1
- (id)_providerForFavorite:(id)favorite target:(id)target selector:(SEL)selector;	// 0x1c2ec5
- (id)_providerForMediaItem:(id)mediaItem target:(id)target selector:(SEL)selector;	// 0x1c2469
- (id)_providerForPodcast:(id)podcast target:(id)target selector:(SEL)selector;	// 0x1c1d29
- (id)_providerForSpeakersWithHandler:(id)handler;	// 0x1c2ffd
- (BOOL)_shouldShowAddCollectionToQueue:(id)queue;	// 0x1c450d
- (BOOL)_shouldShowAddItemToQueue:(id)queue;	// 0x1c4405
- (BOOL)_shouldShowAddToFavoritesItem:(id)favoritesItem;	// 0x1c36b9
- (BOOL)_shouldShowBrowseAlbumItem:(id)item;	// 0x1c3649
- (BOOL)_shouldShowBrowseArtistItem:(id)item;	// 0x1c35d9
- (BOOL)_shouldShowGeniusItem:(id)item;	// 0x1c34b1
- (BOOL)_shouldShowOnTheGoItem:(id)item;	// 0x1c3539
- (BOOL)_shouldShowPlayCollectionNext:(id)next;	// 0x1c4505
- (BOOL)_shouldShowPlayCollectionNow:(id)now;	// 0x1c4509
- (BOOL)_shouldShowPlayItemNext:(id)next;	// 0x1c4449
- (BOOL)_shouldShowPlayItemNow:(id)now;	// 0x1c448d
- (BOOL)_shouldShowPurge:(id)purge;	// 0x1c44d1
- (BOOL)_shouldShowRemoveFromFavoritesItem:(id)favoritesItem;	// 0x1c38c5
- (BOOL)_shouldShowSpeakers;	// 0x1c384d
- (BOOL)_shouldShowSpeakersItem:(id)item;	// 0x1c37c1
- (BOOL)_shouldShowUpNext;	// 0x1c4351
- (BOOL)_shouldShowUpNextItem:(id)item;	// 0x1c42f9
- (BOOL)_shouldShowUpNextItemForCollection:(id)collection;	// 0x1c4339
- (id)addToQueueMenuItemWithTarget:(id)target selector:(SEL)selector;	// 0x1c2151
- (id)browseAlbumMenuItemWithTarget:(id)target selector:(SEL)selector;	// 0x1c2391
- (id)browseArtistMenuItemWithTarget:(id)target selector:(SEL)selector;	// 0x1c22b9
- (id)contextMenuProviderForNowPlayingObject:(id)nowPlayingObject target:(id)target selector:(SEL)selector;	// 0x1c1b85
- (id)contextMenuProviderForObject:(id)object target:(id)target selector:(SEL)selector;	// 0x1c1a45
- (id)geniusMenuItemWithTarget:(id)target selector:(SEL)selector;	// 0x1c1e5d
- (void)handleSelectionForObject:(id)object sender:(id)sender context:(id)context;	// 0x1c1bdd
// declared property getter: - (BOOL)nowPlayingActive;	// 0x1c4511
- (id)playNextMenuItemWithTarget:(id)target selector:(SEL)selector;	// 0x1c209d
- (id)playNowMenuItemWithTarget:(id)target selector:(SEL)selector;	// 0x1c1fe9
- (id)purgeMenuItemWithTarget:(id)target selector:(SEL)selector;	// 0x1c2205
// declared property setter: - (void)setNowPlayingActive:(BOOL)active;	// 0x1c4521
- (id)upNextMenuItemWithTarget:(id)target selector:(SEL)selector;	// 0x1c1f35
@end

