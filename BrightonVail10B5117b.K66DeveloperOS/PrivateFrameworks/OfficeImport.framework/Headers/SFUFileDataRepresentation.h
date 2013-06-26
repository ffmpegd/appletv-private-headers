/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "SFUDataRepresentation.h"

@class NSString, SFUCryptoKey;

@interface SFUFileDataRepresentation : SFUDataRepresentation {
	NSString *mPath;	// 20 = 0x14
	int mSharedFd;	// 24 = 0x18
	long long mFileLength;	// 28 = 0x1c
	unsigned long mFileType;	// 36 = 0x24
	BOOL mHasFileAttributes;	// 40 = 0x28
	long long mPlaintextDataLength;	// 44 = 0x2c
	SFUCryptoKey *mCryptoKey;	// 52 = 0x34
	BOOL mDeleteFileWhenDone;	// 56 = 0x38
}
@property(assign) unsigned long fileType;	// G=0x34ca430d; S=0x34ca4335; converted property
- (id)initWithCopyOfData:(id)data path:(id)path;	// 0x34ca3f01
- (id)initWithCopyOfData:(id)data path:(id)path cryptoKey:(id)key;	// 0x34ca3f25
- (id)initWithPath:(id)path;	// 0x34ca3ead
- (id)initWithPath:(id)path cryptoKey:(id)key dataLength:(long long)length;	// 0x34ca3ed5
- (id)initWithPath:(id)path sharedFileDescriptor:(int)descriptor;	// 0x34aace39
- (id)initWithPath:(id)path sharedFileDescriptor:(int)descriptor cryptoKey:(id)key dataLength:(long long)length;	// 0x34aace65
- (long long)dataLength;	// 0x34aad9f1
- (void)dealloc;	// 0x34ae3361
- (void)deleteFileWhenDone;	// 0x34ca45d1
- (id)description;	// 0x34ca42c5
- (long long)encodedLength;	// 0x34aad6cd
// converted property getter: - (unsigned long)fileType;	// 0x34ca430d
- (BOOL)hasSameLocationAs:(id)as;	// 0x34ca4559
- (id)inputStream;	// 0x34aad525
- (BOOL)isCryptoKeyIdenticalToKey:(id)key;	// 0x34ca4511
- (BOOL)isEncrypted;	// 0x34ca44f9
- (BOOL)isReadable;	// 0x34ca44dd
- (id)path;	// 0x34aacf89
- (void)readFileAttributes;	// 0x34aad6f9
// converted property setter: - (void)setFileType:(unsigned long)type;	// 0x34ca4335
@end
