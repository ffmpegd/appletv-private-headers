/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSMutableSet.h> // Unknown library
#import "CoreData-Structs.h"

@class NSManagedObject, NSString;

@interface _NSNotifyingWrapperMutableSet : NSMutableSet {
	NSManagedObject *_container;	// 4 = 0x4
	NSString *_key;	// 8 = 0x8
	NSMutableSet *_mutableSet;	// 12 = 0xc
}
- (id)initWithContainer:(id)container key:(id)key mutableSet:(id)set;	// 0x35bff0f5
- (void)addObject:(id)object;	// 0x35bff48d
- (void)addObjectsFromArray:(id)array;	// 0x35bff555
- (id)allObjects;	// 0x35bff261
- (id)anyObject;	// 0x35bff281
- (BOOL)containsObject:(id)object;	// 0x35bff2a1
- (id)copyWithZone:(NSZone *)zone;	// 0x35bff191
- (unsigned)count;	// 0x35bff3cd
- (unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count;	// 0x35bff42d
- (void)dealloc;	// 0x35bff065
- (id)description;	// 0x35bff221
- (id)descriptionWithLocale:(id)locale;	// 0x35bff241
- (void)enumerateObjectsWithOptions:(unsigned)options usingBlock:(id)block;	// 0x35bff44d
- (void)getObjects:(id *)objects;	// 0x35bff2e9
- (void)intersectSet:(id)set;	// 0x35bff61d
- (BOOL)isEqualToSet:(id)set;	// 0x35bff2c5
- (BOOL)isSubsetOfSet:(id)set;	// 0x35bff309
- (void)makeObjectsPerformSelector:(SEL)selector;	// 0x35bff32d
- (void)makeObjectsPerformSelector:(SEL)selector withObject:(id)object;	// 0x35bff34d
- (id)member:(id)member;	// 0x35bff3ed
- (void)minusSet:(id)set;	// 0x35bff6a1
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x35bff1d9
- (id)objectEnumerator;	// 0x35bff40d
- (id)objectsWithOptions:(unsigned)options passingTest:(id)test;	// 0x35bff46d
- (void)removeAllObjects;	// 0x35bff725
- (void)removeObject:(id)object;	// 0x35bff7b5
- (void)setSet:(id)set;	// 0x35bff87d
- (void)setValue:(id)value forKey:(id)key;	// 0x35bff36d
- (void)unionSet:(id)set;	// 0x35bff901
- (id)valueForKey:(id)key;	// 0x35bff38d
- (id)valueForKeyPath:(id)keyPath;	// 0x35bff3ad
@end

