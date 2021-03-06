/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "NSCoding.h"
#import "UIView.h"

@class UIImageView, UIColor, UIImage;

@interface UIProgressView : UIView <NSCoding> {
	int _progressViewStyle;	// 84 = 0x54
	float _progress;	// 88 = 0x58
	int _barStyle;	// 92 = 0x5c
	UIColor *_progressTintColor;	// 96 = 0x60
	UIColor *_trackTintColor;	// 100 = 0x64
	UIImageView *_trackView;	// 104 = 0x68
	UIImageView *_progressView;	// 108 = 0x6c
	BOOL _isAnimating;	// 112 = 0x70
	UIImage *_trackImage;	// 116 = 0x74
	UIImage *_progressImage;	// 120 = 0x78
}
@property(assign) int barStyle;	// G=0x31e6ab9d; S=0x31e6abad; converted property
@property(assign, nonatomic) float progress;	// G=0x31e6ab4d; S=0x31e6a4e5; @synthesize=_progress
@property(retain, nonatomic) UIImage *progressImage;	// G=0x31e6ab6d; S=0x31e6a8e5; @synthesize=_progressImage
@property(retain, nonatomic) UIColor *progressTintColor;	// G=0x31e6ab7d; S=0x31e6a821; @synthesize=_progressTintColor
@property(assign, nonatomic) int progressViewStyle;	// G=0x31e6ab3d; S=0x31e69c51; @synthesize=_progressViewStyle
@property(retain, nonatomic) UIImage *trackImage;	// G=0x31e6ab5d; S=0x31e6aa71; @synthesize=_trackImage
@property(retain, nonatomic) UIColor *trackTintColor;	// G=0x31e6ab8d; S=0x31e6a9bd; @synthesize=_trackTintColor
+ (int)_indexForStyle:(int)style barStyle:(int)style2;	// 0x31e69029
+ (XXStruct_OzJQfB)_standardImagesForStyle:(int)style barStyle:(int)style2;	// 0x31e6907d
+ (CGSize)defaultSize;	// 0x31e6abf1
- (id)initWithCoder:(id)coder;	// 0x31e69341
- (id)initWithFrame:(CGRect)frame;	// 0x31e6926d
- (id)initWithProgressViewStyle:(int)progressViewStyle;	// 0x31e692f5
- (id)_appropriateProgressImage;	// 0x31e69fad
- (id)_appropriateTrackImage;	// 0x31e69d95
- (BOOL)_contentHuggingDefault_isUsuallyFixedHeight;	// 0x31e69989
- (CGSize)_intrinsicSizeWithinSize:(CGSize)size;	// 0x31e6998d
- (void)_populateArchivedSubviews:(id)subviews;	// 0x31e69689
- (id)_progressColor;	// 0x31e6a801
- (void)_setProgress:(float)progress;	// 0x31e6a4d5
- (void)_setProgressAnimated:(float)animated duration:(double)duration delay:(double)delay options:(unsigned)options;	// 0x31e6a665
- (void)_setProgressColor:(id)color;	// 0x31e6a811
- (BOOL)_shouldTintProgress;	// 0x31e69d65
- (BOOL)_shouldTintTrack;	// 0x31e69d7d
- (void)_updateImages;	// 0x31e6a1c5
- (UIEdgeInsets)alignmentRectInsets;	// 0x31e69ae5
// converted property getter: - (int)barStyle;	// 0x31e6ab9d
- (void)dealloc;	// 0x31e696fd
- (void)encodeWithCoder:(id)coder;	// 0x31e69541
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;	// 0x31e70a35
- (void)layoutSubviews;	// 0x31e6a315
// declared property getter: - (float)progress;	// 0x31e6ab4d
// declared property getter: - (id)progressImage;	// 0x31e6ab6d
// declared property getter: - (id)progressTintColor;	// 0x31e6ab7d
// declared property getter: - (int)progressViewStyle;	// 0x31e6ab3d
// converted property setter: - (void)setBarStyle:(int)style;	// 0x31e6abad
- (void)setBounds:(CGRect)bounds;	// 0x31e69871
- (void)setFrame:(CGRect)frame;	// 0x31e69789
// declared property setter: - (void)setProgress:(float)progress;	// 0x31e6a4e5
- (void)setProgress:(float)progress animated:(BOOL)animated;	// 0x31e6a58d
// declared property setter: - (void)setProgressImage:(id)image;	// 0x31e6a8e5
// declared property setter: - (void)setProgressTintColor:(id)color;	// 0x31e6a821
// declared property setter: - (void)setProgressViewStyle:(int)style;	// 0x31e69c51
// declared property setter: - (void)setTrackImage:(id)image;	// 0x31e6aa71
// declared property setter: - (void)setTrackTintColor:(id)color;	// 0x31e6a9bd
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x31e69ab9
// declared property getter: - (id)trackImage;	// 0x31e6ab5d
// declared property getter: - (id)trackTintColor;	// 0x31e6ab8d
@end

