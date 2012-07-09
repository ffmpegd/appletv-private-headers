/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface ATVQualityOfServiceSample : XXUnknownSuperclass {
	int _numberOfSegmentsDownloaded;	// 4 = 0x4
	NSString *_serverAddress;	// 8 = 0x8
	int _numberOfServerAddressChanges;	// 12 = 0xc
	NSString *_URI;	// 16 = 0x10
	double _segmentsDownloadedDuration;	// 20 = 0x14
	double _durationWatched;	// 28 = 0x1c
	int _numberOfStalls;	// 36 = 0x24
	long long _numberOfBytesTransferred;	// 40 = 0x28
	double _observedBitrate;	// 48 = 0x30
	double _indicatedBitrate;	// 56 = 0x38
	int _numberOfDroppedVideoFrames;	// 64 = 0x40
}
@property(retain, nonatomic) NSString *URI;	// G=0x1f581d; S=0x1f582d; @synthesize=_URI
@property(assign, nonatomic) double durationWatched;	// G=0x1f5869; S=0x1f5881; @synthesize=_durationWatched
@property(assign, nonatomic) double indicatedBitrate;	// G=0x1f590d; S=0x1f5925; @synthesize=_indicatedBitrate
@property(assign, nonatomic) long long numberOfBytesTransferred;	// G=0x1f58b5; S=0x1f58cd; @synthesize=_numberOfBytesTransferred
@property(assign, nonatomic) int numberOfDroppedVideoFrames;	// G=0x1f5939; S=0x1f5949; @synthesize=_numberOfDroppedVideoFrames
@property(assign, nonatomic) int numberOfSegmentsDownloaded;	// G=0x1f57bd; S=0x1f57cd; @synthesize=_numberOfSegmentsDownloaded
@property(assign, nonatomic) int numberOfServerAddressChanges;	// G=0x1f57fd; S=0x1f580d; @synthesize=_numberOfServerAddressChanges
@property(assign, nonatomic) int numberOfStalls;	// G=0x1f5895; S=0x1f58a5; @synthesize=_numberOfStalls
@property(assign, nonatomic) double observedBitrate;	// G=0x1f58e1; S=0x1f58f9; @synthesize=_observedBitrate
@property(assign, nonatomic) double segmentsDownloadedDuration;	// G=0x1f583d; S=0x1f5855; @synthesize=_segmentsDownloadedDuration
@property(retain, nonatomic) NSString *serverAddress;	// G=0x1f57dd; S=0x1f57ed; @synthesize=_serverAddress
// declared property getter: - (id)URI;	// 0x1f581d
- (void)dealloc;	// 0x1f5765
// declared property getter: - (double)durationWatched;	// 0x1f5869
// declared property getter: - (double)indicatedBitrate;	// 0x1f590d
// declared property getter: - (long long)numberOfBytesTransferred;	// 0x1f58b5
// declared property getter: - (int)numberOfDroppedVideoFrames;	// 0x1f5939
// declared property getter: - (int)numberOfSegmentsDownloaded;	// 0x1f57bd
// declared property getter: - (int)numberOfServerAddressChanges;	// 0x1f57fd
// declared property getter: - (int)numberOfStalls;	// 0x1f5895
// declared property getter: - (double)observedBitrate;	// 0x1f58e1
// declared property getter: - (double)segmentsDownloadedDuration;	// 0x1f583d
// declared property getter: - (id)serverAddress;	// 0x1f57dd
// declared property setter: - (void)setDurationWatched:(double)watched;	// 0x1f5881
// declared property setter: - (void)setIndicatedBitrate:(double)bitrate;	// 0x1f5925
// declared property setter: - (void)setNumberOfBytesTransferred:(long long)bytesTransferred;	// 0x1f58cd
// declared property setter: - (void)setNumberOfDroppedVideoFrames:(int)droppedVideoFrames;	// 0x1f5949
// declared property setter: - (void)setNumberOfSegmentsDownloaded:(int)segmentsDownloaded;	// 0x1f57cd
// declared property setter: - (void)setNumberOfServerAddressChanges:(int)serverAddressChanges;	// 0x1f580d
// declared property setter: - (void)setNumberOfStalls:(int)stalls;	// 0x1f58a5
// declared property setter: - (void)setObservedBitrate:(double)bitrate;	// 0x1f58f9
// declared property setter: - (void)setSegmentsDownloadedDuration:(double)duration;	// 0x1f5855
// declared property setter: - (void)setServerAddress:(id)address;	// 0x1f57ed
// declared property setter: - (void)setURI:(id)uri;	// 0x1f582d
@end
