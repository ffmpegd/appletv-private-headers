/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <NSObject.h> // Unknown library

@class NSURL, NSArray, NSString;
@protocol AVCaptureFileOutputRecordingDelegate, AVCaptureFileOutputPauseResumeDelegate;

@interface AVCaptureFileOutputDelegateWrapper : NSObject {
	id<AVCaptureFileOutputRecordingDelegate, AVCaptureFileOutputPauseResumeDelegate> _delegate;	// 4 = 0x4
	NSURL *_outputFileURL;	// 8 = 0x8
	BOOL _receivedDidStartRecording;	// 12 = 0xc
	BOOL _receivedDidStopRecording;	// 13 = 0xd
	NSString *_didStopRecordingReason;	// 16 = 0x10
	NSArray *_metadata;	// 20 = 0x14
	NSArray *_connections;	// 24 = 0x18
}
@property(readonly, assign) NSArray *connections;	// G=0x3148ad09; @synthesize=_connections
@property(readonly, assign) id<AVCaptureFileOutputRecordingDelegate, AVCaptureFileOutputPauseResumeDelegate> delegate;	// G=0x3148ad69; @synthesize=_delegate
@property(copy) NSString *didStopRecordingReason;	// G=0x3148b05d; S=0x3148b035; @synthesize=_didStopRecordingReason
@property(retain) NSArray *metadata;	// G=0x3148b099; S=0x3148b075; @synthesize=_metadata
@property(readonly, assign) NSURL *outputFileURL;	// G=0x3148ad59; @synthesize=_outputFileURL
@property(assign) BOOL receivedDidStartRecording;	// G=0x3148ad39; S=0x3148ad49; @synthesize=_receivedDidStartRecording
@property(assign) BOOL receivedDidStopRecording;	// G=0x3148ad19; S=0x3148ad29; @synthesize=_receivedDidStopRecording
+ (id)wrapperWithURL:(id)url delegate:(id)delegate connections:(id)connections;	// 0x3148afe1
- (id)initWithURL:(id)url delegate:(id)delegate connections:(id)connections;	// 0x3148af4d
// declared property getter: - (id)connections;	// 0x3148ad09
- (void)dealloc;	// 0x3148b0b1
// declared property getter: - (id)delegate;	// 0x3148ad69
// declared property getter: - (id)didStopRecordingReason;	// 0x3148b05d
// declared property getter: - (id)metadata;	// 0x3148b099
// declared property getter: - (id)outputFileURL;	// 0x3148ad59
// declared property getter: - (BOOL)receivedDidStartRecording;	// 0x3148ad39
// declared property getter: - (BOOL)receivedDidStopRecording;	// 0x3148ad19
// declared property setter: - (void)setDidStopRecordingReason:(id)stopRecordingReason;	// 0x3148b035
// declared property setter: - (void)setMetadata:(id)metadata;	// 0x3148b075
// declared property setter: - (void)setReceivedDidStartRecording:(BOOL)startRecording;	// 0x3148ad49
// declared property setter: - (void)setReceivedDidStopRecording:(BOOL)stopRecording;	// 0x3148ad29
@end
