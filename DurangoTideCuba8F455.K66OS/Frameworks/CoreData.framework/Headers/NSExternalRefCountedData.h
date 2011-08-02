/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library
#import "CoreData-Structs.h"


__attribute__((visibility("hidden")))
@interface NSExternalRefCountedData : NSObject {
@private
	int _cd_rc;	// 4 = 0x4
	int _externalReferenceCount;	// 8 = 0x8
	externalRefFlags_st _externalRefFlags;	// 12 = 0xc
	double _birth;	// 16 = 0x10
	id _toManyMap;	// 24 = 0x18
}
@property(readonly, assign) int externalReferenceCount;	// G=0x33e314d5; converted property
@property(retain) id relationshipCaches;	// G=0x33e314e5; S=0x33e31511; converted property
@property(assign) double timestamp;	// G=0x33e87b39; S=0x33e87b49; converted property
+ (id)allocWithZone:(NSZone *)zone;	// 0x33e87de9
- (id)initWithOptions:(unsigned)options andTimestamp:(double)timestamp;	// 0x33e87bad
- (void)dealloc;	// 0x33e87c65
- (int)decrementRefCount;	// 0x33e87c2d
// converted property getter: - (int)externalReferenceCount;	// 0x33e314d5
- (void)incrementExternalReferenceCount:(int)count;	// 0x33e314f5
- (void)incrementRefCount;	// 0x33e87df5
- (unsigned)options;	// 0x33e87b5d
- (unsigned)optionsForKey:(id)key;	// 0x33e87cfd
- (id)relatedIDsForKey:(id)key;	// 0x33e87cd5
// converted property getter: - (id)relationshipCaches;	// 0x33e314e5
- (void)release;	// 0x33e318e1
- (id)retain;	// 0x33e87c49
- (unsigned)retainCount;	// 0x33e87b29
- (void)setRelatedIDs:(id)ids forKey:(id)key options:(unsigned)options andTimestamp:(double)timestamp;	// 0x33e87d25
// converted property setter: - (void)setRelationshipCaches:(id)caches;	// 0x33e31511
// converted property setter: - (void)setTimestamp:(double)timestamp;	// 0x33e87b49
- (BOOL)shouldPersist;	// 0x33e87b95
- (BOOL)shouldRefresh;	// 0x33e87b7d
// converted property getter: - (double)timestamp;	// 0x33e87b39
- (double)timestampForKey:(id)key;	// 0x33e87c8d
@end
