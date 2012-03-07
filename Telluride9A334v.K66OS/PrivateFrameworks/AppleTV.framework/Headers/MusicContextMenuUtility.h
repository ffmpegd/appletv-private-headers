/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRMusicContextMenuUtility.h"


__attribute__((visibility("hidden")))
@interface MusicContextMenuUtility : BRMusicContextMenuUtility {
}
+ (void)initialize;	// 0x33314fdd
- (BOOL)_favoriteExists:(ATVMediaItemRef)exists;	// 0x33316025
- (void)_handleAddRadioStationToFavoritesForObject:(id)object sender:(id)sender context:(id)context;	// 0x333167c1
- (void)_handleAddToOnTheGoForObject:(id)object sender:(id)sender context:(id)context;	// 0x33316351
- (void)_handleAirTunesSettingsForObject:(id)object sender:(id)sender context:(id)context;	// 0x3331638d
- (void)_handleBrowseAlbumForObject:(id)object sender:(id)sender context:(id)context;	// 0x33316645
- (void)_handleBrowseArtistForObject:(id)object sender:(id)sender context:(id)context;	// 0x333164c9
- (void)_handleRemoveRadioStationFromFavoritesForObject:(id)object sender:(id)sender context:(id)context;	// 0x3331685d
- (void)_handleStartGeniusForObject:(id)object sender:(id)sender context:(id)context;	// 0x333161a5
- (id)_providerForCollection:(ATVMediaCollectionRef)collection target:(id)target selector:(SEL)selector;	// 0x33315a75
- (id)_providerForFavorite:(id)favorite target:(id)target selector:(SEL)selector;	// 0x33315bd1
- (id)_providerForMediaItem:(ATVMediaItemRef)mediaItem target:(id)target selector:(SEL)selector;	// 0x33315395
- (BOOL)_shouldShowAddToFavoritesItem:(ATVMediaItemRef)favoritesItem;	// 0x33315fbd
- (BOOL)_shouldShowAirTunesSettingsItem:(ATVMediaItemRef)item;	// 0x33315df1
- (BOOL)_shouldShowBrowseAlbumItem:(ATVMediaItemRef)item;	// 0x33315f51
- (BOOL)_shouldShowBrowseArtistItem:(ATVMediaItemRef)item;	// 0x33315ee5
- (BOOL)_shouldShowGeniusItem:(ATVMediaItemRef)item;	// 0x33315d05
- (BOOL)_shouldShowOnTheGoItem:(void *)item;	// 0x33315d7d
- (BOOL)_shouldShowRemoveFromFavoritesItem:(ATVMediaItemRef)favoritesItem;	// 0x33316145
- (BOOL)_shouldShowSpeakersItem:(ATVMediaItemRef)item;	// 0x333160d5
- (id)contextMenuProviderForObject:(id)object target:(id)target selector:(SEL)selector;	// 0x33315185
- (void)handleSelectionForObject:(id)object sender:(id)sender context:(id)context;	// 0x33315275
@end

