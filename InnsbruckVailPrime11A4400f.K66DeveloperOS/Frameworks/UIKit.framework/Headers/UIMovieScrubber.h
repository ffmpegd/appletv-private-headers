/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIMovieScrubberTrackViewDataSource.h"
#import "UIKit-Structs.h"
#import "UIMovieScrubberTrackViewDelegate.h"
#import "UIControl.h"

@class UIImageView, UIImage, UIMovieScrubberTrackView, UILabel, UIMovieScrubberEditingView;
@protocol UIMovieScrubberDataSource, UIMovieScrubberDelegate;

@interface UIMovieScrubber : UIControl <UIMovieScrubberTrackViewDataSource, UIMovieScrubberTrackViewDelegate> {
	UIImageView *_thumbView;	// 124 = 0x7c
	UIMovieScrubberTrackView *_trackView;	// 128 = 0x80
	UIMovieScrubberEditingView *_editingView;	// 132 = 0x84
	UILabel *_elapsedLabel;	// 136 = 0x88
	UILabel *_remainingLabel;	// 140 = 0x8c
	int _timeComponents;	// 144 = 0x90
	UIImage *_fillImage;	// 148 = 0x94
	UIImage *_innerShadowImage;	// 152 = 0x98
	UIImage *_maskImage;	// 156 = 0x9c
	UIImage *_shadowImage;	// 160 = 0xa0
	id<UIMovieScrubberDataSource> _dataSource;	// 164 = 0xa4
	id<UIMovieScrubberDelegate> _delegate;	// 168 = 0xa8
	CGRect _trackRect;	// 172 = 0xac
	float _hitOffset;	// 188 = 0xbc
	double _zoomDelay;	// 192 = 0xc0
	BOOL _showTimeViews;	// 200 = 0xc8
	BOOL _editable;	// 201 = 0xc9
	double _value;	// 204 = 0xcc
	double _maximumValue;	// 212 = 0xd4
	double _minimumValue;	// 220 = 0xdc
	CGPoint _touchLocationWhenTrackPressBegan;	// 228 = 0xe4
	double _trimStartValue;	// 236 = 0xec
	double _trimEndValue;	// 244 = 0xf4
	double _minTrimmedLength;	// 252 = 0xfc
	double _maxTrimmedLength;	// 260 = 0x104
	double _zoomAnimationDuration;	// 268 = 0x10c
	double _zoomAnimationDelay;	// 276 = 0x114
	struct {
		unsigned continuous : 1;
		unsigned animating : 1;
		unsigned creatingSnapshot : 1;
		unsigned needsReload : 1;
		unsigned layoutTimeViews : 1;
		unsigned computeTrackRect : 1;
		unsigned clampingTrimRange;
		unsigned zoomed : 1;
		unsigned zoomAnimating : 1;
		unsigned trackIsPressed : 1;
		unsigned trackAnimating : 1;
		unsigned thumbIsVisible : 1;
		unsigned handleIsPressed : 1;
		unsigned willBeginEditing : 1;
		unsigned editing : 1;
		unsigned editingHandle;
		unsigned rotationDisabled;
		unsigned isInNavigationBar : 1;
		unsigned delegateValueDidChange : 1;
		unsigned delegateStartValueDidChange : 1;
		unsigned delegateEndValueDidChange : 1;
		unsigned delegateWillBeginRequestingThumbnails : 1;
		unsigned delegateDidFinishRequestingThumbnails : 1;
		unsigned delegateWillBeginEditing : 1;
		unsigned delegateDidBeginEditing : 1;
		unsigned delegateDidCancelEditing : 1;
		unsigned delegateEditingAnimationFinished : 1;
		unsigned delegateWidthDeltaOriginXDelta : 1;
	} _sliderFlags;	// 284 = 0x11c
	float _edgeInset;	// 308 = 0x134
}
@property(readonly, assign, nonatomic) UIEdgeInsets alignmentMargins;	// G=0x2f6f4ec1; 
@property(assign, nonatomic, getter=isContinuous) BOOL continuous;	// G=0x2f6f33f5; S=0x2f6f33d9; 
@property(assign, nonatomic) id<UIMovieScrubberDataSource> dataSource;	// G=0x2f6f2d2d; S=0x2f6f2d05; 
@property(assign, nonatomic) id<UIMovieScrubberDelegate> delegate;	// G=0x2f6f2f49; S=0x2f6f2d8d; 
@property(assign, nonatomic) double duration;	// G=0x2f6f533d; S=0x2f6f5355; @dynamic
@property(assign, nonatomic) float edgeInset;	// G=0x2f6f7179; S=0x2f6f4e41; @synthesize=_edgeInset
@property(assign, nonatomic, getter=isEditable) BOOL editable;	// G=0x2f6f3321; S=0x2f6f3331; 
@property(assign, nonatomic, getter=isEditing) BOOL editing;	// G=0x2f6f3bdd; S=0x2f6f3bc9; 
@property(readonly, assign, nonatomic) BOOL isInsideNavigationBar;	// G=0x2f6f4e29; 
@property(assign, nonatomic) double maximumTrimLength;	// G=0x2f6f7121; S=0x2f6f7139; @synthesize=_maxTrimmedLength
@property(assign, nonatomic) double minimumTrimLength;	// G=0x2f6f714d; S=0x2f6f7165; @synthesize=_minTrimmedLength
@property(assign, nonatomic) BOOL showTimeViews;	// G=0x2f6f7101; S=0x2f6f7111; @synthesize=_showTimeViews
@property(assign, nonatomic) BOOL thumbIsVisible;	// G=0x2f6f323d; S=0x2f6f3255; 
@property(readonly, assign) CGRect trackRect;	// G=0x2f6f3d49; converted property
@property(assign, nonatomic) double trimEndValue;	// G=0x2f6f5749; S=0x2f6f57b1; 
@property(assign, nonatomic) double trimStartValue;	// G=0x2f6f5429; S=0x2f6f5491; 
@property(assign, nonatomic) double value;	// G=0x2f6f4efd; S=0x2f6f4f15; 
@property(assign, nonatomic) double zoomDelay;	// G=0x2f6f70d5; S=0x2f6f70ed; @synthesize=_zoomDelay
+ (id)timeStringForSeconds:(int)seconds forceFullWidthComponents:(BOOL)components isElapsed:(BOOL)elapsed;	// 0x2f6f6fa1
- (id)init;	// 0x2f6f2ad1
- (id)initWithFrame:(CGRect)frame;	// 0x2f6f2b01
- (BOOL)_alwaysHandleScrollerMouseEvent;	// 0x2f6f69c1
- (void)_animateAfterEdit:(BOOL)edit;	// 0x2f6f3409
- (void)_beginTrackPressWithTouch:(id)touch touchesBegan:(BOOL)began;	// 0x2f6f5e31
- (void)_cancelTrackPress:(BOOL)press;	// 0x2f6f5f4d
- (void)_cancelTrackPressIfNeccessaryWithTouch:(id)touch;	// 0x2f6f6029
- (void)_computeTrackRectForBounds:(CGRect)bounds;	// 0x2f6f3c11
- (void)_controlTouchBegan:(id)began withEvent:(id)event;	// 0x2f6f6939
- (void)_controlTouchEnded:(id)ended withEvent:(id)event;	// 0x2f6f6941
- (void)_controlTouchMoved:(id)moved withEvent:(id)event;	// 0x2f6f693d
- (int)_editingHandleWithTouch:(id)touch;	// 0x2f6f616d
- (CGRect)_editingRect;	// 0x2f6f3dc5
- (CGRect)_editingRectForStartTime:(double)startTime endTime:(double)time;	// 0x2f6f3e29
- (void)_initSubviews;	// 0x2f6f470d
- (id)_scriptingInfo;	// 0x2f6f2f59
- (void)_sendDelayedActions;	// 0x2f6f5ae1
- (void)_setValue:(double)value andSendAction:(BOOL)action;	// 0x2f6f5235
- (void)_sliderAnimationDidStop:(id)_sliderAnimation finished:(id)finished context:(id)context;	// 0x2f6f5a81
- (void)_sliderAnimationWillStart:(id)_sliderAnimation context:(id)context;	// 0x2f6f5a69
- (void)_sliderValueDidChange:(id)_sliderValue;	// 0x2f6f69ed
- (void)_trackPressWasHeld;	// 0x2f6f5d1d
- (void)_trimAnimationDidStop:(id)_trimAnimation finished:(id)finished context:(id)context;	// 0x2f6f3aa1
- (void)_updateThumbLocation;	// 0x2f6f51b5
- (void)_updateTimes;	// 0x2f6f4c45
- (float)_valueForTouch:(id)touch;	// 0x2f6f5b55
// declared property getter: - (UIEdgeInsets)alignmentMargins;	// 0x2f6f4ec1
- (void)animateAfterEdit;	// 0x2f6f3a79
- (void)animateCancelEdit;	// 0x2f6f3a8d
- (BOOL)beginTrackingWithTouch:(id)touch withEvent:(id)event;	// 0x2f6f61f1
- (BOOL)cancelTouchTracking;	// 0x2f6f6945
- (BOOL)continueTrackingWithTouch:(id)touch withEvent:(id)event;	// 0x2f6f6571
// declared property getter: - (id)dataSource;	// 0x2f6f2d2d
- (void)dealloc;	// 0x2f6f2c3d
// declared property getter: - (id)delegate;	// 0x2f6f2f49
- (void)didMoveToSuperview;	// 0x2f6f4d6d
- (void)didMoveToWindow;	// 0x2f6f4e01
// declared property getter: - (double)duration;	// 0x2f6f533d
// declared property getter: - (float)edgeInset;	// 0x2f6f7179
- (void)endTrackingWithTouch:(id)touch withEvent:(id)event;	// 0x2f6f6689
- (CGSize)intrinsicContentSize;	// 0x2f6f4295
- (BOOL)isAnimatingValueChange;	// 0x2f6f69d9
// declared property getter: - (BOOL)isContinuous;	// 0x2f6f33f5
// declared property getter: - (BOOL)isEditable;	// 0x2f6f3321
// declared property getter: - (BOOL)isEditing;	// 0x2f6f3bdd
// declared property getter: - (BOOL)isInsideNavigationBar;	// 0x2f6f4e29
- (void)layoutSubviews;	// 0x2f6f42e5
// declared property getter: - (double)maximumTrimLength;	// 0x2f6f7121
// declared property getter: - (double)minimumTrimLength;	// 0x2f6f714d
- (void)movieScrubberTrackView:(id)view clampedSizeWidthDelta:(float)delta actualSizeWidthDelta:(float)delta3 originXDelta:(float)delta4 minimumVisibleValue:(float)value maximumVisibleValue:(float)value6;	// 0x2f6f6b61
- (id)movieScrubberTrackView:(id)view evenlySpacedTimestamps:(int)timestamps startingAt:(id)at endingAt:(id)at4;	// 0x2f6f6a91
- (void)movieScrubberTrackView:(id)view requestThumbnailImageForTimestamp:(id)timestamp;	// 0x2f6f6ad1
- (id)movieScrubberTrackView:(id)view timestampsStartingAt:(id)at endingAt:(id)at3 maxCount:(int)count;	// 0x2f6f6ab1
- (void)movieScrubberTrackViewDidCollapse:(id)movieScrubberTrackView;	// 0x2f6f6f01
- (void)movieScrubberTrackViewDidExpand:(id)movieScrubberTrackView;	// 0x2f6f6ee1
- (void)movieScrubberTrackViewDidFinishRequestingThumbnails:(id)movieScrubberTrackView;	// 0x2f6f6f69
- (double)movieScrubberTrackViewDuration:(id)duration;	// 0x2f6f6a49
- (float)movieScrubberTrackViewThumbnailAspectRatio:(id)ratio;	// 0x2f6f6b11
- (void)movieScrubberTrackViewWillBeginRequestingThumbnails:(id)movieScrubberTrackView;	// 0x2f6f6f31
- (double)movieScrubberTrackViewZoomAnimationDelay:(id)delay;	// 0x2f6f6b49
- (double)movieScrubberTrackViewZoomAnimationDuration:(id)duration;	// 0x2f6f6b31
- (BOOL)pointInsideThumb:(CGPoint)thumb withEvent:(id)event;	// 0x2f6f60b1
- (void)reloadData;	// 0x2f6f2d3d
- (id)scriptingInfoWithChildren;	// 0x2f6f3071
// declared property setter: - (void)setContinuous:(BOOL)continuous;	// 0x2f6f33d9
// declared property setter: - (void)setDataSource:(id)source;	// 0x2f6f2d05
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x2f6f2d8d
// declared property setter: - (void)setDuration:(double)duration;	// 0x2f6f5355
// declared property setter: - (void)setEdgeInset:(float)inset;	// 0x2f6f4e41
// declared property setter: - (void)setEditable:(BOOL)editable;	// 0x2f6f3331
// declared property setter: - (void)setEditing:(BOOL)editing;	// 0x2f6f3bc9
- (void)setEditing:(BOOL)editing animated:(BOOL)animated;	// 0x2f6f36b9
- (void)setFrame:(CGRect)frame;	// 0x2f6f4119
// declared property setter: - (void)setMaximumTrimLength:(double)length;	// 0x2f6f7139
// declared property setter: - (void)setMinimumTrimLength:(double)length;	// 0x2f6f7165
- (void)setRotationDisabled:(BOOL)disabled;	// 0x2f6f5c99
// declared property setter: - (void)setShowTimeViews:(BOOL)views;	// 0x2f6f7111
// declared property setter: - (void)setThumbIsVisible:(BOOL)visible;	// 0x2f6f3255
- (void)setThumbnailImage:(CGImageRef)image forTimestamp:(id)timestamp;	// 0x2f6f6af1
// declared property setter: - (void)setTrimEndValue:(double)value;	// 0x2f6f57b1
// declared property setter: - (void)setTrimStartValue:(double)value;	// 0x2f6f5491
// declared property setter: - (void)setValue:(double)value;	// 0x2f6f4f15
- (void)setValue:(double)value animated:(BOOL)animated;	// 0x2f6f4f39
- (void)setZoomAnimationDuration:(double)duration;	// 0x2f6f3bf1
// declared property setter: - (void)setZoomDelay:(double)delay;	// 0x2f6f70ed
// declared property getter: - (BOOL)showTimeViews;	// 0x2f6f7101
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x2f6f4269
// declared property getter: - (BOOL)thumbIsVisible;	// 0x2f6f323d
- (CGRect)thumbRectForValue:(float)value;	// 0x2f6f3fc1
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x2f6f68d9
// converted property getter: - (CGRect)trackRect;	// 0x2f6f3d49
// declared property getter: - (double)trimEndValue;	// 0x2f6f5749
// declared property getter: - (double)trimStartValue;	// 0x2f6f5429
// declared property getter: - (double)value;	// 0x2f6f4efd
// declared property getter: - (double)zoomDelay;	// 0x2f6f70d5
@end

