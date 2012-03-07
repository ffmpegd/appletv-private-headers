/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import <NSObject.h> // Unknown library

@class EKObjectRelation, NSString, EKPersistentObject, NSMutableSet, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface EKObject : NSObject {
@private
	NSMutableDictionary *_dirtyProperties;	// 4 = 0x4
	NSMutableDictionary *_cachedProperties;	// 8 = 0x8
	EKPersistentObject *_persistentObject;	// 12 = 0xc
	NSString *_propertyName;	// 16 = 0x10
	EKObjectRelation *_owningRelation;	// 20 = 0x14
	NSMutableDictionary *_relations;	// 24 = 0x18
	NSMutableSet *_weakRelations;	// 28 = 0x1c
	unsigned long _flags;	// 32 = 0x20
}
@property(retain, nonatomic) NSMutableDictionary *cachedProperties;	// G=0x33232301; S=0x33232311; @synthesize=_cachedProperties
@property(retain, nonatomic) NSMutableDictionary *dirtyProperties;	// G=0x331d40f5; S=0x332322dd; @synthesize=_dirtyProperties
@property(assign, nonatomic) unsigned long flags;	// G=0x332323d1; S=0x332323e1; @synthesize=_flags
@property(assign, nonatomic) EKObjectRelation *owningRelation;	// G=0x33232369; S=0x331cb4ad; @synthesize=_owningRelation
@property(retain, nonatomic) EKPersistentObject *persistentObject;	// G=0x331c3815; S=0x331c2e5d; @synthesize=_persistentObject
@property(copy, nonatomic) NSString *propertyName;	// G=0x33232335; S=0x33232345; @synthesize=_propertyName
@property(retain, nonatomic) NSMutableDictionary *relations;	// G=0x331d6bad; S=0x33232379; @synthesize=_relations
@property(retain, nonatomic) NSMutableSet *weakRelations;	// G=0x3323239d; S=0x332323ad; @synthesize=_weakRelations
- (id)initWithPersistentObject:(id)persistentObject;	// 0x331c2e15
- (void)addWeakRelation:(id)relation;	// 0x3323224d
- (BOOL)boolPropertyForKey:(id)key withPersistentFallback:(id)persistentFallback;	// 0x331df99d
- (void)cachePropertyValue:(id)value forKey:(id)key;	// 0x331cee5d
// declared property getter: - (id)cachedProperties;	// 0x33232301
- (void)childRelationChanged:(id)changed;	// 0x331d4735
- (void)clearPropertyValueForKey:(id)key;	// 0x331d5dcd
- (id)committedValueForKey:(id)key;	// 0x331d2319
- (void)dealloc;	// 0x331d1f2d
- (void)deletePersistentObject;	// 0x33232201
- (void)didCommit;	// 0x331db6d9
// declared property getter: - (id)dirtyProperties;	// 0x331d40f5
- (id)eventStore;	// 0x331cb895
- (BOOL)existsInStore;	// 0x33232081
// declared property getter: - (unsigned long)flags;	// 0x332323d1
- (BOOL)hasChanges;	// 0x331d35bd
- (unsigned)hash;	// 0x331c9465
- (void)insertPersistentObjectIfNeeded;	// 0x331d7c35
- (int)intPropertyForKey:(id)key withPersistentFallback:(id)persistentFallback;	// 0x331c37c5
- (BOOL)isEqual:(id)equal;	// 0x331cd045
- (BOOL)isNew;	// 0x331c8785
- (BOOL)isPropertyDirty:(id)dirty;	// 0x331d6b69
- (id)lazyLoadRelationForKey:(id)key;	// 0x331d9ce9
- (id)objectID;	// 0x331c7dcd
- (id)owner;	// 0x33232061
// declared property getter: - (id)owningRelation;	// 0x33232369
// declared property getter: - (id)persistentObject;	// 0x331c3815
- (id)persistentOrDirtyPropertyForKey:(id)key;	// 0x331c2f39
- (id)propertyForKey:(id)key withPersistentFallback:(id)persistentFallback;	// 0x331c9e11
// declared property getter: - (id)propertyName;	// 0x33232335
- (id)propertyValueForKey:(id)key;	// 0x331d8c81
- (BOOL)propertyValueForKey:(id)key value:(id *)value;	// 0x331c2f89
- (BOOL)rebase;	// 0x33231fc9
- (BOOL)refresh;	// 0x331d3e15
- (id)relationForKey:(id)key;	// 0x331c9ed9
// declared property getter: - (id)relations;	// 0x331d6bad
- (void)removeWeakRelation:(id)relation;	// 0x332322b1
- (void)reset;	// 0x332320c9
- (void)rollback;	// 0x331d36d5
// declared property setter: - (void)setCachedProperties:(id)properties;	// 0x33232311
// declared property setter: - (void)setDirtyProperties:(id)properties;	// 0x332322dd
// declared property setter: - (void)setFlags:(unsigned long)flags;	// 0x332323e1
// declared property setter: - (void)setOwningRelation:(id)relation;	// 0x331cb4ad
// declared property setter: - (void)setPersistentObject:(id)object;	// 0x331c2e5d
// declared property setter: - (void)setPropertyName:(id)name;	// 0x33232345
- (void)setPropertyValue:(id)value forKey:(id)key;	// 0x331d1db5
// declared property setter: - (void)setRelations:(id)relations;	// 0x33232379
// declared property setter: - (void)setWeakRelations:(id)relations;	// 0x332323ad
- (void)updatePersistentObject;	// 0x331d8645
- (void)updatePersistentValueForKeyIfNeeded:(id)keyIfNeeded;	// 0x331d7d79
- (BOOL)validate:(id *)validate;	// 0x331d6d05
// declared property getter: - (id)weakRelations;	// 0x3323239d
@end

