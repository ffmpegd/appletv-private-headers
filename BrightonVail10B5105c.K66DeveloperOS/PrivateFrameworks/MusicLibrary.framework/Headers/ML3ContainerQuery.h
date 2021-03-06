/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import "ML3Query.h"

@class NSArray, ML3Container, ML3Predicate;

@interface ML3ContainerQuery : ML3Query {
	ML3Predicate *_containerPredicate;	// 32 = 0x20
	ML3Container *_container;	// 36 = 0x24
}
@property(readonly, assign) ML3Container *container;	// G=0x34073a8d; @synthesize=_container
@property(readonly, assign) NSArray *limitedPersistentIDs;	// G=0x34072b25; 
@property(readonly, assign) BOOL requiresSmartLimiting;	// G=0x340729bd; 
- (id)initWithCoder:(id)coder;	// 0x34072755
- (id)initWithEntityClass:(Class)entityClass container:(id)container predicate:(id)predicate orderingTerms:(id)terms;	// 0x34072345
- (void).cxx_destruct;	// 0x34073aa1
// declared property getter: - (id)container;	// 0x34073a8d
- (unsigned)countOfDistinctRowsForColumn:(id)column;	// 0x34073139
- (unsigned)countOfEntities;	// 0x340733dd
- (void)encodeWithCoder:(id)coder;	// 0x34072891
- (BOOL)hasEntities;	// 0x34072ec9
// declared property getter: - (id)limitedPersistentIDs;	// 0x34072b25
// declared property getter: - (BOOL)requiresSmartLimiting;	// 0x340729bd
- (id)selectLimitingSQL;	// 0x34072a5d
- (id)selectPersistentIDsSQLAndProperties:(id)properties ordered:(BOOL)ordered;	// 0x340733fd
@end

