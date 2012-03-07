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
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x3075ad49
- (const char *)UTF8String;	// 0x306f1d9d
- (const char *)_fastCStringContents:(BOOL)contents;	// 0x3075ad4d
- (const unsigned short *)_fastCharacterContents;	// 0x307326b1
- (BOOL)_isCString;	// 0x3075ade1
- (BOOL)_isDeallocating;	// 0x3075acf5
- (id)_newSubstringWithRange:(NSRange)range zone:(NSZone *)zone;	// 0x30714081
- (BOOL)_tryRetain;	// 0x3075ace1
- (void)appendCharacters:(const unsigned short *)characters length:(unsigned)length;	// 0x3075af1d
- (void)appendFormat:(id)format;	// 0x3073264d
- (void)appendString:(id)string;	// 0x306e719d
- (const char *)cString;	// 0x3075ad79
- (unsigned)cStringLength;	// 0x306f5421
- (const char *)cStringUsingEncoding:(unsigned)encoding;	// 0x3070bfd9
- (unsigned short)characterAtIndex:(unsigned)index;	// 0x306f9fc5
- (Class)classForCoder;	// 0x3071e95d
- (id)copyWithZone:(NSZone *)zone;	// 0x306e6ee5
- (void)deleteCharactersInRange:(NSRange)range;	// 0x30727da9
- (unsigned)fastestEncoding;	// 0x306f51f1
- (void)finalize;	// 0x3075ad05
- (BOOL)getCString:(char *)string maxLength:(unsigned)length encoding:(unsigned)encoding;	// 0x306f96f9
- (void)getCharacters:(unsigned short *)characters range:(NSRange)range;	// 0x306e30d9
- (void)getLineStart:(unsigned *)start end:(unsigned *)end contentsEnd:(unsigned *)end3 forRange:(NSRange)range;	// 0x30731265
- (BOOL)hasPrefix:(id)prefix;	// 0x306f9ae9
- (BOOL)hasSuffix:(id)suffix;	// 0x30715e25
- (unsigned)hash;	// 0x30707c89
- (void)insertString:(id)string atIndex:(unsigned)index;	// 0x30733029
- (BOOL)isEqual:(id)equal;	// 0x306e0f85
- (BOOL)isEqualToString:(id)string;	// 0x306e300d
- (BOOL)isNSString__;	// 0x306f1c69
- (unsigned)length;	// 0x306e30d5
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x306e748d
- (oneway void)release;	// 0x306e0ca9
- (void)replaceCharactersInRange:(NSRange)range withString:(id)string;	// 0x3070e03d
- (unsigned)replaceOccurrencesOfString:(id)string withString:(id)string2 options:(unsigned)options range:(NSRange)range;	// 0x306e76d9
- (id)retain;	// 0x306e963d
- (unsigned)retainCount;	// 0x3075ad01
- (void)setString:(id)string;	// 0x307153b9
- (unsigned)smallestEncoding;	// 0x3075add1
- (id)substringWithRange:(NSRange)range;	// 0x306e6f2d
@end

