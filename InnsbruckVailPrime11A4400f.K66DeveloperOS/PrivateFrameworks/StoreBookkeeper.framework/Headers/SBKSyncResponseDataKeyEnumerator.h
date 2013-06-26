/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
 */

#import </libobjc.A.h>

@class NSEnumerator, SBKSyncTransaction, SBKSyncResponseData;

@interface SBKSyncResponseDataKeyEnumerator : NSObject {
	BOOL _resolvedConflictsNeedSyncToServer;	// 4 = 0x4
	SBKSyncResponseData *_responseData;	// 8 = 0x8
	SBKSyncTransaction *_transaction;	// 12 = 0xc
	id _completionBlock;	// 16 = 0x10
	NSEnumerator *_updatedKeysEnumerator;	// 20 = 0x14
	NSEnumerator *_conflictedKeysEnumerator;	// 24 = 0x18
	NSEnumerator *_deletedKeysEnumerator;	// 28 = 0x1c
}
@property(copy) id completionBlock;	// G=0x327bf999; S=0x327bf9ad; @synthesize=_completionBlock
@property(retain) NSEnumerator *conflictedKeysEnumerator;	// G=0x327bfa11; S=0x327bfa25; @synthesize=_conflictedKeysEnumerator
@property(retain) NSEnumerator *deletedKeysEnumerator;	// G=0x327bfa35; S=0x327bfa49; @synthesize=_deletedKeysEnumerator
@property(assign) BOOL resolvedConflictsNeedSyncToServer;	// G=0x327bf9bd; S=0x327bf9d5; @synthesize=_resolvedConflictsNeedSyncToServer
@property(retain) SBKSyncResponseData *responseData;	// G=0x327bf951; S=0x327bf965; @synthesize=_responseData
@property(retain) SBKSyncTransaction *transaction;	// G=0x327bf975; S=0x327bf989; @synthesize=_transaction
@property(retain) NSEnumerator *updatedKeysEnumerator;	// G=0x327bf9ed; S=0x327bfa01; @synthesize=_updatedKeysEnumerator
- (id)initWithResponseData:(id)responseData;	// 0x327bf531
- (void).cxx_destruct;	// 0x327bfa59
- (void)_processDeletedKey:(id)key isDirty:(BOOL *)dirty;	// 0x327bf7b5
- (void)_processNextKey;	// 0x327bf829
- (void)_processUpdatedKey:(id)key isConflict:(BOOL)conflict isDirty:(BOOL *)dirty;	// 0x327bf70d
// declared property getter: - (id)completionBlock;	// 0x327bf999
// declared property getter: - (id)conflictedKeysEnumerator;	// 0x327bfa11
// declared property getter: - (id)deletedKeysEnumerator;	// 0x327bfa35
- (void)enumerateKeysInResponseForTransaction:(id)transaction completionBlock:(id)block;	// 0x327bf591
// declared property getter: - (BOOL)resolvedConflictsNeedSyncToServer;	// 0x327bf9bd
// declared property getter: - (id)responseData;	// 0x327bf951
// declared property setter: - (void)setCompletionBlock:(id)block;	// 0x327bf9ad
// declared property setter: - (void)setConflictedKeysEnumerator:(id)enumerator;	// 0x327bfa25
// declared property setter: - (void)setDeletedKeysEnumerator:(id)enumerator;	// 0x327bfa49
// declared property setter: - (void)setResolvedConflictsNeedSyncToServer:(BOOL)server;	// 0x327bf9d5
// declared property setter: - (void)setResponseData:(id)data;	// 0x327bf965
// declared property setter: - (void)setTransaction:(id)transaction;	// 0x327bf989
// declared property setter: - (void)setUpdatedKeysEnumerator:(id)enumerator;	// 0x327bfa01
// declared property getter: - (id)transaction;	// 0x327bf975
// declared property getter: - (id)updatedKeysEnumerator;	// 0x327bf9ed
@end
