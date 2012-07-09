/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "SFUDataRepresentation.h"

@class SFUCryptoKey;
@protocol SFUZipArchiveDataRepresentation;

@interface SFUZipEntry : SFUDataRepresentation {
	SFUDataRepresentation<SFUZipArchiveDataRepresentation> *mArchiveDataRepresentation;	// 20 = 0x14
	int mCompressionMethod;	// 24 = 0x18
	unsigned long long mCompressedSize;	// 28 = 0x1c
	unsigned long long mUncompressedSize;	// 36 = 0x24
	unsigned long long mOffset;	// 44 = 0x2c
	unsigned mCrc;	// 52 = 0x34
	unsigned long long mDataOffset;	// 56 = 0x38
	BOOL mHasDataOffset;	// 64 = 0x40
	unsigned long long mEncodedLength;	// 68 = 0x44
	BOOL mHasEncodedLength;	// 76 = 0x4c
	SFUCryptoKey *mCryptoKey;	// 80 = 0x50
}
@property(assign) long long dataLength;	// G=0x33a28351; S=0x33c251bd; converted property
- (id)initFromCentralFileHeader:(const char *)centralFileHeader dataRepresentation:(id)representation;	// 0x33a26d85
- (id)initWithDataRepresentation:(id)dataRepresentation compressionMethod:(int)method compressedSize:(unsigned long long)size uncompressedSize:(unsigned long long)size4 offset:(unsigned long long)offset crc:(unsigned)crc;	// 0x33c24b59
- (unsigned long long)backingFileDataOffset;	// 0x33c24f81
- (id)backingFilePath;	// 0x33c24ec5
- (unsigned long long)calculateEncodedLength;	// 0x33c2526d
- (void)copyToFile:(id)file;	// 0x33c24c6d
- (unsigned)crc;	// 0x33c25031
- (id)data;	// 0x33a3facd
// converted property getter: - (long long)dataLength;	// 0x33a28351
- (unsigned long long)dataOffset;	// 0x33a27c91
- (void)dealloc;	// 0x33a5b7cd
- (long long)encodedLength;	// 0x33c24c5d
- (id)inputStream;	// 0x33a27985
- (BOOL)isBackedByFile;	// 0x33c24e7d
- (BOOL)isCompressed;	// 0x33c24e4d
- (BOOL)isEncrypted;	// 0x33c24e65
- (BOOL)isReadable;	// 0x33c24c11
- (void)readZip64ExtraField:(const char *)field size:(unsigned long)size;	// 0x33c25041
- (void)setCompressionFlags:(unsigned short)flags;	// 0x33a26f7d
- (void)setCryptoKey:(id)key;	// 0x33c25181
// converted property setter: - (void)setDataLength:(long long)length;	// 0x33c251bd
@end
