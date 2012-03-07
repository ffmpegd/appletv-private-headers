/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVInternetPhotosMonitor.h"

@class BRBackgroundTask;

@interface ATVDotMacMonitor : ATVInternetPhotosMonitor {
@private
	BRBackgroundTask *_backgroundTask;	// 32 = 0x20
}
@property(readonly, retain) BRBackgroundTask *backgroundTask;	// G=0x33952d9d; converted property
+ (void)initialize;	// 0x339522a1
+ (void)setSingleton:(id)singleton;	// 0x33952291
+ (id)singleton;	// 0x33952281
- (id)init;	// 0x33952311
- (void)_addCollectionForTemporaryDataMonitoring:(id)temporaryDataMonitoring;	// 0x3395602d
- (id)_authenticationsForAccountWithName:(id)name;	// 0x33955ce9
- (void)_collectionLoadFailure:(id)failure newCollectionInfo:(id)info status:(int)status;	// 0x33954c7d
- (id)_dataForRelativePath:(id)relativePath forAccountWithName:(id)name secondaryAccount:(id)account;	// 0x339551dd
- (BOOL)_isAccountRegisteredForDataMonitoring:(id)dataMonitoring;	// 0x33955f75
- (void)_performAccountIconImageLoad:(id)load;	// 0x33954dd5
- (void)_performAccountLoad:(id)load;	// 0x33953061
- (void)_performAccountMediaLoad:(id)load;	// 0x339531f5
- (void)_performAssetCoverArtImageLoad:(id)load;	// 0x33954d95
- (void)_performAssetFullSizeImageLoad:(id)load;	// 0x33954db5
- (void)_performAssetImageLoad:(id)load sizeKey:(id)key;	// 0x33954ea9
- (void)_performAssetThumbnailImageLoad:(id)load;	// 0x33954d75
- (void)_performAuthenticateCollection:(id)collection;	// 0x33952dad
- (void)_performCollectionAssetsLoad:(id)load;	// 0x33953b25
- (void)_performCollectionAssetsLoadForPhotoCollection:(id)photoCollection;	// 0x33953bd9
- (void)_performCollectionAssetsLoadForVideoCollection:(id)videoCollection;	// 0x339544e1
- (id)_queryParamsForPath:(id)path;	// 0x33955d5d
- (void)_saveAuthenticationForAccountWithName:(id)name secondaryAccount:(id)account;	// 0x33955e81
- (id)_transactionForAccountWithName:(id)name path:(id)path depth:(int)depth secondaryAccount:(id)account;	// 0x339559c1
- (int)_xmlDataForRelativePath:(id)relativePath withDepth:(int)depth forAccountWithName:(id)name withParserDelegate:(id)parserDelegate;	// 0x33955961
- (id)_xmlDataForRelativePath:(id)relativePath withDepth:(int)depth forAccountWithName:(id)name withParserDelegate:(id)parserDelegate secondaryAccount:(id)account requiresAuthentication:(BOOL)authentication;	// 0x33955509
- (void)authenticateCollection:(id)collection withUserName:(id)userName password:(id)password;	// 0x339524a5
// converted property getter: - (id)backgroundTask;	// 0x33952d9d
- (void)cancelAuthenticateForCollection:(id)collection;	// 0x339528dd
- (void)cancelLoadAccountIconForAccount:(id)account;	// 0x33952d1d
- (void)cancelLoadAccountWithName:(id)name;	// 0x3395294d
- (void)cancelLoadAssetsForCollection:(id)collection;	// 0x33952ab9
- (void)cancelLoadCoverArtImageForAsset:(id)asset;	// 0x33952c3d
- (void)cancelLoadFullSizeImageForAsset:(id)asset;	// 0x33952cad
- (void)cancelLoadMediaForAccount:(id)account;	// 0x339529a9
- (void)cancelLoadThumbnailImageForAsset:(id)asset;	// 0x33952bcd
- (void)dealloc;	// 0x339523a1
- (void)loadAccountIconForAccount:(id)account;	// 0x33952861
- (void)loadAccountWithName:(id)name;	// 0x33952581
- (void)loadAssetsForCollection:(id)collection;	// 0x33952665
- (void)loadCoverArtImageForAsset:(id)asset;	// 0x33952769
- (void)loadFullSizeImageForAsset:(id)asset;	// 0x339527e5
- (void)loadMediaForAccount:(id)account;	// 0x339525e9
- (void)loadThumbnailImageForAsset:(id)asset;	// 0x339526ed
- (void)removeAccountWithName:(id)name;	// 0x3395242d
- (id)taskContext;	// 0x33952d8d
@end

