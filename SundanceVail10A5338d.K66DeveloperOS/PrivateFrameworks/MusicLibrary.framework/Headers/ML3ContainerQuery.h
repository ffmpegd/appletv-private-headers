/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import "ML3Query.h"

@class ML3Container, NSArray, ML3Predicate;

@interface ML3ContainerQuery : ML3Query {
	ML3Predicate *_containerPredicate;	// 32 = 0x20
	ML3Container *_container;	// 36 = 0x24
}
@property(readonly, assign) ML3Container *container;	// G=0x30b01991; @synthesize=_container
@property(readonly, assign) NSArray *limitedPersistentIDs;	// G=0x30b01049; 
@property(readonly, assign) BOOL requiresSmartLimiting;	// G=0x30ac8845; 
- (id)initWithCoder:(id)coder;	// 0x30b00d19
- (id)initWithEntityClass:(Class)entityClass container:(id)container predicate:(id)predicate orderingTerms:(id)terms;	// 0x30b00909
- (void).cxx_destruct;	// 0x30b019a5
// declared property getter: - (id)container;	// 0x30b01991
- (unsigned)countOfDistinctRowsForColumn:(id)column;	// 0x30b01651
- (unsigned)countOfEntities;	// 0x30b018d1
- (void)encodeWithCoder:(id)coder;	// 0x30b00e55
- (BOOL)hasEntities;	// 0x30b013ed
// declared property getter: - (id)limitedPersistentIDs;	// 0x30b01049
// declared property getter: - (BOOL)requiresSmartLimiting;	// 0x30ac8845
- (id)selectLimitingSQL;	// 0x30b00f81
- (id)selectPersistentIDsSQLAndProperties:(id)properties ordered:(BOOL)ordered;	// 0x30ac8255
@end
