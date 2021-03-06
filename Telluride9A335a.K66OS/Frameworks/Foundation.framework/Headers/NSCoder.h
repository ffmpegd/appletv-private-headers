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
@property(assign) NSZone *objectZone;	// G=0x320655cd; S=0x320655c9; converted property
- (BOOL)allowsKeyedCoding;	// 0x32026399
- (BOOL)containsValueForKey:(id)key;	// 0x32065485
- (void)decodeArrayOfObjCType:(const char *)objCType count:(unsigned)count at:(void *)at;	// 0x32065221
- (BOOL)decodeBoolForKey:(id)key;	// 0x320654a9
- (const char *)decodeBytesForKey:(id)key returnedLength:(unsigned *)length;	// 0x320655a5
- (void *)decodeBytesWithReturnedLength:(unsigned *)returnedLength;	// 0x32065289
- (id)decodeDataObject;	// 0x32064fed
- (double)decodeDoubleForKey:(id)key;	// 0x32065571
- (float)decodeFloatForKey:(id)key;	// 0x3206554d
- (int)decodeInt32ForKey:(id)key;	// 0x320654f1
- (long long)decodeInt64ForKey:(id)key;	// 0x32065515
- (int)decodeIntForKey:(id)key;	// 0x320654cd
- (int)decodeIntegerForKey:(id)key;	// 0x320376c1
- (long)decodeLongForKey:(id)key;	// 0x3206553d
- (id)decodeObject;	// 0x320651a1
- (id)decodeObjectForKey:(id)key;	// 0x32065331
- (CGPoint)decodePoint;	// 0x32074df9
- (CGPoint)decodePointForKey:(id)key;	// 0x3208b1fd
- (CGRect)decodeRect;	// 0x32074f05
- (CGRect)decodeRectForKey:(id)key;	// 0x3208b27d
- (CGSize)decodeSize;	// 0x32074e71
- (CGSize)decodeSizeForKey:(id)key;	// 0x3208b23d
- (void)decodeValueOfObjCType:(const char *)objCType at:(void *)at;	// 0x32064fc9
- (void)decodeValuesOfObjCTypes:(const char *)objCTypes;	// 0x320651d9
- (void)encodeArrayOfObjCType:(const char *)objCType count:(unsigned)count at:(const void *)at;	// 0x320650e9
- (void)encodeBool:(BOOL)aBool forKey:(id)key;	// 0x32065379
- (void)encodeBycopyObject:(id)object;	// 0x32065061
- (void)encodeByrefObject:(id)object;	// 0x32065071
- (void)encodeBytes:(const void *)bytes length:(unsigned)length;	// 0x32065151
- (void)encodeBytes:(const char *)bytes length:(unsigned)length forKey:(id)key;	// 0x32065461
- (void)encodeConditionalObject:(id)object;	// 0x32065091
- (void)encodeConditionalObject:(id)object forKey:(id)key;	// 0x32065355
- (void)encodeDataObject:(id)object;	// 0x32064fa5
- (void)encodeDouble:(double)aDouble forKey:(id)key;	// 0x3206543d
- (void)encodeFloat:(float)aFloat forKey:(id)key;	// 0x32065419
- (void)encodeInt32:(int)a32 forKey:(id)key;	// 0x320653c1
- (void)encodeInt64:(long long)a64 forKey:(id)key;	// 0x320653e5
- (void)encodeInt:(int)int forKey:(id)key;	// 0x3206539d
- (void)encodeInteger:(int)integer forKey:(id)key;	// 0x32036f71
- (void)encodeLong:(long)aLong forKey:(id)key;	// 0x32065409
- (void)encodeObject:(id)object;	// 0x32065035
- (void)encodeObject:(id)object forKey:(id)key;	// 0x3206530d
- (void)encodePoint:(CGPoint)point;	// 0x32074dc9
- (void)encodePoint:(CGPoint)point forKey:(id)key;	// 0x3208b179
- (void)encodeRect:(CGRect)rect;	// 0x32074eb9
- (void)encodeRect:(CGRect)rect forKey:(id)key;	// 0x3208b1c9
- (void)encodeRootObject:(id)object;	// 0x32065081
- (void)encodeSize:(CGSize)size;	// 0x32074e41
- (void)encodeSize:(CGSize)size forKey:(id)key;	// 0x3208b1a1
- (void)encodeValueOfObjCType:(const char *)objCType at:(const void *)at;	// 0x32064f81
- (void)encodeValuesOfObjCTypes:(const char *)objCTypes;	// 0x320650a1
// converted property getter: - (NSZone *)objectZone;	// 0x320655cd
// converted property setter: - (void)setObjectZone:(NSZone *)zone;	// 0x320655c9
- (unsigned)systemVersion;	// 0x320655d1
- (int)versionForClassName:(id)className;	// 0x32065011
@end

