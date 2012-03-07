/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRSingleton.h"

@class NSMutableDictionary, NSMutableArray;

@interface ATVITunesMetricsUploader : BRSingleton {
@private
	NSMutableArray *_uploadQueue;	// 4 = 0x4
	NSMutableDictionary *_logCurrentlyUploading;	// 8 = 0x8
	int _lastDSID;	// 12 = 0xc
}
@property(assign) int lastDSID;	// G=0x341643bd; S=0x341643cd; @synthesize=_lastDSID
@property(retain) NSMutableDictionary *logCurrentlyUploading;	// G=0x34164385; S=0x34164399; @synthesize=_logCurrentlyUploading
@property(retain) NSMutableArray *uploadQueue;	// G=0x3416434d; S=0x34164361; @synthesize=_uploadQueue
+ (id)generateGUID;	// 0x34163efd
+ (unsigned long long)preferredAccountDSID;	// 0x34163f45
+ (void)setSingleton:(id)singleton;	// 0x34163eed
+ (id)singleton;	// 0x34163edd
- (id)init;	// 0x34163fe9
- (void)_sendNextUploadLog;	// 0x34164531
- (void)augmentDownloadInfoWithExtraData:(id)extraData;	// 0x341643dd
- (void)connection:(id)connection didFailWithError:(id)error;	// 0x34165021
- (void)connection:(id)connection didReceiveResponse:(id)response;	// 0x341650c5
- (id)connection:(id)connection willCacheResponse:(id)response;	// 0x34165105
- (void)connectionDidFinishLoading:(id)connection;	// 0x34164f71
- (void)dealloc;	// 0x34164069
- (void)enqueueBlock:(id)block;	// 0x34164201
- (void)enqueueMetricsDictionary:(id)dictionary withDelegate:(id)delegate;	// 0x341640c9
// declared property getter: - (int)lastDSID;	// 0x341643bd
// declared property getter: - (id)logCurrentlyUploading;	// 0x34164385
// declared property setter: - (void)setLastDSID:(int)dsid;	// 0x341643cd
// declared property setter: - (void)setLogCurrentlyUploading:(id)uploading;	// 0x34164399
// declared property setter: - (void)setUploadQueue:(id)queue;	// 0x34164361
- (void)uploadAvailableMetrics;	// 0x3416432d
// declared property getter: - (id)uploadQueue;	// 0x3416434d
@end
