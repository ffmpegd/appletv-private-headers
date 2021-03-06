/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import "AVAssetWriterInputHelper.h"


@interface AVAssetWriterInputTerminalHelper : AVAssetWriterInputHelper {
	int _terminalStatus;	// 12 = 0xc
	BOOL _didRequestMediaDataOnce;	// 16 = 0x10
}
- (id)initWithConfigurationState:(id)configurationState;	// 0x302e0195
- (id)initWithConfigurationState:(id)configurationState terminalStatus:(int)status;	// 0x302e01a9
- (BOOL)appendPixelBuffer:(CVBufferRef)buffer withPresentationTime:(XXStruct_pwHToB)presentationTime;	// 0x302e03d5
- (BOOL)appendSampleBuffer:(opaqueCMSampleBuffer *)buffer;	// 0x302e03d1
- (BOOL)isReadyForMoreMediaData;	// 0x302e0255
- (void)markAsFinished;	// 0x302e03d9
- (void)requestMediaDataWhenReadyOnQueue:(id)queue usingBlock:(id)block;	// 0x302e029d
- (int)status;	// 0x302e0241
- (void)transitionToTerminalStatus:(int)terminalStatus;	// 0x302e0251
@end

