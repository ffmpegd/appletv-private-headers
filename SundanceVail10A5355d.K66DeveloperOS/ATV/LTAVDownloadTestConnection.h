/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "LTDownloadTestConnection.h"
#import "BRDownload.h"

@class ATVVideoCacheManager;

__attribute__((visibility("hidden")))
@interface LTAVDownloadTestConnection : LTDownloadTestConnection <BRDownload> {
	ATVVideoCacheManager *_videoCacheManager;	// 96 = 0x60
	double _computedBandwidth;	// 100 = 0x64
	long long _lastBytesTransferred;	// 108 = 0x6c
	unsigned long _consecutiveSameBytesTransferredNeeded;	// 116 = 0x74
	unsigned long long _numSamplesTakenToComputeTime;	// 120 = 0x78
}
- (id)initWithURLString:(id)urlstring;	// 0x5eff9
- (void).cxx_destruct;	// 0x5f8b9
- (unsigned long long)byteCount;	// 0x5f889
- (void)downloadFinished;	// 0x5f771
- (int)downloadState;	// 0x5f839
- (int)downloadStateContext;	// 0x5f85d
- (double)elapsedTime;	// 0x5f09d
- (unsigned)expectedContentLength;	// 0x5f0cd
- (unsigned long long)expectedSize;	// 0x5f871
- (unsigned)fetchedDataLength;	// 0x5f0b9
- (void)markProgress;	// 0x5f2c1
- (void)pause;	// 0x5f8ad
- (int)qualifiedDownloadState;	// 0x5f84d
- (void)resume;	// 0x5f8b1
- (void)setPlayable:(BOOL)playable;	// 0x5f8a9
- (void)startConnection;	// 0x5f0d1
- (double)startTime;	// 0x5f081
- (void)stopConnection;	// 0x5f1f5
- (BOOL)testContent;	// 0x5f8b5
- (double)timeUntilPlayable;	// 0x5f89d
@end
