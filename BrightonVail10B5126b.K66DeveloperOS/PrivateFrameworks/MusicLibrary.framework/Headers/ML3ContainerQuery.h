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
@property(readonly, assign) ML3Container *container;	// G=0x346e3dfd; @synthesize=_container
@property(readonly, assign) NSArray *limitedPersistentIDs;	// G=0x346e2e95; 
@property(readonly, assign) BOOL requiresSmartLimiting;	// G=0x346e2d2d; 
- (id)initWithCoder:(id)coder;	// 0x346e2ac5
- (id)initWithEntityClass:(Class)entityClass container:(id)container predicate:(id)predicate orderingTerms:(id)terms;	// 0x346e26b5
- (void).cxx_destruct;	// 0x346e3e11
// declared property getter: - (id)container;	// 0x346e3dfd
- (unsigned)countOfDistinctRowsForColumn:(id)column;	// 0x346e34a9
- (unsigned)countOfEntities;	// 0x346e374d
- (void)encodeWithCoder:(id)coder;	// 0x346e2c01
- (BOOL)hasEntities;	// 0x346e3239
// declared property getter: - (id)limitedPersistentIDs;	// 0x346e2e95
// declared property getter: - (BOOL)requiresSmartLimiting;	// 0x346e2d2d
- (id)selectLimitingSQL;	// 0x346e2dcd
- (id)selectPersistentIDsSQLAndProperties:(id)properties ordered:(BOOL)ordered;	// 0x346e376d
@end

