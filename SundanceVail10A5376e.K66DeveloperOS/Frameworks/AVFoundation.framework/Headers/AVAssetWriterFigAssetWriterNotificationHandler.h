/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <NSObject.h> // Unknown library
#import "AVFoundation-Structs.h"

@class AVWeakReference;

@interface AVAssetWriterFigAssetWriterNotificationHandler : NSObject {
	OpaqueFigAssetWriter *_figAssetWriter;	// 4 = 0x4
	int _didNotCallDelegate;	// 8 = 0x8
	AVWeakReference *_weakReferenceToSelf;	// 12 = 0xc
	AVWeakReference *_weakReferenceToDelegate;	// 16 = 0x10
	int _notificationHandlersAreRegistered;	// 20 = 0x14
}
@property(retain) AVWeakReference *weakReferenceToDelegate;	// G=0x368ba029; S=0x368ba03d; @synthesize=_weakReferenceToDelegate
- (id)initWithFigAssetWriter:(OpaqueFigAssetWriter *)figAssetWriter weakReferenceToDelegate:(id)delegate;	// 0x368b99b9
- (void)_callDelegateIfNotCalledWithSuccess:(BOOL)success error:(id)error;	// 0x368b9e15
- (void)_handleCompletedWritingNotification;	// 0x368b9fc1
- (void)_handleFailedNotificationWithError:(id)error;	// 0x368b9ff5
- (void)_handleServerDiedNotification;	// 0x368b9f71
- (void)_teardownNotificationHandlers;	// 0x368b9e71
- (void)dealloc;	// 0x368b9d31
- (void)finalize;	// 0x368b9dbd
// declared property setter: - (void)setWeakReferenceToDelegate:(id)delegate;	// 0x368ba03d
// declared property getter: - (id)weakReferenceToDelegate;	// 0x368ba029
@end

