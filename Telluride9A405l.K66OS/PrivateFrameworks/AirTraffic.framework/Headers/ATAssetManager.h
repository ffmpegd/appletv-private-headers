/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
 */

#import <NSObject.h> // Unknown library

@class NSMutableDictionary, NSMutableArray;

@interface ATAssetManager : NSObject {
	NSMutableArray *_assets;	// 4 = 0x4
	NSMutableDictionary *_assetsByDataclass;	// 8 = 0x8
	NSMutableDictionary *_assetsByStoreID;	// 12 = 0xc
	NSMutableArray *_completedStoreAssets;	// 16 = 0x10
	unsigned _completedAssets;	// 20 = 0x14
	unsigned _totalAssetCount;	// 24 = 0x18
}
@property(readonly, retain) NSMutableArray *assets;	// G=0x350ec379; converted property
@property(readonly, retain) NSMutableArray *completedStoreAssets;	// G=0x350ec3b1; converted property
@property(readonly, assign) unsigned totalAssetCount;	// G=0x350ec089; converted property
- (id)init;	// 0x350ed3cd
- (void)_installSignalHandler;	// 0x350ed325
- (id)assetForDataclass:(id)dataclass identifier:(id)identifier;	// 0x350ec33d
- (id)assetForStoreID:(long long)storeID;	// 0x350ec2f1
- (id)assetManifestForDataclasses:(id)dataclasses;	// 0x350ecc95
// converted property getter: - (id)assets;	// 0x350ec379
- (id)assetsForDataclasses:(id)dataclasses;	// 0x350ec78d
- (unsigned)awaitingStoreCompletion;	// 0x350ec0ad
- (id)bypassedRestoresForDataclass:(id)dataclass;	// 0x350ec675
// converted property getter: - (id)completedStoreAssets;	// 0x350ec3b1
- (unsigned)currentAsset;	// 0x350ec099
- (BOOL)dataclassIsEmpty:(id)empty;	// 0x350ed0f5
- (void)dealloc;	// 0x350ed425
- (void)dequeueAsset:(id)asset;	// 0x350eca1d
- (void)enqueueAsset:(id)asset;	// 0x350ec251
- (void)enqueueAssets:(id)assets;	// 0x350ec0cd
- (BOOL)isEmpty;	// 0x350ed1a1
- (void)mapStoreIDToAsset:(id)asset;	// 0x350ec28d
- (void)removeCompletedStoreAsset:(id)asset;	// 0x350ecfe9
- (void)removeInstallOnlyAssetsForDataclass:(id)dataclass;	// 0x350ecead
- (void)reset;	// 0x350ed1e9
- (id)restoreAssetsForDataclass:(id)dataclass;	// 0x350ec541
- (id)storeAssetsForDataclass:(id)dataclass;	// 0x350ec3c1
- (id)syncAssetsForDataclasses:(id)dataclasses;	// 0x350ec869
// converted property getter: - (unsigned)totalAssetCount;	// 0x350ec089
- (id)uploadAssetsForDataclass:(id)dataclass;	// 0x350ec925
@end

