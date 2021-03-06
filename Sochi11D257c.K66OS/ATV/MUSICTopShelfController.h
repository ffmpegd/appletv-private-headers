/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "BRTopShelfController.h"

@class PlayHandler, ATVCloudDataClient, BRTopShelfView, ATVMusicStorePresentsProvider, NSArray, MUSICDataClientTopShelfHelper;
@protocol BRProvider, BRControlFactory;

__attribute__((visibility("hidden")))
@interface MUSICTopShelfController : XXUnknownSuperclass <BRTopShelfController> {
	id<BRProvider> _nowPlayingProvider;	// 4 = 0x4
	MUSICDataClientTopShelfHelper *_topShelfHelper;	// 8 = 0x8
	ATVCloudDataClient *_cloudClient;	// 12 = 0xc
	NSArray *_mediaItems;	// 16 = 0x10
	ATVMusicStorePresentsProvider *_topMusic;	// 20 = 0x14
	BRTopShelfView *_topShelf;	// 24 = 0x18
	id<BRControlFactory> _homeShareFactory;	// 28 = 0x1c
	PlayHandler *_playHandler;	// 32 = 0x20
}
- (id)init;	// 0x2bb351
- (void).cxx_destruct;	// 0x2bd0e1
- (void)_dataClientDataUpdated:(id)updated;	// 0x2bc981
- (void)_internetAvailabilityChanged:(id)changed;	// 0x2bd0d1
- (void)_networkStateChanged:(id)changed;	// 0x2bd0c1
- (void)_nowPlayingProviderUpdated:(id)updated;	// 0x2bc991
- (void)_reloadShelf;	// 0x2bcff9
- (void)_topMusicUpdated:(id)updated;	// 0x2bd0b1
- (void)_validateTopShelf;	// 0x2bc9ed
- (float)coverflowMarginForMediaShelf:(id)mediaShelf;	// 0x2bc8c9
- (void)dealloc;	// 0x2bb7fd
- (float)horizontalGapForMediaShelf:(id)mediaShelf;	// 0x2bc8bd
- (id)mainMenuShelfView;	// 0x2bb869
- (void)mediaShelf:(id)shelf didFocusItemAtIndexPath:(id)indexPath;	// 0x2bc10d
- (void)mediaShelf:(id)shelf didPlayItemAtIndexPath:(id)indexPath;	// 0x2bc4d1
- (void)mediaShelf:(id)shelf didSelectItemAtIndexPath:(id)indexPath;	// 0x2bc111
- (id)mediaShelf:(id)shelf itemAtIndexPath:(id)indexPath;	// 0x2bbafd
- (long)mediaShelf:(id)shelf numberOfColumnsInSection:(long)section;	// 0x2bbd41
- (id)mediaShelf:(id)shelf sectionHeaderForSection:(long)section;	// 0x2bbdc5
- (id)mediaShelf:(id)shelf titleForSectionAtIndex:(long)index;	// 0x2bbe5d
- (long)numberOfFlatColumnsInMediaShelf:(id)mediaShelf;	// 0x2bbd39
- (long)numberOfSectionsInMediaShelf:(id)mediaShelf;	// 0x2bbd3d
- (void)refresh;	// 0x2bb98d
- (void)selectCategoryWithIdentifier:(id)identifier;	// 0x2bbae5
- (void)setMusicSyncStatus:(int)status;	// 0x2bc8d5
- (void)willBeHidden;	// 0x2bbaf9
- (void)willBeShown;	// 0x2bbae9
@end

