/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccessExpress.framework/DataAccessExpress
 */

#import "DataAccessExpress-Structs.h"
#import "DASearchQuery.h"

@class NSDate, NSString;

@interface DAMailboxSearchQuery : DASearchQuery {
	NSString *_collectionID;	// 32 = 0x20
	int _bodyType;	// 36 = 0x24
	long long _truncationSize;	// 40 = 0x28
	BOOL _allOrNone;	// 48 = 0x30
	NSDate *_priorToDate;	// 52 = 0x34
	int _MIMESupport;	// 56 = 0x38
	BOOL _deepTraversal;	// 60 = 0x3c
	BOOL _rebuildResults;	// 61 = 0x3d
}
@property(assign) int MIMESupport;	// G=0x30f4f629; S=0x30f4f639; @synthesize=_MIMESupport
@property(assign) BOOL allOrNone;	// G=0x30f4f5d1; S=0x30f4f5e1; @synthesize=_allOrNone
@property(assign) int bodyType;	// G=0x30f4f549; S=0x30f4f559; @synthesize=_bodyType
@property(retain) NSString *collectionID;	// G=0x30f4f511; S=0x30f4f525; @synthesize=_collectionID
@property(assign) BOOL deepTraversal;	// G=0x30f4f649; S=0x30f4f659; @synthesize=_deepTraversal
@property(retain) NSDate *priorToDate;	// G=0x30f4f5f1; S=0x30f4f605; @synthesize=_priorToDate
@property(assign) BOOL rebuildResults;	// G=0x30f4f669; S=0x30f4f679; @synthesize=_rebuildResults
@property(assign) long long truncationSize;	// G=0x30f4f569; S=0x30f4f59d; @synthesize=_truncationSize
+ (id)mailboxSearchQueryWithSearchString:(id)searchString consumer:(id)consumer;	// 0x30f4efe1
- (id)initWithDictionaryRepresentation:(id)dictionaryRepresentation consumer:(id)consumer;	// 0x30f4f13d
- (id)initWithSearchString:(id)searchString consumer:(id)consumer;	// 0x30f4f02d
// declared property getter: - (int)MIMESupport;	// 0x30f4f629
// declared property getter: - (BOOL)allOrNone;	// 0x30f4f5d1
// declared property getter: - (int)bodyType;	// 0x30f4f549
// declared property getter: - (id)collectionID;	// 0x30f4f511
- (void)dealloc;	// 0x30f4f0dd
// declared property getter: - (BOOL)deepTraversal;	// 0x30f4f649
- (id)dictionaryRepresentation;	// 0x30f4f329
// declared property getter: - (id)priorToDate;	// 0x30f4f5f1
// declared property getter: - (BOOL)rebuildResults;	// 0x30f4f669
// declared property setter: - (void)setAllOrNone:(BOOL)none;	// 0x30f4f5e1
// declared property setter: - (void)setBodyType:(int)type;	// 0x30f4f559
// declared property setter: - (void)setCollectionID:(id)anId;	// 0x30f4f525
// declared property setter: - (void)setDeepTraversal:(BOOL)traversal;	// 0x30f4f659
// declared property setter: - (void)setMIMESupport:(int)support;	// 0x30f4f639
// declared property setter: - (void)setPriorToDate:(id)date;	// 0x30f4f605
// declared property setter: - (void)setRebuildResults:(BOOL)results;	// 0x30f4f679
// declared property setter: - (void)setTruncationSize:(long long)size;	// 0x30f4f59d
// declared property getter: - (long long)truncationSize;	// 0x30f4f569
@end

