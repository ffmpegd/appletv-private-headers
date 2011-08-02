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
@property(readonly, retain) BRBackgroundTask *backgroundTask;	// G=0x307292b1; converted property
+ (void)initialize;	// 0x3072bd89
+ (void)setSingleton:(id)singleton;	// 0x30729299
+ (id)singleton;	// 0x3072928d
- (id)init;	// 0x3072bd11
- (void)_addCollectionForTemporaryDataMonitoring:(id)temporaryDataMonitoring;	// 0x307292f1
- (id)_authenticationsForAccountWithName:(id)name;	// 0x307295c9
- (void)_collectionLoadFailure:(id)failure newCollectionInfo:(id)info status:(int)status;	// 0x30729ad1
- (id)_dataForRelativePath:(id)relativePath forAccountWithName:(id)name secondaryAccount:(id)account;	// 0x3072c3e5
- (BOOL)_isAccountRegisteredForDataMonitoring:(id)dataMonitoring;	// 0x30729335
- (void)_performAccountIconImageLoad:(id)load;	// 0x307299b1
- (void)_performAccountLoad:(id)load;	// 0x3072b195
- (void)_performAccountMediaLoad:(id)load;	// 0x3072aa6d
- (void)_performAssetCoverArtImageLoad:(id)load;	// 0x30729a91
- (void)_performAssetFullSizeImageLoad:(id)load;	// 0x30729a71
- (void)_performAssetImageLoad:(id)load sizeKey:(id)key;	// 0x3072968d
- (void)_performAssetThumbnailImageLoad:(id)load;	// 0x30729ab1
- (void)_performAuthenticateCollection:(id)collection;	// 0x3072b2fd
- (void)_performCollectionAssetsLoad:(id)load;	// 0x3072a9d1
- (void)_performCollectionAssetsLoadForPhotoCollection:(id)photoCollection;	// 0x3072a299
- (void)_performCollectionAssetsLoadForVideoCollection:(id)videoCollection;	// 0x30729bb5
- (id)_queryParamsForPath:(id)path;	// 0x307294d1
- (void)_saveAuthenticationForAccountWithName:(id)name secondaryAccount:(id)account;	// 0x307293f1
- (id)_transactionForAccountWithName:(id)name path:(id)path depth:(int)depth secondaryAccount:(id)account;	// 0x3072c6d9
- (int)_xmlDataForRelativePath:(id)relativePath withDepth:(int)depth forAccountWithName:(id)name withParserDelegate:(id)parserDelegate;	// 0x30729631
- (id)_xmlDataForRelativePath:(id)relativePath withDepth:(int)depth forAccountWithName:(id)name withParserDelegate:(id)parserDelegate secondaryAccount:(id)account requiresAuthentication:(BOOL)authentication;	// 0x3072c005
- (void)authenticateCollection:(id)collection withUserName:(id)userName password:(id)password;	// 0x3072bb5d
// converted property getter: - (id)backgroundTask;	// 0x307292b1
- (void)cancelAuthenticateForCollection:(id)collection;	// 0x3072b78d
- (void)cancelLoadAccountIconForAccount:(id)account;	// 0x3072b575
- (void)cancelLoadAccountWithName:(id)name;	// 0x3072b735
- (void)cancelLoadAssetsForCollection:(id)collection;	// 0x3072bde9
- (void)cancelLoadCoverArtImageForAsset:(id)asset;	// 0x3072b655
- (void)cancelLoadFullSizeImageForAsset:(id)asset;	// 0x3072b5e5
- (void)cancelLoadMediaForAccount:(id)account;	// 0x3072bef9
- (void)cancelLoadThumbnailImageForAsset:(id)asset;	// 0x3072b6c5
- (void)dealloc;	// 0x3072bc91
- (void)loadAccountIconForAccount:(id)account;	// 0x3072b7fd
- (void)loadAccountWithName:(id)name;	// 0x3072bafd
- (void)loadAssetsForCollection:(id)collection;	// 0x3072b9fd
- (void)loadCoverArtImageForAsset:(id)asset;	// 0x3072b8fd
- (void)loadFullSizeImageForAsset:(id)asset;	// 0x3072b87d
- (void)loadMediaForAccount:(id)account;	// 0x3072ba7d
- (void)loadThumbnailImageForAsset:(id)asset;	// 0x3072b97d
- (void)removeAccountWithName:(id)name;	// 0x3072bc25
- (id)taskContext;	// 0x307292a5
@end
