/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSCoder.h"


@interface NSUnarchiver : NSCoder {
@private
	void *datax;	// 4 = 0x4
	unsigned cursor;	// 8 = 0x8
	NSZone *objectZone;	// 12 = 0xc
	unsigned systemVersion;	// 16 = 0x10
	BOOL streamerVersion;	// 20 = 0x14
	BOOL swap;	// 21 = 0x15
	BOOL unused1;	// 22 = 0x16
	BOOL unused2;	// 23 = 0x17
	void *pointerTable;	// 24 = 0x18
	void *stringTable;	// 28 = 0x1c
	id classVersions;	// 32 = 0x20
	int lastLabel;	// 36 = 0x24
	void *map;	// 40 = 0x28
	void *allUnarchivedObjects;	// 44 = 0x2c
	id reserved;	// 48 = 0x30
}
@property(assign) NSZone *objectZone;	// G=0x336a0625; S=0x336a0615; converted property
@property(readonly, assign) unsigned systemVersion;	// G=0x336a0669; converted property
+ (id)classNameDecodedForArchiveClassName:(id)archiveClassName;	// 0x336a0acd
+ (void)decodeClassName:(id)name asClassName:(id)name2;	// 0x3366a8d9
+ (void)initialize;	// 0x3366a885
+ (id)unarchiveObjectWithData:(id)data;	// 0x336a0951
+ (id)unarchiveObjectWithFile:(id)file;	// 0x336a09f1
- (id)initForReadingWithData:(id)data;	// 0x3366a961
- (void)_setAllowedClasses:(id)classes;	// 0x336a05d1
- (id)classNameDecodedForArchiveClassName:(id)archiveClassName;	// 0x336a0b19
- (id)data;	// 0x336a0679
- (void)dealloc;	// 0x3366dc99
- (void)decodeArrayOfObjCType:(const char *)objCType count:(unsigned)count at:(void *)at;	// 0x336a068d
- (void *)decodeBytesWithReturnedLength:(unsigned *)returnedLength;	// 0x3366c535
- (void)decodeClassName:(id)name asClassName:(id)name2;	// 0x336a0a31
- (id)decodeDataObject;	// 0x336a08a1
- (id)decodeObject;	// 0x3366b0a5
- (void)decodeValueOfObjCType:(const char *)objCType at:(void *)at;	// 0x3366d279
- (void)decodeValuesOfObjCTypes:(const char *)objCTypes;	// 0x3366cac9
- (void)finalize;	// 0x336a03d1
- (BOOL)isAtEnd;	// 0x336a0635
// converted property getter: - (NSZone *)objectZone;	// 0x336a0625
- (void)replaceObject:(id)object withObject:(id)object2;	// 0x336a0469
// converted property setter: - (void)setObjectZone:(NSZone *)zone;	// 0x336a0615
// converted property getter: - (unsigned)systemVersion;	// 0x336a0669
- (int)versionForClassName:(id)className;	// 0x3366c4f9
@end

