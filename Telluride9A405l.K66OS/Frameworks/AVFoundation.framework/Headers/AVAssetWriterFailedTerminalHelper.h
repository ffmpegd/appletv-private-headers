/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import "AVAssetWriterTerminalHelper.h"

@class NSError;

@interface AVAssetWriterFailedTerminalHelper : AVAssetWriterTerminalHelper {
@private
	NSError *_terminalError;	// 12 = 0xc
}
- (id)initWithConfigurationState:(id)configurationState;	// 0x346b79b1
- (id)initWithConfigurationState:(id)configurationState terminalError:(id)error;	// 0x346b7b85
- (void)dealloc;	// 0x346b7b39
- (void)endSessionAtSourceTime:(XXStruct_pwHToB)sourceTime;	// 0x346b63a5
- (id)error;	// 0x346b6391
- (void)finishWriting;	// 0x346b63a9
- (void)startSessionAtSourceTime:(XXStruct_pwHToB)sourceTime;	// 0x346b63a1
- (int)status;	// 0x346b638d
@end

