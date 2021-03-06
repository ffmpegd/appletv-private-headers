/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIControl.h"

@class UIImageView, UIButton, NSTimer;

@interface UIStepper : UIControl {
@private
	BOOL _isRtoL;	// 70 = 0x46
	UIImageView *_middleView;	// 72 = 0x48
	UIButton *_plusButton;	// 76 = 0x4c
	UIButton *_minusButton;	// 80 = 0x50
	NSTimer *_repeatTimer;	// 84 = 0x54
	int _repeatCount;	// 88 = 0x58
	double _value;	// 92 = 0x5c
	double _minimumValue;	// 100 = 0x64
	double _maximumValue;	// 108 = 0x6c
	double _stepValue;	// 116 = 0x74
	BOOL _continuous;	// 124 = 0x7c
	BOOL _autorepeat;	// 125 = 0x7d
	BOOL _wraps;	// 126 = 0x7e
}
@property(assign, nonatomic) BOOL autorepeat;	// G=0x3037bcc9; S=0x3037bcd9; @synthesize=_autorepeat
@property(assign, nonatomic, getter=isContinuous) BOOL continuous;	// G=0x3037bca9; S=0x3037bcb9; @synthesize=_continuous
@property(assign, nonatomic) double maximumValue;	// G=0x3037bc79; S=0x3037ab61; @synthesize=_maximumValue
@property(assign, nonatomic) double minimumValue;	// G=0x3037bc61; S=0x3037aaad; @synthesize=_minimumValue
@property(assign, nonatomic) double stepValue;	// G=0x3037bc91; S=0x3037ac15; @synthesize=_stepValue
@property(assign, nonatomic) double value;	// G=0x3037bc49; S=0x3037aa2d; @synthesize=_value
@property(assign, nonatomic) BOOL wraps;	// G=0x3037bce9; S=0x3037ad29; @synthesize=_wraps
- (id)initWithCoder:(id)coder;	// 0x3037ad59
- (id)initWithFrame:(CGRect)frame;	// 0x3037a891
- (void)_commonStepperInit;	// 0x3037b169
- (void)_populateArchivedSubviews:(id)subviews;	// 0x3037a929
- (void)_startTimer;	// 0x3037b935
- (void)_stopTimer;	// 0x3037b9b5
- (void)_updateButtonEnabled;	// 0x3037b525
- (void)_updateCount:(id)count;	// 0x3037b9e1
- (void)_updateHighlightingAtPoint:(CGPoint)point withEvent:(id)event;	// 0x3037b649
// declared property getter: - (BOOL)autorepeat;	// 0x3037bcc9
- (BOOL)beginTrackingWithTouch:(id)touch withEvent:(id)event;	// 0x3037b7b9
- (void)cancelTrackingWithEvent:(id)event;	// 0x3037b8e1
- (BOOL)continueTrackingWithTouch:(id)touch withEvent:(id)event;	// 0x3037b821
- (void)dealloc;	// 0x3037ac8d
- (void)encodeWithCoder:(id)coder;	// 0x3037afa1
- (void)endTrackingWithTouch:(id)touch withEvent:(id)event;	// 0x3037b879
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x3037b759
// declared property getter: - (BOOL)isContinuous;	// 0x3037bca9
// declared property getter: - (double)maximumValue;	// 0x3037bc79
// declared property getter: - (double)minimumValue;	// 0x3037bc61
// declared property setter: - (void)setAutorepeat:(BOOL)autorepeat;	// 0x3037bcd9
// declared property setter: - (void)setContinuous:(BOOL)continuous;	// 0x3037bcb9
- (void)setFrame:(CGRect)frame;	// 0x3037a9c1
// declared property setter: - (void)setMaximumValue:(double)value;	// 0x3037ab61
// declared property setter: - (void)setMinimumValue:(double)value;	// 0x3037aaad
// declared property setter: - (void)setStepValue:(double)value;	// 0x3037ac15
// declared property setter: - (void)setValue:(double)value;	// 0x3037aa2d
// declared property setter: - (void)setWraps:(BOOL)wraps;	// 0x3037ad29
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x3037ad15
// declared property getter: - (double)stepValue;	// 0x3037bc91
// declared property getter: - (double)value;	// 0x3037bc49
// declared property getter: - (BOOL)wraps;	// 0x3037bce9
@end

