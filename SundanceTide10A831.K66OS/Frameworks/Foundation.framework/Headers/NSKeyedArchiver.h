/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSCoder.h"
#import "Foundation-Structs.h"


@interface NSKeyedArchiver : NSCoder {
	void *_stream;	// 4 = 0x4
	unsigned _flags;	// 8 = 0x8
	id _delegate;	// 12 = 0xc
	id _containers;	// 16 = 0x10
	id _objects;	// 20 = 0x14
	id _objRefMap;	// 24 = 0x18
	id _replacementMap;	// 28 = 0x1c
	id _classNameMap;	// 32 = 0x20
	id _conditionals;	// 36 = 0x24
	id _classes;	// 40 = 0x28
	unsigned _genericKey;	// 44 = 0x2c
	void *_cache;	// 48 = 0x30
	unsigned _cacheSize;	// 52 = 0x34
	unsigned _estimatedCount;	// 56 = 0x38
	void *_reserved2;	// 60 = 0x3c
	id _visited;	// 64 = 0x40
	void *_reserved0;	// 68 = 0x44
}
@property(assign) id delegate;	// G=0x3258db01; S=0x3258daf1; converted property
@property(assign) unsigned outputFormat;	// G=0x3250f9a1; S=0x3258db11; converted property
@property(assign) BOOL requiresSecureCoding;	// G=0x3250f5d5; S=0x3258e8d1; converted property
+ (BOOL)archiveRootObject:(id)object toFile:(id)file;	// 0x3258d885
+ (id)archivedDataWithRootObject:(id)rootObject;	// 0x3250e819
+ (id)classNameForClass:(Class)aClass;	// 0x3250f6e1
+ (void)initialize;	// 0x3250e721
+ (void)setClassName:(id)name forClass:(Class)aClass;	// 0x3250e7b5
- (id)init;	// 0x3258d829
- (id)initForWritingWithMutableData:(id)mutableData;	// 0x3250e8d9
- (id)_blobForCurrentObject;	// 0x3258d801
- (void)_encodeArrayOfObjects:(id)objects forKey:(id)key;	// 0x32510361
- (void)_encodePropertyList:(id)list forKey:(id)key;	// 0x32511339
- (id)_initWithOutput:(id)output;	// 0x3250e8e9
- (void)_setBlobForCurrentObject:(id)currentObject;	// 0x3258d7b1
- (BOOL)allowsKeyedCoding;	// 0x3250f71d
- (id)classNameForClass:(Class)aClass;	// 0x3250f6b9
- (void)dealloc;	// 0x3250fe49
// converted property getter: - (id)delegate;	// 0x3258db01
- (id)description;	// 0x3258dac1
- (void)encodeArrayOfObjCType:(const char *)objCType count:(unsigned)count at:(const void *)at;	// 0x3258e6c1
- (void)encodeBool:(BOOL)aBool forKey:(id)key;	// 0x325105ad
- (void)encodeBycopyObject:(id)object;	// 0x3258e071
- (void)encodeByrefObject:(id)object;	// 0x3258e081
- (void)encodeBytes:(const void *)bytes length:(unsigned)length;	// 0x3258e0b1
- (void)encodeBytes:(const char *)bytes length:(unsigned)length forKey:(id)key;	// 0x3258dd85
- (void)encodeConditionalObject:(id)object;	// 0x3258dfcd
- (void)encodeConditionalObject:(id)object forKey:(id)key;	// 0x3258dbe1
- (void)encodeDataObject:(id)object;	// 0x3258e0a1
- (void)encodeDouble:(double)aDouble forKey:(id)key;	// 0x3253f64d
- (void)encodeFloat:(float)aFloat forKey:(id)key;	// 0x3258dc95
- (void)encodeInt32:(int)a32 forKey:(id)key;	// 0x32510a51
- (void)encodeInt64:(long long)a64 forKey:(id)key;	// 0x3253611d
- (void)encodeInt:(int)int forKey:(id)key;	// 0x3253f4e1
- (void)encodeObject:(id)object;	// 0x3258ded5
- (void)encodeObject:(id)object forKey:(id)key;	// 0x3250eaf5
- (void)encodeRootObject:(id)object;	// 0x3258e091
- (void)encodeValueOfObjCType:(const char *)objCType at:(const void *)at;	// 0x3258e2b5
- (void)encodeValuesOfObjCTypes:(const char *)objCTypes;	// 0x3258e155
- (void)finalize;	// 0x3258d9a5
- (void)finishEncoding;	// 0x3250f72d
// converted property getter: - (unsigned)outputFormat;	// 0x3250f9a1
- (void)replaceObject:(id)object withObject:(id)object2;	// 0x3250f475
// converted property getter: - (BOOL)requiresSecureCoding;	// 0x3250f5d5
- (void)setClassName:(id)name forClass:(Class)aClass;	// 0x3258db79
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x3258daf1
// converted property setter: - (void)setOutputFormat:(unsigned)format;	// 0x3258db11
// converted property setter: - (void)setRequiresSecureCoding:(BOOL)coding;	// 0x3258e8d1
- (unsigned)systemVersion;	// 0x3258e8c5
- (int)versionForClassName:(id)className;	// 0x3258e89d
@end
