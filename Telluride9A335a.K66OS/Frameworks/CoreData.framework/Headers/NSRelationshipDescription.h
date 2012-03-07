/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "CoreData-Structs.h"
#import "NSPropertyDescription.h"

@class NSString, NSEntityDescription;

@interface NSRelationshipDescription : NSPropertyDescription {
@private
	void *_reserved5;	// 48 = 0x30
	void *_reserved6;	// 52 = 0x34
	NSEntityDescription *_destinationEntity;	// 56 = 0x38
	NSString *_lazyDestinationEntityName;	// 60 = 0x3c
	NSRelationshipDescription *_inverseRelationship;	// 64 = 0x40
	NSString *_lazyInverseRelationshipName;	// 68 = 0x44
	unsigned long _maxCount;	// 72 = 0x48
	unsigned long _minCount;	// 76 = 0x4c
	unsigned _deleteRule;	// 80 = 0x50
}
@property(assign) unsigned deleteRule;	// G=0x33164e65; S=0x33164e89; converted property
@property(retain) NSEntityDescription *destinationEntity;	// G=0x330ebe1d; S=0x33164f01; converted property
@property(retain) NSRelationshipDescription *inverseRelationship;	// G=0x330eb095; S=0x330eb0e9; converted property
@property(assign) unsigned maxCount;	// G=0x330ebb11; S=0x33164eb1; converted property
@property(assign) unsigned minCount;	// G=0x33164e75; S=0x33164ed9; converted property
@property(assign, getter=isOrdered) BOOL ordered;	// G=0x330eba89; S=0x33164f4d; converted property
+ (void)initialize;	// 0x330ead4d
- (id)init;	// 0x33164e9d
- (id)initWithCoder:(id)coder;	// 0x330ead69
- (void)_createCachesAndOptimizeState;	// 0x330eaff5
- (id)_initWithName:(id)name;	// 0x331655dd
- (BOOL)_isRelationship;	// 0x33164e99
- (BOOL)_isToManyRelationship;	// 0x33164f5d
- (BOOL)_nonPredicateValidateValue:(id *)value forKey:(id)key inObject:(id)object error:(id *)error;	// 0x3316572d
- (unsigned)_propertyType;	// 0x330eba6d
- (void)_setLazyDestinationEntityName:(id)name;	// 0x33164f75
- (void)_updateInverse:(id)inverse;	// 0x33164fbd
- (BOOL)_validateValuesAreOfDestinationEntity:(id)destinationEntity source:(id)source;	// 0x33165639
- (void)_versionHash:(char *)hash;	// 0x330ec629
- (void)_versionHash:(char *)hash proxyContext:(id)context;	// 0x330ec63d
- (void)_writeIntoData:(id)data propertiesDict:(id)dict uniquedPropertyNames:(id)names uniquedStrings:(id)strings uniquedData:(id)data5 entitiesSlots:(const id)slots fetchRequests:(id)requests;	// 0x33166185
- (id)copyWithZone:(NSZone *)zone;	// 0x33165319
- (void)dealloc;	// 0x33164fe9
// converted property getter: - (unsigned)deleteRule;	// 0x33164e65
- (id)description;	// 0x331650ad
// converted property getter: - (id)destinationEntity;	// 0x330ebe1d
- (void)encodeWithCoder:(id)coder;	// 0x33165419
// converted property getter: - (id)inverseRelationship;	// 0x330eb095
- (BOOL)isEqual:(id)equal;	// 0x331651ad
- (BOOL)isIndexed;	// 0x33164e85
// converted property getter: - (BOOL)isOrdered;	// 0x330eba89
- (BOOL)isToMany;	// 0x330eba71
// converted property getter: - (unsigned)maxCount;	// 0x330ebb11
// converted property getter: - (unsigned)minCount;	// 0x33164e75
// converted property setter: - (void)setDeleteRule:(unsigned)rule;	// 0x33164e89
// converted property setter: - (void)setDestinationEntity:(id)entity;	// 0x33164f01
// converted property setter: - (void)setInverseRelationship:(id)relationship;	// 0x330eb0e9
// converted property setter: - (void)setMaxCount:(unsigned)count;	// 0x33164eb1
// converted property setter: - (void)setMinCount:(unsigned)count;	// 0x33164ed9
// converted property setter: - (void)setOrdered:(BOOL)ordered;	// 0x33164f4d
- (id)versionHash;	// 0x33165081
@end

