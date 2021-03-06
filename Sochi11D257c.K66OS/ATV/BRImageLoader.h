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
@property(assign) int fillStrategy;	// G=0x466215; S=0x466095; converted property
@property(retain) id imageProxies;	// G=0x465e81; S=0x465e45; converted property
@property(assign) long queueSize;	// G=0x466355; S=0x466225; converted property
@property(assign) BOOL randomize;	// G=0x466625; S=0x466615; converted property
@property(assign) long segmentCount;	// G=0x465e35; S=0x465de1; converted property
- (id)init;	// 0x465b6d
- (void)_abandonArtwork:(id)artwork;	// 0x467a79
- (void)_abandonPendingImageProxyForImageWithID:(id)anId;	// 0x467445
- (void)_cleanupPendingQueue;	// 0x467805
- (void)_enqueueImage:(id)image;	// 0x466a65
- (BOOL)_isQueuePrimed;	// 0x466d19
- (id)_pendingImageDictionaryForImageID:(id)imageID;	// 0x4676b5
- (void)_prepareImageForQueue:(id)queue withID:(id)anId imageProxy:(id)proxy;	// 0x46686d
- (void)_primeQueue;	// 0x466e3d
- (void)_promoteCandidateImageProxy:(id)proxy toPendingImageProxyForImageWithID:(id)anId;	// 0x46729d
- (void)_providerUpdated:(id)updated;	// 0x467b71
- (id)_pullNextImageProxy;	// 0x466ff9
- (id)_pullNextImageProxyRandomly;	// 0x46714d
- (void)_setupForNewProvider;	// 0x467bc5
- (void)_updateArtwork:(id)artwork;	// 0x4678a5
- (void)dealloc;	// 0x465d09
// converted property getter: - (int)fillStrategy;	// 0x466215
- (id)finalFormForImage:(id)image;	// 0x466655
- (void)flushQueue;	// 0x466399
- (long)imageCount;	// 0x466635
// converted property getter: - (id)imageProxies;	// 0x465e81
- (void)invalidate;	// 0x466825
- (BOOL)isImageFinalForm:(id)form;	// 0x466659
- (id)nextImage;	// 0x46665d
- (BOOL)queueReady;	// 0x466531
// converted property getter: - (long)queueSize;	// 0x466355
// converted property getter: - (BOOL)randomize;	// 0x466625
// converted property getter: - (long)segmentCount;	// 0x465e35
// converted property setter: - (void)setFillStrategy:(int)strategy;	// 0x466095
// converted property setter: - (void)setImageProxies:(id)proxies;	// 0x465e45
- (void)setProvider:(id)provider;	// 0x465ed5
// converted property setter: - (void)setQueueSize:(long)size;	// 0x466225
// converted property setter: - (void)setRandomize:(BOOL)randomize;	// 0x466615
- (void)setSaveQueueOnFlush:(BOOL)flush;	// 0x466365
// converted property setter: - (void)setSegmentCount:(long)count;	// 0x465de1
@end

