/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableDictionary, NSMutableSet, NSString;

__attribute__((visibility("hidden")))
@interface ATVUPPClientState : XXUnknownSuperclass {
	NSMutableDictionary *_pendingChanges;	// 4 = 0x4
	NSMutableDictionary *_uppKeyToRecordMap;	// 8 = 0x8
	NSMutableSet *_recentMovieItemIds;	// 12 = 0xc
	NSMutableSet *_recentTvItemIds;	// 16 = 0x10
	NSString *_lastSyncedDomainVersion;	// 20 = 0x14
}
@property(copy) NSString *lastSyncedDomainVersion;	// G=0x1b86bd; S=0x1b86d1; @synthesize=_lastSyncedDomainVersion
@property(readonly, assign, nonatomic) NSMutableDictionary *pendingChanges;	// G=0x1b867d; @synthesize=_pendingChanges
@property(readonly, assign, nonatomic) NSMutableSet *recentMovieItemIds;	// G=0x1b869d; @synthesize=_recentMovieItemIds
@property(readonly, assign, nonatomic) NSMutableSet *recentTvItemIds;	// G=0x1b86ad; @synthesize=_recentTvItemIds
@property(readonly, assign, nonatomic) NSMutableDictionary *uppKeyToRecordMap;	// G=0x1b868d; @synthesize=_uppKeyToRecordMap
- (id)init;	// 0x1b8585
- (void).cxx_destruct;	// 0x1b86e1
// declared property getter: - (id)lastSyncedDomainVersion;	// 0x1b86bd
// declared property getter: - (id)pendingChanges;	// 0x1b867d
// declared property getter: - (id)recentMovieItemIds;	// 0x1b869d
// declared property getter: - (id)recentTvItemIds;	// 0x1b86ad
// declared property setter: - (void)setLastSyncedDomainVersion:(id)version;	// 0x1b86d1
// declared property getter: - (id)uppKeyToRecordMap;	// 0x1b868d
@end

