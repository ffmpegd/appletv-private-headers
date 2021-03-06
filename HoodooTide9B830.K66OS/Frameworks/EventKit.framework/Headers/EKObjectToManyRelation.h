/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "EKObjectRelation.h"

@class NSSet, NSMutableSet;

__attribute__((visibility("hidden")))
@interface EKObjectToManyRelation : EKObjectRelation {
@private
	NSMutableSet *_loadedItems;	// 20 = 0x14
	NSMutableSet *_effectiveItems;	// 24 = 0x18
	NSMutableSet *_addedItems;	// 28 = 0x1c
	NSMutableSet *_removedItems;	// 32 = 0x20
}
@property(retain, nonatomic) NSMutableSet *addedItems;	// G=0x324c5655; S=0x324c5665; @synthesize=_addedItems
@property(readonly, assign, nonatomic) int count;	// G=0x32460f99; 
@property(retain, nonatomic) NSMutableSet *effectiveItems;	// G=0x324c5621; S=0x324c5631; @synthesize=_effectiveItems
@property(copy, nonatomic) NSSet *items;	// G=0x32462dad; S=0x324648b9; 
@property(readonly, assign, nonatomic) BOOL itemsWereAdded;	// G=0x324c51dd; 
@property(readonly, assign, nonatomic) BOOL itemsWereRemoved;	// G=0x324c520d; 
@property(retain, nonatomic) NSMutableSet *loadedItems;	// G=0x324c55ed; S=0x324c55fd; @synthesize=_loadedItems
@property(retain, nonatomic) NSMutableSet *removedItems;	// G=0x324c5689; S=0x324c5699; @synthesize=_removedItems
- (void)_addRelatedObject:(id)object setInverse:(BOOL)inverse dirty:(BOOL)dirty;	// 0x3246799d
- (id)_effectiveItems;	// 0x32460fc1
- (void)_forgetRelatedObject:(id)object;	// 0x324c523d
- (id)_loadedItems;	// 0x32461069
- (void)_removeRelatedObject:(id)object setInverse:(BOOL)inverse dirty:(BOOL)dirty;	// 0x32471fad
- (void)addItem:(id)item;	// 0x3246797d
// declared property getter: - (id)addedItems;	// 0x324c5655
- (id)committedValue;	// 0x32464859
// declared property getter: - (int)count;	// 0x32460f99
- (void)dealloc;	// 0x3246e615
- (id)description;	// 0x324c5509
- (void)didCommit;	// 0x3246de19
// declared property getter: - (id)effectiveItems;	// 0x324c5621
- (BOOL)isWeak;	// 0x324c51d9
// declared property getter: - (id)items;	// 0x32462dad
// declared property getter: - (BOOL)itemsWereAdded;	// 0x324c51dd
// declared property getter: - (BOOL)itemsWereRemoved;	// 0x324c520d
// declared property getter: - (id)loadedItems;	// 0x324c55ed
- (void)refresh;	// 0x324c53c5
- (void)removeItem:(id)item;	// 0x32471f8d
// declared property getter: - (id)removedItems;	// 0x324c5689
- (void)reset;	// 0x324c52a9
- (void)rollback;	// 0x32465b11
// declared property setter: - (void)setAddedItems:(id)items;	// 0x324c5665
// declared property setter: - (void)setEffectiveItems:(id)items;	// 0x324c5631
// declared property setter: - (void)setItems:(id)items;	// 0x324648b9
// declared property setter: - (void)setLoadedItems:(id)items;	// 0x324c55fd
// declared property setter: - (void)setRemovedItems:(id)items;	// 0x324c5699
- (void)updatePersistentObject;	// 0x3246a8e5
- (BOOL)validate:(id *)validate;	// 0x32468d7d
@end

