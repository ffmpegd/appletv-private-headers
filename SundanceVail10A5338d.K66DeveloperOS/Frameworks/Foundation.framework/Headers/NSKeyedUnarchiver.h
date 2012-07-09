/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSCoder.h"


@interface NSKeyedUnarchiver : NSCoder {
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
@property(retain) id allowedClasses;	// G=0x37391625; S=0x37339581; converted property
@property(assign) id delegate;	// G=0x373912d5; S=0x373912c5; converted property
@property(assign) BOOL requiresSecureCoding;	// G=0x37391699; S=0x373916ad; converted property
+ (Class)classForClassName:(id)className;	// 0x37318a89
+ (void)initialize;	// 0x373389c1
+ (void)setClass:(Class)aClass forClassName:(id)className;	// 0x37338a55
+ (id)unarchiveObjectWithData:(id)data;	// 0x3733ac95
+ (id)unarchiveObjectWithFile:(id)file;	// 0x37316fbd
- (id)init;	// 0x37390e7d
- (id)initForReadingWithData:(id)data;	// 0x37317111
- (id)initWithStream:(id)stream;	// 0x37390f61
- (id)_allowedClassNames;	// 0x37391351
- (id)_blobForCurrentObject;	// 0x37390dc1
- (unsigned)_currentUniqueIdentifier;	// 0x37392985
- (id)_decodeArrayOfObjectsForKey:(id)key;	// 0x37319355
- (id)_decodePropertyListForKey:(id)key;	// 0x37347ca1
- (id)_initWithStream:(CFReadStreamRef)stream data:(id)data topDict:(CFDictionaryRef)dict;	// 0x37390ec5
- (void)_replaceObject:(id)object withObject:(id)object2;	// 0x37319a55
- (void)_setAllowedClassNames:(id)names;	// 0x37391371
- (void)_temporaryMapReplaceObject:(id)object withObject:(id)object2;	// 0x37391395
// converted property getter: - (id)allowedClasses;	// 0x37391625
- (BOOL)allowsKeyedCoding;	// 0x37319351
- (Class)classForClassName:(id)className;	// 0x37318a6d
- (BOOL)containsValueForKey:(id)key;	// 0x3733ad49
- (void)dealloc;	// 0x3731ac09
- (void)decodeArrayOfObjCType:(const char *)objCType count:(unsigned)count at:(void *)at;	// 0x373931e9
- (BOOL)decodeBoolForKey:(id)key;	// 0x3731a36d
- (const char *)decodeBytesForKey:(id)key returnedLength:(unsigned *)length;	// 0x37392575
- (void *)decodeBytesWithReturnedLength:(unsigned *)returnedLength;	// 0x37392a9d
- (id)decodeDataObject;	// 0x37392a8d
- (double)decodeDoubleForKey:(id)key;	// 0x373924d9
- (float)decodeFloatForKey:(id)key;	// 0x37391f69
- (int)decodeInt32ForKey:(id)key;	// 0x37319bf5
- (long long)decodeInt64ForKey:(id)key;	// 0x37391ecd
- (int)decodeIntForKey:(id)key;	// 0x3731a06d
- (id)decodeObject;	// 0x373929a5
- (id)decodeObjectForKey:(id)key;	// 0x37317a9d
- (id)decodeObjectOfClass:(Class)aClass forKey:(id)key;	// 0x373914c9
- (id)decodeObjectOfClasses:(id)classes forKey:(id)key;	// 0x37391551
- (void)decodeValueOfObjCType:(const char *)objCType at:(void *)at;	// 0x37392d35
- (void)decodeValuesOfObjCTypes:(const char *)objCTypes;	// 0x37392bd5
// converted property getter: - (id)delegate;	// 0x373912d5
- (id)description;	// 0x37391295
- (void)finalize;	// 0x37391151
- (void)finishDecoding;	// 0x3731ab59
- (void)replaceObject:(id)object withObject:(id)object2;	// 0x37391439
// converted property getter: - (BOOL)requiresSecureCoding;	// 0x37391699
// converted property setter: - (void)setAllowedClasses:(id)classes;	// 0x37339581
- (void)setClass:(Class)aClass forClassName:(id)className;	// 0x373912e9
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x373912c5
// converted property setter: - (void)setRequiresSecureCoding:(BOOL)coding;	// 0x373916ad
- (unsigned)systemVersion;	// 0x373933dd
- (int)versionForClassName:(id)className;	// 0x373933b5
@end
