/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSMutableSet.h> // Unknown library
#import "CoreData-Structs.h"

@class NSManagedObject, NSString;

__attribute__((visibility("hidden")))
@interface _NSNotifyingWrapperMutableSet : NSMutableSet {
@private
	NSManagedObject *_container;	// 4 = 0x4
	NSString *_key;	// 8 = 0x8
	NSMutableSet *_mutableSet;	// 12 = 0xc
}
- (id)initWithContainer:(id)container key:(id)key mutableSet:(id)set;	// 0x342db65d
- (void)addObject:(id)object;	// 0x342db2ed
- (void)addObjectsFromArray:(id)array;	// 0x342db235
- (id)allObjects;	// 0x342db585
- (id)anyObject;	// 0x342db565
- (BOOL)containsObject:(id)object;	// 0x342db541
- (id)copyWithZone:(NSZone *)zone;	// 0x342db621
- (unsigned)count;	// 0x342db419
- (unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count;	// 0x342db3a9
- (void)dealloc;	// 0x342db6e9
- (id)description;	// 0x342db5c5
- (id)descriptionWithLocale:(id)locale;	// 0x342db5a5
- (void)getObjects:(id *)objects;	// 0x342db4fd
- (void)intersectSet:(id)set;	// 0x342db1b5
- (BOOL)isEqualToSet:(id)set;	// 0x342db51d
- (BOOL)isSubsetOfSet:(id)set;	// 0x342db4d9
- (void)makeObjectsPerformSelector:(SEL)selector;	// 0x342db4b9
- (void)makeObjectsPerformSelector:(SEL)selector withObject:(id)object;	// 0x342db499
- (id)member:(id)member;	// 0x342db3f9
- (void)minusSet:(id)set;	// 0x342db135
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x342db5e5
- (id)objectEnumerator;	// 0x342db3d9
- (void)removeAllObjects;	// 0x342db0ad
- (void)removeObject:(id)object;	// 0x342daff1
- (void)setSet:(id)set;	// 0x342daf71
- (void)setValue:(id)value forKey:(id)key;	// 0x342db479
- (void)unionSet:(id)set;	// 0x342daef1
- (id)valueForKey:(id)key;	// 0x342db459
- (id)valueForKeyPath:(id)keyPath;	// 0x342db439
@end

