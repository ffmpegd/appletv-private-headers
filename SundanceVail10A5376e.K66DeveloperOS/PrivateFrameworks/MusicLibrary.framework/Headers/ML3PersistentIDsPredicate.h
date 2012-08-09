/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import "ML3Predicate.h"


@interface ML3PersistentIDsPredicate : ML3Predicate {
	unsigned _count;	// 4 = 0x4
	long long *_persistentIDs;	// 8 = 0x8
	BOOL _shouldContain;	// 12 = 0xc
}
@property(readonly, assign, nonatomic) BOOL shouldContain;	// G=0x34847d05; @synthesize=_shouldContain
+ (id)predicateWithPersistentIDs:(const long long *)persistentIDs count:(unsigned)count shouldContain:(BOOL)contain;	// 0x3484763d
- (id)initWithCoder:(id)coder;	// 0x34847759
- (id)initWithPersistentIDs:(const long long *)persistentIDs count:(unsigned)count shouldContain:(BOOL)contain;	// 0x34847685
- (void)appendSQLToMutableString:(id)mutableString entityClass:(Class)aClass;	// 0x34847b89
- (void)bindToStatement:(id)statement bindingIndex:(inout int *)index;	// 0x34847c89
- (void)dealloc;	// 0x34847711
- (void)encodeWithCoder:(id)coder;	// 0x34847935
- (unsigned)hash;	// 0x34847aa9
- (BOOL)isEqual:(id)equal;	// 0x34847af9
// declared property getter: - (BOOL)shouldContain;	// 0x34847d05
@end
