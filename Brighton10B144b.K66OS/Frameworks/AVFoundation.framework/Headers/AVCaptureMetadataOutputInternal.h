/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <NSObject.h> // Unknown library

@class NSArray;
@protocol OS_dispatch_queue, AVCaptureMetadataOutputObjectsDelegate;

@interface AVCaptureMetadataOutputInternal : NSObject {
	id<AVCaptureMetadataOutputObjectsDelegate> delegate;	// 4 = 0x4
	NSObject<OS_dispatch_queue> *clientQueue;	// 8 = 0x8
	NSArray *metadataObjectTypes;	// 12 = 0xc
}
- (void)dealloc;	// 0x302e6549
@end

