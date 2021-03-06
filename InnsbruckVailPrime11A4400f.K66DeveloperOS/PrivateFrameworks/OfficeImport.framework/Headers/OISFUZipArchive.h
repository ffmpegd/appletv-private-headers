/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import </libobjc.A.h>
#import "OfficeImport-Structs.h"

@class OISFUDataRepresentation, OISFUCryptoKey, NSData, NSMutableDictionary, NSString;
@protocol SFUZipArchiveDataRepresentation;

@interface OISFUZipArchive : NSObject {
	NSMutableDictionary *mEntries;	// 4 = 0x4
	OISFUDataRepresentation<SFUZipArchiveDataRepresentation> *mDataRepresentation;	// 8 = 0x8
	NSData *mPassphraseVerifier;	// 12 = 0xc
	NSString *mPassphraseHint;	// 16 = 0x10
	OISFUCryptoKey *mCryptoKey;	// 20 = 0x14
	NSData *mEncryptedDocumentUuid;	// 24 = 0x18
}
+ (BOOL)isZipArchiveAtPath:(id)path;	// 0x319636c5
- (id)initWithData:(id)data collapseCommonRootDirectory:(BOOL)directory;	// 0x31963901
- (id)initWithPath:(id)path collapseCommonRootDirectory:(BOOL)directory;	// 0x3196376d
- (id)allEntryNames;	// 0x31963b89
- (void)collapseCommonRootDirectory;	// 0x3196442d
- (void)dealloc;	// 0x31963a95
- (BOOL)decompressAtPath:(id)path;	// 0x31963c6d
- (id)encryptedDocumentUuid;	// 0x31963be1
- (id)entryWithName:(id)name;	// 0x31963b35
- (id)entryWithName:(id)name dataLength:(long long)length;	// 0x31963b55
- (BOOL)isEncrypted;	// 0x31963ba9
- (id)passphraseHint;	// 0x31963bd1
- (id)passphraseVerifier;	// 0x31963bc1
- (SFUZipEndOfCentralDirectory)readEndOfCentralDirectoryFromInputStream:(id)inputStream;	// 0x319646d9
- (void)readEntries;	// 0x31964051
- (void)readExtraFieldFromBuffer:(const char *)buffer size:(unsigned long)size entry:(id)entry;	// 0x31964cd5
- (id)readFilenameFromBuffer:(const char *)buffer size:(unsigned long)size;	// 0x31964c09
- (SFUZipEndOfCentralDirectory)readZip64EndOfCentralDirectoryFromInputStream:(id)inputStream eocdOffset:(long long)offset;	// 0x31964961
- (SFUZipEndOfCentralDirectory)readZip64EndOfCentralDirectoryFromInputStream:(id)inputStream offset:(long long)offset;	// 0x31964ac9
- (const char *)searchForEndOfCentralDirectoryFromInputStream:(id)inputStream offset:(long long *)offset;	// 0x31964839
- (void)setCryptoKey:(id)key;	// 0x31963bf1
@end

