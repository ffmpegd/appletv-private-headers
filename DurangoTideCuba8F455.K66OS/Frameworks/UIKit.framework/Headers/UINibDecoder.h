/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <NSCoder.h> // Unknown library

@class UINibStringIDTable;

__attribute__((visibility("hidden")))
@interface UINibDecoder : NSCoder {
@private
	Class arrayClass;	// 4 = 0x4
	Class setClass;	// 8 = 0x8
	Class dictionaryClass;	// 12 = 0xc
	Class *classes;	// 16 = 0x10
	NSString **missingClasses;	// 20 = 0x14
	UINibDecoderObjectEntry *objects;	// 24 = 0x18
	UINibDecoderValue *values;	// 28 = 0x1c
	char *valueTypes;	// 32 = 0x20
	void *valueData;	// 36 = 0x24
	unsigned valueDataSize;	// 40 = 0x28
	UINibDecoderHeader header;	// 44 = 0x2c
	id *objectsByObjectID;	// 96 = 0x60
	unsigned *longObjectClassIDs;	// 100 = 0x64
	char *shortObjectClassIDs;	// 104 = 0x68
	unsigned *keyMasks;	// 108 = 0x6c
	int inlinedValueKey;	// 112 = 0x70
	UINibDecoderRecursiveState recursiveState;	// 116 = 0x74
	UINibStringIDTable *keyIDTable;	// 132 = 0x84
	id delegate;	// 136 = 0x88
	UIKeyToKeyIDCache keyIDCache;	// 140 = 0x8c
	UIKeyAndScopeToValueCache valueCache;	// 728 = 0x2d8
	int lookupRounds;	// 740 = 0x2e4
	int maxPossibleLookupRounds;	// 744 = 0x2e8
	int failedByKeyMask;	// 748 = 0x2ec
	int savedByKeyMask;	// 752 = 0x2f0
}
@property(assign) id delegate;	// G=0x302e07f1; S=0x302e0801; @synthesize
+ (id)unarchiveObjectWithData:(id)data;	// 0x302e0c95
+ (id)unarchiveObjectWithFile:(id)file;	// 0x302e0c41
- (id)initForReadingWithData:(id)data;	// 0x302e0d15
- (id)initForReadingWithData:(id)data error:(id *)error;	// 0x302e0d2d
- (BOOL)allowsKeyedCoding;	// 0x302e07e5
- (BOOL)containsValueForKey:(id)key;	// 0x302e298d
- (void)dealloc;	// 0x302e0e85
- (BOOL)decodeArrayOfCGFloats:(float *)cgfloats count:(int)count forKey:(id)key;	// 0x302e10c5
- (BOOL)decodeArrayOfDoubles:(double *)doubles count:(int)count forKey:(id)key;	// 0x302e28cd
- (BOOL)decodeArrayOfFloats:(float *)floats count:(int)count forKey:(id)key;	// 0x302e2811
- (void)decodeArrayOfObjCType:(const char *)objCType count:(unsigned)count at:(void *)at;	// 0x302e088d
- (BOOL)decodeBoolForKey:(id)key;	// 0x302e2c95
- (const char *)decodeBytesForKey:(id)key returnedLength:(unsigned *)length;	// 0x302e2d15
- (void *)decodeBytesWithReturnedLength:(unsigned *)returnedLength;	// 0x302e0811
- (CGAffineTransform)decodeCGAffineTransformForKey:(id)key;	// 0x302e0b2d
- (CGPoint)decodeCGPointForKey:(id)key;	// 0x302e135d
- (CGRect)decodeCGRectForKey:(id)key;	// 0x302e12e1
- (CGSize)decodeCGSizeForKey:(id)key;	// 0x302e1325
- (id)decodeDataObject;	// 0x302e0a35
- (double)decodeDoubleForKey:(id)key;	// 0x302e2b71
- (float)decodeFloatForKey:(id)key;	// 0x302e2bed
- (int)decodeInt32ForKey:(id)key;	// 0x302e29dd
- (long long)decodeInt64ForKey:(id)key;	// 0x302e2b09
- (int)decodeIntForKey:(id)key;	// 0x302e2a41
- (int)decodeIntegerForKey:(id)key;	// 0x302e2aa5
- (id)decodeNXObject;	// 0x302e0ab1
- (id)decodeObject;	// 0x302e0a09
- (id)decodeObjectForKey:(id)key;	// 0x302e2305
- (id)decodePropertyList;	// 0x302e098d
- (UIEdgeInsets)decodeUIEdgeInsetsForKey:(id)key;	// 0x302e129d
- (void)decodeValueOfObjCType:(const char *)objCType at:(void *)at;	// 0x302e252d
- (void)decodeValuesOfObjCTypes:(const char *)objCTypes;	// 0x302e0909
// declared property getter: - (id)delegate;	// 0x302e07f1
- (void)finishDecoding;	// 0x302e1225
- (id)nextGenericKey;	// 0x302e0c01
- (void)replaceObject:(id)object withObject:(id)object2;	// 0x302e0b91
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x302e0801
- (unsigned)systemVersion;	// 0x302e07e9
- (BOOL)validateAndIndexClasses:(const void *)classes length:(unsigned long)length;	// 0x302e2da5
- (BOOL)validateAndIndexData:(id)data error:(id *)error;	// 0x302e3185
- (BOOL)validateAndIndexKeys:(const void *)keys length:(unsigned long)length;	// 0x302e2359
- (BOOL)validateAndIndexObjects:(const void *)objects length:(unsigned long)length;	// 0x302e14e5
- (BOOL)validateAndIndexValues:(const void *)values length:(unsigned long)length;	// 0x302e1781
- (int)versionForClassName:(id)className;	// 0x302e27ed
@end

