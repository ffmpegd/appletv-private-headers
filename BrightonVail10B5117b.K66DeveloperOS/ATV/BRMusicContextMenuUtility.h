/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRContextMenuUtility.h"
#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface BRMusicContextMenuUtility : XXUnknownSuperclass <BRContextMenuUtility> {
	BOOL _onTheGoEnabled;	// 4 = 0x4
	BOOL _startGeniusEnabled;	// 5 = 0x5
	BOOL _airTunesSettingsEnabled;	// 6 = 0x6
	BOOL _browseArtistEnabled;	// 7 = 0x7
	BOOL _browseAlbumEnabled;	// 8 = 0x8
	BOOL _navigateToArtistForBrowseArtist;	// 9 = 0x9
	BOOL _navigateToAlbumForBrowseAlbum;	// 10 = 0xa
	BOOL _createStationEnabled;	// 11 = 0xb
	BOOL _addRemoveToWishListEnabled;	// 12 = 0xc
	BOOL _buyRadioTrackEnabled;	// 13 = 0xd
	BOOL _storeViewAlbumEnabled;	// 14 = 0xe
}
@property(assign, nonatomic) BOOL addRemoveToWishListEnabled;	// G=0x3aa0e1; S=0x3aa0f1; @synthesize=_addRemoveToWishListEnabled
@property(assign) BOOL airTunesSettingsEnabled;	// G=0x3aa005; S=0x3a9ff5; converted property
@property(assign) BOOL browseAlbumEnabled;	// G=0x3aa045; S=0x3aa035; converted property
@property(assign) BOOL browseArtistEnabled;	// G=0x3aa025; S=0x3aa015; converted property
@property(assign, nonatomic) BOOL buyRadioTrackEnabled;	// G=0x3aa101; S=0x3aa111; @synthesize=_buyRadioTrackEnabled
@property(assign, nonatomic) BOOL createStationEnabled;	// G=0x3aa0c1; S=0x3aa0d1; @synthesize=_createStationEnabled
@property(assign) BOOL navigateToAlbumForBrowseAlbum;	// G=0x3aa085; S=0x3aa075; converted property
@property(assign) BOOL navigateToArtistForBrowseArtist;	// G=0x3aa065; S=0x3aa055; converted property
@property(assign) BOOL onTheGoEnabled;	// G=0x3a9fc5; S=0x3a9fb5; converted property
@property(assign) BOOL startGeniusEnabled;	// G=0x3a9fe5; S=0x3a9fd5; converted property
@property(assign, nonatomic) BOOL storeViewAlbumEnabled;	// G=0x3aa121; S=0x3aa131; @synthesize=_storeViewAlbumEnabled
+ (id)utility;	// 0x3a9eb1
- (id)init;	// 0x3a9ef5
// declared property getter: - (BOOL)addRemoveToWishListEnabled;	// 0x3aa0e1
- (id)addToQueueMenuItemWithTarget:(id)target selector:(SEL)selector;	// 0x3aa0b1
// converted property getter: - (BOOL)airTunesSettingsEnabled;	// 0x3aa005
// converted property getter: - (BOOL)browseAlbumEnabled;	// 0x3aa045
- (id)browseAlbumMenuItemWithTarget:(id)target selector:(SEL)selector;	// 0x3aa0bd
// converted property getter: - (BOOL)browseArtistEnabled;	// 0x3aa025
- (id)browseArtistMenuItemWithTarget:(id)target selector:(SEL)selector;	// 0x3aa0b9
// declared property getter: - (BOOL)buyRadioTrackEnabled;	// 0x3aa101
- (id)contextMenuProviderForNowPlayingObject:(id)nowPlayingObject target:(id)target selector:(SEL)selector;	// 0x3aa099
- (id)contextMenuProviderForObject:(id)object target:(id)target selector:(SEL)selector;	// 0x3aa095
// declared property getter: - (BOOL)createStationEnabled;	// 0x3aa0c1
- (id)geniusMenuItemWithTarget:(id)target selector:(SEL)selector;	// 0x3aa0a1
- (void)handleSelectionForObject:(id)object sender:(id)sender context:(id)context;	// 0x3aa09d
// converted property getter: - (BOOL)navigateToAlbumForBrowseAlbum;	// 0x3aa085
// converted property getter: - (BOOL)navigateToArtistForBrowseArtist;	// 0x3aa065
// converted property getter: - (BOOL)onTheGoEnabled;	// 0x3a9fc5
- (id)playNextMenuItemWithTarget:(id)target selector:(SEL)selector;	// 0x3aa0ad
- (id)playNowMenuItemWithTarget:(id)target selector:(SEL)selector;	// 0x3aa0a9
- (id)purgeMenuItemWithTarget:(id)target selector:(SEL)selector;	// 0x3aa0b5
// declared property setter: - (void)setAddRemoveToWishListEnabled:(BOOL)wishListEnabled;	// 0x3aa0f1
// converted property setter: - (void)setAirTunesSettingsEnabled:(BOOL)enabled;	// 0x3a9ff5
// converted property setter: - (void)setBrowseAlbumEnabled:(BOOL)enabled;	// 0x3aa035
// converted property setter: - (void)setBrowseArtistEnabled:(BOOL)enabled;	// 0x3aa015
// declared property setter: - (void)setBuyRadioTrackEnabled:(BOOL)enabled;	// 0x3aa111
// declared property setter: - (void)setCreateStationEnabled:(BOOL)enabled;	// 0x3aa0d1
// converted property setter: - (void)setNavigateToAlbumForBrowseAlbum:(BOOL)browseAlbum;	// 0x3aa075
// converted property setter: - (void)setNavigateToArtistForBrowseArtist:(BOOL)browseArtist;	// 0x3aa055
// converted property setter: - (void)setOnTheGoEnabled:(BOOL)enabled;	// 0x3a9fb5
// converted property setter: - (void)setStartGeniusEnabled:(BOOL)enabled;	// 0x3a9fd5
// declared property setter: - (void)setStoreViewAlbumEnabled:(BOOL)enabled;	// 0x3aa131
// converted property getter: - (BOOL)startGeniusEnabled;	// 0x3a9fe5
// declared property getter: - (BOOL)storeViewAlbumEnabled;	// 0x3aa121
- (id)upNextMenuItemWithTarget:(id)target selector:(SEL)selector;	// 0x3aa0a5
@end

