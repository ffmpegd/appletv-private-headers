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
@property(readonly, retain) NSMutableArray *assets;	// G=0x3484ff79; converted property
@property(readonly, retain) NSMutableArray *completedStoreAssets;	// G=0x3484ffb1; converted property
@property(readonly, assign) unsigned totalAssetCount;	// G=0x3484fc89; converted property
- (id)init;	// 0x348510b5
- (void)_installSignalHandler;	// 0x3485100d
- (id)assetForDataclass:(id)dataclass identifier:(id)identifier;	// 0x3484ff3d
- (id)assetForStoreID:(long long)storeID;	// 0x3484fef1
- (id)assetManifestForDataclasses:(id)dataclasses;	// 0x3485097d
// converted property getter: - (id)assets;	// 0x3484ff79
- (id)assetsForDataclasses:(id)dataclasses;	// 0x3485038d
- (unsigned)awaitingStoreCompletion;	// 0x3484fcad
- (id)bypassedRestoresForDataclass:(id)dataclass;	// 0x34850275
// converted property getter: - (id)completedStoreAssets;	// 0x3484ffb1
- (unsigned)countOfSyncAssetsForDataclasses:(id)dataclasses;	// 0x34850469
- (unsigned)currentAsset;	// 0x3484fc99
- (BOOL)dataclassIsEmpty:(id)empty;	// 0x34850ddd
- (void)dealloc;	// 0x3485110d
- (void)dequeueAsset:(id)asset;	// 0x34850705
- (void)enqueueAsset:(id)asset;	// 0x3484fe51
- (void)enqueueAssets:(id)assets;	// 0x3484fccd
- (BOOL)isEmpty;	// 0x34850e89
- (void)mapStoreIDToAsset:(id)asset;	// 0x3484fe8d
- (void)removeCompletedStoreAsset:(id)asset;	// 0x34850cd1
- (void)removeInstallOnlyAssetsForDataclass:(id)dataclass;	// 0x34850b95
- (void)reset;	// 0x34850ed1
- (id)restoreAssetsForDataclass:(id)dataclass;	// 0x34850141
- (id)storeAssetsForDataclass:(id)dataclass;	// 0x3484ffc1
// converted property getter: - (unsigned)totalAssetCount;	// 0x3484fc89
- (id)uploadAssetsForDataclass:(id)dataclass;	// 0x3485060d
@end
