/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "BRXMLNode.h"
#import "AppleTV-Structs.h"


__attribute__((visibility("hidden")))
@interface BRXMLNode : XXUnknownSuperclass {
	xmlNode *_privateXmlNode;	// 4 = 0x4
}
@property(retain) id associatedObject;	// G=0x38eb6d; S=0x38eab5; converted property
@property(retain) id textContent;	// G=0x38e391; S=0x38e521; converted property
- (id)XMLString;	// 0x38c98d
- (BOOL)_insertChild:(id)child otherChild:(id)child2 insertFunction:(/*function-pointer*/ void *)function error:(id *)error;	// 0x38d565
- (BOOL)appendChild:(id)child error:(id *)error;	// 0x38d275
// converted property getter: - (id)associatedObject;	// 0x38eb6d
- (id)children;	// 0x38d0b1
- (id)copyWithZone:(NSZone *)zone;	// 0x38c39d
- (id)description;	// 0x38c56d
- (id)getAttribute:(id)attribute;	// 0x38e761
- (BOOL)insertChild:(id)child after:(id)after error:(id *)error;	// 0x38d96d
- (BOOL)insertChild:(id)child before:(id)before error:(id *)error;	// 0x38d941
- (BOOL)isEqual:(id)equal;	// 0x38c76d
- (id)name;	// 0x38da1d
- (id)nextSibling;	// 0x38dbf9
- (id)nextSiblingIgnoringWhitespace:(BOOL)whitespace;	// 0x38dd69
- (id)nodesForXPath:(id)xpath error:(id *)error;	// 0x38cba9
- (id)objectValue;	// 0x38e599
- (id)ownerDocument;	// 0x38ecd1
- (id)parent;	// 0x38df0d
- (id)previousSibling;	// 0x38e07d
- (id)previousSiblingIgnoringWhitespace:(BOOL)whitespace;	// 0x38e1ed
- (void)removeAttribute:(id)attribute;	// 0x38ea21
- (void)removeFromParent;	// 0x38d9e1
- (BOOL)replaceChild:(id)child with:(id)with error:(id *)error;	// 0x38d999
// converted property setter: - (void)setAssociatedObject:(id)object;	// 0x38eab5
- (void)setAttribute:(id)attribute withValue:(id)value;	// 0x38e935
// converted property setter: - (void)setTextContent:(id)content;	// 0x38e521
- (id)stringValue;	// 0x38e5a9
// converted property getter: - (id)textContent;	// 0x38e391
@end

@interface BRXMLNode (Private)
+ (void)load;	// 0x38ef2d
+ (id)nodeWithXmlNode:(xmlNode *)xmlNode;	// 0x38f05d
- (id)init;	// 0x38f279
- (id)initWithXmlNode:(xmlNode *)xmlNode;	// 0x38f0e1
- (void)clearNode;	// 0x38f489
- (void)dealloc;	// 0x38f2c1
- (void)lockNode:(id)node;	// 0x38f451
@end

