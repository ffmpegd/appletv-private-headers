/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <NSObject.h> // Unknown library
#import "AVFoundation-Structs.h"

@protocol AVCaptureAudioDataOutputSampleBufferDelegate;

@interface AVCaptureAudioDataOutputInternal : NSObject {
	id<AVCaptureAudioDataOutputSampleBufferDelegate> delegate;	// 4 = 0x4
	dispatch_queue_s *clientQueue;	// 8 = 0x8
}
- (void)dealloc;	// 0x32331f51
@end

