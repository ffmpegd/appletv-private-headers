/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSCoder.h"
#import "Foundation-Structs.h"


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
@property(retain) id allowedClasses;	// G=0x346c34ad; S=0x3466b229; converted property
@property(assign) id delegate;	// G=0x346c315d; S=0x346c314d; converted property
@property(assign) BOOL requiresSecureCoding;	// G=0x346c3521; S=0x346c3535; converted property
+ (Class)classForClassName:(id)className;	// 0x3464a731
+ (void)initialize;	// 0x3466a669
+ (void)setClass:(Class)aClass forClassName:(id)className;	// 0x3466a6fd
+ (id)unarchiveObjectWithData:(id)data;	// 0x3466c93d
+ (id)unarchiveObjectWithFile:(id)file;	// 0x34648c65
- (id)init;	// 0x346c2d05
- (id)initForReadingWithData:(id)data;	// 0x34648db9
- (id)initWithStream:(id)stream;	// 0x346c2de9
- (id)_allowedClassNames;	// 0x346c31d9
- (id)_blobForCurrentObject;	// 0x346c2c49
- (unsigned)_currentUniqueIdentifier;	// 0x346c480d
- (id)_decodeArrayOfObjectsForKey:(id)key;	// 0x3464affd
- (id)_decodePropertyListForKey:(id)key;	// 0x34679951
- (id)_initWithStream:(CFReadStreamRef)stream data:(id)data topDict:(CFDictionaryRef)dict;	// 0x346c2d4d
- (void)_replaceObject:(id)object withObject:(id)object2;	// 0x3464b6fd
- (void)_setAllowedClassNames:(id)names;	// 0x346c31f9
- (void)_temporaryMapReplaceObject:(id)object withObject:(id)object2;	// 0x346c321d
// converted property getter: - (id)allowedClasses;	// 0x346c34ad
- (BOOL)allowsKeyedCoding;	// 0x3464aff9
- (Class)classForClassName:(id)className;	// 0x3464a715
- (BOOL)containsValueForKey:(id)key;	// 0x3466c9f1
- (void)dealloc;	// 0x3464c8b1
- (void)decodeArrayOfObjCType:(const char *)objCType count:(unsigned)count at:(void *)at;	// 0x346c5071
- (BOOL)decodeBoolForKey:(id)key;	// 0x3464c015
- (const char *)decodeBytesForKey:(id)key returnedLength:(unsigned *)length;	// 0x346c43fd
- (void *)decodeBytesWithReturnedLength:(unsigned *)returnedLength;	// 0x346c4925
- (id)decodeDataObject;	// 0x346c4915
- (double)decodeDoubleForKey:(id)key;	// 0x346c4361
- (float)decodeFloatForKey:(id)key;	// 0x346c3df1
- (int)decodeInt32ForKey:(id)key;	// 0x3464b89d
- (long long)decodeInt64ForKey:(id)key;	// 0x346c3d55
- (int)decodeIntForKey:(id)key;	// 0x3464bd15
- (id)decodeObject;	// 0x346c482d
- (id)decodeObjectForKey:(id)key;	// 0x34649745
- (id)decodeObjectOfClass:(Class)aClass forKey:(id)key;	// 0x346c3351
- (id)decodeObjectOfClasses:(id)classes forKey:(id)key;	// 0x346c33d9
- (void)decodeValueOfObjCType:(const char *)objCType at:(void *)at;	// 0x346c4bbd
- (void)decodeValuesOfObjCTypes:(const char *)objCTypes;	// 0x346c4a5d
// converted property getter: - (id)delegate;	// 0x346c315d
- (id)description;	// 0x346c311d
- (void)finalize;	// 0x346c2fd9
- (void)finishDecoding;	// 0x3464c801
- (void)replaceObject:(id)object withObject:(id)object2;	// 0x346c32c1
// converted property getter: - (BOOL)requiresSecureCoding;	// 0x346c3521
// converted property setter: - (void)setAllowedClasses:(id)classes;	// 0x3466b229
- (void)setClass:(Class)aClass forClassName:(id)className;	// 0x346c3171
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x346c314d
// converted property setter: - (void)setRequiresSecureCoding:(BOOL)coding;	// 0x346c3535
- (unsigned)systemVersion;	// 0x346c5265
- (int)versionForClassName:(id)className;	// 0x346c523d
@end
