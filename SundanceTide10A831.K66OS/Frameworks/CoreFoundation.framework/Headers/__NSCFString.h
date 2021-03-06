/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "__NSCFType.h"
#import "CoreFoundation-Structs.h"


__attribute__((visibility("hidden")))
@interface __NSCFString : __NSCFType {
}
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x345cd635
- (const char *)UTF8String;	// 0x3454fc39
- (const char *)_fastCStringContents:(BOOL)contents;	// 0x345cd63d
- (const unsigned short *)_fastCharacterContents;	// 0x345cd639
- (BOOL)_isCString;	// 0x345890cd
- (BOOL)_isDeallocating;	// 0x345cd5e1
- (id)_newSubstringWithRange:(NSRange)range zone:(NSZone *)zone;	// 0x34586449
- (BOOL)_tryRetain;	// 0x345cd5d1
- (void)appendCharacters:(const unsigned short *)characters length:(unsigned)length;	// 0x345cd809
- (void)appendFormat:(id)format;	// 0x34593425
- (void)appendString:(id)string;	// 0x34557525
- (const char *)cString;	// 0x345cd669
- (unsigned)cStringLength;	// 0x3454fa4d
- (const char *)cStringUsingEncoding:(unsigned)encoding;	// 0x34575e59
- (unsigned short)characterAtIndex:(unsigned)index;	// 0x3454e085
- (Class)classForCoder;	// 0x34568fe5
- (id)copyWithZone:(NSZone *)zone;	// 0x34557511
- (void)deleteCharactersInRange:(NSRange)range;	// 0x3457e495
- (unsigned)fastestEncoding;	// 0x3454f815
- (void)finalize;	// 0x345cd5f5
- (BOOL)getCString:(char *)string maxLength:(unsigned)length encoding:(unsigned)encoding;	// 0x34545711
- (void)getCharacters:(unsigned short *)characters range:(NSRange)range;	// 0x3454891d
- (void)getLineStart:(unsigned *)start end:(unsigned *)end contentsEnd:(unsigned *)end3 forRange:(NSRange)range;	// 0x345a25e1
- (BOOL)hasPrefix:(id)prefix;	// 0x34559f31
- (BOOL)hasSuffix:(id)suffix;	// 0x345934e1
- (unsigned)hash;	// 0x3454eaa1
- (void)insertString:(id)string atIndex:(unsigned)index;	// 0x3459e685
- (BOOL)isEqual:(id)equal;	// 0x34544865
- (BOOL)isEqualToString:(id)string;	// 0x34545631
- (BOOL)isNSString__;	// 0x3455c571
- (unsigned)length;	// 0x34548919
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x34557555
- (oneway void)release;	// 0x3454570d
- (void)replaceCharactersInRange:(NSRange)range withString:(id)string;	// 0x34559091
- (unsigned)replaceOccurrencesOfString:(id)string withString:(id)string2 options:(unsigned)options range:(NSRange)range;	// 0x34557805
- (id)retain;	// 0x345455ed
- (unsigned)retainCount;	// 0x345cd5ed
- (void)setString:(id)string;	// 0x3459d929
- (unsigned)smallestEncoding;	// 0x345cd6c5
- (id)substringWithRange:(NSRange)range;	// 0x3454de05
@end

