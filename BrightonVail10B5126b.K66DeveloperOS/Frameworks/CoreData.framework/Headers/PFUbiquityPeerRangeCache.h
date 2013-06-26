/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library

@class NSString, NSMutableDictionary, PFUbiquityLocation, NSDictionary, NSPersistentStore;

@interface PFUbiquityPeerRangeCache : NSObject {
	NSMutableDictionary *_cachedRanges;	// 4 = 0x4
	NSMutableDictionary *_allEntityRanges;	// 8 = 0x8
	NSMutableDictionary *_translatedGlobalIDs;	// 12 = 0xc
	NSString *_localPeerID;	// 16 = 0x10
	NSString *_storeName;	// 20 = 0x14
	PFUbiquityLocation *_ubiquityRootLocation;	// 24 = 0x18
	NSPersistentStore *_privateStore;	// 28 = 0x1c
	BOOL _cachedStorePeerRanges;	// 32 = 0x20
}
@property(readonly, assign, nonatomic) NSString *localPeerID;	// G=0x30fe985d; @synthesize=_localPeerID
@property(readonly, assign, nonatomic) NSPersistentStore *privateStore;	// G=0x30fe989d; @synthesize=_privateStore
@property(readonly, assign, nonatomic) NSString *storeName;	// G=0x30fe986d; @synthesize=_storeName
@property(readonly, assign, nonatomic) NSDictionary *translatedGlobalIDs;	// G=0x30fe987d; @synthesize=_translatedGlobalIDs
@property(readonly, assign, nonatomic) PFUbiquityLocation *ubiquityRootLocation;	// G=0x30fe988d; @synthesize=_ubiquityRootLocation
+ (void)initialize;	// 0x30fe7d85
+ (int)integerFromPrimaryKeyString:(id)primaryKeyString;	// 0x30fe9809
+ (unsigned)peerRangeStartForPrimaryKey:(unsigned)primaryKey;	// 0x30fe9855
- (id)initWithPrivateStore:(id)privateStore storeName:(id)name ubiquityRootLocation:(id)location andLocalPeerID:(id)anId;	// 0x30fe7de9
- (BOOL)cachePeerRanges:(id *)ranges;	// 0x30fe8021
- (BOOL)cacheSQLCorePeerRange:(id)range error:(id *)error;	// 0x30fe8221
- (id)cachedRangeForLocalPrimaryKey:(unsigned)localPrimaryKey ofEntityNamed:(id)entityNamed;	// 0x30fe86e5
- (id)cachedRangeForOwningPeerID:(id)owningPeerID andEntityName:(id)name withPrimaryKey:(unsigned)primaryKey;	// 0x30fe8545
- (id)createGlobalObjectIDForManagedObjectID:(id)managedObjectID;	// 0x30fe8a4d
- (id)createMapOfManagedObjectIDsForGlobalIDs:(id)globalIDs error:(id *)error;	// 0x30fe8ca9
- (id)createMapOfManagedObjectIDsForStoreSaveSnapshot:(id)storeSaveSnapshot error:(id *)error;	// 0x30fe8c75
- (void)dealloc;	// 0x30fe7f05
// declared property getter: - (id)localPeerID;	// 0x30fe985d
- (unsigned)localPrimaryKeyForOwningPeerID:(id)owningPeerID andEntityName:(id)name withPrimaryKey:(unsigned)primaryKey;	// 0x30fe89d5
// declared property getter: - (id)privateStore;	// 0x30fe989d
- (BOOL)refreshPeerRangeCache:(id *)cache;	// 0x30fe8139
// declared property getter: - (id)storeName;	// 0x30fe986d
// declared property getter: - (id)translatedGlobalIDs;	// 0x30fe987d
// declared property getter: - (id)ubiquityRootLocation;	// 0x30fe988d
@end
