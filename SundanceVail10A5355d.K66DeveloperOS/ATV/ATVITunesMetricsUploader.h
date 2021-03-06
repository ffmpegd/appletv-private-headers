/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRSingleton.h"

@class NSMutableArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface ATVITunesMetricsUploader : BRSingleton {
	NSMutableArray *_uploadQueue;	// 4 = 0x4
	NSMutableDictionary *_logCurrentlyUploading;	// 8 = 0x8
	int _lastDSID;	// 12 = 0xc
}
@property(assign) int lastDSID;	// G=0x1f0b79; S=0x1f0b8d; @synthesize=_lastDSID
@property(retain) NSMutableDictionary *logCurrentlyUploading;	// G=0x1f0b55; S=0x1f0b69; @synthesize=_logCurrentlyUploading
@property(retain) NSMutableArray *uploadQueue;	// G=0x1f0b31; S=0x1f0b45; @synthesize=_uploadQueue
+ (id)generateGUID;	// 0x1f01c5
+ (unsigned long long)preferredAccountDSID;	// 0x1f020d
+ (void)setSingleton:(id)singleton;	// 0x1f01b5
+ (id)singleton;	// 0x1f01a5
- (id)init;	// 0x1f02b1
- (id)_downloadSpeedTestKVSDomain;	// 0x1f0625
- (void)_sendNextUploadLog;	// 0x1f0d05
- (void)augmentDownloadInfoWithExtraData:(id)extraData;	// 0x1f0ba5
- (void)connection:(id)connection didFailWithError:(id)error;	// 0x1f0fc1
- (void)connection:(id)connection didReceiveResponse:(id)response;	// 0x1f1061
- (id)connection:(id)connection willCacheResponse:(id)response;	// 0x1f109d
- (void)connectionDidFinishLoading:(id)connection;	// 0x1f0f11
- (void)dealloc;	// 0x1f032d
- (void)enqueueBlock:(id)block;	// 0x1f04e1
- (void)enqueueMetricsDictionary:(id)dictionary withDelegate:(id)delegate;	// 0x1f0391
// declared property getter: - (int)lastDSID;	// 0x1f0b79
// declared property getter: - (id)logCurrentlyUploading;	// 0x1f0b55
- (BOOL)sendLogDictionary:(id)dictionary;	// 0x1f0679
// declared property setter: - (void)setLastDSID:(int)dsid;	// 0x1f0b8d
// declared property setter: - (void)setLogCurrentlyUploading:(id)uploading;	// 0x1f0b69
// declared property setter: - (void)setUploadQueue:(id)queue;	// 0x1f0b45
- (void)uploadAvailableMetrics;	// 0x1f0615
// declared property getter: - (id)uploadQueue;	// 0x1f0b31
@end

