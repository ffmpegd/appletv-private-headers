/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVPlaybackProgressMonitor.h"

@class AVPlayerItemAccessLogEvent;

__attribute__((visibility("hidden")))
@interface ATVPlaybackStreamingProgressMonitor : ATVPlaybackProgressMonitor {
@private
	AVPlayerItemAccessLogEvent *_latestEventForSampling;	// 180 = 0xb4
}
- (void)dealloc;	// 0x35f31921
- (void)finishPeriodicSample;	// 0x35f31a51
- (void)startPeriodicSample;	// 0x35f3196d
- (id)streamingType;	// 0x35f31ac9
@end

