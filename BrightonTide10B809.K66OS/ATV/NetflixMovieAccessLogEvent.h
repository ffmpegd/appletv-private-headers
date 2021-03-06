/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library


@interface NetflixMovieAccessLogEvent : XXUnknownSuperclass {
	double indicatedBitrate_;	// 4 = 0x4
	double observedBitrate_;	// 12 = 0xc
	int numberOfStalls_;	// 20 = 0x14
	long long numberOfBytesTransferred_;	// 24 = 0x18
	double durationWatched_;	// 32 = 0x20
	int numberOfSegmentsDownloaded_;	// 40 = 0x28
	double segmentsDownloadedDuration_;	// 44 = 0x2c
}
@property(assign, nonatomic) double durationWatched;	// G=0x519a99; S=0x519ab1; @synthesize=durationWatched_
@property(assign, nonatomic) double indicatedBitrate;	// G=0x5199f5; S=0x519a0d; @synthesize=indicatedBitrate_
@property(assign, nonatomic) long long numberOfBytesTransferred;	// G=0x519a6d; S=0x519a85; @synthesize=numberOfBytesTransferred_
@property(assign, nonatomic) int numberOfSegmentsDownloaded;	// G=0x519ac5; S=0x519ad5; @synthesize=numberOfSegmentsDownloaded_
@property(assign, nonatomic) int numberOfStalls;	// G=0x519a4d; S=0x519a5d; @synthesize=numberOfStalls_
@property(assign, nonatomic) double observedBitrate;	// G=0x519a21; S=0x519a39; @synthesize=observedBitrate_
@property(assign, nonatomic) double segmentsDownloadedDuration;	// G=0x519ae5; S=0x519afd; @synthesize=segmentsDownloadedDuration_
// declared property getter: - (double)durationWatched;	// 0x519a99
// declared property getter: - (double)indicatedBitrate;	// 0x5199f5
// declared property getter: - (long long)numberOfBytesTransferred;	// 0x519a6d
// declared property getter: - (int)numberOfSegmentsDownloaded;	// 0x519ac5
// declared property getter: - (int)numberOfStalls;	// 0x519a4d
// declared property getter: - (double)observedBitrate;	// 0x519a21
// declared property getter: - (double)segmentsDownloadedDuration;	// 0x519ae5
// declared property setter: - (void)setDurationWatched:(double)watched;	// 0x519ab1
// declared property setter: - (void)setIndicatedBitrate:(double)bitrate;	// 0x519a0d
// declared property setter: - (void)setNumberOfBytesTransferred:(long long)bytesTransferred;	// 0x519a85
// declared property setter: - (void)setNumberOfSegmentsDownloaded:(int)segmentsDownloaded;	// 0x519ad5
// declared property setter: - (void)setNumberOfStalls:(int)stalls;	// 0x519a5d
// declared property setter: - (void)setObservedBitrate:(double)bitrate;	// 0x519a39
// declared property setter: - (void)setSegmentsDownloadedDuration:(double)duration;	// 0x519afd
@end

