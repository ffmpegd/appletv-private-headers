/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import "AVAssetWriterFigAssetWriterNotificationHandlerDelegate.h"
#import "AVAssetWriterFinishWritingHelperDelegate.h"
#import <NSObject.h> // Unknown library

@class AVWeakReference;
@protocol OS_dispatch_semaphore;

@interface AVAssetWriterSynchronousNonMainThreadFinishWritingDelegate : NSObject <AVAssetWriterFigAssetWriterNotificationHandlerDelegate, AVAssetWriterFinishWritingHelperDelegate> {
	NSObject<OS_dispatch_semaphore> *_finishedWritingNotificationSemaphore;	// 4 = 0x4
	AVWeakReference *_weakReferenceToHelper;	// 8 = 0x8
	AVWeakReference *_weakReferenceToSelf;	// 12 = 0xc
}
- (id)init;	// 0x2c298985
- (void)dealloc;	// 0x2c298a09
- (void)didReceiveFigAssetWriterNotificationWithSuccess:(BOOL)success error:(id)error;	// 0x2c298abd
- (void)finalize;	// 0x2c298a7d
- (void)finishWritingHelper:(id)helper didInitiateFinishWritingForFigAssetWriter:(OpaqueFigAssetWriter *)figAssetWriter;	// 0x2c298b11
- (void)finishWritingHelperDidCancelFinishWriting:(id)finishWritingHelper;	// 0x2c298c75
- (void)finishWritingHelperDidFail:(id)finishWritingHelper;	// 0x2c298c89
- (BOOL)shouldHelperPrepareInputs;	// 0x2c298c9d
@end
