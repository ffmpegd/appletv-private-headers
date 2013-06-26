/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRInvalidatable.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class BRAsyncTaskContext, NSMutableArray;
@protocol BRProvider;

__attribute__((visibility("hidden")))
@interface BRImageLoader : XXUnknownSuperclass <BRInvalidatable> {
	long _queueSize;	// 4 = 0x4
	NSMutableArray *_imageQueue;	// 8 = 0x8
	NSMutableArray *_candidateImages;	// 12 = 0xc
	NSMutableArray *_pendingImages;	// 16 = 0x10
	id<BRProvider> _provider;	// 20 = 0x14
	BOOL _randomize;	// 24 = 0x18
	long _serialIndex;	// 28 = 0x1c
	long _imageArrayIndex;	// 32 = 0x20
	long _segmentCount;	// 36 = 0x24
	int _fillStrategy;	// 40 = 0x28
	long _failedLoadCount;	// 44 = 0x2c
	BRAsyncTaskContext *_taskContext;	// 48 = 0x30
	BOOL _saveQueueOnFlush;	// 52 = 0x34
	NSMutableArray *_savedImageProxyQueue;	// 56 = 0x38
	NSMutableArray *_activeImageProxyQueue;	// 60 = 0x3c
	BOOL _hasBeenInvalidated;	// 64 = 0x40
}
@property(assign) int fillStrategy;	// G=0x39ca6d; S=0x39c8ed; converted property
@property(retain) id imageProxies;	// G=0x39c6d9; S=0x39c69d; converted property
@property(assign) long queueSize;	// G=0x39cbad; S=0x39ca7d; converted property
@property(assign) BOOL randomize;	// G=0x39ce7d; S=0x39ce6d; converted property
@property(assign) long segmentCount;	// G=0x39c68d; S=0x39c63d; converted property
- (id)init;	// 0x39c3c9
- (void)_abandonArtwork:(id)artwork;	// 0x39e2c5
- (void)_abandonPendingImageProxyForImageWithID:(id)anId;	// 0x39dc8d
- (void)_cleanupPendingQueue;	// 0x39e04d
- (void)_enqueueImage:(id)image;	// 0x39d2b9
- (BOOL)_isQueuePrimed;	// 0x39d571
- (id)_pendingImageDictionaryForImageID:(id)imageID;	// 0x39defd
- (void)_prepareImageForQueue:(id)queue withID:(id)anId imageProxy:(id)proxy;	// 0x39d0c5
- (void)_primeQueue;	// 0x39d699
- (void)_promoteCandidateImageProxy:(id)proxy toPendingImageProxyForImageWithID:(id)anId;	// 0x39dae5
- (void)_providerUpdated:(id)updated;	// 0x39e3bd
- (id)_pullNextImageProxy;	// 0x39d841
- (id)_pullNextImageProxyRandomly;	// 0x39d995
- (void)_setupForNewProvider;	// 0x39e411
- (void)_updateArtwork:(id)artwork;	// 0x39e0ed
- (void)dealloc;	// 0x39c565
// converted property getter: - (int)fillStrategy;	// 0x39ca6d
- (id)finalFormForImage:(id)image;	// 0x39cead
- (void)flushQueue;	// 0x39cbf1
- (long)imageCount;	// 0x39ce8d
// converted property getter: - (id)imageProxies;	// 0x39c6d9
- (void)invalidate;	// 0x39d07d
- (BOOL)isImageFinalForm:(id)form;	// 0x39ceb1
- (id)nextImage;	// 0x39ceb5
- (BOOL)queueReady;	// 0x39cd89
// converted property getter: - (long)queueSize;	// 0x39cbad
// converted property getter: - (BOOL)randomize;	// 0x39ce7d
// converted property getter: - (long)segmentCount;	// 0x39c68d
// converted property setter: - (void)setFillStrategy:(int)strategy;	// 0x39c8ed
// converted property setter: - (void)setImageProxies:(id)proxies;	// 0x39c69d
- (void)setProvider:(id)provider;	// 0x39c72d
// converted property setter: - (void)setQueueSize:(long)size;	// 0x39ca7d
// converted property setter: - (void)setRandomize:(BOOL)randomize;	// 0x39ce6d
- (void)setSaveQueueOnFlush:(BOOL)flush;	// 0x39cbbd
// converted property setter: - (void)setSegmentCount:(long)count;	// 0x39c63d
@end
