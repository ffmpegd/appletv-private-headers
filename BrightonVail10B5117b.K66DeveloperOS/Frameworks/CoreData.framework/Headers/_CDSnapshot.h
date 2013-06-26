/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSMutableCopying.h"
#import "NSCopying.h"
#import "CoreData-Structs.h"
#import <NSObject.h> // Unknown library

@class NSManagedObjectID;

@interface _CDSnapshot : NSObject <NSCopying, NSMutableCopying> {
	int _cd_rc;	// 4 = 0x4
	int _cd_version;	// 8 = 0x8
	NSManagedObjectID *_cd_objectID;	// 12 = 0xc
	snapshotFlags_st _cd_flags;	// 16 = 0x10
	unsigned _cd_nullFlags_;	// 20 = 0x14
}
+ (void)_entityDeallocated;	// 0x30fe2a11
+ (id)alloc;	// 0x30fe2a01
+ (id)allocWithZone:(NSZone *)zone;	// 0x30fe2a09
+ (Class)classForEntity:(id)entity;	// 0x30f046a5
+ (void)initialize;	// 0x30f0461d
+ (unsigned)newBatchAllocation:(id *)allocation count:(unsigned)count withOwnedObjectIDs:(id *)ownedObjectIDs;	// 0x30f04ed5
- (id)initWithObjectID:(id)objectID;	// 0x30fe2a19
- (id)_descriptionValues;	// 0x30fe2e11
- (BOOL)_isDeallocating;	// 0x30fe2d35
- (BOOL)_tryRetain;	// 0x30fe2ce5
- (id)copy;	// 0x30fe2a7d
- (id)copyWithZone:(NSZone *)zone;	// 0x30fe2a6d
- (void)dealloc;	// 0x30fe2d8d
- (id)description;	// 0x30fe3301
- (id)entity;	// 0x30fe3661
- (void)finalize;	// 0x30fe2d61
- (unsigned)hash;	// 0x30fe2bad
- (BOOL)isEqual:(id)equal;	// 0x30fe2c15
- (id)mutableCopy;	// 0x30fe2ad9
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x30fe2ac9
- (id)objectID;	// 0x30fe3681
- (oneway void)release;	// 0x30fe2c59
- (id)retain;	// 0x30fe2c21
- (unsigned)retainCount;	// 0x30fe2cd1
- (void)setValue:(id)value forKey:(id)key;	// 0x30fe34c9
- (id)valueForKey:(id)key;	// 0x30fe33b5
@end
