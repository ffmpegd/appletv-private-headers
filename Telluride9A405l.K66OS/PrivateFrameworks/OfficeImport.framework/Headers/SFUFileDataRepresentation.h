/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "SFUDataRepresentation.h"

@class SFUCryptoKey, NSString;

__attribute__((visibility("hidden")))
@interface SFUFileDataRepresentation : SFUDataRepresentation {
@private
	NSString *mPath;	// 12 = 0xc
	int mSharedFd;	// 16 = 0x10
	long long mFileLength;	// 20 = 0x14
	unsigned mFileType;	// 28 = 0x1c
	BOOL mHasFileAttributes;	// 32 = 0x20
	long long mPlaintextDataLength;	// 36 = 0x24
	SFUCryptoKey *mCryptoKey;	// 44 = 0x2c
	BOOL mDeleteFileWhenDone;	// 48 = 0x30
}
@property(assign) unsigned long fileType;	// G=0x30ec0685; S=0x30ec0795; converted property
- (id)initWithCopyOfData:(id)data path:(id)path;	// 0x30ec0619
- (id)initWithCopyOfData:(id)data path:(id)path cryptoKey:(id)key;	// 0x30ec092d
- (id)initWithPath:(id)path;	// 0x30ec05c5
- (id)initWithPath:(id)path cryptoKey:(id)key dataLength:(long long)length;	// 0x30ec05ed
- (id)initWithPath:(id)path sharedFileDescriptor:(int)descriptor;	// 0x30d63821
- (id)initWithPath:(id)path sharedFileDescriptor:(int)descriptor cryptoKey:(id)key dataLength:(long long)length;	// 0x30d6384d
- (long long)dataLength;	// 0x30d63f95
- (void)dealloc;	// 0x30d8295d
- (void)deleteFileWhenDone;	// 0x30ec05b1
- (id)description;	// 0x30ec063d
- (long long)encodedLength;	// 0x30d63fd5
// converted property getter: - (unsigned long)fileType;	// 0x30ec0685
- (BOOL)hasSameLocationAs:(id)as;	// 0x30ec0711
- (id)inputStream;	// 0x30d641e5
- (BOOL)isCryptoKeyIdenticalToKey:(id)key;	// 0x30ec06cd
- (BOOL)isEncrypted;	// 0x30ec0599
- (BOOL)isReadable;	// 0x30ec06ad
- (id)path;	// 0x30d63981
- (void)readFileAttributes;	// 0x30d64001
// converted property setter: - (void)setFileType:(unsigned long)type;	// 0x30ec0795
@end

