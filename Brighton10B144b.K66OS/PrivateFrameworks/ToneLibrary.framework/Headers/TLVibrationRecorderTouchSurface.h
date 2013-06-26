/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
 */

#import "TLVibrationRecorderRippleView.h"
#import "ToneLibrary-Structs.h"

@class TLVibrationPattern;
@protocol TLVibrationRecorderTouchSurfaceDelegate;

@interface TLVibrationRecorderTouchSurface : TLVibrationRecorderRippleView {
	id<TLVibrationRecorderTouchSurfaceDelegate> _delegate;	// 200 = 0xc8
	BOOL _recordingMode;	// 204 = 0xcc
	id _recordingContextObject;	// 208 = 0xd0
	BOOL _shouldIgnoreCurrentTouch;	// 212 = 0xd4
	BOOL _replayMode;	// 213 = 0xd5
	TLVibrationPattern *_vibrationPatternToReplay;	// 216 = 0xd8
	double _replayModeWasEnteredStartTime;	// 220 = 0xdc
	double _vibrationPatternMaximumDuration;	// 228 = 0xe4
}
@property(retain, nonatomic, setter=_setVibrationPatternToReplay:) TLVibrationPattern *_vibrationPatternToReplay;	// G=0x35a368c1; S=0x35a368d1; @synthesize
@property(assign, nonatomic) id<TLVibrationRecorderTouchSurfaceDelegate> delegate;	// G=0x35a368a1; S=0x35a368b1; @synthesize=_delegate
- (id)initWithFrame:(CGRect)frame vibrationPatternMaximumDuration:(double)duration;	// 0x35a35f2d
// declared property setter: - (void)_setVibrationPatternToReplay:(id)replay;	// 0x35a368d1
- (void)_updateTouchLocationForReplayMode:(id)replayMode;	// 0x35a3675d
// declared property getter: - (id)_vibrationPatternToReplay;	// 0x35a368c1
- (void)currentVibrationComponentShouldEnd;	// 0x35a365f1
- (void)dealloc;	// 0x35a3604d
// declared property getter: - (id)delegate;	// 0x35a368a1
- (void)enterRecordingMode;	// 0x35a364dd
- (void)enterReplayModeWithVibrationPattern:(id)vibrationPattern;	// 0x35a36635
- (void)exitRecordingMode;	// 0x35a36561
- (void)exitReplayMode;	// 0x35a366d5
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x35a368b1
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x35a360d5
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x35a364cd
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x35a3639d
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x35a36239
@end
