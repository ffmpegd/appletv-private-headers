/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OIXMLNode.h"
#import "OfficeImport-Structs.h"


__attribute__((visibility("hidden")))
@interface OIXMLElement : OIXMLNode {
@private
	id _attributes;	// 16 = 0x10
	id _children;	// 20 = 0x14
	BOOL _hasMultipleAttributes;	// 24 = 0x18
	BOOL _hasMultipleChildren;	// 25 = 0x19
}
@property(retain) id objectValue;	// G=0x34e4d321; S=0x34b81675; converted property
+ (void)_initEmptyHTMLNames;	// 0x34c4404d
+ (BOOL)isEmptyHTMLElement:(id)element;	// 0x34b869c1
- (id)init;	// 0x34e4d0f1
- (id)initWithName:(id)name stringValue:(id)value;	// 0x34b81609
- (void)_appendXMLStringToString:(CFStringRef)string level:(int)level;	// 0x34b862e9
- (void)addAttribute:(id)attribute;	// 0x34b7f43d
- (void)addChild:(id)child;	// 0x34b7f6b1
- (int)attributeCount;	// 0x34b86521
- (int)childrenCount;	// 0x34b7ffc1
- (id)closingTagString;	// 0x34c09eb9
- (id)contentString;	// 0x34e4d121
- (id)copyWithZone:(NSZone *)zone;	// 0x34e4d331
- (void)dealloc;	// 0x34c0b299
- (void)insertChild:(id)child atIndex:(unsigned)index;	// 0x34c4a775
// converted property getter: - (id)objectValue;	// 0x34e4d321
- (id)openingTagString;	// 0x34c43f21
// converted property setter: - (void)setObjectValue:(id)value;	// 0x34b81675
- (id)stringValue;	// 0x34e4d1e5
@end

