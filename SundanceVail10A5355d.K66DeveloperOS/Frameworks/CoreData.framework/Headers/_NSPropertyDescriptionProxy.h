/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library

@class NSPropertyDescription, NSEntityDescription;

@interface _NSPropertyDescriptionProxy : NSObject {
	id _sourceBuffer;	// 4 = 0x4
	NSPropertyDescription *_underlyingProperty;	// 8 = 0x8
	NSEntityDescription *_entityDescription;	// 12 = 0xc
	unsigned _entitysReferenceIDForProperty;	// 16 = 0x10
}
+ (BOOL)resolveInstanceMethod:(SEL)method;	// 0x3356aad9
- (id)initWithCoder:(id)coder;	// 0x3356a7cd
- (id)initWithPropertyDescription:(id)propertyDescription;	// 0x3356a7bd
- (void)_createCachesAndOptimizeState;	// 0x3356a9b9
- (unsigned)_entitysReferenceID;	// 0x3356a999
- (void)_setEntity:(id)entity;	// 0x3356a9bd
- (void)_setEntitysReferenceID:(unsigned)anId;	// 0x3356a989
- (id)_underlyingProperty;	// 0x3356a979
- (void)_versionHash:(char *)hash inStyle:(unsigned)style;	// 0x3356a9f1
- (Class)class;	// 0x3356aa65
- (id)description;	// 0x3356a8fd
- (void)encodeWithCoder:(id)coder;	// 0x3356a879
- (id)entity;	// 0x3356a9a9
- (id)forwardingTargetForSelector:(SEL)selector;	// 0x3356aaa9
- (BOOL)isEqual:(id)equal;	// 0x3356aa85
- (BOOL)isKindOfClass:(Class)aClass;	// 0x3356a9cd
- (id)methodSignatureForSelector:(SEL)selector;	// 0x3356aab9
@end

