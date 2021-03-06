/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h> // Unknown library
#import "GeoServices-Structs.h"
#import "NSFastEnumeration.h"
#import "NSCopying.h"


@interface GEOTileKeyList : NSObject <NSFastEnumeration, NSCopying> {
	void *_head;	// 4 = 0x4
	void *_tail;	// 8 = 0x8
	void *_hash;	// 12 = 0xc
	unsigned _count;	// 16 = 0x10
	unsigned _maxCount;	// 20 = 0x14
}
@property(readonly, assign) unsigned count;	// G=0x366fd255; converted property
+ (id)listFromXPCData:(void *)xpcdata;	// 0x3672a8e1
- (id)init;	// 0x366fcafd
- (id)initWithMaxCapacity:(unsigned)maxCapacity;	// 0x366fcb11
- (void)_addKeyToBack:(const GEOTileKey *)back;	// 0x366fd171
- (void)addKey:(const GEOTileKey *)key;	// 0x366fd15d
- (BOOL)addKey:(const GEOTileKey *)key lostKey:(GEOTileKey *)key2;	// 0x366fcfa9
- (unsigned)capacity;	// 0x366fd245
- (BOOL)containsKey:(const GEOTileKey *)key;	// 0x366fd21d
- (id)copyWithZone:(NSZone *)zone;	// 0x366fcc05
// converted property getter: - (unsigned)count;	// 0x366fd255
- (unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count;	// 0x366fd265
- (void)dealloc;	// 0x366fccdd
- (id)description;	// 0x366fcded
- (GEOTileKey *)firstKey;	// 0x366fcf91
- (id)listWithout:(id)without;	// 0x366fd2e1
- (void *)newXPCData;	// 0x3672a969
- (BOOL)removeKey:(const GEOTileKey *)key;	// 0x366fd5b9
- (void)removeKeysMatchingPredicate:(id)predicate;	// 0x366fd4fd
- (void)sort:(id)sort;	// 0x366fd3dd
@end

