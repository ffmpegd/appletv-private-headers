/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class NSMutableArray, NSTimer, AVPlayerItem, NSString, NSMutableDictionary;
@protocol BRMediaAsset;

@interface ATVPlaybackProgressMonitor : NSObject {
@private
	AVPlayerItem *_playerItem;	// 4 = 0x4
	id<BRMediaAsset> _mediaAsset;	// 8 = 0x8
	NSString *_mediaQuality;	// 12 = 0xc
	NSString *_sessionID;	// 16 = 0x10
	NSString *_cachedNetworkInterface;	// 20 = 0x14
	BOOL _shouldDisplayBitRate;	// 24 = 0x18
	BOOL _isCaching;	// 25 = 0x19
	BOOL _monitorActive;	// 26 = 0x1a
	double _startTime;	// 28 = 0x1c
	BOOL _shouldSubmitBeacons;	// 36 = 0x24
	NSTimer *_sampleTimer;	// 40 = 0x28
	double _sampleInterval;	// 44 = 0x2c
	unsigned _sampleNumber;	// 52 = 0x34
	NSMutableDictionary *_progressDescription;	// 56 = 0x38
	NSMutableArray *_progressEvents;	// 60 = 0x3c
	NSString *_latestSampledServerIPAddress;	// 64 = 0x40
	NSString *_mostRecentServerIP;	// 68 = 0x44
	double _bandwidth;	// 72 = 0x48
	double _mostRecentBandwidth;	// 80 = 0x50
	double _meanBandwidth;	// 88 = 0x58
	double _peakBandwidth;	// 96 = 0x60
	double _varBandwidth;	// 104 = 0x68
	double _sumSquaresBandwidth;	// 112 = 0x70
	double _duration;	// 120 = 0x78
	double _elapsedTime;	// 128 = 0x80
	unsigned long long _totalBytesRead;	// 136 = 0x88
	unsigned _samplesUsed;	// 144 = 0x90
	int _currentPlayerState;	// 148 = 0x94
	int _previousPlayerState;	// 152 = 0x98
	int _previousPlusOnePlayerState;	// 156 = 0x9c
	BOOL _didSkipTimeRecently;	// 160 = 0xa0
	NSTimer *_timeSkippedTimer;	// 164 = 0xa4
	NSString *_baseBeaconURLString;	// 168 = 0xa8
	BOOL _shouldSendBeaconsForSession;	// 172 = 0xac
	unsigned _playbackStallCount;	// 176 = 0xb0
}
@property(assign) BOOL isCaching;	// G=0x35f18e89; S=0x35f18e99; @synthesize=_isCaching
@property(retain) id<BRMediaAsset> mediaAsset;	// G=0x35f18df9; S=0x35f18e0d; @synthesize=_mediaAsset
@property(retain) NSString *mediaQuality;	// G=0x35f18e31; S=0x35f18e45; @synthesize=_mediaQuality
@property(assign) BOOL monitorActive;	// G=0x35f18e69; S=0x35f18e79; @synthesize=_monitorActive
@property(assign) double mostRecentBandwidth;	// G=0x35f18fc5; S=0x35f18ff9; @synthesize=_mostRecentBandwidth
@property(copy) NSString *mostRecentServerIP;	// G=0x35f18f8d; S=0x35f18fa1; @synthesize=_mostRecentServerIP
@property(assign) unsigned playbackStallCount;	// G=0x35f19095; S=0x35f190a5; @synthesize=_playbackStallCount
@property(assign) AVPlayerItem *playerItem;	// G=0x35f18dd9; S=0x35f18de9; @synthesize=_playerItem
@property(retain) NSMutableDictionary *progressDescription;	// G=0x35f18ec9; S=0x35f18edd; @synthesize=_progressDescription
@property(retain) NSMutableArray *progressEvents;	// G=0x35f18f01; S=0x35f18f15; @synthesize=_progressEvents
@property(readonly, assign) double sampleInterval;	// G=0x35f18f59; @synthesize=_sampleInterval
@property(assign) unsigned sampleNumber;	// G=0x35f18f39; S=0x35f18f49; @synthesize=_sampleNumber
@property(assign) NSTimer *sampleTimer;	// G=0x35f18ea9; S=0x35f18eb9; @synthesize=_sampleTimer
@property(assign) unsigned long long totalBytesRead;	// G=0x35f1902d; S=0x35f19061; @synthesize=_totalBytesRead
+ (void)_initializeLogCache;	// 0x35f16d4d
+ (id)availableLogs;	// 0x35f170ad
+ (id)beaconDocumentManager;	// 0x35f16c81
+ (void)initialize;	// 0x35f16c45
+ (id)loadLogsToBeUploaded;	// 0x35f16f0d
+ (id)nextLogPath;	// 0x35f16e69
+ (id)progressMonitorForPlayerItem:(id)playerItem andMediaAsset:(id)asset createIfNecessary:(BOOL)necessary;	// 0x35f171a1
+ (void)resetLogs;	// 0x35f170bd
- (void)_disconnectProgressMonitor;	// 0x35f184a5
- (id)_gatherAdditionalMetrics;	// 0x35f18dd1
- (id)_gatherMetrics;	// 0x35f19511
- (void)_gatherNetworkInterface:(id)interface;	// 0x35f19ed1
- (id)_initWithPlayerItem:(id)playerItem andMediaAsset:(id)asset;	// 0x35f190b5
- (void)_playerStateChanged:(id)changed;	// 0x35f19f59
- (void)_playerTimeSkipped:(id)skipped;	// 0x35f1a029
- (void)_sendPlaybackEvent:(id)event withValues:(id)values;	// 0x35f19b75
- (id)_shortPlayerStateDescriptionForState:(int)state;	// 0x35f1a13d
- (void)_submitAdditionalFinalBeacons:(BOOL)beacons;	// 0x35f18dd5
- (void)_submitReportAndDisconnect:(BOOL)disconnect;	// 0x35f18595
- (void)_takeAdditionalPeriodicSamples:(id)samples andDescriptions:(id)descriptions;	// 0x35f184a1
- (void)_takePeriodicSample:(id)sample;	// 0x35f17725
- (void)_timeSkippedTimerFired:(id)fired;	// 0x35f1a101
- (void)cachingStarted:(id)started;	// 0x35f18a9d
- (void)cachingStopped;	// 0x35f18b15
- (void)dealloc;	// 0x35f173c9
- (void)finishPeriodicSample;	// 0x35f1849d
// declared property getter: - (BOOL)isCaching;	// 0x35f18e89
// declared property getter: - (id)mediaAsset;	// 0x35f18df9
// declared property getter: - (id)mediaQuality;	// 0x35f18e31
- (id)mediaTypeString;	// 0x35f18d7d
// declared property getter: - (BOOL)monitorActive;	// 0x35f18e69
// declared property getter: - (double)mostRecentBandwidth;	// 0x35f18fc5
// declared property getter: - (id)mostRecentServerIP;	// 0x35f18f8d
// declared property getter: - (unsigned)playbackStallCount;	// 0x35f19095
- (void)playerActivated:(id)activated;	// 0x35f18b39
- (void)playerDeactivated;	// 0x35f18b9d
// declared property getter: - (id)playerItem;	// 0x35f18dd9
// declared property getter: - (id)progressDescription;	// 0x35f18ec9
// declared property getter: - (id)progressEvents;	// 0x35f18f01
- (id)progressMonitorConfiguration;	// 0x35f18d61
// declared property getter: - (double)sampleInterval;	// 0x35f18f59
// declared property getter: - (unsigned)sampleNumber;	// 0x35f18f39
// declared property getter: - (id)sampleTimer;	// 0x35f18ea9
// declared property setter: - (void)setIsCaching:(BOOL)caching;	// 0x35f18e99
// declared property setter: - (void)setMediaAsset:(id)asset;	// 0x35f18e0d
// declared property setter: - (void)setMediaQuality:(id)quality;	// 0x35f18e45
// declared property setter: - (void)setMonitorActive:(BOOL)active;	// 0x35f18e79
// declared property setter: - (void)setMostRecentBandwidth:(double)bandwidth;	// 0x35f18ff9
// declared property setter: - (void)setMostRecentServerIP:(id)ip;	// 0x35f18fa1
// declared property setter: - (void)setPlaybackStallCount:(unsigned)count;	// 0x35f190a5
// declared property setter: - (void)setPlayerItem:(id)item;	// 0x35f18de9
// declared property setter: - (void)setProgressDescription:(id)description;	// 0x35f18edd
// declared property setter: - (void)setProgressEvents:(id)events;	// 0x35f18f15
// declared property setter: - (void)setSampleNumber:(unsigned)number;	// 0x35f18f49
// declared property setter: - (void)setSampleTimer:(id)timer;	// 0x35f18eb9
// declared property setter: - (void)setTotalBytesRead:(unsigned long long)read;	// 0x35f19061
- (void)startPeriodicSample;	// 0x35f18499
- (void)startSamplingIfNecessary;	// 0x35f174e1
- (id)streamingType;	// 0x35f18dc5
// declared property getter: - (unsigned long long)totalBytesRead;	// 0x35f1902d
@end

