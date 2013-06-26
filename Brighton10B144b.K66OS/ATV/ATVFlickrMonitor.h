/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVSettingsSaver.h"
#import "ATVInternetPhotosMonitor.h"

@class BRBackgroundTask;

__attribute__((visibility("hidden")))
@interface ATVFlickrMonitor : ATVInternetPhotosMonitor <ATVSettingsSaver> {
	BRBackgroundTask *_backgroundTask;	// 32 = 0x20
}
@property(readonly, retain) BRBackgroundTask *backgroundTask;	// G=0x1b947d; converted property
+ (void)initialize;	// 0x1b8769
+ (void)setSingleton:(id)singleton;	// 0x1b8759
+ (id)singleton;	// 0x1b8749
- (id)init;	// 0x1b87d9
- (id)_loadFlickrURL:(id)url;	// 0x1bae75
- (void)_performAccountIconImageLoad:(id)load;	// 0x1bab31
- (void)_performAccountLoad:(id)load;	// 0x1b949d
- (void)_performAccountMediaLoad:(id)load;	// 0x1b9659
- (void)_performAccountSubAccountsLoad:(id)load;	// 0x1ba1f9
- (void)_performAssetCoverArtImageLoad:(id)load;	// 0x1baaf1
- (void)_performAssetFullSizeImageLoad:(id)load;	// 0x1bab11
- (void)_performAssetImageLoad:(id)load sizeKey:(id)key;	// 0x1bac3d
- (void)_performAssetThumbnailImageLoad:(id)load;	// 0x1ba989
- (void)_performCollectionAssetsLoad:(id)load;	// 0x1ba369
- (void)_performSearch:(id)search;	// 0x1ba9a9
- (id)_savedSearchesFilePath;	// 0x1bafe1
- (void)addAccount:(id)account;	// 0x1b8a09
- (void)addPathsToSaveTo:(id)to;	// 0x1b8961
// converted property getter: - (id)backgroundTask;	// 0x1b947d
- (void)cancelLoadAccountIconForAccount:(id)account;	// 0x1b9211
- (void)cancelLoadAssetsForCollection:(id)collection;	// 0x1b926d
- (void)cancelLoadCoverArtImageForAsset:(id)asset;	// 0x1b939d
- (void)cancelLoadFullSizeImageForAsset:(id)asset;	// 0x1b940d
- (void)cancelLoadMediaForAccount:(id)account;	// 0x1b90f5
- (void)cancelLoadSubAccountsForAccount:(id)account;	// 0x1b91b5
- (void)cancelLoadThumbnailImageForAsset:(id)asset;	// 0x1b932d
- (void)dealloc;	// 0x1b88d1
- (void)loadAccountIconForAccount:(id)account;	// 0x1b8bcd
- (void)loadAccountWithName:(id)name;	// 0x1b8a95
- (void)loadAssetsForCollection:(id)collection;	// 0x1b8c35
- (void)loadCoverArtImageForAsset:(id)asset;	// 0x1b8d19
- (void)loadFullSizeImageForAsset:(id)asset;	// 0x1b8d95
- (void)loadMediaForAccount:(id)account;	// 0x1b8afd
- (void)loadSubAccountsForAccount:(id)account;	// 0x1b8b65
- (void)loadThumbnailImageForAsset:(id)asset;	// 0x1b8c9d
- (void)removeAccountWithName:(id)name;	// 0x1b8991
- (void)removeSavedSearchTerm:(id)term;	// 0x1b8f55
- (void)saveSearchTerm:(id)term;	// 0x1b8e39
- (id)savedSearchTerms;	// 0x1b90bd
- (void)searchWithSearchTerm:(id)searchTerm;	// 0x1b8e11
- (id)taskContext;	// 0x1b948d
@end
