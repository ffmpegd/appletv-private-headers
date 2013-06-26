/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSStoreMapNode.h"
#import "NSCoding.h"


@interface NSDictionaryMapNode : NSStoreMapNode <NSCoding> {
	id *_attributes;	// 24 = 0x18
	id _attributesAsEncoded;	// 28 = 0x1c
}
+ (void)initialize;	// 0x30f29d4d
- (id)initWithCoder:(id)coder;	// 0x30f29da9
- (id)initWithValues:(id *)values objectID:(id)anId;	// 0x30f29d69
- (void)_doAttributeDecoding;	// 0x30f29e45
- (const id *)attributeValues;	// 0x30f2a2a5
- (void)dealloc;	// 0x30f2a1cd
- (void)encodeWithCoder:(id)coder;	// 0x30f2a06d
- (id)valueForKey:(id)key;	// 0x30f2a2dd
@end
