/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import <NSMutableDictionary.h> // Unknown library


@interface NSRTFD : NSMutableDictionary {
@private
	NSMutableDictionary *dict;	// 4 = 0x4
}
+ (void)initialize;	// 0x3034d681
- (id)init;	// 0x3034d6c1
- (unsigned)initFromDocument:(id)document;	// 0x3034db85
- (id)initFromElement:(id)element ofDocument:(id)document;	// 0x3034f46d
- (id)initFromSerialized:(id)serialized;	// 0x30350bc1
- (unsigned)initUnixFile:(id)file;	// 0x3034db75
- (id)initWithCapacity:(unsigned)capacity;	// 0x3034d849
- (id)initWithContentsOfFile:(id)file;	// 0x3034d7fd
- (id)initWithDataRepresentation:(id)dataRepresentation;	// 0x3034e4f1
- (id)initWithDictionary:(id)dictionary;	// 0x3034d7b1
- (id)initWithDictionary:(id)dictionary copyItems:(BOOL)items;	// 0x3034d761
- (id)initWithObjects:(id *)objects forKeys:(id *)keys count:(unsigned)count;	// 0x3034d709
- (id)initWithPasteboardDataRepresentation:(id)pasteboardDataRepresentation;	// 0x30350c2d
- (id)_getDocInfoForKey:(id)key;	// 0x3034eaf1
- (BOOL)_isLink:(id)link;	// 0x30350d15
- (id)addCommon:(id)common docInfo:(id)info value:(id)value zone:(NSZone *)zone;	// 0x3034ea75
- (id)addData:(id)data name:(id)name;	// 0x3034f125
- (unsigned)addDirNamed:(id)named lazy:(BOOL)lazy;	// 0x3034fac1
- (id)addFile:(id)file;	// 0x3034eb21
- (unsigned)addFileNamed:(id)named fileAttributes:(id)attributes;	// 0x3034f681
- (id)addLink:(id)link;	// 0x3034ec19
- (id)copy;	// 0x3034f111
- (id)copy:(id)copy into:(id)into;	// 0x3034ee59
- (id)copyWithZone:(NSZone *)zone;	// 0x3034ef69
- (unsigned)count;	// 0x3034d8e1
- (id)createRandomKey:(id)key;	// 0x3034e5b5
- (id)createUniqueKey:(id)key;	// 0x3034e6c5
- (id)dataForFile:(id)file;	// 0x3034ed41
- (id)dataRepresentation;	// 0x3034e395
- (void)dealloc;	// 0x3034d895
- (id)freeSerialized:(void *)serialized length:(unsigned)length;	// 0x30350af1
- (id)getDirInfo:(BOOL)info;	// 0x3034f5d5
- (id)getDocument:(id)document docInfo:(id)info;	// 0x3034e745
- (unsigned)insertItem:(id)item path:(id)path dirInfo:(id)info zone:(NSZone *)zone plist:(id)plist;	// 0x3034f7c5
- (unsigned)internalSaveTo:(id)to removeBackup:(BOOL)backup errorHandler:(id)handler;	// 0x3034e2f1
- (unsigned)internalSaveTo:(id)to removeBackup:(BOOL)backup errorHandler:(id)handler temp:(id)temp backup:(id)backup5;	// 0x3034e0f5
- (unsigned)internalWritePath:(id)path errorHandler:(id)handler remapContents:(BOOL)contents hardLinkPath:(id)path4;	// 0x3034dff5
- (BOOL)isPackage;	// 0x3034da85
- (id)keyEnumerator;	// 0x3034d921
- (id)nameFromPath:(id)path extra:(id)extra;	// 0x3034e235
- (id)objectForKey:(id)key;	// 0x3034d901
- (id)pasteboardDataRepresentation;	// 0x30350bd1
- (unsigned)realAddDirNamed:(id)named;	// 0x3034f92d
- (id)removeFile:(id)file;	// 0x3034ee0d
- (void)removeObjectForKey:(id)key;	// 0x3034da65
- (id)replaceFile:(id)file data:(id)data;	// 0x3034e895
- (id)replaceFile:(id)file path:(id)path;	// 0x3034e911
- (unsigned)saveToDocument:(id)document removeBackup:(BOOL)backup errorHandler:(id)handler;	// 0x3034e385
- (id)serialize:(void **)serialize length:(unsigned *)length;	// 0x30350959
- (void)setObject:(id)object forKey:(id)key;	// 0x3034d941
- (id)setPackage:(BOOL)package;	// 0x3034dab1
- (id)tmpNameFromPath:(id)path;	// 0x3034e2d5
- (id)tmpNameFromPath:(id)path extension:(id)extension;	// 0x3034e249
- (id)uniqueKey:(id)key;	// 0x3034e735
- (int)validatePath:(id)path ignore:(id)ignore;	// 0x3034f1c9
- (unsigned)writePath:(id)path docInfo:(id)info errorHandler:(id)handler remapContents:(BOOL)contents hardLinkPath:(id)path5;	// 0x3034dfbd
- (unsigned)writePath:(id)path docInfo:(id)info errorHandler:(id)handler remapContents:(BOOL)contents markBusy:(BOOL)busy hardLinkPath:(id)path6;	// 0x3034dc81
@end
