/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import <UISlider.h> // Unknown library

@class UIImageView, NSString, NSTimer, UILabel;
@protocol MPDetailSliderDelegate;

@interface MPDetailSlider : UISlider {
	UILabel *_currentTimeInverseLabel;	// 176 = 0xb0
	UILabel *_currentTimeLabel;	// 180 = 0xb4
	BOOL _allowsScrubbing;	// 184 = 0xb8
	BOOL _allowsDetailScrubbing;	// 185 = 0xb9
	BOOL _autoscrubActive;	// 186 = 0xba
	NSTimer *_autoscrubTimer;	// 188 = 0xbc
	double _availableDuration;	// 192 = 0xc0
	CGPoint _beginLocationInView;	// 200 = 0xc8
	BOOL _canCommit;	// 208 = 0xd0
	double _currentTime;	// 212 = 0xd4
	id _delegate;	// 220 = 0xdc
	float _detailScrubbingVerticalRange;	// 224 = 0xe0
	BOOL _didBeginTracking;	// 228 = 0xe4
	UIImageView *_downloadingTrackOverlay;	// 232 = 0xe8
	double _duration;	// 236 = 0xec
	BOOL _durationAllowsDetailScrubbing;	// 244 = 0xf4
	UIImageView *_glowDetailScrubImageView;	// 248 = 0xf8
	BOOL _isTracking;	// 252 = 0xfc
	CGPoint _lastCommittedLocationInView;	// 256 = 0x100
	float _minScale;	// 264 = 0x108
	float _minTimeLabelWidth;	// 268 = 0x10c
	float _maxTrackWidth;	// 272 = 0x110
	BOOL _needsCommit;	// 276 = 0x114
	CGPoint _previousLocationInView;	// 280 = 0x118
	int _scrubValue;	// 288 = 0x120
	int _style;	// 292 = 0x124
	UIEdgeInsets _timeLabelInsets;	// 296 = 0x128
	int _timeLabelStyle;	// 312 = 0x138
	UIImageView *_thumbImageView;	// 316 = 0x13c
	float _trackInset;	// 320 = 0x140
}
@property(assign, nonatomic) BOOL allowsDetailScrubbing;	// G=0x31db8e95; S=0x31db90ad; 
@property(assign, nonatomic) BOOL allowsScrubbing;	// G=0x31dbad21; S=0x31db9079; @synthesize=_allowsScrubbing
@property(assign, nonatomic) double availableDuration;	// G=0x31dbac6d; S=0x31db90c9; @synthesize=_availableDuration
@property(assign, nonatomic) id<MPDetailSliderDelegate> delegate;	// G=0x31dbac85; S=0x31dbac95; @synthesize=_delegate
@property(readonly, assign, nonatomic) BOOL detailScrubbingAvailableForCurrentDuration;	// G=0x31db8f79; 
@property(assign, nonatomic) float detailScrubbingVerticalRange;	// G=0x31dbaca5; S=0x31dbacb5; @synthesize=_detailScrubbingVerticalRange
@property(assign, nonatomic) double duration;	// G=0x31dbacc5; S=0x31db9141; @synthesize=_duration
@property(readonly, assign) BOOL isTracking;	// G=0x31db8e61; converted property
@property(readonly, assign, nonatomic) NSString *localizedScrubSpeedText;	// G=0x31db8fa9; 
@property(assign, nonatomic) float minTimeLabelWidth;	// G=0x31dbad11; S=0x31db9269; @synthesize=_minTimeLabelWidth
@property(assign, nonatomic) UIEdgeInsets timeLabelInsets;	// G=0x31dbacdd; S=0x31db92a1; @synthesize=_timeLabelInsets
@property(assign, nonatomic) int timeLabelStyle;	// G=0x31dbad01; S=0x31db9331; @synthesize=_timeLabelStyle
+ (float)defaultHeight;	// 0x31db8e71
+ (Class)labelClass;	// 0x31db8e79
- (id)initWithFrame:(CGRect)frame;	// 0x31db711d
- (id)initWithFrame:(CGRect)frame style:(int)style;	// 0x31db70e5
- (id)initWithFrame:(CGRect)frame style:(int)style maxTrackWidth:(float)width;	// 0x31db7011
- (void)_adjustMinScale;	// 0x31db9ad9
- (void)_autoscrubTick:(id)tick;	// 0x31db8121
- (void)_commitValue;	// 0x31dba20d
- (void)_resetScrubInfo;	// 0x31dba185
- (float)_scaleForIdealValueForVerticalPosition:(float)verticalPosition;	// 0x31db9ca1
- (float)_scaleForVerticalPosition:(float)verticalPosition;	// 0x31db9b49
- (void)_setValueWhileTracking:(float)tracking animated:(BOOL)animated;	// 0x31db7e99
- (void)_setupControlsForStyle;	// 0x31db94ed
- (id)_stringForCurrentTime:(double)currentTime;	// 0x31db9fb9
- (id)_stringForInverseCurrentTime:(double)inverseCurrentTime;	// 0x31dba05d
- (id)_stringForTime:(double)time;	// 0x31db9e91
- (CGRect)_thumbHitFrame;	// 0x31dba131
- (void)_updateForAvailableDuraton;	// 0x31dba2b1
- (void)_updateTimeDisplayForTime:(double)time;	// 0x31db9d85
- (void)_updateTimeDisplayForTime:(double)time force:(BOOL)force;	// 0x31db9da9
- (void)_updateTrackInset;	// 0x31db973d
// declared property getter: - (BOOL)allowsDetailScrubbing;	// 0x31db8e95
// declared property getter: - (BOOL)allowsScrubbing;	// 0x31dbad21
// declared property getter: - (double)availableDuration;	// 0x31dbac6d
- (BOOL)beginTrackingWithTouch:(id)touch withEvent:(id)event;	// 0x31db7ff9
- (void)cancelTracking;	// 0x31db8ea5
- (void)cancelTrackingWithEvent:(id)event;	// 0x31db8e51
- (BOOL)continueTrackingWithTouch:(id)touch withEvent:(id)event;	// 0x31db8399
- (id)createThumbView;	// 0x31db7875
- (id)currentThumbImage;	// 0x31db7929
- (void)dealloc;	// 0x31db7151
// declared property getter: - (id)delegate;	// 0x31dbac85
// declared property getter: - (BOOL)detailScrubbingAvailableForCurrentDuration;	// 0x31db8f79
// declared property getter: - (float)detailScrubbingVerticalRange;	// 0x31dbaca5
// declared property getter: - (double)duration;	// 0x31dbacc5
- (void)endTrackingWithTouch:(id)touch withEvent:(id)event;	// 0x31db8d11
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x31db7201
// converted property getter: - (BOOL)isTracking;	// 0x31db8e61
- (void)layoutSubviews;	// 0x31db7281
// declared property getter: - (id)localizedScrubSpeedText;	// 0x31db8fa9
// declared property getter: - (float)minTimeLabelWidth;	// 0x31dbad11
// declared property setter: - (void)setAllowsDetailScrubbing:(BOOL)scrubbing;	// 0x31db90ad
// declared property setter: - (void)setAllowsScrubbing:(BOOL)scrubbing;	// 0x31db9079
// declared property setter: - (void)setAvailableDuration:(double)duration;	// 0x31db90c9
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x31dbac95
// declared property setter: - (void)setDetailScrubbingVerticalRange:(float)range;	// 0x31dbacb5
// declared property setter: - (void)setDuration:(double)duration;	// 0x31db9141
- (void)setFrame:(CGRect)frame;	// 0x31db7811
// declared property setter: - (void)setMinTimeLabelWidth:(float)width;	// 0x31db9269
// declared property setter: - (void)setTimeLabelInsets:(UIEdgeInsets)insets;	// 0x31db92a1
// declared property setter: - (void)setTimeLabelStyle:(int)style;	// 0x31db9331
- (void)setValue:(float)value animated:(BOOL)animated;	// 0x31db7e69
- (CGRect)thumbRectForBounds:(CGRect)bounds trackRect:(CGRect)rect value:(float)value;	// 0x31db7c55
- (id)timeLabelFontForStyle:(int)style;	// 0x31db9359
// declared property getter: - (UIEdgeInsets)timeLabelInsets;	// 0x31dbacdd
- (id)timeLabelShadowColorForStyle:(int)style;	// 0x31db9401
- (CGSize)timeLabelShadowOffsetForStyle:(int)style;	// 0x31db944d
// declared property getter: - (int)timeLabelStyle;	// 0x31dbad01
- (id)timeLabelTextColorForStyle:(int)style;	// 0x31db947d
- (float)timeLabelVerticalOffsetForStyle:(int)style;	// 0x31db94c9
- (CGRect)trackRectForBounds:(CGRect)bounds;	// 0x31db7b8d
@end
