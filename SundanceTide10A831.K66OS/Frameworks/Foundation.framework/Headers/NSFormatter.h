/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library
#import "NSCopying.h"
#import "NSCoding.h"
#import "Foundation-Structs.h"


@interface NSFormatter : NSObject <NSCopying, NSCoding> {
}
- (id)initWithCoder:(id)coder;	// 0x325c50dd
- (id)attributedStringForObjectValue:(id)objectValue withDefaultAttributes:(id)defaultAttributes;	// 0x325c4f55
- (id)copyWithZone:(NSZone *)zone;	// 0x325c50c9
- (id)editingStringForObjectValue:(id)objectValue;	// 0x325c4f59
- (void)encodeWithCoder:(id)coder;	// 0x325c50d9
- (BOOL)getObjectValue:(out id *)value forString:(id)string errorDescription:(out id *)description;	// 0x325c4f69
- (BOOL)getObjectValue:(out id *)value forString:(id)string range:(inout NSRange *)range error:(out id *)error;	// 0x325c4f8d
- (BOOL)isPartialStringValid:(id)valid newEditingString:(id *)string errorDescription:(id *)description;	// 0x325c506d
- (BOOL)isPartialStringValid:(id *)valid proposedSelectedRange:(NSRange *)range originalString:(id)string originalSelectedRange:(NSRange)range4 errorDescription:(id *)description;	// 0x325c5071
- (id)stringForObjectValue:(id)objectValue;	// 0x325c4f31
@end
