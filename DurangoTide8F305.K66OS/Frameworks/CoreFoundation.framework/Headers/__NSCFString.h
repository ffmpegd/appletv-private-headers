/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "CoreFoundation-Structs.h"
#import "__NSCFType.h"


__attribute__((visibility("hidden")))
@interface __NSCFString : __NSCFType {
}
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x32e8096d
- (const char *)UTF8String;	// 0x32e83601
- (const char *)_fastCStringContents:(BOOL)contents;	// 0x32e833a9
- (const unsigned short *)_fastCharacterContents;	// 0x32e812d9
- (BOOL)_isCString;	// 0x32e8159d
- (id)_newSubstringWithRange:(NSRange)range zone:(NSZone *)zone;	// 0x32e82d9d
- (void)appendCharacters:(const unsigned short *)characters length:(unsigned)length;	// 0x32e81849
- (void)appendFormat:(id)format;	// 0x32e81809
- (void)appendString:(id)string;	// 0x32e82f41
- (const char *)cString;	// 0x32e83da5
- (unsigned)cStringLength;	// 0x32e833d9
- (const char *)cStringUsingEncoding:(unsigned)encoding;	// 0x32e83d19
- (unsigned short)characterAtIndex:(unsigned)index;	// 0x32e8126d
- (Class)classForCoder;	// 0x32e8137d
- (id)copyWithZone:(NSZone *)zone;	// 0x32e81549
- (void)deleteCharactersInRange:(NSRange)range;	// 0x32e82f75
- (unsigned)fastestEncoding;	// 0x32e8157d
- (void)finalize;	// 0x32e80e55
- (BOOL)getCString:(char *)string maxLength:(unsigned)length encoding:(unsigned)encoding;	// 0x32e83e05
- (void)getCharacters:(unsigned short *)characters range:(NSRange)range;	// 0x32e82d25
- (void)getLineStart:(unsigned *)start end:(unsigned *)end contentsEnd:(unsigned *)end3 forRange:(NSRange)range;	// 0x32e82e59
- (BOOL)hasPrefix:(id)prefix;	// 0x32e81459
- (BOOL)hasSuffix:(id)suffix;	// 0x32e814d1
- (unsigned)hash;	// 0x32e80bf1
- (void)insertString:(id)string atIndex:(unsigned)index;	// 0x32e82f1d
- (BOOL)isEqual:(id)equal;	// 0x32e83439
- (BOOL)isEqualToString:(id)string;	// 0x32e83525
- (BOOL)isNSString__;	// 0x32e80969
- (unsigned)length;	// 0x32e80e91
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x32e81561
- (oneway void)release;	// 0x32e80b61
- (void)replaceCharactersInRange:(NSRange)range withString:(id)string;	// 0x32e82ef1
- (unsigned)replaceOccurrencesOfString:(id)string withString:(id)string2 options:(unsigned)options range:(NSRange)range;	// 0x32e82fdd
- (id)retain;	// 0x32e80afd
- (unsigned)retainCount;	// 0x32e80be5
- (void)setString:(id)string;	// 0x32e82fa9
- (unsigned)smallestEncoding;	// 0x32e8158d
- (id)substringWithRange:(NSRange)range;	// 0x32e82db9
@end

