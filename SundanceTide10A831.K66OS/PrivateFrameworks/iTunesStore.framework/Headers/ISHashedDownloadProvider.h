/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import "NSCopying.h"
#import "iTunesStore-Structs.h"
#import "ISDataProvider.h"

@class NSArray, NSString;

@interface ISHashedDownloadProvider : ISDataProvider <NSCopying> {
	int _fileDescriptor;	// 48 = 0x30
	NSArray *_hashes;	// 52 = 0x34
	NSString *_localFilePath;	// 56 = 0x38
	CC_MD5state_st _md5Context;	// 60 = 0x3c
	long long _numberOfBytesToHash;	// 152 = 0x98
	BOOL _shouldResumeFromLocalBytes;	// 160 = 0xa0
	long long _totalBytesWritten;	// 164 = 0xa4
	long long _validatedBytes;	// 172 = 0xac
}
@property(retain) NSArray *hashes;	// G=0x3142c32d; S=0x3142c341; @synthesize=_hashes
@property(retain) NSString *localFilePath;	// G=0x3142c351; S=0x3142c365; @synthesize=_localFilePath
@property(assign) long long numberOfBytesToHash;	// G=0x3142c375; S=0x3142c3a9; @synthesize=_numberOfBytesToHash
@property(assign) BOOL shouldResumeFromLocalBytes;	// G=0x3142c3dd; S=0x3142c3f5; @synthesize=_shouldResumeFromLocalBytes
@property(assign) long long streamedBytes;	// G=0x3142c40d; S=0x3142c441; @synthesize=_totalBytesWritten
@property(assign) long long validatedBytes;	// G=0x3142c475; S=0x3142c4a9; @synthesize=_validatedBytes
- (id)init;	// 0x3142b465
- (BOOL)_checkHashForByteCount:(long long)byteCount;	// 0x3142bbcd
- (void)_closeFile;	// 0x3142bcb5
- (BOOL)_openFile;	// 0x3142bcdd
- (BOOL)_truncateToSize:(long long)size;	// 0x3142bdc5
- (long long)_verifiedBytesByInitializingHashForFileSize:(long long)fileSize;	// 0x3142be29
- (BOOL)_writeDataWithHashing:(id)hashing returningError:(id *)error;	// 0x3142bf7d
- (BOOL)_writeDataWithoutHashing:(id)hashing returningError:(id *)error;	// 0x3142c231
- (BOOL)canStreamContentLength:(long long)length error:(id *)error;	// 0x3142b5e9
- (void)closeStream;	// 0x3142b905
- (id)copyWithZone:(NSZone *)zone;	// 0x3142b535
- (void)dealloc;	// 0x3142b4cd
// declared property getter: - (id)hashes;	// 0x3142c32d
- (BOOL)isStream;	// 0x3142b945
// declared property getter: - (id)localFilePath;	// 0x3142c351
// declared property getter: - (long long)numberOfBytesToHash;	// 0x3142c375
- (BOOL)parseData:(id)data returningError:(id *)error;	// 0x3142b949
- (void)resetStream;	// 0x3142ba11
// declared property setter: - (void)setHashes:(id)hashes;	// 0x3142c341
// declared property setter: - (void)setLocalFilePath:(id)path;	// 0x3142c365
// declared property setter: - (void)setNumberOfBytesToHash:(long long)hash;	// 0x3142c3a9
// declared property setter: - (void)setShouldResumeFromLocalBytes:(BOOL)resumeFromLocalBytes;	// 0x3142c3f5
// declared property setter: - (void)setStreamedBytes:(long long)bytes;	// 0x3142c441
// declared property setter: - (void)setValidatedBytes:(long long)bytes;	// 0x3142c4a9
- (void)setup;	// 0x3142ba6d
// declared property getter: - (BOOL)shouldResumeFromLocalBytes;	// 0x3142c3dd
// declared property getter: - (long long)streamedBytes;	// 0x3142c40d
// declared property getter: - (long long)validatedBytes;	// 0x3142c475
@end

