/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import <NSObject.h> // Unknown library

@class NSMutableArray, CALayer, AVCaptureSession, NSString;

@interface AVCaptureVideoPreviewLayerInternal : NSObject {
	AVCaptureSession *session;	// 4 = 0x4
	NSMutableArray *connections;	// 8 = 0x8
	CALayer *sublayer;	// 12 = 0xc
	CGSize previewSize;	// 16 = 0x10
	float previewRotationDegrees;	// 24 = 0x18
	NSString *gravity;	// 28 = 0x1c
	BOOL disableActions;	// 32 = 0x20
	int orientation;	// 36 = 0x24
	BOOL automaticallyAdjustsMirroring;	// 40 = 0x28
	BOOL mirrored;	// 41 = 0x29
	BOOL isPresentationLayer;	// 42 = 0x2a
	BOOL visible;	// 43 = 0x2b
	BOOL isPaused;	// 44 = 0x2c
	BOOL chromaNoiseReductionEnabled;	// 45 = 0x2d
}
@end
