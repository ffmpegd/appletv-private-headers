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
@property(readonly, retain) BRBackgroundTask *backgroundTask;	// G=0x36562b31; converted property
+ (void)initialize;	// 0x36562035
+ (void)setSingleton:(id)singleton;	// 0x36562025
+ (id)singleton;	// 0x36562015
- (id)init;	// 0x365620a5
- (void)_addCollectionForTemporaryDataMonitoring:(id)temporaryDataMonitoring;	// 0x36565db5
- (id)_authenticationsForAccountWithName:(id)name;	// 0x36565a71
- (void)_collectionLoadFailure:(id)failure newCollectionInfo:(id)info status:(int)status;	// 0x36564a29
- (id)_dataForRelativePath:(id)relativePath forAccountWithName:(id)name secondaryAccount:(id)account;	// 0x36564f89
- (BOOL)_isAccountRegisteredForDataMonitoring:(id)dataMonitoring;	// 0x36565cfd
- (void)_performAccountIconImageLoad:(id)load;	// 0x36564b81
- (void)_performAccountLoad:(id)load;	// 0x36562e0d
- (void)_performAccountMediaLoad:(id)load;	// 0x36562fa1
- (void)_performAssetCoverArtImageLoad:(id)load;	// 0x36564b41
- (void)_performAssetFullSizeImageLoad:(id)load;	// 0x36564b61
- (void)_performAssetImageLoad:(id)load sizeKey:(id)key;	// 0x36564c55
- (void)_performAssetThumbnailImageLoad:(id)load;	// 0x36564b21
- (void)_performAuthenticateCollection:(id)collection;	// 0x36562b41
- (void)_performCollectionAssetsLoad:(id)load;	// 0x365638d1
- (void)_performCollectionAssetsLoadForPhotoCollection:(id)photoCollection;	// 0x36563985
- (void)_performCollectionAssetsLoadForVideoCollection:(id)videoCollection;	// 0x3656428d
- (id)_queryParamsForPath:(id)path;	// 0x36565ae5
- (void)_saveAuthenticationForAccountWithName:(id)name secondaryAccount:(id)account;	// 0x36565c09
- (id)_transactionForAccountWithName:(id)name path:(id)path depth:(int)depth secondaryAccount:(id)account;	// 0x3656575d
- (int)_xmlDataForRelativePath:(id)relativePath withDepth:(int)depth forAccountWithName:(id)name withParserDelegate:(id)parserDelegate;	// 0x365656fd
- (id)_xmlDataForRelativePath:(id)relativePath withDepth:(int)depth forAccountWithName:(id)name withParserDelegate:(id)parserDelegate secondaryAccount:(id)account requiresAuthentication:(BOOL)authentication;	// 0x365652b1
- (void)authenticateCollection:(id)collection withUserName:(id)userName password:(id)password;	// 0x36562239
// converted property getter: - (id)backgroundTask;	// 0x36562b31
- (void)cancelAuthenticateForCollection:(id)collection;	// 0x36562671
- (void)cancelLoadAccountIconForAccount:(id)account;	// 0x36562ab1
- (void)cancelLoadAccountWithName:(id)name;	// 0x365626e1
- (void)cancelLoadAssetsForCollection:(id)collection;	// 0x3656284d
- (void)cancelLoadCoverArtImageForAsset:(id)asset;	// 0x365629d1
- (void)cancelLoadFullSizeImageForAsset:(id)asset;	// 0x36562a41
- (void)cancelLoadMediaForAccount:(id)account;	// 0x3656273d
- (void)cancelLoadThumbnailImageForAsset:(id)asset;	// 0x36562961
- (void)dealloc;	// 0x36562135
- (void)loadAccountIconForAccount:(id)account;	// 0x365625f5
- (void)loadAccountWithName:(id)name;	// 0x36562315
- (void)loadAssetsForCollection:(id)collection;	// 0x365623f9
- (void)loadCoverArtImageForAsset:(id)asset;	// 0x365624fd
- (void)loadFullSizeImageForAsset:(id)asset;	// 0x36562579
- (void)loadMediaForAccount:(id)account;	// 0x3656237d
- (void)loadThumbnailImageForAsset:(id)asset;	// 0x36562481
- (void)removeAccountWithName:(id)name;	// 0x365621c1
- (id)taskContext;	// 0x36562b21
@end

