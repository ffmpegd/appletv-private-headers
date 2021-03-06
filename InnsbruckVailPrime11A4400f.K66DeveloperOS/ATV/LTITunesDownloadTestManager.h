/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRDownloadManager.h"
#import "LTNetworkTestDownloadDelegate.h"
#import "ATVITunesMetricsUploaderConnectionDelegate.h"

@class NSMutableArray, LTDownloadTestConnection, NSString, NSMutableDictionary, NSDictionary, NSArray, ATVNetworkStatisticsMonitor, NSHTTPCookie, NSDateFormatter;

__attribute__((visibility("hidden")))
@interface LTITunesDownloadTestManager : BRDownloadManager <LTNetworkTestDownloadDelegate, ATVITunesMetricsUploaderConnectionDelegate> {
	NSDictionary *_uploadUserInput;	// 12 = 0xc
	NSArray *_downloadURLs;	// 16 = 0x10
	NSArray *_avDownloadURLs;	// 20 = 0x14
	NSMutableDictionary *_optionalHeadersDictionary;	// 24 = 0x18
	NSString *_speedTestGUID;	// 28 = 0x1c
	unsigned _currentNetworkDownloadDataCount;	// 32 = 0x20
	unsigned _currentNetworkAVDownloadDataCount;	// 36 = 0x24
	unsigned _currentNetworkUploadDataCount;	// 40 = 0x28
	int _sessionDownloadCapTime;	// 44 = 0x2c
	long _sessionDownloadCapBytes;	// 48 = 0x30
	unsigned _totalTestsCount;	// 52 = 0x34
	unsigned _homeShareTestURLsCount;	// 56 = 0x38
	BOOL _networkTestInProgress;	// 60 = 0x3c
	BOOL _networkDownloadInProgress;	// 61 = 0x3d
	BOOL _networkUploadInProgress;	// 62 = 0x3e
	BOOL _shouldUploadLogs;	// 63 = 0x3f
	NSMutableArray *_uploadLogData;	// 64 = 0x40
	LTDownloadTestConnection *_currentDownloadConnection;	// 68 = 0x44
	NSHTTPCookie *_downloadKeyCookie;	// 72 = 0x48
	NSDateFormatter *_dateFormat;	// 76 = 0x4c
	ATVNetworkStatisticsMonitor *_networkMonitor;	// 80 = 0x50
}
@property(readonly, assign) BOOL networkTestInProgress;	// G=0x18e11; converted property
- (id)init;	// 0x186e5
- (void).cxx_destruct;	// 0x1a1c5
- (id)_avDownloads;	// 0x1b6e1
- (id)_homeShareTestURLs;	// 0x1b959
- (id)_httpDownloads;	// 0x1b5a1
- (void)_pauseAllDownloads;	// 0x1aa15
- (void)_resetManager;	// 0x1bda1
- (void)_resumeAllDownloads;	// 0x1abf9
- (BOOL)_startNextAVDownloadTest;	// 0x1a669
- (BOOL)_startNextDownloadTest;	// 0x1a299
- (void)_uploadNetworkSamplingData;	// 0x1adb5
- (void)cancelNetworkSpeedTest;	// 0x195a5
- (void)connection:(id)connection didFailWithError:(id)error;	// 0x19aa9
- (void)connection:(id)connection didGetMeasuredBytesPerSecond:(double)second atTime:(double)time;	// 0x197f5
- (void)connectionDidFinishLoading:(id)connection;	// 0x19c55
- (void)dealloc;	// 0x1857d
- (id)dictionaryForDownload:(id)download;	// 0x1be35
- (id)dictionaryForDownload:(id)download includingTCPStats:(BOOL)stats;	// 0x1be59
- (long)downloadCapBytes;	// 0x18c55
- (int)downloadCapTime;	// 0x18a99
- (BOOL)networkDiagnosticsAvailable;	// 0x188d9
// converted property getter: - (BOOL)networkTestInProgress;	// 0x18e11
- (void)setSessionDownloadCapBytes:(long)bytes;	// 0x18e01
- (void)setSessionDownloadCapTime:(int)time;	// 0x18c45
- (BOOL)shouldPerformMatchingAVDownloadTests;	// 0x189b9
- (void)startNetworkSpeedTestWithUserInput:(id)userInput;	// 0x18e21
- (void)startNetworkSpeedTestWithUserInput:(id)userInput testType:(unsigned long)type;	// 0x18e39
@end

