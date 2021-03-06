/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSCoder.h"


@interface NSKeyedUnarchiver : NSCoder {
@private
	id _delegate;	// 4 = 0x4
	unsigned _flags;	// 8 = 0x8
	id _objRefMap;	// 12 = 0xc
	id _replacementMap;	// 16 = 0x10
	id _nameClassMap;	// 20 = 0x14
	id _tmpRefObjMap;	// 24 = 0x18
	id _refObjMap;	// 28 = 0x1c
	int _genericKey;	// 32 = 0x20
	id _data;	// 36 = 0x24
	void *_offsetData;	// 40 = 0x28
	id _containers;	// 44 = 0x2c
	id _objects;	// 48 = 0x30
	const char *_bytes;	// 52 = 0x34
	unsigned long long _len;	// 56 = 0x38
	id _helper;	// 64 = 0x40
	void *_reserved0;	// 68 = 0x44
}
@property(retain) id allowedClasses;	// G=0x336cf381; S=0x3367c219; converted property
@property(assign) id delegate;	// G=0x336cf30d; S=0x336cf2fd; converted property
+ (Class)classForClassName:(id)className;	// 0x3365b07d
+ (void)initialize;	// 0x3367b6b1
+ (void)setClass:(Class)aClass forClassName:(id)className;	// 0x3367b745
+ (id)unarchiveObjectWithData:(id)data;	// 0x3367d61d
+ (id)unarchiveObjectWithFile:(id)file;	// 0x33659649
- (id)init;	// 0x336ceeb1
- (id)initForReadingWithData:(id)data;	// 0x33659799
- (id)initWithStream:(id)stream;	// 0x336cef99
- (id)_blobForCurrentObject;	// 0x336cedf1
- (unsigned)_currentUniqueIdentifier;	// 0x336d0741
- (id)_decodeArrayOfObjectsForKey:(id)key;	// 0x3365b5fd
- (id)_decodePropertyListForKey:(id)key;	// 0x3368a701
- (id)_initWithStream:(CFReadStreamRef)stream data:(id)data topDict:(CFDictionaryRef)dict;	// 0x336ceef9
- (void)_replaceObject:(id)object withObject:(id)object2;	// 0x3365bcf1
- (void)_temporaryMapReplaceObject:(id)object withObject:(id)object2;	// 0x336cf3a1
// converted property getter: - (id)allowedClasses;	// 0x336cf381
- (BOOL)allowsKeyedCoding;	// 0x3365b5f9
- (Class)classForClassName:(id)className;	// 0x3365b059
- (BOOL)containsValueForKey:(id)key;	// 0x3367d6d1
- (void)dealloc;	// 0x3365cced
- (void)decodeArrayOfObjCType:(const char *)objCType count:(unsigned)count at:(void *)at;	// 0x336d0f85
- (BOOL)decodeBoolForKey:(id)key;	// 0x3365c68d
- (const char *)decodeBytesForKey:(id)key returnedLength:(unsigned *)length;	// 0x336d033d
- (void *)decodeBytesWithReturnedLength:(unsigned *)returnedLength;	// 0x336d0859
- (id)decodeDataObject;	// 0x336d0849
- (double)decodeDoubleForKey:(id)key;	// 0x336d02a1
- (float)decodeFloatForKey:(id)key;	// 0x336cfd21
- (int)decodeInt32ForKey:(id)key;	// 0x3365bea1
- (long long)decodeInt64ForKey:(id)key;	// 0x336cfc85
- (int)decodeIntForKey:(id)key;	// 0x3365c399
- (id)decodeObject;	// 0x336d0761
- (id)decodeObjectForKey:(id)key;	// 0x3365a1a1
- (void)decodeValueOfObjCType:(const char *)objCType at:(void *)at;	// 0x336d0ae5
- (void)decodeValuesOfObjCTypes:(const char *)objCTypes;	// 0x336d0991
// converted property getter: - (id)delegate;	// 0x336cf30d
- (id)description;	// 0x336cf2d1
- (void)finalize;	// 0x336cf171
- (void)finishDecoding;	// 0x3365cc49
- (void)replaceObject:(id)object withObject:(id)object2;	// 0x336cf425
// converted property setter: - (void)setAllowedClasses:(id)classes;	// 0x3367c219
- (void)setClass:(Class)aClass forClassName:(id)className;	// 0x336cf31d
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x336cf2fd
- (unsigned)systemVersion;	// 0x336d1171
- (int)versionForClassName:(id)className;	// 0x336d1149
@end

