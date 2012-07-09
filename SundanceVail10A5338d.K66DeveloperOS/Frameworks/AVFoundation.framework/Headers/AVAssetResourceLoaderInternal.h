/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <NSObject.h> // Unknown library
#import "AVFoundation-Structs.h"

@class AVWeakReference;
@protocol AVAssetResourceLoaderDelegate, OS_dispatch_queue;

@interface AVAssetResourceLoaderInternal : NSObject {
	AVWeakReference *weakReference;	// 4 = 0x4
	AVWeakReference *weakReferenceToAsset;	// 8 = 0x8
	OpaqueFigAsset *figAsset;	// 12 = 0xc
	NSObject<OS_dispatch_queue> *stateQueue;	// 16 = 0x10
	id<AVAssetResourceLoaderDelegate> delegate;	// 20 = 0x14
	NSObject<OS_dispatch_queue> *delegateQueue;	// 24 = 0x18
}
@end
