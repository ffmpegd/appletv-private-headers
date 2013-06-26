/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <NSObject.h> // Unknown library

@class AVAssetWriterInputWritingHelper;
@protocol OS_dispatch_queue;

@interface AVAssetWriterInputMediaDataRequester : NSObject {
	AVAssetWriterInputWritingHelper *_writingHelper;	// 4 = 0x4
	NSObject<OS_dispatch_queue> *_requestQueue;	// 8 = 0x8
	id _requestBlock;	// 12 = 0xc
}
@property(readonly, assign, nonatomic) id requestBlock;	// G=0x302ea115; @synthesize=_requestBlock
@property(readonly, assign, nonatomic) NSObject<OS_dispatch_queue> *requestQueue;	// G=0x302ea105; @synthesize=_requestQueue
- (id)init;	// 0x302e9b69
- (id)initWithAssetWriterInputWritingHelper:(id)assetWriterInputWritingHelper requestQueue:(id)queue requestBlock:(id)block;	// 0x302e99f5
- (void)_requestMediaDataIfReady;	// 0x302e9e71
- (void)dealloc;	// 0x302e9b8d
- (void)finalize;	// 0x302e9bd1
- (void)invalidate;	// 0x302e9c91
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x302e9d81
// declared property getter: - (id)requestBlock;	// 0x302ea115
// declared property getter: - (id)requestQueue;	// 0x302ea105
- (void)startRequestingMediaData;	// 0x302e9c15
@end
