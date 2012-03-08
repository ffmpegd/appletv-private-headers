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
@property(assign) NSZone *objectZone;	// G=0x35e365cd; S=0x35e365c9; converted property
- (BOOL)allowsKeyedCoding;	// 0x35df7399
- (BOOL)containsValueForKey:(id)key;	// 0x35e36485
- (void)decodeArrayOfObjCType:(const char *)objCType count:(unsigned)count at:(void *)at;	// 0x35e36221
- (BOOL)decodeBoolForKey:(id)key;	// 0x35e364a9
- (const char *)decodeBytesForKey:(id)key returnedLength:(unsigned *)length;	// 0x35e365a5
- (void *)decodeBytesWithReturnedLength:(unsigned *)returnedLength;	// 0x35e36289
- (id)decodeDataObject;	// 0x35e35fed
- (double)decodeDoubleForKey:(id)key;	// 0x35e36571
- (float)decodeFloatForKey:(id)key;	// 0x35e3654d
- (int)decodeInt32ForKey:(id)key;	// 0x35e364f1
- (long long)decodeInt64ForKey:(id)key;	// 0x35e36515
- (int)decodeIntForKey:(id)key;	// 0x35e364cd
- (int)decodeIntegerForKey:(id)key;	// 0x35e086c1
- (long)decodeLongForKey:(id)key;	// 0x35e3653d
- (id)decodeObject;	// 0x35e361a1
- (id)decodeObjectForKey:(id)key;	// 0x35e36331
- (CGPoint)decodePoint;	// 0x35e45df9
- (CGPoint)decodePointForKey:(id)key;	// 0x35e5c1fd
- (CGRect)decodeRect;	// 0x35e45f05
- (CGRect)decodeRectForKey:(id)key;	// 0x35e5c27d
- (CGSize)decodeSize;	// 0x35e45e71
- (CGSize)decodeSizeForKey:(id)key;	// 0x35e5c23d
- (void)decodeValueOfObjCType:(const char *)objCType at:(void *)at;	// 0x35e35fc9
- (void)decodeValuesOfObjCTypes:(const char *)objCTypes;	// 0x35e361d9
- (void)encodeArrayOfObjCType:(const char *)objCType count:(unsigned)count at:(const void *)at;	// 0x35e360e9
- (void)encodeBool:(BOOL)aBool forKey:(id)key;	// 0x35e36379
- (void)encodeBycopyObject:(id)object;	// 0x35e36061
- (void)encodeByrefObject:(id)object;	// 0x35e36071
- (void)encodeBytes:(const void *)bytes length:(unsigned)length;	// 0x35e36151
- (void)encodeBytes:(const char *)bytes length:(unsigned)length forKey:(id)key;	// 0x35e36461
- (void)encodeConditionalObject:(id)object;	// 0x35e36091
- (void)encodeConditionalObject:(id)object forKey:(id)key;	// 0x35e36355
- (void)encodeDataObject:(id)object;	// 0x35e35fa5
- (void)encodeDouble:(double)aDouble forKey:(id)key;	// 0x35e3643d
- (void)encodeFloat:(float)aFloat forKey:(id)key;	// 0x35e36419
- (void)encodeInt32:(int)a32 forKey:(id)key;	// 0x35e363c1
- (void)encodeInt64:(long long)a64 forKey:(id)key;	// 0x35e363e5
- (void)encodeInt:(int)int forKey:(id)key;	// 0x35e3639d
- (void)encodeInteger:(int)integer forKey:(id)key;	// 0x35e07f71
- (void)encodeLong:(long)aLong forKey:(id)key;	// 0x35e36409
- (void)encodeObject:(id)object;	// 0x35e36035
- (void)encodeObject:(id)object forKey:(id)key;	// 0x35e3630d
- (void)encodePoint:(CGPoint)point;	// 0x35e45dc9
- (void)encodePoint:(CGPoint)point forKey:(id)key;	// 0x35e5c179
- (void)encodeRect:(CGRect)rect;	// 0x35e45eb9
- (void)encodeRect:(CGRect)rect forKey:(id)key;	// 0x35e5c1c9
- (void)encodeRootObject:(id)object;	// 0x35e36081
- (void)encodeSize:(CGSize)size;	// 0x35e45e41
- (void)encodeSize:(CGSize)size forKey:(id)key;	// 0x35e5c1a1
- (void)encodeValueOfObjCType:(const char *)objCType at:(const void *)at;	// 0x35e35f81
- (void)encodeValuesOfObjCTypes:(const char *)objCTypes;	// 0x35e360a1
// converted property getter: - (NSZone *)objectZone;	// 0x35e365cd
// converted property setter: - (void)setObjectZone:(NSZone *)zone;	// 0x35e365c9
- (unsigned)systemVersion;	// 0x35e365d1
- (int)versionForClassName:(id)className;	// 0x35e36011
@end
