/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "NSCopying.h"
#import "OfficeImport-Structs.h"

@class NSMutableArray;

@interface EDCollection : NSObject <NSCopying> {
	NSMutableArray *mObjects;	// 4 = 0x4
}
+ (id)collection;	// 0x348c24fd
+ (id)collectionWithObject:(id)object;	// 0x34a2660d
- (id)init;	// 0x34890ef5
- (id)initWithObject:(id)object;	// 0x34982cc5
- (unsigned)addObject:(id)object;	// 0x34891735
- (unsigned)addOrEquivalentObject:(id)object;	// 0x34896205
- (id)copyWithZone:(NSZone *)zone;	// 0x349b5ab5
- (unsigned)count;	// 0x34891b11
- (void)dealloc;	// 0x3489a1ed
- (unsigned)hash;	// 0x34a26659
- (unsigned)indexOfObject:(id)object;	// 0x34896241
- (void)insertObject:(id)object atIndex:(unsigned)index;	// 0x348a8495
- (BOOL)isEqual:(id)equal;	// 0x34980941
- (BOOL)isEqualToCollection:(id)collection;	// 0x34983055
- (id)objectAtIndex:(unsigned)index;	// 0x348a1f71
- (void)removeAllObjects;	// 0x34a26679
- (void)removeObjectAtIndex:(unsigned)index;	// 0x349d4421
- (void)replaceObjectAtIndex:(unsigned)index withObject:(id)object;	// 0x34a26699
@end

