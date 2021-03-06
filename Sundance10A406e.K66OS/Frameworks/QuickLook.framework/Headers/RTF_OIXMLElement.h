/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import "QuickLook-Structs.h"
#import "RTF_OIXMLNode.h"


__attribute__((visibility("hidden")))
@interface RTF_OIXMLElement : RTF_OIXMLNode {
	id _attributes;	// 16 = 0x10
	id _children;	// 20 = 0x14
	BOOL _hasMultipleAttributes;	// 24 = 0x18
	BOOL _hasMultipleChildren;	// 25 = 0x19
}
@property(retain) id objectValue;	// G=0x30e07ef9; S=0x30e07e35; converted property
+ (void)_initEmptyHTMLNames;	// 0x30e07aa5
+ (BOOL)isEmptyHTMLElement:(id)element;	// 0x30e07b89
- (id)initWithName:(id)name stringValue:(id)value;	// 0x30e078f1
- (void)_appendXMLStringToString:(CFStringRef)string;	// 0x30e080d9
- (void)addAttribute:(id)attribute;	// 0x30e07bd9
- (void)addChild:(id)child;	// 0x30e07ca1
- (int)attributeCount;	// 0x30e0809d
- (int)childrenCount;	// 0x30e08061
- (id)closingTagString;	// 0x30e084c5
- (id)contentString;	// 0x30e08401
- (id)copyWithZone:(NSZone *)zone;	// 0x30e079b5
- (void)dealloc;	// 0x30e07951
- (void)insertChild:(id)child atIndex:(unsigned)index;	// 0x30e07d69
// converted property getter: - (id)objectValue;	// 0x30e07ef9
- (id)openingTagString;	// 0x30e082d5
// converted property setter: - (void)setObjectValue:(id)value;	// 0x30e07e35
- (id)stringValue;	// 0x30e07f09
@end

