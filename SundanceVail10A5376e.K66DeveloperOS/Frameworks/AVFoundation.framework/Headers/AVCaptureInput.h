/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <NSObject.h> // Unknown library

@class AVCaptureInputInternal, NSArray;

@interface AVCaptureInput : NSObject {
	AVCaptureInputInternal *_inputInternal;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) NSArray *ports;	// G=0x368e5885; 
@property(retain) id session;	// G=0x368e58a1; S=0x368e58c1; converted property
- (id)init;	// 0x368e5739
- (void)_applyOverridesToCaptureOptions:(id)captureOptions;	// 0x368e58f1
- (void)dealloc;	// 0x368e5839
- (void)didStartForSession:(id)session;	// 0x368e58e9
- (void)didStopForSession:(id)session error:(id)error;	// 0x368e58ed
- (void)handleNotification:(id)notification payload:(id)payload;	// 0x368e58f5
- (id)notReadyError;	// 0x368e58e1
// declared property getter: - (id)ports;	// 0x368e5885
// converted property getter: - (id)session;	// 0x368e58a1
// converted property setter: - (void)setSession:(id)session;	// 0x368e58c1
- (void)willStartForSession:(id)session;	// 0x368e58e5
@end

