/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import <NSObject.h> // Unknown library

@class EKObject, NSString;

__attribute__((visibility("hidden")))
@interface EKObjectRelation : NSObject {
@private
	EKObject *_owner;	// 4 = 0x4
	NSString *_relationName;	// 8 = 0x8
	BOOL _dirty;	// 12 = 0xc
	BOOL _loaded;	// 13 = 0xd
	NSString *_inverseName;	// 16 = 0x10
}
@property(readonly, assign, getter=isDirty) BOOL dirty;	// G=0x31380029; converted property
@property(readonly, assign, nonatomic) NSString *inverseName;	// G=0x31389739; @synthesize=_inverseName
@property(readonly, assign, nonatomic) EKObject *owner;	// G=0x3138aae1; @synthesize=_owner
@property(readonly, assign, nonatomic) NSString *relationName;	// G=0x3138aa41; @synthesize=_relationName
- (id)initWithOwner:(id)owner relationName:(id)name inverseRelationName:(id)name3;	// 0x3137f2b5
- (void)_addRelatedObject:(id)object setInverse:(BOOL)inverse dirty:(BOOL)dirty;	// 0x313e8f09
- (void)_removeRelatedObject:(id)object setInverse:(BOOL)inverse dirty:(BOOL)dirty;	// 0x313e8f0d
- (id)committedValue;	// 0x313e8ee1
- (void)dealloc;	// 0x3139138d
- (void)didCommit;	// 0x313909ad
// declared property getter: - (id)inverseName;	// 0x31389739
// converted property getter: - (BOOL)isDirty;	// 0x31380029
- (BOOL)isWeak;	// 0x313e8e81
// declared property getter: - (id)owner;	// 0x3138aae1
- (void)refresh;	// 0x313e8ed9
- (void)relatedObjectDidChange;	// 0x3138ab15
// declared property getter: - (id)relationName;	// 0x3138aa41
- (void)reset;	// 0x313e8eb9
- (void)rollback;	// 0x31388a75
- (void)updatePersistentObject;	// 0x313e8eb5
- (BOOL)validate:(id *)validate;	// 0x313e8edd
@end

