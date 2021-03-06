/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "SSEntity.h"
#import "SSXPCCoding.h"

@class SSDownloadPolicy, NSArray, SSXPCConnection, SSDownloadMetadata, SSDownloadStatus, NSMutableDictionary, NSNumber;

@interface SSDownload : SSEntity <SSXPCCoding> {
@private
	NSMutableDictionary *_localAssets;	// 28 = 0x1c
	SSDownloadMetadata *_metadata;	// 32 = 0x20
	NSNumber *_prioritizeAboveDownload;	// 36 = 0x24
	SSDownloadStatus *_status;	// 40 = 0x28
}
@property(readonly, assign, getter=_XPCConnection) SSXPCConnection *_XPCConnection;	// G=0x34e3334d; 
@property(retain, nonatomic) NSArray *assets;	// G=0x34e32ad1; S=0x34e32bed; 
@property(readonly, assign, getter=isCancelable) BOOL cancelable;	// G=0x34e30a2d; 
@property(readonly, assign, nonatomic) id downloadIdentifier;	// G=0x34e32ad5; 
@property(copy) SSDownloadPolicy *downloadPolicy;	// G=0x34e30911; S=0x34e3206d; 
@property(readonly, assign) long long downloadSizeLimit;	// G=0x34e30969; 
@property(readonly, assign, nonatomic, getter=isExternal) BOOL external;	// G=0x34e32b19; 
@property(copy, nonatomic) SSDownloadMetadata *metadata;	// G=0x34e32b89; S=0x34e32bf1; 
@property(retain) id networkConstraints;	// G=0x34e30e65; S=0x34e32119; converted property
@property(readonly, assign) long long persistentIdentifier;	// G=0x34e31309; 
@property(retain, nonatomic) SSDownloadStatus *status;	// G=0x34e32c51; S=0x34e32c49; 
+ (long long)_existsMessage;	// 0x34e321d9
+ (long long)_getExternalValuesMessage;	// 0x34e321e1
+ (long long)_getValueMessage;	// 0x34e321e9
+ (long long)_setExternalValuesMessage;	// 0x34e321f1
+ (long long)_setValuesMessage;	// 0x34e321f9
+ (void)loadThumbnailImageDataForDownloadID:(long long)downloadID connection:(id)connection completionBlock:(id)block;	// 0x34e32621
- (id)initWithDownloadMetadata:(id)downloadMetadata;	// 0x34e3285d
- (id)initWithPersistentIdentifier:(long long)persistentIdentifier;	// 0x34e2fce1
// declared property getter: - (id)_XPCConnection;	// 0x34e3334d
- (void)_addCachedExternalValues:(id)values;	// 0x34e32201
- (void)_addCachedPropertyValues:(id)values;	// 0x34e3235d
- (void)_applyPhase:(id)phase toStatus:(id)status;	// 0x34e33361
- (id)_errorWithData:(id)data;	// 0x34e33425
- (id)_errorWithXPCReply:(id)xpcreply;	// 0x34e33495
- (id)_initWithLocalPropertyValues:(id)localPropertyValues;	// 0x34e2fd91
- (void)_legacyLoadArtworkData;	// 0x34e3354d
- (void)_resetLocalIVars;	// 0x34e325a9
- (void)_resetStatus;	// 0x34e33211
- (id)_thumbnailImageURL;	// 0x34e33795
- (BOOL)addAsset:(id)asset forType:(id)type;	// 0x34e30035
// declared property getter: - (id)assets;	// 0x34e32ad1
- (id)assetsForType:(id)type;	// 0x34e30349
- (long long)bytesDownloaded;	// 0x34e3087d
- (long long)bytesTotal;	// 0x34e308b9
- (id)copyXPCEncoding;	// 0x34e32975
- (void)dealloc;	// 0x34e2ff8d
// declared property getter: - (id)downloadIdentifier;	// 0x34e32ad5
- (id)downloadPhaseIdentifier;	// 0x34e308f5
// declared property getter: - (id)downloadPolicy;	// 0x34e30911
// declared property getter: - (long long)downloadSizeLimit;	// 0x34e30969
- (double)estimatedSecondsRemaining;	// 0x34e309b1
- (id)failureError;	// 0x34e309f1
- (void)handleWithDownloadHandler:(id)downloadHandler completionBlock:(id)block;	// 0x34e32b09
// declared property getter: - (BOOL)isCancelable;	// 0x34e30a2d
- (BOOL)isEligibleForRestore:(id *)restore;	// 0x34e30b99
// declared property getter: - (BOOL)isExternal;	// 0x34e32b19
- (BOOL)loadThumbnailImageData;	// 0x34e32b45
- (void)loadThumbnailImageDataWithCompletionBlock:(id)completionBlock;	// 0x34e30bfd
// declared property getter: - (id)metadata;	// 0x34e32b89
// converted property getter: - (id)networkConstraints;	// 0x34e30e65
- (void)pause;	// 0x34e31045
- (double)percentComplete;	// 0x34e312d5
// declared property getter: - (long long)persistentIdentifier;	// 0x34e31309
- (void)prioritizeAboveDownload:(id)download completionBlock:(id)block;	// 0x34e31321
- (BOOL)removeAsset:(id)asset;	// 0x34e3176d
- (void)resume;	// 0x34e3198d
// declared property setter: - (void)setAssets:(id)assets;	// 0x34e32bed
- (void)setDownloadHandler:(id)handler completionBlock:(id)block;	// 0x34e31c15
// declared property setter: - (void)setDownloadPolicy:(id)policy;	// 0x34e3206d
// declared property setter: - (void)setMetadata:(id)metadata;	// 0x34e32bf1
// converted property setter: - (void)setNetworkConstraints:(id)constraints;	// 0x34e32119
// declared property setter: - (void)setStatus:(id)status;	// 0x34e32c49
- (void)setValuesWithStoreDownloadMetadata:(id)storeDownloadMetadata;	// 0x34e32195
// declared property getter: - (id)status;	// 0x34e32c51
- (id)thumbnailImageData;	// 0x34e331c5
@end

