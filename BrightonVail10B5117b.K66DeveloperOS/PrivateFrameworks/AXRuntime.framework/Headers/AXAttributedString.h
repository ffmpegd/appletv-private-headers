/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AXRuntime.framework/AXRuntime
 */

#import "AXRuntime-Structs.h"
#import <NSString.h> // Unknown library


@interface AXAttributedString : NSString {
	CFAttributedStringRef _string;	// 4 = 0x4
}
+ (id)axAttributedStringWithString:(id)string;	// 0x3352e0b9
+ (id)string;	// 0x3352e105
- (id)initWithCFAttributedString:(CFAttributedStringRef)cfattributedString;	// 0x3352e1a9
- (id)initWithString:(id)string;	// 0x3352e121
- (void)appendAXAttributedString:(id)string;	// 0x3352e69d
- (void)appendString:(id)string;	// 0x3352e639
- (id)attributedSubstringFromRange:(NSRange)range;	// 0x3352e851
- (id)attributesAtIndex:(int)index effectiveRange:(NSRange *)range;	// 0x3352e6d9
- (id)axAttributedStringDescription;	// 0x3352ed75
- (CFAttributedStringRef)cfAttributedString;	// 0x3352e3e9
- (unsigned short)characterAtIndex:(unsigned)index;	// 0x3352e389
- (id)coalescedFontAttributes;	// 0x3352e941
- (void)convertAttachmentsWithBlock:(id)block;	// 0x3352e2b1
- (id)copyWithZone:(NSZone *)zone;	// 0x3352e21d
- (void)dealloc;	// 0x3352e269
- (id)description;	// 0x3352ed9d
- (BOOL)hasAttribute:(id)attribute;	// 0x3352ebb9
- (BOOL)isAXAttributedString;	// 0x3352e721
- (unsigned)length;	// 0x3352e375
- (id)lowercaseString;	// 0x3352e739
- (void)replaceString:(CFStringRef)string;	// 0x3352e3b5
- (void)setAttribute:(id)attribute forKey:(id)key;	// 0x3352e4cd
- (void)setAttribute:(id)attribute forKey:(id)key withRange:(NSRange)range;	// 0x3352e50d
- (void)setAttributes:(id)attributes;	// 0x3352e3f9
- (void)setAttributes:(id)attributes withRange:(NSRange)range;	// 0x3352e5cd
- (id)string;	// 0x3352e725
- (id)substringFromIndex:(unsigned)index;	// 0x3352ec81
- (id)uppercaseString;	// 0x3352e7c5
@end
