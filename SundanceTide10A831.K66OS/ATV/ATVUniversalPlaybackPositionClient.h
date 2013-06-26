/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "MZUniversalPlaybackPositionDataSource.h"

@class MZUniversalPlaybackPositionStore, NSString, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface ATVUniversalPlaybackPositionClient : XXUnknownSuperclass <MZUniversalPlaybackPositionDataSource> {
	MZUniversalPlaybackPositionStore *_uppStore;	// 4 = 0x4
	NSMutableDictionary *_pendingChanges;	// 8 = 0x8
	NSMutableDictionary *_uppKeyToRecordMap;	// 12 = 0xc
	NSString *_lastSyncedDomainVersion;	// 16 = 0x10
}
@property(copy) NSString *lastSyncedDomainVersion;	// G=0x3a9e81; S=0x3a9e95; @synthesize=_lastSyncedDomainVersion
+ (id)defaultClient;	// 0x3a98f5
- (id)init;	// 0x3a9985
- (id)beginTransactionWithItemsToSyncEnumerationBlock:(id)syncEnumerationBlock;	// 0x3a9ea5
- (void)cancelUniversalPlaybackPositionTransaction:(id)transaction;	// 0x3aa389
- (void)commitUniversalPlaybackPositionTransaction:(id)transaction domainVersion:(id)version metadataEnumerationBlock:(id)block;	// 0x3aa081
- (void)dealloc;	// 0x3a9a2d
// declared property getter: - (id)lastSyncedDomainVersion;	// 0x3a9e81
- (id)recordForItemIdentifier:(id)itemIdentifier mediaType:(id)type podcastURL:(id)url podcastGUID:(id)guid;	// 0x3a9cf5
// declared property setter: - (void)setLastSyncedDomainVersion:(id)version;	// 0x3a9e95
- (void)synchronize:(id)synchronize;	// 0x3a9acd
- (void)writeItems:(id)items;	// 0x3a9b4d
@end
