/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSMutableArray.h> // Unknown library
#import "CoreData-Structs.h"

@class NSPropertyDescription, NSManagedObject;

@interface _NSFaultingMutableArray : NSMutableArray {
	int _cd_rc;	// 4 = 0x4
	NSMutableArray *_realArray;	// 8 = 0x8
	NSManagedObject *_source;	// 12 = 0xc
	NSPropertyDescription *_relationship;	// 16 = 0x10
	NSFaultingMutableArrayFlags _flags;	// 20 = 0x14
}
@property(readonly, retain) NSPropertyDescription *relationship;	// G=0x33d33075; converted property
@property(readonly, retain) NSManagedObject *source;	// G=0x33d33065; converted property
+ (BOOL)accessInstanceVariablesDirectly;	// 0x33d32cd1
+ (id)alloc;	// 0x33d32cd5
+ (id)allocWithZone:(NSZone *)zone;	// 0x33d32cdd
- (id)initWithSource:(id)source forRelationship:(id)relationship asFault:(BOOL)fault;	// 0x33d32e25
- (BOOL)_isDeallocating;	// 0x33d32df9
- (BOOL)_tryRetain;	// 0x33d32da9
- (void)addObject:(id)object;	// 0x33d333ed
- (id)copyWithZone:(NSZone *)zone;	// 0x33d33085
- (unsigned)count;	// 0x33d33371
- (unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count;	// 0x33d3342d
- (void)dealloc;	// 0x33d32ef5
- (id)description;	// 0x33d33131
- (id)descriptionWithLocale:(id)locale;	// 0x33d331f1
- (id)descriptionWithLocale:(id)locale indent:(unsigned)indent;	// 0x33d332b1
- (void)enumerateObjectsAtIndexes:(id)indexes options:(unsigned)options usingBlock:(id)block;	// 0x33d334b5
- (void)enumerateObjectsWithOptions:(unsigned)options usingBlock:(id)block;	// 0x33d33471
- (void)getObjects:(id *)objects;	// 0x33d33749
- (unsigned)indexOfObjectAtIndexes:(id)indexes options:(unsigned)options passingTest:(id)test;	// 0x33d3353d
- (unsigned)indexOfObjectWithOptions:(unsigned)options passingTest:(id)test;	// 0x33d334f9
- (id)indexesOfObjectsAtIndexes:(id)indexes options:(unsigned)options passingTest:(id)test;	// 0x33d335c5
- (id)indexesOfObjectsWithOptions:(unsigned)options passingTest:(id)test;	// 0x33d33581
- (void)insertObject:(id)object atIndex:(unsigned)index;	// 0x33d33645
- (BOOL)isFault;	// 0x33d32f45
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x33d33121
- (id)objectAtIndex:(unsigned)index;	// 0x33d333ad
- (id)objectEnumerator;	// 0x33d33609
// converted property getter: - (id)relationship;	// 0x33d33075
- (oneway void)release;	// 0x33d32d1d
- (void)removeLastObject;	// 0x33d33689
- (void)removeObjectAtIndex:(unsigned)index;	// 0x33d336c5
- (void)replaceObjectAtIndex:(unsigned)index withObject:(id)object;	// 0x33d33705
- (id)retain;	// 0x33d32ce5
- (unsigned)retainCount;	// 0x33d32d95
- (void)setValue:(id)value forKey:(id)key;	// 0x33d33789
// converted property getter: - (id)source;	// 0x33d33065
- (void)turnIntoFault;	// 0x33d33025
- (id)valueForKey:(id)key;	// 0x33d337cd
- (id)valueForKeyPath:(id)keyPath;	// 0x33d3380d
- (void)willRead;	// 0x33d32f59
@end

