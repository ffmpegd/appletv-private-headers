/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "EKObjectRelation.h"

@class EKObject;

__attribute__((visibility("hidden")))
@interface EKObjectToOneRelation : EKObjectRelation {
@private
	EKObject *_relatedObject;	// 20 = 0x14
	BOOL _weak;	// 24 = 0x18
}
@property(retain) EKObject *relatedObject;	// G=0x3275133d; S=0x3275b52d; converted property
@property(readonly, assign, getter=isWeak) BOOL weak;	// G=0x3275f649; converted property
- (id)initWithObject:(id)object relationName:(id)name inverseRelationName:(id)name3 weak:(BOOL)weak;	// 0x3275126d
- (void)_addRelatedObject:(id)object setInverse:(BOOL)inverse dirty:(BOOL)dirty;	// 0x3275caf1
- (void)_clear;	// 0x3276337d
- (void)_removeRelatedObject:(id)object setInverse:(BOOL)inverse dirty:(BOOL)dirty;	// 0x32766c29
- (void)_setRelatedObject:(id)object setInverse:(BOOL)inverse dirty:(BOOL)dirty;	// 0x3275b54d
- (void)_unload;	// 0x3275a9fd
- (id)committedValue;	// 0x327baf11
- (void)dealloc;	// 0x327633ed
- (id)description;	// 0x327bb019
- (void)didCommit;	// 0x327629c1
// converted property getter: - (BOOL)isWeak;	// 0x3275f649
- (void)refresh;	// 0x32763889
// converted property getter: - (id)relatedObject;	// 0x3275133d
- (void)reset;	// 0x327baf89
- (void)rollback;	// 0x3275a98d
// converted property setter: - (void)setRelatedObject:(id)object;	// 0x3275b52d
- (void)updatePersistentObject;	// 0x3275ee1d
- (BOOL)validate:(id *)validate;	// 0x3275dd1d
@end

