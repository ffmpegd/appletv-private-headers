/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import <NSObject.h> // Unknown library

@class AVCaptureInputPort, AVCaptureOutput, NSMutableArray, NSArray;

@interface AVCaptureConnectionInternal : NSObject {
	NSMutableArray *inputPorts;	// 4 = 0x4
	AVCaptureOutput *output;	// 8 = 0x8
	BOOL active;	// 12 = 0xc
	BOOL enabled;	// 13 = 0xd
	int outputChangeSeedOnDisable;	// 16 = 0x10
	AVCaptureInputPort *audioInputPort;	// 20 = 0x14
	NSMutableArray *audioChannels;	// 24 = 0x18
	NSArray *audioChannelLevels;	// 28 = 0x1c
	long long lastGetAudioLevelsTime;	// 32 = 0x20
	AVCaptureInputPort *videoInputPort;	// 40 = 0x28
	BOOL videoMirroringSupported;	// 44 = 0x2c
	BOOL videoMirrored;	// 45 = 0x2d
	BOOL videoMirroredIsSetByClient;	// 46 = 0x2e
	BOOL videoOrientationSupported;	// 47 = 0x2f
	int videoOrientation;	// 48 = 0x30
	XXStruct_pwHToB videoMinFrameDuration;	// 52 = 0x34
	XXStruct_pwHToB videoMaxFrameDuration;	// 76 = 0x4c
	float videoMaxScaleAndCropFactor;	// 100 = 0x64
	float videoScaleAndCropFactor;	// 104 = 0x68
	CGRect videoCropRect;	// 108 = 0x6c
	BOOL videoFirstAndLastFramesUncropped;	// 124 = 0x7c
	int videoRetainedBufferCountHint;	// 128 = 0x80
	CGSize videoMotionFilterOverlapRatios;	// 132 = 0x84
}
@end

