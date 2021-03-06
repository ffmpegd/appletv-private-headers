/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MusicCollectionController.h"

@class ATVDataType, ATVDataCollection, NSArray;

__attribute__((visibility("hidden")))
@interface PlaylistsController : MusicCollectionController {
	ATVDataType *_mediaTypeForQuery;	// 164 = 0xa4
	ATVDataCollection *_folder;	// 168 = 0xa8
	NSArray *_filteredPlaylists;	// 172 = 0xac
	Class _mediaTypeControllerClass;	// 176 = 0xb0
}
+ (id)playlistsControllerWithDataClient:(id)dataClient dataClientType:(unsigned)type mediaType:(id)type3 mediaTypeControllerClass:(Class)aClass;	// 0x1c03b5
- (id)initWithMediaType:(id)mediaType folder:(id)folder dataClient:(id)client dataClientType:(unsigned)type mediaTypeControllerClass:(Class)aClass;	// 0x1c0411
- (BOOL)_cloudFolderHasPlaylist:(id)playlist inTree:(id)tree;	// 0x1c2611
- (void)_cloudPreparePlaylistHierarcy:(id)hierarcy;	// 0x1c1f5d
- (int)_firstLevelChildernOfPlaylistAtIndex:(int)index inArray:(id)array totalChildern:(int *)childern;	// 0x1c1da9
- (void)_preparePlaylistHierarcy:(id)hierarcy;	// 0x1c1bd1
- (id)currentItems;	// 0x1c19d5
- (void *)dataItemAtIndexPath:(id)indexPath;	// 0x1c1925
- (BOOL)dataQueryComplete:(id)complete;	// 0x1c07e9
- (void)dealloc;	// 0x1c057d
- (id)errorForNoContent;	// 0x1c0c8d
- (id)filterForCurrentMediaType;	// 0x1c1b21
- (void)list:(id)list didFocusItemAtIndexPath:(id)indexPath;	// 0x1c0d6d
- (void)list:(id)list didPlayItemAtIndexPath:(id)indexPath;	// 0x1c159d
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0x1c1601
- (float)list:(id)list heightForItemAtIndexPath:(id)indexPath;	// 0x1c14d5
- (id)list:(id)list indexPathForItemID:(id)itemID;	// 0x1c107d
- (id)list:(id)list itemIDForIndexPath:(id)indexPath;	// 0x1c0fbd
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x1c0e49
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0x1c14e5
- (id)newDataQuery;	// 0x1c05f5
- (id)newPlayQueryForIndexPath:(id)indexPath;	// 0x1c116d
- (id)newPreviewQueryForIndexPath:(id)indexPath;	// 0x1c0cad
- (long)numberOfSectionsInList:(id)list;	// 0x1c14e1
- (void)playQueryComplete:(id)complete;	// 0x1c13f1
- (id)providersForContextMenu;	// 0x1c139d
- (BOOL)typeaheadPhraseAccumulator:(id)accumulator phraseChanged:(id)changed;	// 0x1c19e5
- (int)typeaheadSelectionOffset;	// 0x1c197d
@end

