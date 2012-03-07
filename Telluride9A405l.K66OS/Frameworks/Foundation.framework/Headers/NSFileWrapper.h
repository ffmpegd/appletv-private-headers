/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSCoding.h"
#import <NSObject.h> // Unknown library

@class NSString, NSDictionary;

@interface NSFileWrapper : NSObject <NSCoding> {
@private
	NSDictionary *_fileAttributes;	// 4 = 0x4
	NSString *_preferredFileName;	// 8 = 0x8
	NSString *_fileName;	// 12 = 0xc
	id _contents;	// 16 = 0x10
	id _icon;	// 20 = 0x14
	id _moreVars;	// 24 = 0x18
}
@property(retain) NSDictionary *fileAttributes;	// G=0x30346985; S=0x3034689d; converted property
@property(retain) id filename;	// G=0x30346865; S=0x30346821; converted property
@property(retain) id preferredFilename;	// G=0x303467e9; S=0x303466a1; converted property
+ (BOOL)_canSafelyMapFilesAtPath:(id)path;	// 0x30346f1d
+ (BOOL)_finishWritingToURL:(id)url byMovingItemAtURL:(id)url2 addingAttributes:(id)attributes error:(id *)error;	// 0x3034a76d
+ (BOOL)_finishWritingToURL:(id)url byTakingContentsFromItemAtURL:(id)url2 addingAttributes:(id)attributes usingTemporaryDirectoryAtURL:(id)url4 backupFileName:(id)name error:(id *)error;	// 0x3034a831
+ (BOOL)_forPath:(id)path getItemKind:(id *)kind modificationDate:(id *)date;	// 0x30346aa9
+ (id)_newContentsAtURL:(id)url path:(id)path itemKind:(id)kind oldChildrenByUniqueFileName:(id)name options:(unsigned)options error:(id *)error;	// 0x30347105
+ (id)_pathForURL:(id)url reading:(BOOL)reading error:(id *)error;	// 0x3034a541
+ (void)_removeTemporaryDirectoryAtURL:(id)url;	// 0x3034a8b5
+ (id)_temporaryDirectoryURLForWritingToURL:(id)url error:(id *)error;	// 0x3034a66d
+ (void)_writeAttributes:(id)attributes toURL:(id)url;	// 0x3034a6b5
+ (void)initialize;	// 0x30345a55
- (id)init;	// 0x30345a95
- (id)initDirectoryWithFileWrappers:(id)fileWrappers;	// 0x30345d75
- (id)initRegularFileWithContents:(id)contents;	// 0x30345f21
- (id)initSymbolicLinkWithDestinationURL:(id)destinationURL;	// 0x30346059
- (id)initWithCoder:(id)coder;	// 0x3034a4c1
- (id)initWithSerializedRepresentation:(id)serializedRepresentation;	// 0x30346135
- (id)initWithURL:(id)url options:(unsigned)options error:(id *)error;	// 0x30345b0d
- (id)_addChild:(id)child forUniqueFileName:(id)uniqueFileName;	// 0x30349769
- (void)_addParent:(id)parent;	// 0x303495ad
- (id)_attributesToWrite;	// 0x30348269
- (void)_forWritingToURL:(id)url returnContentsLazyReadingError:(id *)error;	// 0x30347b89
- (id)_fullDescription:(BOOL)description;	// 0x3034a935
- (id)_init;	// 0x30345aa9
- (void)_initDirectoryContents;	// 0x30349699
- (id)_initWithImpl:(id)impl preferredFileName:(id)name uniqueFileName:(id)name3 docInfo:(id)info iconData:(id)data;	// 0x30348899
- (BOOL)_matchesItemKind:(id)kind modificationDate:(id)date;	// 0x30346bd1
- (id)_newImpl;	// 0x30349061
- (void)_observePreferredFileNameOfChild:(id)child;	// 0x303465f5
- (BOOL)_readContentsFromURL:(id)url path:(id)path itemKind:(id)kind options:(unsigned)options error:(id *)error;	// 0x30347635
- (void)_removeChild:(id)child forUniqueFileName:(id)uniqueFileName;	// 0x30349d11
- (void)_removeParent:(id)parent;	// 0x30349649
- (void)_resetFileModificationDate;	// 0x30349871
- (id)_uniqueFileNameOfChild:(id)child;	// 0x30349c49
- (void)_updateDescendantFileNames;	// 0x303484f9
- (BOOL)_writeContentsToURL:(id)url path:(id)path originalContentsURL:(id)url3 tryHardLinking:(BOOL)linking didHardLinking:(BOOL *)linking5 error:(id *)error;	// 0x30347c19
- (id)addFileWrapper:(id)wrapper;	// 0x30349905
- (id)addRegularFileWithContents:(id)contents preferredFilename:(id)filename;	// 0x30349b5d
- (void)dealloc;	// 0x30346339
- (void)encodeWithCoder:(id)coder;	// 0x3034a459
// converted property getter: - (id)fileAttributes;	// 0x30346985
- (id)fileWrappers;	// 0x30349e35
// converted property getter: - (id)filename;	// 0x30346865
- (BOOL)isDirectory;	// 0x30346529
- (BOOL)isRegularFile;	// 0x3034656d
- (BOOL)isSymbolicLink;	// 0x303465b1
- (id)keyForFileWrapper:(id)fileWrapper;	// 0x3034a029
- (BOOL)matchesContentsOfURL:(id)url;	// 0x30346d11
// converted property getter: - (id)preferredFilename;	// 0x303467e9
- (BOOL)readFromURL:(id)url options:(unsigned)options error:(id *)error;	// 0x303478dd
- (id)regularFileContents;	// 0x3034a0b1
- (void)removeFileWrapper:(id)wrapper;	// 0x30349d51
- (id)serializedRepresentation;	// 0x303492d9
// converted property setter: - (void)setFileAttributes:(id)attributes;	// 0x3034689d
// converted property setter: - (void)setFilename:(id)filename;	// 0x30346821
// converted property setter: - (void)setPreferredFilename:(id)filename;	// 0x303466a1
- (id)symbolicLinkDestinationURL;	// 0x3034a285
- (BOOL)writeToURL:(id)url options:(unsigned)options originalContentsURL:(id)url3 error:(id *)error;	// 0x303485ed
@end

