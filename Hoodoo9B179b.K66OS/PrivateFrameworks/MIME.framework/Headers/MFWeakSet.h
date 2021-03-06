/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

#import "MIME-Structs.h"
#import <NSMutableSet.h> // Unknown library

@class NSLock;

@interface MFWeakSet : NSMutableSet {
@private
	NSLock *_lock;	// 4 = 0x4
	unsigned long _gen;	// 8 = 0x8
	CFDictionaryRef _objects;	// 12 = 0xc
}
+ (id)set;	// 0x31d676ed
+ (id)setWithArray:(id)array;	// 0x31d677c1
+ (id)setWithCapacity:(unsigned)capacity;	// 0x31d677fd
+ (id)setWithObject:(id)object;	// 0x31d67725
+ (id)setWithObjects:(id)objects;	// 0x31d684f9
+ (id)setWithObjects:(id *)objects count:(unsigned)count;	// 0x31d67745
+ (id)setWithSet:(id)set;	// 0x31d67785
- (id)init;	// 0x31d676d9
- (id)initWithArray:(id)array;	// 0x31d685d9
- (id)initWithCapacity:(unsigned)capacity;	// 0x31d6883d
- (id)initWithCoder:(id)coder;	// 0x31d6741d
- (id)initWithObjects:(id)objects;	// 0x31d68439
- (id)initWithObjects:(id *)objects count:(unsigned)count;	// 0x31d675c9
- (id)initWithSet:(id)set;	// 0x31d67631
- (id)initWithSet:(id)set copyItems:(BOOL)items;	// 0x31d67645
- (id)_copyAllItems;	// 0x31d67a0d
- (void)addObject:(id)object;	// 0x31d686ad
- (void)addObjectsFromArray:(id)array;	// 0x31d68731
- (id)allObjects;	// 0x31d672c5
- (id)anyObject;	// 0x31d67b45
- (BOOL)containsObject:(id)object;	// 0x31d6736d
- (id)copyWithZone:(NSZone *)zone;	// 0x31d672ed
- (unsigned)count;	// 0x31d67839
- (unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count;	// 0x31d6798d
- (void)dealloc;	// 0x31d68945
- (id)description;	// 0x31d6738d
- (id)descriptionWithLocale:(id)locale;	// 0x31d67c31
- (void)encodeWithCoder:(id)coder;	// 0x31d673a1
- (void)enumerateObjectsUsingBlock:(id)block;	// 0x31d675a1
- (void)enumerateObjectsWithOptions:(unsigned)options usingBlock:(id)block;	// 0x31d67f69
- (void)intersectSet:(id)set;	// 0x31d68145
- (BOOL)intersectsSet:(id)set;	// 0x31d67c81
- (BOOL)isEqualToSet:(id)set;	// 0x31d67d49
- (BOOL)isSubsetOfSet:(id)set;	// 0x31d67e1d
- (void)makeObjectsPerformSelector:(SEL)selector;	// 0x31d67485
- (void)makeObjectsPerformSelector:(SEL)selector withObject:(id)object;	// 0x31d67ecd
- (id)member:(id)member;	// 0x31d67889
- (void)minusSet:(id)set;	// 0x31d68225
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x31d6732d
- (id)objectEnumerator;	// 0x31d6729d
- (id)objectsPassingTest:(id)test;	// 0x31d675b5
- (id)objectsWithOptions:(unsigned)options passingTest:(id)test;	// 0x31d68029
- (void)removeAllObjects;	// 0x31d688e5
- (void)removeObject:(id)object;	// 0x31d67929
- (id)setByAddingObject:(id)object;	// 0x31d67499
- (id)setByAddingObjectsFromArray:(id)array;	// 0x31d67505
- (id)setByAddingObjectsFromSet:(id)set;	// 0x31d674d5
- (void)setSet:(id)set;	// 0x31d68381
- (void)unionSet:(id)set;	// 0x31d682dd
@end

