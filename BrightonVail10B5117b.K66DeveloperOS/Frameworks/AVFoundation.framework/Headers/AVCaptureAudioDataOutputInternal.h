/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <NSObject.h> // Unknown library

@protocol OS_dispatch_queue, AVCaptureAudioDataOutputSampleBufferDelegate;

@interface AVCaptureAudioDataOutputInternal : NSObject {
	id<AVCaptureAudioDataOutputSampleBufferDelegate> delegate;	// 4 = 0x4
	NSObject<OS_dispatch_queue> *clientQueue;	// 8 = 0x8
}
- (void)dealloc;	// 0x30293c89
@end
