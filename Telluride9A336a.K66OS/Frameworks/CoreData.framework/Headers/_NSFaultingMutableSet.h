/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "CoreData-Structs.h"
#import <NSMutableSet.h> // Unknown library

@class NSManagedObject;

__attribute__((visibility("hidden")))
@interface _NSFaultingMutableSet : NSMutableSet {
@private
	int _cd_rc;	// 4 = 0x4
	NSFaultingMutableSetFlags _flags;	// 8 = 0x8
	id _realSet;	// 12 = 0xc
	NSManagedObject *_source;	// 16 = 0x10
}
@property(readonly, retain) NSManagedObject *source;	// G=0x3232e9cd; converted property
+ (BOOL)accessInstanceVariablesDirectly;	// 0x3232e99d
+ (id)alloc;	// 0x3232ee6d
+ (id)allocWithZone:(NSZone *)zone;	// 0x3232ee65
- (id)initWithSource:(id)source destinations:(id)destinations forRelationship:(id)relationship inContext:(id)context;	// 0x3232fea5
- (id)initWithSource:(id)source forRelationship:(id)relationship asFault:(BOOL)fault;	// 0x3232ff65
- (BOOL)_isDeallocating;	// 0x3232fd69
- (BOOL)_isIdenticalFault:(id)fault;	// 0x3232f411
- (BOOL)_shouldProcessKVOChange;	// 0x3232e9c9
- (BOOL)_tryRetain;	// 0x3232fd91
- (void)addObject:(id)object;	// 0x3232f5c1
- (void)addObjectsFromArray:(id)array;	// 0x3232f0cd
- (id)allObjects;	// 0x3232ec69
- (id)anyObject;	// 0x3232eca1
- (Class)classForArchiver;	// 0x3232ee75
- (Class)classForCoder;	// 0x3232eeb9
- (BOOL)containsObject:(id)object;	// 0x3232f519
- (id)copyWithZone:(NSZone *)zone;	// 0x3232f7a1
- (unsigned)count;	// 0x3232f6f5
- (unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count;	// 0x3232eb71
- (void)dealloc;	// 0x3232fcdd
- (id)description;	// 0x3232e9dd
- (id)descriptionWithLocale:(id)locale;	// 0x3232eaa5
- (void)enumerateObjectsWithOptions:(unsigned)options usingBlock:(id)block;	// 0x3232ebb1
- (void)getObjects:(id *)objects;	// 0x3232f591
- (void)intersectSet:(id)set;	// 0x3232f08d
- (BOOL)intersectsSet:(id)set;	// 0x3232ed29
- (BOOL)isEqual:(id)equal;	// 0x3232f4d5
- (BOOL)isEqualToSet:(id)set;	// 0x3232ed6d
- (BOOL)isFault;	// 0x3232e9b5
- (BOOL)isSubsetOfSet:(id)set;	// 0x3232f3cd
- (void)makeObjectsPerformSelector:(SEL)selector;	// 0x3232f391
- (void)makeObjectsPerformSelector:(SEL)selector withObject:(id)object;	// 0x3232f351
- (id)member:(id)member;	// 0x3232f685
- (void)minusSet:(id)set;	// 0x3232f039
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x3232f721
- (id)objectEnumerator;	// 0x3232ec31
- (id)objectsWithOptions:(unsigned)options passingTest:(id)test;	// 0x3232ebf1
- (id)relationship;	// 0x3232f981
- (oneway void)release;	// 0x3232fded
- (void)removeAllObjects;	// 0x3232f00d
- (void)removeObject:(id)object;	// 0x3232f289
- (id)replacementObjectForCoder:(id)coder;	// 0x3232ee91
- (id)retain;	// 0x3232fe6d
- (unsigned)retainCount;	// 0x3232e9a1
- (void)setSet:(id)set;	// 0x3232ef8d
- (void)setValue:(id)value forKey:(id)key;	// 0x3232ef4d
// converted property getter: - (id)source;	// 0x3232e9cd
- (void)turnIntoFault;	// 0x3232f9c1
- (void)unionSet:(id)set;	// 0x3232efcd
- (id)valueForKey:(id)key;	// 0x3232ef11
- (id)valueForKeyPath:(id)keyPath;	// 0x3232eed5
- (void)willRead;	// 0x3232fa49
@end

