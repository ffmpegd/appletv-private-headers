/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "EventKit-Structs.h"
#import <NSObject.h> // Unknown library

@class NSMutableSet, EKEventStore, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface EKPersistentObject : NSObject {
@private
	EKEventStore *_eventStore;	// 4 = 0x4
	id _objectID;	// 8 = 0x8
	CFDictionaryRef _loadedProperties;	// 12 = 0xc
	NSMutableDictionary *_referencers;	// 16 = 0x10
	NSMutableSet *_dirtyProperties;	// 20 = 0x14
	unsigned _flags;	// 24 = 0x18
	NSMutableDictionary *_committedProperties;	// 28 = 0x1c
}
@property(retain, nonatomic) NSMutableDictionary *committedProperties;	// G=0x30c4fd0d; S=0x30c4fd1d; @synthesize=_committedProperties
@property(readonly, retain) NSMutableSet *dirtyProperties;	// G=0x30c4e73d; converted property
@property(readonly, assign, nonatomic) EKEventStore *eventStore;	// G=0x30bff195; 
@property(readonly, retain) id objectID;	// G=0x30bf6b79; converted property
+ (id)defaultPropertiesToLoad;	// 0x30bf729d
+ (id)relations;	// 0x30c4e5e1
- (id)init;	// 0x30c08e05
- (id)initCommon;	// 0x30bf6821
- (void)_addDirtyProperty:(id)property;	// 0x30c05945
- (void)_addObjectCore:(id)core toValues:(id)values relation:(id)relation;	// 0x30c0cd61
- (void)_addReference:(id)reference forKey:(id)key;	// 0x30c4ea45
- (BOOL)_areDefaultPropertiesLoaded;	// 0x30bf7275
- (void)_clearReferences;	// 0x30c4eb45
- (void)_clearWeakRelations;	// 0x30c4ecb9
- (BOOL)_isPendingDelete;	// 0x30c0a5c9
- (BOOL)_isPendingInsert;	// 0x30c0a3e5
- (BOOL)_isPendingUpdate;	// 0x30c0a5f1
- (id)_loadChildIdentifiersForKey:(id)key;	// 0x30c032a9
- (void)_loadDefaultPropertiesIfNeeded;	// 0x30bf7071
- (BOOL)_loadRelationForKey:(id)key value:(id *)value;	// 0x30bfecd5
- (id)_loadStringValueForKey:(id)key;	// 0x30bf7b11
- (id)_loadedPropertyKeys;	// 0x30c4e71d
- (void)_primitiveSetValue:(id)value forKey:(id)key daemonSetter:(id)setter;	// 0x30c058dd
- (id)_primitiveValueForKey:(id)key loader:(id)loader;	// 0x30bf6f8d
- (id)_propertyForKey:(id)key;	// 0x30bf7441
- (id)_relationForKey:(id)key;	// 0x30bfe809
- (void)_releaseLoadedProperties;	// 0x30c4e949
- (void)_removeObjectCore:(id)core fromValues:(id)values relation:(id)relation;	// 0x30c144b1
- (void)_removeReference:(id)reference forKey:(id)key;	// 0x30c4eb01
- (void)_setDefaultPropertiesLoaded:(BOOL)loaded;	// 0x30bf7409
- (void)_setEventStore:(id)store;	// 0x30bf6c45
- (void)_setObjectID:(id)anId;	// 0x30bf684d
- (void)_setPendingDelete:(BOOL)aDelete;	// 0x30c11b59
- (void)_setPendingInsert:(BOOL)insert;	// 0x30c0a619
- (void)_setPendingUpdate:(BOOL)update;	// 0x30c11c9d
- (void)_setProperty:(id)property forKey:(id)key;	// 0x30bf7555
- (BOOL)_shouldRetainPropertyForKey:(id)key;	// 0x30c4e909
- (void)changed;	// 0x30c059bd
// declared property getter: - (id)committedProperties;	// 0x30c4fd0d
- (id)committedValueForKey:(id)key;	// 0x30c06409
- (void)dealloc;	// 0x30c09101
// converted property getter: - (id)dirtyProperties;	// 0x30c4e73d
- (id)dump;	// 0x30c4fb6d
- (int)entityType;	// 0x30c4e631
// declared property getter: - (id)eventStore;	// 0x30bff195
- (BOOL)existsInStore;	// 0x30c080e9
- (unsigned)hash;	// 0x30bfd495
- (BOOL)isDirty;	// 0x30c4e65d
- (BOOL)isEqual:(id)equal;	// 0x30c010f1
- (BOOL)isNew;	// 0x30bfc791
- (BOOL)isPropertyDirty:(id)dirty;	// 0x30c0e959
- (BOOL)isPropertyLoaded:(id)loaded;	// 0x30bff0a9
// converted property getter: - (id)objectID;	// 0x30bf6b79
- (void)primitiveAddRelatedObject:(id)object forKey:(id)key;	// 0x30c0cb9d
- (BOOL)primitiveBoolValueForKey:(id)key;	// 0x30bf6e9d
- (id)primitiveDataValueForKey:(id)key;	// 0x30c4f8b1
- (id)primitiveDateValueForKey:(id)key;	// 0x30bfcea5
- (double)primitiveDoubleValueForKey:(id)key;	// 0x30c4f02d
- (int)primitiveIntValueForKey:(id)key;	// 0x30bf77e5
- (id)primitiveNumberValueForKey:(id)key;	// 0x30c089e5
- (id)primitiveRelationValueForKey:(id)key;	// 0x30bfe48d
- (void)primitiveRemoveRelatedObject:(id)object forKey:(id)key;	// 0x30c1437d
- (void)primitiveSetBoolValue:(BOOL)value forKey:(id)key;	// 0x30c0d095
- (void)primitiveSetDataValue:(id)value forKey:(id)key;	// 0x30c4fab9
- (void)primitiveSetDateValue:(id)value forKey:(id)key;	// 0x30c0ced5
- (void)primitiveSetDoubleValue:(double)value forKey:(id)key;	// 0x30c13b8d
- (void)primitiveSetIntValue:(int)value forKey:(id)key;	// 0x30c09495
- (void)primitiveSetNumberValue:(id)value forKey:(id)key;	// 0x30c0dec9
- (void)primitiveSetRelationValue:(id)value forKey:(id)key;	// 0x30c0c069
- (void)primitiveSetStringValue:(id)value forKey:(id)key;	// 0x30c05829
- (void)primitiveSetURLValue:(id)value forKey:(id)key;	// 0x30c4f7fd
- (void)primitiveSetUnboundedStringValue:(id)value forKey:(id)key;	// 0x30c4f5e9
- (id)primitiveStringValueForKey:(id)key;	// 0x30bf7a05
- (id)primitiveURLValueForKey:(id)key;	// 0x30c4f69d
- (id)primitiveUnboundedStringValueForKey:(id)key;	// 0x30c050bd
- (void)primitiveValueChangedForKey:(id)key;	// 0x30c0945d
- (BOOL)pushDirtyProperties:(id *)properties;	// 0x30c0f345
- (BOOL)refresh;	// 0x30c10b59
- (BOOL)refreshExcludingProperties:(id)properties;	// 0x30c08255
- (void)reset;	// 0x30c4e809
- (void)rollback;	// 0x30c07889
- (void)saved;	// 0x30c0faf1
// declared property setter: - (void)setCommittedProperties:(id)properties;	// 0x30c4fd1d
- (void)unloadPropertyForKey:(id)key;	// 0x30c14545
- (BOOL)validate:(id *)validate;	// 0x30c0f151
@end
