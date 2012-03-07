/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVAssetWriterHelper.h"
#import "AVFoundation-Structs.h"

@class AVWeakReference;

@interface AVAssetWriterWritingHelper : AVAssetWriterHelper {
@private
	AVWeakReference *_weakReference;	// 12 = 0xc
	OpaqueFigAssetWriter *_figAssetWriter;	// 16 = 0x10
	BOOL _startSessionCalled;	// 20 = 0x14
}
- (id)initWithConfigurationState:(id)configurationState;	// 0x346b792d
- (id)initWithConfigurationState:(id)configurationState error:(id *)error;	// 0x346b72e5
- (void)_handleFailedNotificationWithError:(id)error;	// 0x346b6c99
- (void)_handleServerDiedNotification;	// 0x346b6ca9
- (void)cancelWriting;	// 0x346b6e7d
- (void)dealloc;	// 0x346b71d1
- (void)endSessionAtSourceTime:(XXStruct_pwHToB)sourceTime;	// 0x346b6f19
- (void)finalize;	// 0x346b70d9
- (void)finishWriting;	// 0x346b6ce5
- (void)startSessionAtSourceTime:(XXStruct_pwHToB)sourceTime;	// 0x346b7075
- (int)status;	// 0x346b6385
@end
