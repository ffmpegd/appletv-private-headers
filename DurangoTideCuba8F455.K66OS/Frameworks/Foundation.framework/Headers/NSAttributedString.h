/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSCoding.h"
#import "NSCopying.h"
#import "NSMutableCopying.h"
#import <NSObject.h> // Unknown library
#import "Foundation-Structs.h"


@interface NSAttributedString : NSObject <NSCopying, NSMutableCopying, NSCoding> {
}
+ (void)_setAttributedDictionaryClass:(Class)aClass;	// 0x310c019d
+ (id)allocWithZone:(NSZone *)zone;	// 0x310c1845
- (id)initWithCoder:(id)coder;	// 0x310c12b5
- (unsigned long)_cfTypeID;	// 0x310d2995
- (id)_createAttributedSubstringWithRange:(NSRange)range;	// 0x310d27b9
- (id)attribute:(id)attribute atIndex:(unsigned)index effectiveRange:(NSRange *)range;	// 0x310c0bad
- (id)attribute:(id)attribute atIndex:(unsigned)index longestEffectiveRange:(NSRange *)range inRange:(NSRange)range4;	// 0x310c3fb5
- (id)attributedStringByWeaklyAddingAttributes:(id)attributes;	// 0x310c2d29
- (id)attributedSubstringFromRange:(NSRange)range;	// 0x310c2bad
- (id)attributedSubstringFromRange:(NSRange)range replacingCharactersInRanges:(const NSRange *)ranges numberOfRanges:(int)ranges3 withString:(id)string;	// 0x310c3dc1
- (id)attributesAtIndex:(unsigned)index effectiveRange:(NSRange *)range;	// 0x310c03c5
- (id)attributesAtIndex:(unsigned)index longestEffectiveRange:(NSRange *)range inRange:(NSRange)range3;	// 0x310c3edd
- (Class)classForCoder;	// 0x310c0999
- (id)copyWithZone:(NSZone *)zone;	// 0x310c09b9
- (id)description;	// 0x310c2db5
- (void)encodeWithCoder:(id)coder;	// 0x310c2eb9
- (void)enumerateAttribute:(id)attribute inRange:(NSRange)range options:(unsigned)options usingBlock:(id)block;	// 0x310c41cd
- (void)enumerateAttributesInRange:(NSRange)range options:(unsigned)options usingBlock:(id)block;	// 0x310c40a1
- (unsigned)hash;	// 0x310c0b65
- (BOOL)isEqual:(id)equal;	// 0x310c0b15
- (BOOL)isEqualToAttributedString:(id)attributedString;	// 0x310c0a19
- (unsigned)length;	// 0x310c0b89
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x310c09e9
- (id)string;	// 0x310c03e9
@end

