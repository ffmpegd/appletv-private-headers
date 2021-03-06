/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRDownloadManager.h"
#import "LTNetworkTestDownloadDelegate.h"
#import "ATVITunesMetricsUploaderConnectionDelegate.h"

@class NSArray, NSString, NSDictionary, NSMutableDictionary, NSHTTPCookie, NSDateFormatter, ATVNetworkStatisticsMonitor, LTDownloadTestConnection, NSMutableArray;

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
@property(readonly, assign) BOOL networkTestInProgress;	// G=0x43159; converted property
- (id)init;	// 0x42a31
- (void).cxx_destruct;	// 0x4432d
- (id)_avDownloads;	// 0x45751
- (id)_homeShareTestURLs;	// 0x45989
- (id)_httpDownloads;	// 0x4563d
- (void)_pauseAllDownloads;	// 0x44b65
- (void)_resetManager;	// 0x45d99
- (void)_resumeAllDownloads;	// 0x44d3d
- (BOOL)_startNextAVDownloadTest;	// 0x447d9
- (BOOL)_startNextDownloadTest;	// 0x44401
- (void)_uploadNetworkSamplingData;	// 0x44eed
- (void)cancelNetworkSpeedTest;	// 0x43851
- (void)connection:(id)connection didFailWithError:(id)error;	// 0x43cdd
- (void)connection:(id)connection didGetMeasuredBytesPerSecond:(double)second atTime:(double)time;	// 0x43a9d
- (void)connectionDidFinishLoading:(id)connection;	// 0x43e61
- (void)dealloc;	// 0x428e9
- (id)dictionaryForDownload:(id)download;	// 0x45e2d
- (id)dictionaryForDownload:(id)download includingTCPStats:(BOOL)stats;	// 0x45e4d
- (long)downloadCapBytes;	// 0x42fa1
- (int)downloadCapTime;	// 0x42ded
- (BOOL)networkDiagnosticsAvailable;	// 0x42c25
// converted property getter: - (BOOL)networkTestInProgress;	// 0x43159
- (void)setSessionDownloadCapBytes:(long)bytes;	// 0x43149
- (void)setSessionDownloadCapTime:(int)time;	// 0x42f91
- (BOOL)shouldPerformMatchingAVDownloadTests;	// 0x42d09
- (void)startNetworkSpeedTestWithUserInput:(id)userInput;	// 0x43169
- (void)startNetworkSpeedTestWithUserInput:(id)userInput testType:(unsigned long)type;	// 0x43181
@end

