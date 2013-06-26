/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "SSEntity.h"
#import "SSXPCCoding.h"

@class SSDownloadPolicy, SSXPCConnection, SSDownloadMetadata, SSDownloadStatus, NSMutableDictionary, NSNumber, NSArray;

@interface SSDownload : SSEntity <SSXPCCoding> {
	NSMutableDictionary *_localAssets;	// 36 = 0x24
	SSDownloadMetadata *_metadata;	// 40 = 0x28
	NSNumber *_prioritizeAboveDownload;	// 44 = 0x2c
	SSDownloadStatus *_status;	// 48 = 0x30
}
@property(readonly, assign, getter=_XPCConnection) SSXPCConnection *_XPCConnection;	// G=0x354ae90d; 
@property(retain, nonatomic) NSArray *assets;	// G=0x354ae091; S=0x354ae1ad; 
@property(readonly, assign, getter=isCancelable) BOOL cancelable;	// G=0x354abfed; 
@property(readonly, assign, nonatomic) id downloadIdentifier;	// G=0x354ae095; 
@property(copy) SSDownloadPolicy *downloadPolicy;	// G=0x354abed1; S=0x354ad62d; 
@property(readonly, assign) long long downloadSizeLimit;	// G=0x354abf29; 
@property(readonly, assign, nonatomic, getter=isExternal) BOOL external;	// G=0x354ae0d9; 
@property(copy, nonatomic) SSDownloadMetadata *metadata;	// G=0x354ae149; S=0x354ae1b1; 
@property(retain) id networkConstraints;	// G=0x354ac425; S=0x354ad6d9; converted property
@property(readonly, assign) long long persistentIdentifier;	// G=0x354ac8c9; 
@property(retain, nonatomic) SSDownloadStatus *status;	// G=0x354ae211; S=0x354ae209; 
+ (long long)_existsMessage;	// 0x354ad799
+ (long long)_getExternalValuesMessage;	// 0x354ad7a1
+ (long long)_getValueMessage;	// 0x354ad7a9
+ (long long)_setExternalValuesMessage;	// 0x354ad7b1
+ (long long)_setValuesMessage;	// 0x354ad7b9
+ (void)loadThumbnailImageDataForDownloadID:(long long)downloadID connection:(id)connection completionBlock:(id)block;	// 0x354adbe1
- (id)initWithDownloadMetadata:(id)downloadMetadata;	// 0x354ade1d
- (id)initWithPersistentIdentifier:(long long)persistentIdentifier;	// 0x354ab2a1
// declared property getter: - (id)_XPCConnection;	// 0x354ae90d
- (void)_addCachedExternalValues:(id)values;	// 0x354ad7c1
- (void)_addCachedPropertyValues:(id)values;	// 0x354ad91d
- (void)_applyPhase:(id)phase toStatus:(id)status;	// 0x354ae921
- (id)_errorWithData:(id)data;	// 0x354ae9e5
- (id)_errorWithXPCReply:(id)xpcreply;	// 0x354aea55
- (id)_initWithLocalPropertyValues:(id)localPropertyValues;	// 0x354ab351
- (void)_legacyLoadArtworkData;	// 0x354aeb0d
- (void)_resetLocalIVars;	// 0x354adb69
- (void)_resetStatus;	// 0x354ae7d1
- (id)_thumbnailImageURL;	// 0x354aed55
- (BOOL)addAsset:(id)asset forType:(id)type;	// 0x354ab5f5
// declared property getter: - (id)assets;	// 0x354ae091
- (id)assetsForType:(id)type;	// 0x354ab909
- (long long)bytesDownloaded;	// 0x354abe3d
- (long long)bytesTotal;	// 0x354abe79
- (id)copyXPCEncoding;	// 0x354adf35
- (void)dealloc;	// 0x354ab54d
// declared property getter: - (id)downloadIdentifier;	// 0x354ae095
- (id)downloadPhaseIdentifier;	// 0x354abeb5
// declared property getter: - (id)downloadPolicy;	// 0x354abed1
// declared property getter: - (long long)downloadSizeLimit;	// 0x354abf29
- (double)estimatedSecondsRemaining;	// 0x354abf71
- (id)failureError;	// 0x354abfb1
- (void)handleWithDownloadHandler:(id)downloadHandler completionBlock:(id)block;	// 0x354ae0c9
// declared property getter: - (BOOL)isCancelable;	// 0x354abfed
- (BOOL)isEligibleForRestore:(id *)restore;	// 0x354ac159
// declared property getter: - (BOOL)isExternal;	// 0x354ae0d9
- (BOOL)loadThumbnailImageData;	// 0x354ae105
- (void)loadThumbnailImageDataWithCompletionBlock:(id)completionBlock;	// 0x354ac1bd
// declared property getter: - (id)metadata;	// 0x354ae149
// converted property getter: - (id)networkConstraints;	// 0x354ac425
- (void)pause;	// 0x354ac605
- (double)percentComplete;	// 0x354ac895
// declared property getter: - (long long)persistentIdentifier;	// 0x354ac8c9
- (void)prioritizeAboveDownload:(id)download completionBlock:(id)block;	// 0x354ac8e1
- (BOOL)removeAsset:(id)asset;	// 0x354acd2d
- (void)resume;	// 0x354acf4d
// declared property setter: - (void)setAssets:(id)assets;	// 0x354ae1ad
- (void)setDownloadHandler:(id)handler completionBlock:(id)block;	// 0x354ad1d5
// declared property setter: - (void)setDownloadPolicy:(id)policy;	// 0x354ad62d
// declared property setter: - (void)setMetadata:(id)metadata;	// 0x354ae1b1
// converted property setter: - (void)setNetworkConstraints:(id)constraints;	// 0x354ad6d9
// declared property setter: - (void)setStatus:(id)status;	// 0x354ae209
- (void)setValuesWithStoreDownloadMetadata:(id)storeDownloadMetadata;	// 0x354ad755
// declared property getter: - (id)status;	// 0x354ae211
- (id)thumbnailImageData;	// 0x354ae785
@end
