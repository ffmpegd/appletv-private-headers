/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray, NSData, NSDictionary, NSLock;

@interface NetflixPlaybackManager : XXUnknownSuperclass {
	BOOL openNotificationSent_;	// 4 = 0x4
	NSDictionary *movieDetails_;	// 8 = 0x8
	NSData *playReadyKey_;	// 12 = 0xc
	IMediaControl *mediaControl_;	// 16 = 0x10
	NetflixMediaControlListener *mediaControlListener_;	// 20 = 0x14
	NSMutableArray *errorStack_;	// 24 = 0x18
	NSDictionary *reportableActionId_;	// 28 = 0x1c
	NSLock *subtitlesProcessingLock_;	// 32 = 0x20
	BOOL subtitlesProcessing_;	// 36 = 0x24
	int subtitlesTrackIndex_;	// 40 = 0x28
	int audioTrackIndex_;	// 44 = 0x2c
	NSLock *playbackCommandLock_;	// 48 = 0x30
	BOOL playbackCommandInProgress_;	// 52 = 0x34
	int state_;	// 56 = 0x38
	unsigned lastKnownMappedVideoBitrate_;	// 60 = 0x3c
	unsigned lastNumAccessLogEvents_;	// 64 = 0x40
	long long totalBytesTransferred_;	// 68 = 0x44
	double observedBitrate_;	// 76 = 0x4c
	BOOL pollNetworkInterface_;	// 84 = 0x54
	long long pollBytesStart_;	// 88 = 0x58
	BwEntry *bwEntry_;	// 96 = 0x60
	double lastBwEntryTime_;	// 100 = 0x64
	long long lastBwEntryBytes_;	// 108 = 0x6c
	int networkInterfaceType_;	// 116 = 0x74
	long long bufferingStartBytes_;	// 120 = 0x78
	double bufferingStartTime_;	// 128 = 0x80
	double sampleReportWindow_;	// 136 = 0x88
	bool stalled_;	// 144 = 0x90
	int totalNumberOfStalls_;	// 148 = 0x94
}
@property(assign, nonatomic) int audioTrackIndex;	// G=0x4ec159; S=0x4ec169; @synthesize=audioTrackIndex_
@property(readonly, assign, nonatomic) unsigned bitrate;	// G=0x4ebca9; 
@property(assign, nonatomic) long long bufferingStartBytes;	// G=0x4ec375; S=0x4ec38d; @synthesize=bufferingStartBytes_
@property(assign, nonatomic) double bufferingStartTime;	// G=0x4ec3a1; S=0x4ec3b9; @synthesize=bufferingStartTime_
@property(assign, nonatomic) BwEntry *bwEntry;	// G=0x4ec2dd; S=0x4ec2ed; @synthesize=bwEntry_
@property(readonly, assign, nonatomic) long long bytes;	// G=0x4ebced; 
@property(readonly, assign, nonatomic) long long bytesForInterface;	// G=0x4ebd51; 
@property(readonly, assign, nonatomic) unsigned currentStreamBitrate;	// G=0x4ebe11; 
@property(retain, nonatomic) NSMutableArray *errorStack;	// G=0x4ec0a5; S=0x4ec0b5; @synthesize=errorStack_
@property(assign, nonatomic) long long lastBwEntryBytes;	// G=0x4ec329; S=0x4ec341; @synthesize=lastBwEntryBytes_
@property(assign, nonatomic) double lastBwEntryTime;	// G=0x4ec2fd; S=0x4ec315; @synthesize=lastBwEntryTime_
@property(assign, nonatomic) unsigned lastKnownMappedVideoBitrate;	// G=0x4ec1f9; S=0x4ec209; @synthesize=lastKnownMappedVideoBitrate_
@property(assign, nonatomic) unsigned lastNumAccessLogEvents;	// G=0x4ec219; S=0x4ec229; @synthesize=lastNumAccessLogEvents_
@property(assign, nonatomic) IMediaControl *mediaControl;	// G=0x4ec085; S=0x4e7645; @synthesize=mediaControl_
@property(assign, nonatomic) NetflixMediaControlListener *mediaControlListener;	// G=0x4ec095; S=0x4e7759; @synthesize=mediaControlListener_
@property(retain) NSDictionary *movieDetails;	// G=0x4ec03d; S=0x4ec051; @synthesize=movieDetails_
@property(assign, nonatomic) int networkInterfaceType;	// G=0x4ec355; S=0x4ec365; @synthesize=networkInterfaceType_
@property(assign, nonatomic) double observedBitrate;	// G=0x4ec265; S=0x4ec27d; @synthesize=observedBitrate_
@property(assign, nonatomic) BOOL openNotificationSent;	// G=0x4ec01d; S=0x4ec02d; @synthesize=openNotificationSent_
@property(copy) NSData *playReadyKey;	// G=0x4ec061; S=0x4ec075; @synthesize=playReadyKey_
@property(assign) BOOL playbackCommandInProgress;	// G=0x4ec19d; S=0x4ec1b5; @synthesize=playbackCommandInProgress_
@property(retain) NSLock *playbackCommandLock;	// G=0x4ec179; S=0x4ec18d; @synthesize=playbackCommandLock_
@property(assign, nonatomic) long long pollBytesStart;	// G=0x4ec2b1; S=0x4ec2c9; @synthesize=pollBytesStart_
@property(assign, nonatomic) BOOL pollNetworkInterface;	// G=0x4ec291; S=0x4ec2a1; @synthesize=pollNetworkInterface_
@property(retain, nonatomic) NSDictionary *reportableActionId;	// G=0x4ec0c5; S=0x4ec0d5; @synthesize=reportableActionId_
@property(assign, nonatomic) double sampleReportWindow;	// G=0x4ec3cd; S=0x4ec3e5; @synthesize=sampleReportWindow_
@property(assign, nonatomic) bool stalled;	// G=0x4ec3f9; S=0x4ec40d; @synthesize=stalled_
@property(assign) int state;	// G=0x4ec1cd; S=0x4ec1e1; @synthesize=state_
@property(assign) BOOL subtitlesProcessing;	// G=0x4ec109; S=0x4ec121; @synthesize=subtitlesProcessing_
@property(retain) NSLock *subtitlesProcessingLock;	// G=0x4ec0e5; S=0x4ec0f9; @synthesize=subtitlesProcessingLock_
@property(assign, nonatomic) int subtitlesTrackIndex;	// G=0x4ec139; S=0x4ec149; @synthesize=subtitlesTrackIndex_
@property(assign, nonatomic) long long totalBytesTransferred;	// G=0x4ec239; S=0x4ec251; @synthesize=totalBytesTransferred_
@property(assign, nonatomic) int totalNumberOfStalls;	// G=0x4ec41d; S=0x4ec42d; @synthesize=totalNumberOfStalls_
+ (void)initialize;	// 0x4e7349
+ (id)sharedInstance;	// 0x4e734d
- (id)init;	// 0x4e7439
- (void)audioSelect:(id)select;	// 0x4e9015
- (void)audioSelectAsync:(id)async;	// 0x4e9051
// declared property getter: - (int)audioTrackIndex;	// 0x4ec159
// declared property getter: - (unsigned)bitrate;	// 0x4ebca9
- (void)buffering:(double)buffering;	// 0x4e7ce9
- (void)bufferingComplete:(double)complete;	// 0x4e7e01
// declared property getter: - (long long)bufferingStartBytes;	// 0x4ec375
// declared property getter: - (double)bufferingStartTime;	// 0x4ec3a1
// declared property getter: - (BwEntry *)bwEntry;	// 0x4ec2dd
// declared property getter: - (long long)bytes;	// 0x4ebced
// declared property getter: - (long long)bytesForInterface;	// 0x4ebd51
- (id)capitalizeAudioTracksArray:(id)array;	// 0x4e9531
- (id)capitalizeSubtitlesForMovieDetails:(id)movieDetails;	// 0x4e9621
- (id)capitalizeSubtitlesForTrackCombinationArray:(id)trackCombinationArray;	// 0x4e9441
- (id)capitalizeTrackCombination:(id)combination;	// 0x4e936d
- (id)capitalizeTracks:(id)tracks;	// 0x4e927d
- (void)clearErrorStack;	// 0x4ebff5
- (void)close;	// 0x4e7bf1
- (id)createErrorFromStack;	// 0x4e996d
// declared property getter: - (unsigned)currentStreamBitrate;	// 0x4ebe11
- (void)dealloc;	// 0x4e7531
- (void)end:(double)end reason:(id)reason;	// 0x4e7a11
// declared property getter: - (id)errorStack;	// 0x4ec0a5
- (int)fetchBookmark:(id)bookmark;	// 0x4eb9b9
// declared property getter: - (long long)lastBwEntryBytes;	// 0x4ec329
// declared property getter: - (double)lastBwEntryTime;	// 0x4ec2fd
// declared property getter: - (unsigned)lastKnownMappedVideoBitrate;	// 0x4ec1f9
// declared property getter: - (unsigned)lastNumAccessLogEvents;	// 0x4ec219
// declared property getter: - (IMediaControl *)mediaControl;	// 0x4ec085
// declared property getter: - (NetflixMediaControlListener *)mediaControlListener;	// 0x4ec095
- (void)mediaDidAcquireLicense;	// 0x4e9f7d
- (void)mediaDidAuthorize;	// 0x4e9e4d
- (void)mediaDidBuildPlaylists;	// 0x4ea015
- (void)mediaDidCdnSelect;	// 0x4e9ee5
- (void)mediaDidClose;	// 0x4e97b9
- (void)mediaDidFailLoadSubtitles:(int)media error:(id)error;	// 0x4ea275
- (void)mediaDidFailOpen:(id)media;	// 0x4e9cc5
- (void)mediaDidFailSelectAudio:(int)media error:(id)error;	// 0x4ebf2d
- (void)mediaDidHandleNccpError:(id)media;	// 0x4e982d
- (void)mediaDidLoadSubtitles:(id)media;	// 0x4ea141
- (void)mediaDidSelectAudio:(id)media;	// 0x4ebe49
- (void)mediaDidSetSpeed:(float)media;	// 0x4ea061
- (void)mediaOpenComplete:(id)complete;	// 0x4e96f9
- (void)mediaWillAcquireLicense;	// 0x4e9f31
- (void)mediaWillAuthorize;	// 0x4e9e01
- (void)mediaWillBuildPlaylists;	// 0x4e9fc9
- (void)mediaWillCdnSelect;	// 0x4e9e99
- (void)mediaWillLoadSubtitles;	// 0x4ea0f5
// declared property getter: - (id)movieDetails;	// 0x4ec03d
// declared property getter: - (int)networkInterfaceType;	// 0x4ec355
- (void)networkSelection:(id)selection;	// 0x4e8e05
- (int)networkTypeStringToType:(id)type;	// 0x4e8d91
// declared property getter: - (double)observedBitrate;	// 0x4ec265
- (void)open:(id)open;	// 0x4e777d
- (void)openAsync:(id)async;	// 0x4ea6e9
// declared property getter: - (BOOL)openNotificationSent;	// 0x4ec01d
- (void)pause:(double)pause;	// 0x4e7831
- (void)play:(double)play;	// 0x4e77b9
// declared property getter: - (id)playReadyKey;	// 0x4ec061
// declared property getter: - (BOOL)playbackCommandInProgress;	// 0x4ec19d
// declared property getter: - (id)playbackCommandLock;	// 0x4ec179
- (id)playlistForIndicatedBitrate:(double)indicatedBitrate;	// 0x4ebb3d
- (id)playlistForRequestedM3u8:(id)requestedM3u8;	// 0x4e8a21
// declared property getter: - (long long)pollBytesStart;	// 0x4ec2b1
// declared property getter: - (BOOL)pollNetworkInterface;	// 0x4ec291
- (void)postMediaCloseFailure;	// 0x4ea5e5
- (void)postMediaOpenFailure:(int)failure;	// 0x4ea435
- (void)postMediaOpenFailure:(id)failure clearProgress:(BOOL)progress;	// 0x4ea50d
- (void)postMediaOpenSuccess:(id)success;	// 0x4ea399
// declared property getter: - (id)reportableActionId;	// 0x4ec0c5
- (void)reposition:(double)reposition;	// 0x4e7921
// declared property getter: - (double)sampleReportWindow;	// 0x4ec3cd
- (void)selectedPlaylist:(id)playlist;	// 0x4e8b31
// declared property setter: - (void)setAudioTrackIndex:(int)index;	// 0x4ec169
// declared property setter: - (void)setBufferingStartBytes:(long long)bytes;	// 0x4ec38d
// declared property setter: - (void)setBufferingStartTime:(double)time;	// 0x4ec3b9
// declared property setter: - (void)setBwEntry:(BwEntry *)entry;	// 0x4ec2ed
// declared property setter: - (void)setErrorStack:(id)stack;	// 0x4ec0b5
// declared property setter: - (void)setLastBwEntryBytes:(long long)bytes;	// 0x4ec341
// declared property setter: - (void)setLastBwEntryTime:(double)time;	// 0x4ec315
// declared property setter: - (void)setLastKnownMappedVideoBitrate:(unsigned)bitrate;	// 0x4ec209
// declared property setter: - (void)setLastNumAccessLogEvents:(unsigned)events;	// 0x4ec229
// declared property setter: - (void)setMediaControl:(IMediaControl *)control;	// 0x4e7645
// declared property setter: - (void)setMediaControlListener:(NetflixMediaControlListener *)listener;	// 0x4e7759
// declared property setter: - (void)setMovieDetails:(id)details;	// 0x4ec051
// declared property setter: - (void)setNetworkInterfaceType:(int)type;	// 0x4ec365
// declared property setter: - (void)setObservedBitrate:(double)bitrate;	// 0x4ec27d
// declared property setter: - (void)setOpenNotificationSent:(BOOL)sent;	// 0x4ec02d
// declared property setter: - (void)setPlayReadyKey:(id)key;	// 0x4ec075
// declared property setter: - (void)setPlaybackCommandInProgress:(BOOL)progress;	// 0x4ec1b5
// declared property setter: - (void)setPlaybackCommandLock:(id)lock;	// 0x4ec18d
// declared property setter: - (void)setPollBytesStart:(long long)start;	// 0x4ec2c9
// declared property setter: - (void)setPollNetworkInterface:(BOOL)interface;	// 0x4ec2a1
// declared property setter: - (void)setReportableActionId:(id)anId;	// 0x4ec0d5
// declared property setter: - (void)setSampleReportWindow:(double)window;	// 0x4ec3e5
// declared property setter: - (void)setStalled:(bool)stalled;	// 0x4ec40d
// declared property setter: - (void)setState:(int)state;	// 0x4ec1e1
// declared property setter: - (void)setSubtitlesProcessing:(BOOL)processing;	// 0x4ec121
// declared property setter: - (void)setSubtitlesProcessingLock:(id)lock;	// 0x4ec0f9
// declared property setter: - (void)setSubtitlesTrackIndex:(int)index;	// 0x4ec149
// declared property setter: - (void)setTotalBytesTransferred:(long long)transferred;	// 0x4ec251
// declared property setter: - (void)setTotalNumberOfStalls:(int)stalls;	// 0x4ec42d
// declared property getter: - (bool)stalled;	// 0x4ec3f9
// declared property getter: - (int)state;	// 0x4ec1cd
- (void)stop:(double)stop;	// 0x4e7999
- (void)streamSelected:(int)selected streamIndex:(int)index;	// 0x4e7fa1
- (void)subtitlesDisable;	// 0x4e8d0d
- (void)subtitlesDisableAsync;	// 0x4eb889
// declared property getter: - (BOOL)subtitlesProcessing;	// 0x4ec109
// declared property getter: - (id)subtitlesProcessingLock;	// 0x4ec0e5
- (void)subtitlesSelect:(id)select;	// 0x4e8cd1
- (void)subtitlesSelectAbort;	// 0x4e8d49
- (void)subtitlesSelectAsync:(id)async;	// 0x4eb481
// declared property getter: - (int)subtitlesTrackIndex;	// 0x4ec139
// declared property getter: - (long long)totalBytesTransferred;	// 0x4ec239
// declared property getter: - (int)totalNumberOfStalls;	// 0x4ec41d
- (id)trackWithCapitalizedDescriptionFromTrack:(id)track;	// 0x4e919d
- (void)unpause:(double)unpause;	// 0x4e78a9
- (void)updatePts:(double)pts;	// 0x4e8029
- (void)updatePts:(double)pts accessLogEvents:(id)events;	// 0x4e8589
@end
