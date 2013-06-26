/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
 */

#import <UIView.h> // Unknown library
#import "ToneLibrary-Structs.h"
#import "TLVibrationRecorderTouchSurfaceDelegate.h"
#import "TLVibrationRecorderControlsViewDelegate.h"

@class TLVibrationRecorderControlsView, TLVibrationRecorderTouchSurface, UILabel;
@protocol TLVibrationRecorderViewDelegate;

@interface TLVibrationRecorderView : UIView <TLVibrationRecorderTouchSurfaceDelegate, TLVibrationRecorderControlsViewDelegate> {
	id<TLVibrationRecorderViewDelegate> _delegate;	// 88 = 0x58
	TLVibrationRecorderTouchSurface *_touchSurface;	// 92 = 0x5c
	TLVibrationRecorderControlsView *_controlsView;	// 96 = 0x60
	UILabel *_instructionsLabel;	// 100 = 0x64
	BOOL _replayMode;	// 104 = 0x68
	int _leftButtonIdentifier;	// 108 = 0x6c
	int _rightButtonIdentifier;	// 112 = 0x70
	double _vibrationPatternMaximumDuration;	// 116 = 0x74
	double _currentVibrationProgressDidStartTimestamp;	// 124 = 0x7c
	BOOL _isWaitingForEndOfCurrentVibrationComponent;	// 132 = 0x84
	double _currentVibrationComponentDidStartTime;	// 136 = 0x88
	BOOL _animatingProgress;	// 144 = 0x90
}
@property(assign, nonatomic, setter=_setReplayMode:) BOOL _replayMode;	// G=0x35a39e09; S=0x35a39051; @synthesize
@property(assign, nonatomic) id<TLVibrationRecorderViewDelegate> delegate;	// G=0x35a39de9; S=0x35a39df9; @synthesize=_delegate
- (id)initWithFrame:(CGRect)frame vibrationPatternMaximumDuration:(double)duration;	// 0x35a388e1
- (void)_enterWaitingModeWithAnimation:(BOOL)animation animateButtons:(BOOL)buttons enablePlayButton:(BOOL)button;	// 0x35a39499
- (void)_exitWaitingModeWithAnimation:(BOOL)animation;	// 0x35a39669
- (void)_getButtonPropertiesForIdentifier:(int)identifier enabled:(BOOL)enabled color:(int *)color title:(id *)title icon:(id *)icon;	// 0x35a39341
// declared property getter: - (BOOL)_replayMode;	// 0x35a39e09
- (void)_setLeftButtonIdentifier:(int)identifier enabled:(BOOL)enabled rightButtonIdentifier:(int)identifier3 enabled:(BOOL)enabled4 animate:(BOOL)animate;	// 0x35a38f19
- (void)_setLeftButtonIdentifier:(int)identifier enabled:(BOOL)enabled rightButtonIdentifier:(int)identifier3 enabled:(BOOL)enabled4 animate:(BOOL)animate completion:(id)completion;	// 0x35a38f59
// declared property setter: - (void)_setReplayMode:(BOOL)mode;	// 0x35a39051
- (void)_updateProgress:(id)progress;	// 0x35a39c71
- (void)dealloc;	// 0x35a38ea1
// declared property getter: - (id)delegate;	// 0x35a39de9
- (void)enterRecordingModeWithAnimation:(BOOL)animation;	// 0x35a39771
- (void)enterReplayModeWithVibrationPattern:(id)vibrationPattern animate:(BOOL)animate completion:(id)completion;	// 0x35a39911
- (void)exitRecordingModeWithAnimation:(BOOL)animation enablePlayButton:(BOOL)button;	// 0x35a39829
- (void)exitReplayModeWithAnimation:(BOOL)animation;	// 0x35a39a91
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x35a39df9
- (void)startAnimatingProgress;	// 0x35a39b59
- (void)stopAnimatingProgress;	// 0x35a39c19
- (void)vibrationComponentDidEndForVibrationRecorderTouchSurface:(id)vibrationComponent;	// 0x35a390f5
- (void)vibrationComponentDidStartForVibrationRecorderTouchSurface:(id)vibrationComponent;	// 0x35a3906d
- (void)vibrationRecorderControlsView:(id)view buttonTappedAtIndex:(unsigned)index;	// 0x35a39161
- (void)vibrationRecorderTouchSurface:(id)surface didExitRecordingModeWithContextObject:(id)contextObject;	// 0x35a3930d
- (BOOL)vibrationRecorderTouchSurfaceDidEnterRecordingMode:(id)vibrationRecorderTouchSurface;	// 0x35a392e1
- (void)vibrationRecorderTouchSurfaceDidFinishReplayingVibration:(id)vibrationRecorderTouchSurface;	// 0x35a391b9
@end
