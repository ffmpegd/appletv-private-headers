/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <NSObject.h> // Unknown library

@class NSArray, NSURL, NSString;
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
@property(readonly, assign) NSArray *connections;	// G=0x326d261d; @synthesize=_connections
@property(readonly, assign) id<AVCaptureFileOutputRecordingDelegate, AVCaptureFileOutputPauseResumeDelegate> delegate;	// G=0x326d254d; @synthesize=_delegate
@property(copy) NSString *didStopRecordingReason;	// G=0x326d25ad; S=0x326d25c1; @synthesize=_didStopRecordingReason
@property(retain) NSArray *metadata;	// G=0x326d25e5; S=0x326d25f9; @synthesize=_metadata
@property(readonly, assign) NSURL *outputFileURL;	// G=0x326d255d; @synthesize=_outputFileURL
@property(assign) BOOL receivedDidStartRecording;	// G=0x326d256d; S=0x326d257d; @synthesize=_receivedDidStartRecording
@property(assign) BOOL receivedDidStopRecording;	// G=0x326d258d; S=0x326d259d; @synthesize=_receivedDidStopRecording
+ (id)wrapperWithURL:(id)url delegate:(id)delegate connections:(id)connections;	// 0x326d23e1
- (id)initWithURL:(id)url delegate:(id)delegate connections:(id)connections;	// 0x326d2435
// declared property getter: - (id)connections;	// 0x326d261d
- (void)dealloc;	// 0x326d24c5
// declared property getter: - (id)delegate;	// 0x326d254d
// declared property getter: - (id)didStopRecordingReason;	// 0x326d25ad
// declared property getter: - (id)metadata;	// 0x326d25e5
// declared property getter: - (id)outputFileURL;	// 0x326d255d
// declared property getter: - (BOOL)receivedDidStartRecording;	// 0x326d256d
// declared property getter: - (BOOL)receivedDidStopRecording;	// 0x326d258d
// declared property setter: - (void)setDidStopRecordingReason:(id)stopRecordingReason;	// 0x326d25c1
// declared property setter: - (void)setMetadata:(id)metadata;	// 0x326d25f9
// declared property setter: - (void)setReceivedDidStartRecording:(BOOL)startRecording;	// 0x326d257d
// declared property setter: - (void)setReceivedDidStopRecording:(BOOL)stopRecording;	// 0x326d259d
@end

