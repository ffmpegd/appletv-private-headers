/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import "DataAccess-Structs.h"
#import "DADSearchQuery.h"

@class NSDate, NSString;

@interface DADMailboxSearchQuery : DADSearchQuery {
	NSString *_collectionID;	// 24 = 0x18
	int _bodyType;	// 28 = 0x1c
	long long _truncationSize;	// 32 = 0x20
	BOOL _allOrNone;	// 40 = 0x28
	NSDate *_priorToDate;	// 44 = 0x2c
	int _MIMESupport;	// 48 = 0x30
	BOOL _deepTraversal;	// 52 = 0x34
	BOOL _rebuildResults;	// 53 = 0x35
}
@property(assign) int MIMESupport;	// G=0x340b6819; S=0x340b6829; @synthesize=_MIMESupport
@property(assign) BOOL allOrNone;	// G=0x340b6839; S=0x340b6849; @synthesize=_allOrNone
@property(assign) int bodyType;	// G=0x340b6859; S=0x340b6869; @synthesize=_bodyType
@property(retain) NSString *collectionID;	// G=0x340b6dc5; S=0x340b6df5; @synthesize=_collectionID
@property(assign) BOOL deepTraversal;	// G=0x340b67f9; S=0x340b6809; @synthesize=_deepTraversal
@property(retain) NSDate *priorToDate;	// G=0x340b6ddd; S=0x340b6e21; @synthesize=_priorToDate
@property(assign) BOOL rebuildResults;	// G=0x340b67d9; S=0x340b67e9; @synthesize=_rebuildResults
@property(assign) long long truncationSize;	// G=0x340b6e79; S=0x340b6e4d; @synthesize=_truncationSize
+ (id)mailboxSearchQueryWithSearchString:(id)searchString;	// 0x340b6b11
- (id)initWithDictionaryRepresentation:(id)dictionaryRepresentation;	// 0x340b6b51
- (id)initWithSearchString:(id)searchString;	// 0x340b6d11
// declared property getter: - (int)MIMESupport;	// 0x340b6819
// declared property getter: - (BOOL)allOrNone;	// 0x340b6839
// declared property getter: - (int)bodyType;	// 0x340b6859
// declared property getter: - (id)collectionID;	// 0x340b6dc5
- (void)dealloc;	// 0x340b6ab5
// declared property getter: - (BOOL)deepTraversal;	// 0x340b67f9
- (unsigned)hash;	// 0x340b6879
- (BOOL)isEqual:(id)equal;	// 0x340b6915
- (BOOL)isEqualToDADMailboxSearchQuery:(id)dadmailboxSearchQuery;	// 0x340b695d
// declared property getter: - (id)priorToDate;	// 0x340b6ddd
// declared property getter: - (BOOL)rebuildResults;	// 0x340b67d9
// declared property setter: - (void)setAllOrNone:(BOOL)none;	// 0x340b6849
// declared property setter: - (void)setBodyType:(int)type;	// 0x340b6869
// declared property setter: - (void)setCollectionID:(id)anId;	// 0x340b6df5
// declared property setter: - (void)setDeepTraversal:(BOOL)traversal;	// 0x340b6809
// declared property setter: - (void)setMIMESupport:(int)support;	// 0x340b6829
// declared property setter: - (void)setPriorToDate:(id)date;	// 0x340b6e21
// declared property setter: - (void)setRebuildResults:(BOOL)results;	// 0x340b67e9
// declared property setter: - (void)setTruncationSize:(long long)size;	// 0x340b6e4d
// declared property getter: - (long long)truncationSize;	// 0x340b6e79
@end

