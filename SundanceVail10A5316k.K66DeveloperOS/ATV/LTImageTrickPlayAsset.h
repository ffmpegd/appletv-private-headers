/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "LTTrickPlayAsset.h"

@class NSString, NSArray, NSMutableIndexSet;

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
@property(readonly, assign) double frameTimeDifferenceInSeconds;	// G=0x54869; converted property
@property(readonly, assign) BOOL isReady;	// G=0x53f05; converted property
- (id)initWithAsset:(id)asset;	// 0x53cdd
- (id)initWithAsset:(id)asset andMerchant:(id)merchant;	// 0x53d05
- (void).cxx_destruct;	// 0x54881
- (id)URLForTime:(double)time;	// 0x53fdd
- (id)URLsForTime:(double)time;	// 0x54061
- (id)URLsForTime:(double)time direction:(int)direction withPreloadedImageURLsCount:(unsigned)preloadedImageURLsCount;	// 0x540b5
- (id)URLsForTime:(double)time direction:(int)direction withPreloadedImageURLsCount:(unsigned)preloadedImageURLsCount atInterval:(int)interval;	// 0x540e1
- (id)URLsForTime:(double)time withPreloadedImageURLsCount:(unsigned)preloadedImageURLsCount;	// 0x54091
- (void)_fetchTrackConfigFileAtURL:(id)url forMerchant:(id)merchant;	// 0x548c9
- (id)_loadImageURLsForCount:(unsigned)count forBaseURL:(id)baseURL;	// 0x55179
- (id)_loadImageURLsForCount:(unsigned)count forBaseURL:(id)baseURL isOneBasedNamingScheme:(BOOL)scheme;	// 0x5519d
- (void)_setTrackConfig:(id)config;	// 0x54bed
- (void)_trackConfigFileReady:(id)ready;	// 0x54a4d
- (void)cancelPriorImageLoadsFromTime:(double)time direction:(int)direction;	// 0x54249
- (void)dealloc;	// 0x53c41
- (id)firstImageFromURLs:(id)urls;	// 0x544c1
// converted property getter: - (double)frameTimeDifferenceInSeconds;	// 0x54869
- (id)imageForTime:(double)time;	// 0x543f1
- (id)imageForTime:(double)time direction:(int)direction;	// 0x54439
- (id)imageForTime:(double)time direction:(int)direction withPreloadedImageURLsCount:(unsigned)preloadedImageURLsCount;	// 0x54469
- (id)imageForTime:(double)time withPreloadedImageURLsCount:(unsigned)preloadedImageURLsCount;	// 0x54415
- (unsigned)indexForTime:(double)time;	// 0x53f15
// converted property getter: - (BOOL)isReady;	// 0x53f05
@end

