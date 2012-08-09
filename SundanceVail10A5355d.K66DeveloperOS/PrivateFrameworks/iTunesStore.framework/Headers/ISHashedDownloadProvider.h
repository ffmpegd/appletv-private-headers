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
@property(retain) NSArray *hashes;	// G=0x37a6240d; S=0x37a62421; @synthesize=_hashes
@property(retain) NSString *localFilePath;	// G=0x37a62431; S=0x37a62445; @synthesize=_localFilePath
@property(assign) long long numberOfBytesToHash;	// G=0x37a62455; S=0x37a62489; @synthesize=_numberOfBytesToHash
@property(assign) BOOL shouldResumeFromLocalBytes;	// G=0x37a624bd; S=0x37a624d5; @synthesize=_shouldResumeFromLocalBytes
@property(assign) long long streamedBytes;	// G=0x37a624ed; S=0x37a62521; @synthesize=_totalBytesWritten
@property(assign) long long validatedBytes;	// G=0x37a62555; S=0x37a62589; @synthesize=_validatedBytes
- (id)init;	// 0x37a61559
- (BOOL)_checkHashForByteCount:(long long)byteCount;	// 0x37a61cad
- (void)_closeFile;	// 0x37a61d95
- (BOOL)_openFile;	// 0x37a61dbd
- (BOOL)_truncateToSize:(long long)size;	// 0x37a61ea5
- (long long)_verifiedBytesByInitializingHashForFileSize:(long long)fileSize;	// 0x37a61f09
- (BOOL)_writeDataWithHashing:(id)hashing returningError:(id *)error;	// 0x37a6205d
- (BOOL)_writeDataWithoutHashing:(id)hashing returningError:(id *)error;	// 0x37a62311
- (BOOL)canStreamContentLength:(long long)length error:(id *)error;	// 0x37a616c9
- (void)closeStream;	// 0x37a619e5
- (id)copyWithZone:(NSZone *)zone;	// 0x37a61615
- (void)dealloc;	// 0x37a615ad
// declared property getter: - (id)hashes;	// 0x37a6240d
- (BOOL)isStream;	// 0x37a61a25
// declared property getter: - (id)localFilePath;	// 0x37a62431
// declared property getter: - (long long)numberOfBytesToHash;	// 0x37a62455
- (BOOL)parseData:(id)data returningError:(id *)error;	// 0x37a61a29
- (void)resetStream;	// 0x37a61af1
// declared property setter: - (void)setHashes:(id)hashes;	// 0x37a62421
// declared property setter: - (void)setLocalFilePath:(id)path;	// 0x37a62445
// declared property setter: - (void)setNumberOfBytesToHash:(long long)hash;	// 0x37a62489
// declared property setter: - (void)setShouldResumeFromLocalBytes:(BOOL)resumeFromLocalBytes;	// 0x37a624d5
// declared property setter: - (void)setStreamedBytes:(long long)bytes;	// 0x37a62521
// declared property setter: - (void)setValidatedBytes:(long long)bytes;	// 0x37a62589
- (void)setup;	// 0x37a61b4d
// declared property getter: - (BOOL)shouldResumeFromLocalBytes;	// 0x37a624bd
// declared property getter: - (long long)streamedBytes;	// 0x37a624ed
// declared property getter: - (long long)validatedBytes;	// 0x37a62555
@end
