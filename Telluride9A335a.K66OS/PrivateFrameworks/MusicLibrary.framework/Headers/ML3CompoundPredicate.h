/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import "MusicLibrary-Structs.h"
#import "ML3Predicate.h"

@class NSArray, NSString;

@interface ML3CompoundPredicate : ML3Predicate {
@private
	NSArray *_predicates;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) NSString *compoundOperatorJoiner;	// @dynamic
@property(retain, nonatomic) NSArray *predicates;	// G=0x309a0045; S=0x30973f35; @synthesize=_predicates
+ (id)predicateMatchingPredicates:(id)predicates;	// 0x30973e05
- (id)initWithCoder:(id)coder;	// 0x3099fe21
- (id)initWithPredicates:(id)predicates;	// 0x30973eed
- (id)SQLJoinClausesForClass:(Class)aClass;	// 0x309754e9
- (void)appendSQLToMutableString:(id)mutableString entityClass:(Class)aClass;	// 0x30975651
- (void)bindToSqlite3Statement:(sqlite3_stmt *)sqlite3Statement bindingIndex:(inout int *)index;	// 0x30976cc5
- (void)dealloc;	// 0x3097ba69
- (id)description;	// 0x3099ffd5
- (void)encodeWithCoder:(id)coder;	// 0x3099fe89
- (unsigned)hash;	// 0x3099ff89
- (BOOL)isEqual:(id)equal;	// 0x3099feed
// declared property getter: - (id)predicates;	// 0x309a0045
// declared property setter: - (void)setPredicates:(id)predicates;	// 0x30973f35
@end
