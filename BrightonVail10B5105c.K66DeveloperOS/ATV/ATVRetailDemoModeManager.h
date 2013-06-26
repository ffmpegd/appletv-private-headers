/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSURLDownloadDelegate.h"
#import "BRSingleton.h"

@class NSTimer, NSURLDownload, NSMutableArray;

__attribute__((visibility("hidden")))
@interface ATVRetailDemoModeManager : BRSingleton <NSURLDownloadDelegate> {
	NSTimer *_retailPlaybackLimitTimer;	// 4 = 0x4
	BOOL _hasStartedPlaying;	// 8 = 0x8
	NSURLDownload *_retailMovieDownload;	// 12 = 0xc
	NSMutableArray *_topPodcastsFavCandidates;	// 16 = 0x10
	NSMutableArray *_topShowsFavCandidates;	// 20 = 0x14
	BOOL _retryOccurred;	// 24 = 0x18
}
+ (void)checkAndStart;	// 0x2379f5
+ (id)retailDemoCacheDir;	// 0x237bf5
+ (BOOL)retailDemoMovieDownloadComplete;	// 0x237c85
+ (id)retailDemoMoviePath;	// 0x237c45
+ (void)setSingleton:(id)singleton;	// 0x2379e5
+ (id)singleton;	// 0x2379d5
- (id)init;	// 0x237a3d
- (void)_downloadRetailDemoMovie;	// 0x238ac9
- (void)_fetchNextPodcastFav;	// 0x239311
- (void)_fetchNextTVShowFav;	// 0x2399d5
- (void)_nowPlayingStateChanged:(id)changed;	// 0x23883d
- (void)_podcastReady:(id)ready;	// 0x2394e1
- (void)_resetRetailSettings;	// 0x238545
- (id)_retailDemoMovieURL;	// 0x238d01
- (void)_retailPlaybackLimitTimerFired:(id)fired;	// 0x238a6d
- (void)_retryMovieDownloadLater;	// 0x238f15
- (BOOL)_shouldLimitPlaybackForAsset:(id)asset;	// 0x238925
- (void)_startPlaybackLimitTimer;	// 0x2389a1
- (void)_topPodcastsReady:(id)ready;	// 0x2391c5
- (void)_topTVShowsReady:(id)ready;	// 0x239889
- (void)_tvShowReady:(id)ready;	// 0x239df1
- (void)_updatePodcastFavorites;	// 0x238f61
- (void)_updateTVShowFavorites;	// 0x239625
- (void)dealloc;	// 0x237b99
- (void)download:(id)download didFailWithError:(id)error;	// 0x239f61
- (void)downloadDidFinish:(id)download;	// 0x239fcd
- (void)performRetailReset;	// 0x237cf9
- (void)updateRetailFavorites;	// 0x238515
@end
