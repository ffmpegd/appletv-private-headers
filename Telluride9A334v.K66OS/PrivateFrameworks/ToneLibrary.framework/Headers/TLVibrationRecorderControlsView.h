/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
 */

#import <UIView.h> // Unknown library
#import "ToneLibrary-Structs.h"

@class TLVibrationRecorderProgressView;
@protocol TLVibrationRecorderControlsViewDelegate;

@interface TLVibrationRecorderControlsView : UIView {
	id<TLVibrationRecorderControlsViewDelegate> _delegate;	// 48 = 0x30
	TLVibrationRecorderProgressView *_progressView;	// 52 = 0x34
	id _leftButton;	// 56 = 0x38
	id _rightButton;	// 60 = 0x3c
}
@property(retain, nonatomic, setter=_setLeftButton:) id _leftButton;	// G=0x3306717d; S=0x3306718d; @synthesize
@property(retain, nonatomic, setter=_setRightButton:) id _rightButton;	// G=0x330671b1; S=0x330671c1; @synthesize
@property(assign, nonatomic) double currentTimeInterval;	// G=0x33066f79; S=0x33066f99; 
@property(assign, nonatomic) id<TLVibrationRecorderControlsViewDelegate> delegate;	// G=0x3306715d; S=0x3306716d; @synthesize=_delegate
@property(assign, nonatomic, getter=isLeftButtonEnabled) BOOL leftButtonEnabled;	// G=0x33066ed1; S=0x33066ef9; 
@property(assign, nonatomic, getter=isRightButtonEnabled) BOOL rightButtonEnabled;	// G=0x33066f25; S=0x33066f4d; 
@property(assign, nonatomic) unsigned roundedCornersCompensationDelayMode;	// G=0x33066fb9; S=0x33066fd9; 
+ (void)_loadImages;	// 0x33066119
+ (float)defaultHeight;	// 0x330662c1
- (id)initWithFrame:(CGRect)frame vibrationPatternMaximumDuration:(double)duration;	// 0x3306631d
- (void)_buttonTapped:(id)tapped;	// 0x330670f5
// declared property getter: - (id)_leftButton;	// 0x3306717d
// declared property getter: - (id)_rightButton;	// 0x330671b1
// declared property setter: - (void)_setLeftButton:(id)button;	// 0x3306718d
// declared property setter: - (void)_setRightButton:(id)button;	// 0x330671c1
- (void)clearAllVibrationComponents;	// 0x33067039
// declared property getter: - (double)currentTimeInterval;	// 0x33066f79
- (void)dealloc;	// 0x33066495
// declared property getter: - (id)delegate;	// 0x3306715d
- (void)drawRect:(CGRect)rect;	// 0x33067059
// declared property getter: - (BOOL)isLeftButtonEnabled;	// 0x33066ed1
// declared property getter: - (BOOL)isRightButtonEnabled;	// 0x33066f25
// declared property getter: - (unsigned)roundedCornersCompensationDelayMode;	// 0x33066fb9
// declared property setter: - (void)setCurrentTimeInterval:(double)interval;	// 0x33066f99
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x3306716d
- (void)setLeftButtonColor:(int)color title:(id)title icon:(id)icon enabled:(BOOL)enabled rightButtonColor:(int)color5 title:(id)title6 icon:(id)icon7 enabled:(BOOL)enabled8 animationDuration:(double)duration completion:(id)completion;	// 0x33066509
// declared property setter: - (void)setLeftButtonEnabled:(BOOL)enabled;	// 0x33066ef9
// declared property setter: - (void)setRightButtonEnabled:(BOOL)enabled;	// 0x33066f4d
// declared property setter: - (void)setRoundedCornersCompensationDelayMode:(unsigned)mode;	// 0x33066fd9
- (void)vibrationComponentDidEnd;	// 0x33067019
- (void)vibrationComponentDidStart;	// 0x33066ff9
@end

