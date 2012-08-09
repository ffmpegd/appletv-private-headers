/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "AppleTV-Structs.h"

@class AVPlayerItem, NSString, NSMutableArray, NSTimer, NSMutableDictionary;
@protocol BRMediaAsset;

__attribute__((visibility("hidden")))
@interface ATVPlaybackProgressMonitor : XXUnknownSuperclass {
	AVPlayerItem *_playerItem;	// 4 = 0x4
	id<BRMediaAsset> _mediaAsset;	// 8 = 0x8
	NSString *_mediaQuality;	// 12 = 0xc
	NSString *_sessionID;	// 16 = 0x10
	NSString *_cachedNetworkInterface;	// 20 = 0x14
	BOOL _shouldSaveAccessLogs;	// 24 = 0x18
	BOOL _shouldDisplayBitRate;	// 25 = 0x19
	BOOL _isCaching;	// 26 = 0x1a
	BOOL _monitorActive;	// 27 = 0x1b
	double _startTime;	// 28 = 0x1c
	NSTimer *_sampleTimer;	// 36 = 0x24
	double _sampleInterval;	// 40 = 0x28
	unsigned _sampleNumber;	// 48 = 0x30
	NSMutableArray *_wifiEvents;	// 52 = 0x34
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
	WiFiDeviceClient *_airportDevice;	// 176 = 0xb0
	unsigned _playbackStallCount;	// 180 = 0xb4
}
@property(assign) WiFiDeviceClient *airportDevice;	// G=0x20d8f9; S=0x20d90d; @synthesize=_airportDevice
@property(assign) BOOL isCaching;	// G=0x20da7d; S=0x20da95; @synthesize=_isCaching
@property(retain) id<BRMediaAsset> mediaAsset;	// G=0x20da11; S=0x20da25; @synthesize=_mediaAsset
@property(retain) NSString *mediaQuality;	// G=0x20d8a9; S=0x20d8bd; @synthesize=_mediaQuality
@property(assign) BOOL monitorActive;	// G=0x20db41; S=0x20db59; @synthesize=_monitorActive
@property(assign) double mostRecentBandwidth;	// G=0x20daad; S=0x20dae1; @synthesize=_mostRecentBandwidth
@property(copy) NSString *mostRecentServerIP;	// G=0x20da59; S=0x20da6d; @synthesize=_mostRecentServerIP
@property(assign) unsigned playbackStallCount;	// G=0x20db15; S=0x20db29; @synthesize=_playbackStallCount
@property(assign) AVPlayerItem *playerItem;	// G=0x20d859; S=0x20d86d; @synthesize=_playerItem
@property(retain) NSMutableDictionary *progressDescription;	// G=0x20d925; S=0x20d939; @synthesize=_progressDescription
@property(retain) NSMutableArray *progressEvents;	// G=0x20d885; S=0x20d899; @synthesize=_progressEvents
@property(readonly, assign) double sampleInterval;	// G=0x20d975; @synthesize=_sampleInterval
@property(assign) unsigned sampleNumber;	// G=0x20d8cd; S=0x20d8e1; @synthesize=_sampleNumber
@property(assign) NSTimer *sampleTimer;	// G=0x20d949; S=0x20d95d; @synthesize=_sampleTimer
@property(assign) unsigned long long totalBytesRead;	// G=0x20d9a9; S=0x20d9dd; @synthesize=_totalBytesRead
@property(retain) NSMutableArray *wifiEvents;	// G=0x20da35; S=0x20da49; @synthesize=_wifiEvents
+ (void)_initializeLogCache;	// 0x20b03d
+ (id)availableLogs;	// 0x20b3b9
+ (void)initialize;	// 0x20af21
+ (id)loadLogsToBeUploaded;	// 0x20b1f9
+ (id)nextLogPath;	// 0x20b151
+ (id)progressMonitorForPlayerItem:(id)playerItem andMediaAsset:(id)asset createIfNecessary:(BOOL)necessary;	// 0x20b4c9
+ (void)resetLogs;	// 0x20b3c9
- (void)_disconnectProgressMonitor;	// 0x20ca0d
- (id)_gatherAdditionalMetrics;	// 0x20d851
- (id)_gatherMetrics;	// 0x20dfbd
- (void)_gatherNetworkInterface:(id)interface;	// 0x20ea15
- (id)_initWithPlayerItem:(id)playerItem andMediaAsset:(id)asset;	// 0x20db71
- (id)_mediaQualityStringFromMediaAsset:(id)mediaAsset;	// 0x20d3f9
- (void)_playerStateChanged:(id)changed;	// 0x20ea9d
- (void)_playerTimeSkipped:(id)skipped;	// 0x20eb69
- (void)_requestCompleted:(id)completed;	// 0x20e5a1
- (void)_sendPlaybackEvent:(id)event withValues:(id)values;	// 0x20e651
- (id)_shortPlayerStateDescriptionForState:(int)state;	// 0x20ec71
- (void)_submitAdditionalFinalBeacons:(BOOL)beacons;	// 0x20d855
- (void)_submitReportAndDisconnect:(BOOL)disconnect;	// 0x20cb29
- (void)_takeAdditionalPeriodicSamples:(id)samples andDescriptions:(id)descriptions;	// 0x20ca09
- (void)_takePeriodicSample:(id)sample;	// 0x20bb99
- (void)_timeSkippedTimerFired:(id)fired;	// 0x20ec35
// declared property getter: - (WiFiDeviceClient *)airportDevice;	// 0x20d8f9
- (void)cachingStarted:(id)started;	// 0x20d491
- (void)cachingStopped;	// 0x20d4ed
- (void)dealloc;	// 0x20b691
- (void)finishPeriodicSample;	// 0x20ca05
// declared property getter: - (BOOL)isCaching;	// 0x20da7d
// declared property getter: - (id)mediaAsset;	// 0x20da11
// declared property getter: - (id)mediaQuality;	// 0x20d8a9
- (id)mediaTypeString;	// 0x20d801
// declared property getter: - (BOOL)monitorActive;	// 0x20db41
// declared property getter: - (double)mostRecentBandwidth;	// 0x20daad
// declared property getter: - (id)mostRecentServerIP;	// 0x20da59
// declared property getter: - (unsigned)playbackStallCount;	// 0x20db15
- (void)playerActivated:(id)activated;	// 0x20d501
- (void)playerDeactivated;	// 0x20d549
// declared property getter: - (id)playerItem;	// 0x20d859
- (void)playerItemMonitoringStarted;	// 0x20d4e9
// declared property getter: - (id)progressDescription;	// 0x20d925
// declared property getter: - (id)progressEvents;	// 0x20d885
// declared property getter: - (double)sampleInterval;	// 0x20d975
// declared property getter: - (unsigned)sampleNumber;	// 0x20d8cd
// declared property getter: - (id)sampleTimer;	// 0x20d949
// declared property setter: - (void)setAirportDevice:(WiFiDeviceClient *)device;	// 0x20d90d
// declared property setter: - (void)setIsCaching:(BOOL)caching;	// 0x20da95
// declared property setter: - (void)setMediaAsset:(id)asset;	// 0x20da25
// declared property setter: - (void)setMediaQuality:(id)quality;	// 0x20d8bd
// declared property setter: - (void)setMonitorActive:(BOOL)active;	// 0x20db59
// declared property setter: - (void)setMostRecentBandwidth:(double)bandwidth;	// 0x20dae1
// declared property setter: - (void)setMostRecentServerIP:(id)ip;	// 0x20da6d
// declared property setter: - (void)setPlaybackStallCount:(unsigned)count;	// 0x20db29
// declared property setter: - (void)setPlayerItem:(id)item;	// 0x20d86d
// declared property setter: - (void)setProgressDescription:(id)description;	// 0x20d939
// declared property setter: - (void)setProgressEvents:(id)events;	// 0x20d899
// declared property setter: - (void)setSampleNumber:(unsigned)number;	// 0x20d8e1
// declared property setter: - (void)setSampleTimer:(id)timer;	// 0x20d95d
// declared property setter: - (void)setTotalBytesRead:(unsigned long long)read;	// 0x20d9dd
// declared property setter: - (void)setWifiEvents:(id)events;	// 0x20da49
- (void)startPeriodicSample;	// 0x20ca01
- (void)startSamplingIfNecessary;	// 0x20b861
- (id)streamingType;	// 0x20d845
// declared property getter: - (unsigned long long)totalBytesRead;	// 0x20d9a9
// declared property getter: - (id)wifiEvents;	// 0x20da35
@end
