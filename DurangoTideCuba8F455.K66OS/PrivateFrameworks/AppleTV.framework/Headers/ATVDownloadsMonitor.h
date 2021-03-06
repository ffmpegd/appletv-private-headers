/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <BRSingleton.h> // Unknown library

@class BRDownloadManager;
@protocol BRMediaAsset;

@interface ATVDownloadsMonitor : BRSingleton {
@private
	BRDownloadManager *_downloadManager;	// 4 = 0x4
	id<BRMediaAsset> _currentAsset;	// 8 = 0x8
}
+ (void)setSingleton:(id)singleton;	// 0x3064786d
+ (id)singleton;	// 0x30647861
- (id)init;	// 0x30647955
- (void)_backgroundProcessingAllowableStateChanged:(id)changed;	// 0x30647c31
- (void)_downloadStateChangedObserver:(id)observer;	// 0x30647879
- (void)_downloadsChangedObserver:(id)observer;	// 0x30647ac1
- (void)_pauseAllDownloads;	// 0x30647d35
- (void)_resumePausedDownloads;	// 0x30647c8d
- (void)dealloc;	// 0x306478d1
- (void)setCurrentAsset:(id)asset;	// 0x30647e1d
@end

