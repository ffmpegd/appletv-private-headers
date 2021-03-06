/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h> // Unknown library

@class NSNumber, NSString, NSMutableDictionary;

@interface SSRestoreContentItem : NSObject {
	NSNumber *_accountID;	// 4 = 0x4
	NSString *_appleID;	// 8 = 0x8
	NSString *_bundleID;	// 12 = 0xc
	NSNumber *_cloudMatchStatus;	// 16 = 0x10
	BOOL _isRestore;	// 20 = 0x14
	NSMutableDictionary *_properties;	// 24 = 0x18
}
@property(assign, nonatomic, getter=isDRMFree) BOOL DRMFree;	// G=0x31942489; S=0x319427e9; 
@property(copy, nonatomic) NSString *bundleID;	// G=0x31942f81; S=0x31942f95; @synthesize=_bundleID
@property(retain, nonatomic) NSNumber *cloudItemID;	// G=0x3194227d; S=0x3194276d; 
@property(retain, nonatomic) NSNumber *cloudMatchStatus;	// G=0x319422cd; S=0x31942789; 
@property(copy, nonatomic) NSString *downloadKind;	// G=0x31942439; S=0x319427cd; 
@property(copy, nonatomic) NSString *podcastEpisodeGUID;	// G=0x3194271d; S=0x3194282d; 
@property(copy, nonatomic) NSString *storeAccountAppleID;	// G=0x31942ad9; S=0x31942849; 
@property(retain, nonatomic) NSNumber *storeAccountID;	// G=0x31942b11; S=0x3194288d; 
@property(copy, nonatomic) NSString *storeFlavor;	// G=0x31942b49; S=0x319428d1; 
@property(copy, nonatomic) NSString *storeFrontID;	// G=0x31942b99; S=0x319428ed; 
@property(retain, nonatomic) NSNumber *storeItemID;	// G=0x31942be9; S=0x31942909; 
@property(copy, nonatomic) NSString *storeSoftwareVersionID;	// G=0x31942c39; S=0x31942925; 
@property(copy, nonatomic) NSString *videoDimensions;	// G=0x31942c89; S=0x31942abd; 
- (id)init;	// 0x31941fc1
- (id)initWithRestoreDownload:(id)restoreDownload;	// 0x31941fd1
- (id)_initSSRestoreContentItem;	// 0x31941f5d
- (id)_restoreKeyForAssetProperty:(id)assetProperty;	// 0x31942cd9
- (id)_restoreKeyForDownloadProperty:(id)downloadProperty;	// 0x31942d9d
- (void)_setValue:(id)value forProperty:(id)property;	// 0x31942eb5
// declared property getter: - (id)bundleID;	// 0x31942f81
// declared property getter: - (id)cloudItemID;	// 0x3194227d
// declared property getter: - (id)cloudMatchStatus;	// 0x319422cd
- (id)copyRestoreDictionary;	// 0x31942305
- (void)dealloc;	// 0x319421dd
// declared property getter: - (id)downloadKind;	// 0x31942439
// declared property getter: - (BOOL)isDRMFree;	// 0x31942489
- (BOOL)isEligibleForRestore:(id *)restore;	// 0x319424c9
// declared property getter: - (id)podcastEpisodeGUID;	// 0x3194271d
// declared property setter: - (void)setBundleID:(id)anId;	// 0x31942f95
// declared property setter: - (void)setCloudItemID:(id)anId;	// 0x3194276d
// declared property setter: - (void)setCloudMatchStatus:(id)status;	// 0x31942789
// declared property setter: - (void)setDRMFree:(BOOL)free;	// 0x319427e9
// declared property setter: - (void)setDownloadKind:(id)kind;	// 0x319427cd
// declared property setter: - (void)setPodcastEpisodeGUID:(id)guid;	// 0x3194282d
// declared property setter: - (void)setStoreAccountAppleID:(id)anId;	// 0x31942849
// declared property setter: - (void)setStoreAccountID:(id)anId;	// 0x3194288d
// declared property setter: - (void)setStoreFlavor:(id)flavor;	// 0x319428d1
// declared property setter: - (void)setStoreFrontID:(id)anId;	// 0x319428ed
// declared property setter: - (void)setStoreItemID:(id)anId;	// 0x31942909
// declared property setter: - (void)setStoreSoftwareVersionID:(id)anId;	// 0x31942925
- (void)setValue:(id)value forAssetProperty:(id)assetProperty;	// 0x31942941
- (void)setValue:(id)value forDownloadProperty:(id)downloadProperty;	// 0x31942979
// declared property setter: - (void)setVideoDimensions:(id)dimensions;	// 0x31942abd
// declared property getter: - (id)storeAccountAppleID;	// 0x31942ad9
// declared property getter: - (id)storeAccountID;	// 0x31942b11
// declared property getter: - (id)storeFlavor;	// 0x31942b49
// declared property getter: - (id)storeFrontID;	// 0x31942b99
// declared property getter: - (id)storeItemID;	// 0x31942be9
// declared property getter: - (id)storeSoftwareVersionID;	// 0x31942c39
// declared property getter: - (id)videoDimensions;	// 0x31942c89
@end

