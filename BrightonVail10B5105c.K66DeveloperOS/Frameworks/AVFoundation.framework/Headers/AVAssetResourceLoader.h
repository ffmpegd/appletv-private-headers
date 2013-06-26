/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <NSObject.h> // Unknown library
#import "AVFoundation-Structs.h"

@class AVAssetResourceLoaderInternal;
@protocol AVAssetResourceLoaderDelegate, OS_dispatch_queue;

@interface AVAssetResourceLoader : NSObject {
	AVAssetResourceLoaderInternal *_resourceLoader;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) id<AVAssetResourceLoaderDelegate> delegate;	// G=0x3035aaed; 
@property(readonly, assign, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;	// G=0x3035ab0d; 
- (id)initWithAsset:(id)asset;	// 0x3035a531
- (void)_addFigAssetNotifications;	// 0x3035a815
- (BOOL)_attemptDelegateHandlingOfRequestWithDictionary:(id)dictionary;	// 0x3035ab2d
- (OpaqueFigAsset *)_figAsset;	// 0x3035af4d
- (void)_removeFigAssetNotifications;	// 0x3035a855
- (id)_weakReference;	// 0x3035a7f5
- (id)asset;	// 0x3035af21
- (void)dealloc;	// 0x3035a6b9
// declared property getter: - (id)delegate;	// 0x3035aaed
// declared property getter: - (id)delegateQueue;	// 0x3035ab0d
- (void)finalize;	// 0x3035a769
- (void)setDelegate:(id)delegate queue:(id)queue;	// 0x3035a895
- (id)stateQueue;	// 0x3035aacd
@end
