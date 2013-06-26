/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import "QuickLook-Structs.h"
#import "NSCopying.h"
#import </libobjc.A.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface RTF_OIXMLNode : NSObject <NSCopying> {
	unsigned _kind;	// 4 = 0x4
	NSString *_name;	// 8 = 0x8
	id _value;	// 12 = 0xc
}
@property(readonly, assign) unsigned kind;	// G=0x2f2f3ee1; converted property
@property(retain) NSString *name;	// G=0x2f2f3f35; S=0x2f2f3ef1; converted property
@property(retain) id objectValue;	// G=0x2f2f4019; S=0x2f2f3fd5; converted property
@property(retain) id stringValue;	// G=0x2f2f3fb1; S=0x2f2f3f6d; converted property
+ (void)_escapeCharacters:(const unsigned short *)characters amount:(unsigned)amount escapeWhiteSpaces:(BOOL)spaces inString:(id)string appendingToString:(CFStringRef)string5;	// 0x2f2f40bd
+ (void)_escapeHTMLAttributeCharacters:(id)characters withQuote:(unsigned short)quote appendingToString:(CFStringRef)string;	// 0x2f2f4039
+ (id)attributeWithName:(id)name stringValue:(id)value;	// 0x2f2f3df5
+ (id)elementWithName:(id)name;	// 0x2f2f3e49
+ (id)elementWithName:(id)name stringValue:(id)value;	// 0x2f2f3e95
+ (id)textWithStringValue:(id)stringValue;	// 0x2f2f3d95
- (id)initWithKind:(unsigned)kind;	// 0x2f2f3c1d
- (id)initWithKind:(unsigned)kind name:(id)name stringValue:(id)value;	// 0x2f2f3c2d
- (id)XMLString;	// 0x2f2f43d1
- (void)_appendXMLStringToString:(CFStringRef)string;	// 0x2f2f4435
- (id)closingTagString;	// 0x2f2f4429
- (id)contentString;	// 0x2f2f4419
- (id)copyWithZone:(NSZone *)zone;	// 0x2f2f3c9d
- (void)dealloc;	// 0x2f2f3d31
- (id)description;	// 0x2f2f4029
// converted property getter: - (unsigned)kind;	// 0x2f2f3ee1
// converted property getter: - (id)name;	// 0x2f2f3f35
// converted property getter: - (id)objectValue;	// 0x2f2f4019
- (id)openingTagString;	// 0x2f2f440d
// converted property setter: - (void)setName:(id)name;	// 0x2f2f3ef1
// converted property setter: - (void)setObjectValue:(id)value;	// 0x2f2f3fd5
// converted property setter: - (void)setStringValue:(id)value;	// 0x2f2f3f6d
// converted property getter: - (id)stringValue;	// 0x2f2f3fb1
@end
