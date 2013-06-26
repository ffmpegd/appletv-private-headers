/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

#import "TelephonyUI-Structs.h"
#import "TPBottomBar.h"

@class TPWell, NSArray, TPLockTextView, TPLockKnobView, UIImageView, NSTimer;

@interface TPBottomLockBar : TPBottomBar {
	NSArray *_labels;	// 100 = 0x64
	int _currentLabelIndex;	// 104 = 0x68
	NSTimer *_cycleLabelTimer;	// 108 = 0x6c
	id _delegate;	// 112 = 0x70
	id _representedObject;	// 116 = 0x74
	TPLockKnobView *_knobView;	// 120 = 0x78
	UIView *_trackArrow;	// 124 = 0x7c
	TPLockTextView *_labelView;	// 128 = 0x80
	TPWell *_well;	// 132 = 0x84
	float _knobTrackInsetLeft;	// 136 = 0x88
	float _fontSize;	// 140 = 0x8c
	float _deltaFromDefaultLabelWidth;	// 144 = 0x90
	UIImageView *_backgroundView;	// 148 = 0x94
}
@property(readonly, assign) int currentLabelIndex;	// G=0x357b8199; converted property
@property(assign) float fontSize;	// G=0x357b8455; S=0x357b8445; converted property
@property(readonly, assign) float knobTrackInsetLeft;	// G=0x357b8b11; converted property
@property(readonly, retain) TPLockTextView *labelView;	// G=0x357b8d31; converted property
@property(retain) NSArray *labels;	// G=0x357b8435; S=0x357b838d; converted property
@property(retain) id representedObject;	// G=0x357b8ac5; S=0x357b8a81; converted property
@property(readonly, retain) TPWell *well;	// G=0x357b8b61; converted property
+ (float)defaultLabelFontSize;	// 0x357b724d
+ (CGSize)defaultSize;	// 0x357b71d5
- (id)initForIncomingCallWithFrame:(CGRect)frame;	// 0x357b7835
- (id)initWithFrame:(CGRect)frame knobColor:(int)color;	// 0x357b76ed
- (id)initWithFrame:(CGRect)frame knobImage:(id)image;	// 0x357b72f9
- (void)_adjustKnobOrigin;	// 0x357b7c1d
- (void)_adjustLabelOrigin;	// 0x357b7c71
- (float)_calcKnobYOffset;	// 0x357b7b71
- (BOOL)_canDrawContent;	// 0x357b8d41
- (id)_knobImageForColor:(int)color;	// 0x357b76a5
- (void)_setLabel:(id)label;	// 0x357b7e09
- (BOOL)_shouldStopLabelAnimationForGrab;	// 0x357b72f5
- (BOOL)allowsTouchTrackingBeyondVerticalThreshold;	// 0x357b72ed
// converted property getter: - (int)currentLabelIndex;	// 0x357b8199
- (void)cycleToLabelAtIndex:(int)index;	// 0x357b82c1
- (void)cycleToNextLabel;	// 0x357b8141
- (void)dealloc;	// 0x357b7861
- (float)defaultWellWidth;	// 0x357b7299
- (void)downInKnob;	// 0x357b7a29
- (void)drawRect:(CGRect)rect;	// 0x357b7295
- (void)finishedCyclingLabelOut;	// 0x357b81a9
// converted property getter: - (float)fontSize;	// 0x357b8455
- (void)freezeKnobInUnlockedPosition;	// 0x357b8945
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x357b8d7d
- (BOOL)isAnimating;	// 0x357b7a05
- (id)knob;	// 0x357b7959
- (void)knobDragged:(float)dragged;	// 0x357b8469
// converted property getter: - (float)knobTrackInsetLeft;	// 0x357b8b11
- (float)knobTrackInsetRight;	// 0x357b8b19
// converted property getter: - (id)labelView;	// 0x357b8d31
// converted property getter: - (id)labels;	// 0x357b8435
- (BOOL)pointInside:(CGPoint)inside withEvent:(id)event;	// 0x357b8ad5
- (void)relock;	// 0x357b88a9
// converted property getter: - (id)representedObject;	// 0x357b8ac5
- (void)setDelegate:(id)delegate;	// 0x357b8a71
// converted property setter: - (void)setFontSize:(float)size;	// 0x357b8445
- (void)setKnobColor:(int)color;	// 0x357b7731
- (void)setKnobImage:(id)image;	// 0x357b7761
- (void)setKnobWellWidth:(float)width;	// 0x357b8b71
- (void)setKnobWellWidthToDefault;	// 0x357b8c65
- (void)setLabel:(id)label;	// 0x357b7b3d
// converted property setter: - (void)setLabels:(id)labels;	// 0x357b838d
// converted property setter: - (void)setRepresentedObject:(id)object;	// 0x357b8a81
- (void)setSuppressDrawingBackground:(BOOL)background;	// 0x357b8f05
- (void)setTextAlpha:(float)alpha;	// 0x357b8f6d
- (void)setWellAlpha:(float)alpha;	// 0x357b8f8d
- (void)slideBack:(BOOL)back;	// 0x357b85c1
- (void)startAnimating;	// 0x357b7969
- (void)startCyclingLabels;	// 0x357b8061
- (void)stopAnimating;	// 0x357b79c9
- (void)stopCyclingLabels;	// 0x357b8105
- (void)unlock;	// 0x357b8a29
- (void)upInKnob;	// 0x357b7abd
- (BOOL)usesBackgroundImage;	// 0x357b72f1
// converted property getter: - (id)well;	// 0x357b8b61
- (id)wellImageName;	// 0x357b72e1
@end
