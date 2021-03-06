/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library
#import "Foundation-Structs.h"


@interface NSCoder : NSObject {
}
@property(assign) NSZone *objectZone;	// G=0x310655bd; S=0x310655b9; converted property
- (BOOL)allowsKeyedCoding;	// 0x31026389
- (BOOL)containsValueForKey:(id)key;	// 0x31065475
- (void)decodeArrayOfObjCType:(const char *)objCType count:(unsigned)count at:(void *)at;	// 0x31065211
- (BOOL)decodeBoolForKey:(id)key;	// 0x31065499
- (const char *)decodeBytesForKey:(id)key returnedLength:(unsigned *)length;	// 0x31065595
- (void *)decodeBytesWithReturnedLength:(unsigned *)returnedLength;	// 0x31065279
- (id)decodeDataObject;	// 0x31064fdd
- (double)decodeDoubleForKey:(id)key;	// 0x31065561
- (float)decodeFloatForKey:(id)key;	// 0x3106553d
- (int)decodeInt32ForKey:(id)key;	// 0x310654e1
- (long long)decodeInt64ForKey:(id)key;	// 0x31065505
- (int)decodeIntForKey:(id)key;	// 0x310654bd
- (int)decodeIntegerForKey:(id)key;	// 0x310376b1
- (long)decodeLongForKey:(id)key;	// 0x3106552d
- (id)decodeObject;	// 0x31065191
- (id)decodeObjectForKey:(id)key;	// 0x31065321
- (CGPoint)decodePoint;	// 0x31074de9
- (CGPoint)decodePointForKey:(id)key;	// 0x3108b1ed
- (CGRect)decodeRect;	// 0x31074ef5
- (CGRect)decodeRectForKey:(id)key;	// 0x3108b26d
- (CGSize)decodeSize;	// 0x31074e61
- (CGSize)decodeSizeForKey:(id)key;	// 0x3108b22d
- (void)decodeValueOfObjCType:(const char *)objCType at:(void *)at;	// 0x31064fb9
- (void)decodeValuesOfObjCTypes:(const char *)objCTypes;	// 0x310651c9
- (void)encodeArrayOfObjCType:(const char *)objCType count:(unsigned)count at:(const void *)at;	// 0x310650d9
- (void)encodeBool:(BOOL)aBool forKey:(id)key;	// 0x31065369
- (void)encodeBycopyObject:(id)object;	// 0x31065051
- (void)encodeByrefObject:(id)object;	// 0x31065061
- (void)encodeBytes:(const void *)bytes length:(unsigned)length;	// 0x31065141
- (void)encodeBytes:(const char *)bytes length:(unsigned)length forKey:(id)key;	// 0x31065451
- (void)encodeConditionalObject:(id)object;	// 0x31065081
- (void)encodeConditionalObject:(id)object forKey:(id)key;	// 0x31065345
- (void)encodeDataObject:(id)object;	// 0x31064f95
- (void)encodeDouble:(double)aDouble forKey:(id)key;	// 0x3106542d
- (void)encodeFloat:(float)aFloat forKey:(id)key;	// 0x31065409
- (void)encodeInt32:(int)a32 forKey:(id)key;	// 0x310653b1
- (void)encodeInt64:(long long)a64 forKey:(id)key;	// 0x310653d5
- (void)encodeInt:(int)int forKey:(id)key;	// 0x3106538d
- (void)encodeInteger:(int)integer forKey:(id)key;	// 0x31036f61
- (void)encodeLong:(long)aLong forKey:(id)key;	// 0x310653f9
- (void)encodeObject:(id)object;	// 0x31065025
- (void)encodeObject:(id)object forKey:(id)key;	// 0x310652fd
- (void)encodePoint:(CGPoint)point;	// 0x31074db9
- (void)encodePoint:(CGPoint)point forKey:(id)key;	// 0x3108b169
- (void)encodeRect:(CGRect)rect;	// 0x31074ea9
- (void)encodeRect:(CGRect)rect forKey:(id)key;	// 0x3108b1b9
- (void)encodeRootObject:(id)object;	// 0x31065071
- (void)encodeSize:(CGSize)size;	// 0x31074e31
- (void)encodeSize:(CGSize)size forKey:(id)key;	// 0x3108b191
- (void)encodeValueOfObjCType:(const char *)objCType at:(const void *)at;	// 0x31064f71
- (void)encodeValuesOfObjCTypes:(const char *)objCTypes;	// 0x31065091
// converted property getter: - (NSZone *)objectZone;	// 0x310655bd
// converted property setter: - (void)setObjectZone:(NSZone *)zone;	// 0x310655b9
- (unsigned)systemVersion;	// 0x310655c1
- (int)versionForClassName:(id)className;	// 0x31065001
@end

