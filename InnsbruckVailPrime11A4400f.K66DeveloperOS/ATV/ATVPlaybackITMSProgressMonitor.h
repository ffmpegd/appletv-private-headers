/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVPlaybackProgressMonitor.h"

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface ATVPlaybackITMSProgressMonitor : ATVPlaybackProgressMonitor {
	BOOL _playabilityMetricsAreViable;	// 189 = 0xbd
	double _mostRecentReadyToPlay;	// 192 = 0xc0
	BOOL _readyToPlayTransitionHappened;	// 200 = 0xc8
	NSDictionary *_latestPlayabilityMetricsForSampling;	// 204 = 0xcc
}
@property(assign) double mostRecentReadyToPlay;	// G=0x204cf5; S=0x204d29; @synthesize=_mostRecentReadyToPlay
@property(assign) BOOL readyToPlayTransitionHappened;	// G=0x204d5d; S=0x204d75; @synthesize=_readyToPlayTransitionHappened
- (id)_gatherAdditionalMetrics;	// 0x2051f5
- (id)_gatherMetricsForStall;	// 0x205149
- (id)_initWithPlayerItem:(id)playerItem andMediaAsset:(id)asset;	// 0x204d8d
- (void)_playbackStalled:(id)stalled;	// 0x20529d
- (void)_takeAdditionalPeriodicSamples:(id)samples andDescriptions:(id)descriptions;	// 0x204f59
- (void)dealloc;	// 0x204a99
- (void)finishPeriodicSample;	// 0x204edd
- (id)mediaTypeString;	// 0x204c09
// declared property getter: - (double)mostRecentReadyToPlay;	// 0x204cf5
- (void)playerActivated:(id)activated;	// 0x204ae5
- (void)playerDeactivated;	// 0x204b65
- (void)playerItemMonitoringStarted;	// 0x204ba5
// declared property getter: - (BOOL)readyToPlayTransitionHappened;	// 0x204d5d
// declared property setter: - (void)setMostRecentReadyToPlay:(double)play;	// 0x204d29
// declared property setter: - (void)setReadyToPlayTransitionHappened:(BOOL)playTransitionHappened;	// 0x204d75
- (void)startPeriodicSample;	// 0x204ddd
- (void)startSamplingIfNecessary;	// 0x204bb9
- (id)streamingType;	// 0x204ce9
@end

