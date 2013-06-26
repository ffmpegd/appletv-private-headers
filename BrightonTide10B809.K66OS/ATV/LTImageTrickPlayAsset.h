/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "LTTrickPlayAsset.h"
#import "AppleTV-Structs.h"

@class NSArray, NSMutableIndexSet, NSString;

__attribute__((visibility("hidden")))
@interface LTImageTrickPlayAsset : LTTrickPlayAsset {
	NSArray *_frames;	// 12 = 0xc
	double _frameTimeDifferenceInSeconds;	// 16 = 0x10
	NSString *_frameFileNameFormat;	// 24 = 0x18
	float _frameCountMultipler;	// 28 = 0x1c
	BOOL _isEncrypted;	// 32 = 0x20
	BOOL _isReady;	// 33 = 0x21
	int _preloadedFilesOnEitherEnd;	// 36 = 0x24
	NSMutableIndexSet *_mutableActiveRequestsIndexSet;	// 40 = 0x28
	opaque_pthread_mutex_t _activeImageRequestMutex;	// 44 = 0x2c
}
@property(readonly, assign) double frameTimeDifferenceInSeconds;	// G=0x5b129; converted property
@property(readonly, assign) BOOL isReady;	// G=0x5a7c5; converted property
- (id)initWithAsset:(id)asset;	// 0x5a59d
- (id)initWithAsset:(id)asset andMerchant:(id)merchant;	// 0x5a5c5
- (void).cxx_destruct;	// 0x5b141
- (id)URLForTime:(double)time;	// 0x5a89d
- (id)URLsForTime:(double)time;	// 0x5a921
- (id)URLsForTime:(double)time direction:(int)direction withPreloadedImageURLsCount:(unsigned)preloadedImageURLsCount;	// 0x5a975
- (id)URLsForTime:(double)time direction:(int)direction withPreloadedImageURLsCount:(unsigned)preloadedImageURLsCount atInterval:(int)interval;	// 0x5a9a1
- (id)URLsForTime:(double)time withPreloadedImageURLsCount:(unsigned)preloadedImageURLsCount;	// 0x5a951
- (void)_fetchTrackConfigFileAtURL:(id)url forMerchant:(id)merchant;	// 0x5b189
- (id)_loadImageURLsForCount:(unsigned)count forBaseURL:(id)baseURL;	// 0x5ba79
- (id)_loadImageURLsForCount:(unsigned)count forBaseURL:(id)baseURL isOneBasedNamingScheme:(BOOL)scheme;	// 0x5ba9d
- (void)_setTrackConfig:(id)config;	// 0x5b4b1
- (void)_trackConfigFileReady:(id)ready;	// 0x5b311
- (void)cancelPriorImageLoadsFromTime:(double)time direction:(int)direction;	// 0x5ab09
- (void)dealloc;	// 0x5a501
- (id)firstImageFromURLs:(id)urls;	// 0x5ad81
// converted property getter: - (double)frameTimeDifferenceInSeconds;	// 0x5b129
- (id)imageForTime:(double)time;	// 0x5acb1
- (id)imageForTime:(double)time direction:(int)direction;	// 0x5acf9
- (id)imageForTime:(double)time direction:(int)direction withPreloadedImageURLsCount:(unsigned)preloadedImageURLsCount;	// 0x5ad29
- (id)imageForTime:(double)time withPreloadedImageURLsCount:(unsigned)preloadedImageURLsCount;	// 0x5acd5
- (unsigned)indexForTime:(double)time;	// 0x5a7d5
// converted property getter: - (BOOL)isReady;	// 0x5a7c5
@end
