/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import <NSObject.h> // Unknown library
#import "EventKit-Structs.h"

@class EKEventStore, NSMutableDictionary, NSMutableSet;

__attribute__((visibility("hidden")))
@interface EKPersistentObject : NSObject {
	EKEventStore *_eventStore;	// 4 = 0x4
	id _objectID;	// 8 = 0x8
	CFDictionaryRef _loadedProperties;	// 12 = 0xc
	NSMutableDictionary *_referencers;	// 16 = 0x10
	NSMutableSet *_dirtyProperties;	// 20 = 0x14
	unsigned _flags;	// 24 = 0x18
	NSMutableDictionary *_committedProperties;	// 28 = 0x1c
}
@property(retain, nonatomic) NSMutableDictionary *committedProperties;	// G=0x36805e01; S=0x36805e11; @synthesize=_committedProperties
@property(readonly, retain) NSMutableSet *dirtyProperties;	// G=0x36804999; converted property
@property(readonly, assign, nonatomic) EKEventStore *eventStore;	// G=0x367a16f1; 
@property(readonly, retain) id objectID;	// G=0x3679fcc5; converted property
+ (id)defaultPropertiesToLoad;	// 0x367b7d05
+ (id)relations;	// 0x3680451d
- (id)init;	// 0x367b3de5
- (id)initCommon;	// 0x3679f969
- (void)_addDirtyProperty:(id)property;	// 0x367b0eed
- (void)_addObjectCore:(id)core toValues:(id)values relation:(id)relation;	// 0x367b7bb9
- (void)_addReference:(id)reference forKey:(id)key;	// 0x367a0789
- (BOOL)_areDefaultPropertiesLoaded;	// 0x367a0e8d
- (void)_clearReferences;	// 0x367b23c5
- (void)_clearWeakRelations;	// 0x367b255d
- (void)_fastpathSetProperty:(id)property forKey:(id)key isRelation:(BOOL)relation;	// 0x367a0241
- (BOOL)_isPendingDelete;	// 0x367b6121
- (BOOL)_isPendingInsert;	// 0x367b5f41
- (BOOL)_isPendingUpdate;	// 0x367b6145
- (id)_loadChildIdentifiersForKey:(id)key;	// 0x367af481
- (void)_loadDefaultPropertiesIfNeeded;	// 0x367a0c89
- (BOOL)_loadRelationForKey:(id)key value:(id *)value;	// 0x367b2005
- (id)_loadStringValueForKey:(id)key;	// 0x367aecc9
- (id)_loadedPropertyKeys;	// 0x367b26b9
- (void)_primitiveSetValue:(id)value forKey:(id)key daemonSetter:(id)setter;	// 0x367b0e85
- (id)_primitiveValueForKey:(id)key loader:(id)loader;	// 0x367a0ba5
- (id)_propertyForKey:(id)key;	// 0x367a0eb1
- (id)_relationForKey:(id)key;	// 0x367a052d
- (void)_releaseLoadedProperties;	// 0x367b26d9
- (void)_removeObjectCore:(id)core fromValues:(id)values relation:(id)relation;	// 0x36804bf1
- (void)_removeReference:(id)reference forKey:(id)key;	// 0x367bb2bd
- (void)_setDefaultPropertiesLoaded:(BOOL)loaded;	// 0x367a0841
- (void)_setEventStore:(id)store;	// 0x3679fdd9
- (void)_setObjectID:(id)anId;	// 0x3679f995
- (void)_setPendingDelete:(BOOL)aDelete;	// 0x36804bb9
- (void)_setPendingInsert:(BOOL)insert;	// 0x367b6169
- (void)_setPendingUpdate:(BOOL)update;	// 0x36804b81
- (void)_setProperty:(id)property forKey:(id)key;	// 0x367a1e09
- (BOOL)_shouldRetainPropertyForKey:(id)key;	// 0x367a04f5
- (void)_takeValuesForDefaultProperties:(id)defaultProperties;	// 0x3679fdfd
- (void)changed;	// 0x367b0f6d
// declared property getter: - (id)committedProperties;	// 0x36805e01
- (id)committedValueForKey:(id)key;	// 0x367b184d
- (void)dealloc;	// 0x367b2319
// converted property getter: - (id)dirtyProperties;	// 0x36804999
- (id)dump;	// 0x36805c51
- (int)entityType;	// 0x3680456d
// declared property getter: - (id)eventStore;	// 0x367a16f1
- (BOOL)existsInStore;	// 0x36804599
- (BOOL)isDirty;	// 0x368046f1
- (BOOL)isEqual:(id)equal;	// 0x367a2af1
- (BOOL)isNew;	// 0x367a1b15
- (BOOL)isPropertyDirty:(id)dirty;	// 0x367b94a1
- (BOOL)isPropertyLoaded:(id)loaded;	// 0x367a1d35
// converted property getter: - (id)objectID;	// 0x3679fcc5
- (void)primitiveAddRelatedObject:(id)object forKey:(id)key;	// 0x367b79e1
- (BOOL)primitiveBoolValueForKey:(id)key;	// 0x367a6ed1
- (id)primitiveDataValueForKey:(id)key;	// 0x36805959
- (id)primitiveDateValueForKey:(id)key;	// 0x367aa1b9
- (double)primitiveDoubleValueForKey:(id)key;	// 0x36805041
- (int)primitiveIntValueForKey:(id)key;	// 0x367a0a99
- (id)primitiveNumberValueForKey:(id)key;	// 0x367b3af5
- (id)primitiveRelationValueForKey:(id)key;	// 0x367a12bd
- (void)primitiveRemoveRelatedObject:(id)object forKey:(id)key;	// 0x36804c85
- (void)primitiveSetBoolValue:(BOOL)value forKey:(id)key;	// 0x367b7629
- (void)primitiveSetDataValue:(id)value forKey:(id)key;	// 0x36805b8d
- (void)primitiveSetDateValue:(id)value forKey:(id)key;	// 0x367b8305
- (void)primitiveSetDoubleValue:(double)value forKey:(id)key;	// 0x368052b9
- (void)primitiveSetIntValue:(int)value forKey:(id)key;	// 0x367b457d
- (void)primitiveSetNumberValue:(id)value forKey:(id)key;	// 0x367b8951
- (void)primitiveSetRelationValue:(id)value forKey:(id)key;	// 0x367b6cc9
- (void)primitiveSetStringValue:(id)value forKey:(id)key;	// 0x367b0dc1
- (void)primitiveSetURLValue:(id)value forKey:(id)key;	// 0x36805895
- (void)primitiveSetUnboundedStringValue:(id)value forKey:(id)key;	// 0x36805779
- (id)primitiveStringValueForKey:(id)key;	// 0x367a19f5
- (id)primitiveURLValueForKey:(id)key;	// 0x367afdbd
- (id)primitiveUnboundedStringValueForKey:(id)key;	// 0x367b03c9
- (void)primitiveValueChangedForKey:(id)key;	// 0x367b4545
- (BOOL)pushDirtyProperties:(id *)properties;	// 0x367b9e0d
- (BOOL)refresh;	// 0x367bae8d
- (BOOL)refreshExcludingProperties:(id)properties;	// 0x368047c1
- (void)reset;	// 0x36804a75
- (void)rollback;	// 0x367b29f1
- (void)saved;	// 0x367ba599
// declared property setter: - (void)setCommittedProperties:(id)properties;	// 0x36805e11
- (void)takeValues:(id)values forProperties:(id)properties;	// 0x3679fe5d
- (void)unloadPropertyForKey:(id)key;	// 0x367bb055
- (BOOL)validate:(id *)validate;	// 0x367b9c81
@end

