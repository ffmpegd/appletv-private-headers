/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "BRDownload.h"

@class NSURLConnection, NSDictionary, NSHTTPURLResponse, NSTimer, NSString, NSMutableArray;
@protocol LTNetworkTestDownloadDelegate;

__attribute__((visibility("hidden")))
@interface LTDownloadTestConnection : XXUnknownSuperclass <BRDownload> {
	double _startTime;	// 4 = 0x4
	double _receivedResponseTime;	// 12 = 0xc
	double _elapsedTime;	// 20 = 0x14
	unsigned _lastMarkedLength;	// 28 = 0x1c
	double _cachedMeasuredBandwidth;	// 32 = 0x20
	double _endTime;	// 40 = 0x28
	NSTimer *_measuringTimer;	// 48 = 0x30
	NSString *_urlString;	// 52 = 0x34
	NSDictionary *_options;	// 56 = 0x38
	NSURLConnection *_urlConnection;	// 60 = 0x3c
	unsigned _fetchedDataLength;	// 64 = 0x40
	NSHTTPURLResponse *_urlResponse;	// 68 = 0x44
	NSMutableArray *_progressArray;	// 72 = 0x48
	int _downloadState;	// 76 = 0x4c
	int _downloadContext;	// 80 = 0x50
	id<LTNetworkTestDownloadDelegate> _delegate;	// 84 = 0x54
	int _downloadCapTime;	// 88 = 0x58
	long _downloadCapBytes;	// 92 = 0x5c
}
@property(assign) id delegate;	// G=0x440fd; S=0x440e9; converted property
@property(readonly, assign) int downloadState;	// G=0x449f9; converted property
@property(readonly, assign) double elapsedTime;	// G=0x44095; converted property
@property(readonly, assign) unsigned fetchedDataLength;	// G=0x440ad; converted property
@property(readonly, retain) NSDictionary *options;	// G=0x447cd; converted property
@property(readonly, assign) double startTime;	// G=0x4407d; converted property
- (id)init;	// 0x43ec5
- (id)initWithURLString:(id)urlstring;	// 0x43ef5
- (id)initWithURLString:(id)urlstring andOptions:(id)options;	// 0x43f1d
- (void).cxx_destruct;	// 0x44a71
- (unsigned long long)byteCount;	// 0x44a41
- (void)connection:(id)connection didFailWithError:(id)error;	// 0x44981
- (void)connection:(id)connection didReceiveData:(id)data;	// 0x44881
- (void)connection:(id)connection didReceiveResponse:(id)response;	// 0x4480d
- (id)connection:(id)connection willCacheResponse:(id)response;	// 0x449f5
- (void)connectionDidFinishLoading:(id)connection;	// 0x448ad
- (id)contentType;	// 0x44785
- (void)dealloc;	// 0x43e69
// converted property getter: - (id)delegate;	// 0x440fd
// converted property getter: - (int)downloadState;	// 0x449f9
- (int)downloadStateContext;	// 0x44a19
// converted property getter: - (double)elapsedTime;	// 0x44095
- (unsigned)expectedContentLength;	// 0x440bd
- (unsigned long long)expectedSize;	// 0x44a29
// converted property getter: - (unsigned)fetchedDataLength;	// 0x440ad
- (void)markProgress;	// 0x444d1
- (double)measuredBytesPerSecond;	// 0x447f5
// converted property getter: - (id)options;	// 0x447cd
- (id)originalURLString;	// 0x447e1
- (void)pause;	// 0x44a65
- (id)progressLogs;	// 0x447a5
- (int)qualifiedDownloadState;	// 0x44a09
- (id)response;	// 0x447b9
- (void)resume;	// 0x44a69
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x440e9
- (void)setDownloadCapBytes:(long)bytes;	// 0x44121
- (void)setDownloadCapTime:(int)time;	// 0x44111
- (void)setPlayable:(BOOL)playable;	// 0x44a61
- (void)startConnection;	// 0x44131
// converted property getter: - (double)startTime;	// 0x4407d
- (void)stopConnection;	// 0x4445d
- (BOOL)testContent;	// 0x44a6d
- (double)timeUntilPlayable;	// 0x44a55
@end

