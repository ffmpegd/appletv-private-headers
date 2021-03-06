/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import "MusicLibrary-Structs.h"
#import "ML3Query.h"

@class ML3Container, NSString, ML3Predicate, NSLock;

@interface ML3ContainerQuery : ML3Query {
@private
	ML3Predicate *_containerPredicate;	// 28 = 0x1c
	ML3Container *_container;	// 32 = 0x20
	NSLock *_limitCountLock;	// 36 = 0x24
	unsigned _limitCount;	// 40 = 0x28
	BOOL _limitCountLoaded;	// 44 = 0x2c
}
@property(readonly, assign) ML3Container *container;	// G=0x33808bc1; @synthesize=_container
@property(readonly, assign) unsigned limitCount;	// G=0x33808825; 
@property(readonly, assign) NSString *selectLimitingSQL;	// G=0x33808b49; 
- (id)initWithCoder:(id)coder;	// 0x3380865d
- (id)initWithEntityClass:(Class)entityClass container:(id)container predicate:(id)predicate orderingProperties:(id)properties;	// 0x337e0871
- (void)bindToPersistentIDsSqlite3Statement:(sqlite3_stmt *)persistentIDsSqlite3Statement bindingIndex:(inout int *)index;	// 0x337e1321
// declared property getter: - (id)container;	// 0x33808bc1
- (void)dealloc;	// 0x337e1619
- (void)encodeWithCoder:(id)coder;	// 0x33808751
// declared property getter: - (unsigned)limitCount;	// 0x33808825
- (BOOL)requiresSmartLimiting;	// 0x337e11a1
// declared property getter: - (id)selectLimitingSQL;	// 0x33808b49
- (id)selectPersistentIDsSQLAndProperties:(id)properties ordered:(BOOL)ordered;	// 0x337e0a95
@end

