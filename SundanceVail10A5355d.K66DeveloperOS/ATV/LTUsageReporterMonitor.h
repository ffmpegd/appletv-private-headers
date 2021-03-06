/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRSingleton.h"

@protocol BRMediaAsset;

__attribute__((visibility("hidden")))
@interface LTUsageReporterMonitor : BRSingleton {
	id<BRMediaAsset> _currentAsset;	// 4 = 0x4
	unsigned _playbackStalledCount;	// 8 = 0x8
}
+ (void)setSingleton:(id)singleton;	// 0x5ce71
+ (id)singleton;	// 0x5ce61
- (id)init;	// 0x5cf01
- (void).cxx_destruct;	// 0x5d009
- (void)_currentAssetPlaybackChanged:(id)changed;	// 0x5d031
- (void)_currentAssetPlaybackStalled:(id)stalled;	// 0x5d01d
- (void)_homeSharesChanged:(id)changed;	// 0x5d1e1
- (void)_resetPlaybackStalledCountAndAssetFromPlayerIfNeeded:(id)playerIfNeeded;	// 0x5d299
- (void)dealloc;	// 0x5ce95
@end

