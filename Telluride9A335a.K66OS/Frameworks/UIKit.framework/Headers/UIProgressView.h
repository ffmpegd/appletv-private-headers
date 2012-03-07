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
@private
	int _progressViewStyle;	// 48 = 0x30
	float _progress;	// 52 = 0x34
	int _barStyle;	// 56 = 0x38
	UIColor *_progressTintColor;	// 60 = 0x3c
	UIColor *_trackTintColor;	// 64 = 0x40
	UIImageView *_trackView;	// 68 = 0x44
	UIImageView *_progressViews[3];	// 72 = 0x48
	BOOL _isAnimating;	// 84 = 0x54
	UIImage *_trackImage;	// 88 = 0x58
	UIImage *_progressImage;	// 92 = 0x5c
}
@property(assign) int barStyle;	// G=0x33c010f5; S=0x33c01105; converted property
@property(assign, nonatomic) float progress;	// G=0x33c010a5; S=0x33c0086d; @synthesize=_progress
@property(retain, nonatomic) UIImage *progressImage;	// G=0x33c010c5; S=0x33c00e59; @synthesize=_progressImage
@property(retain, nonatomic) UIColor *progressTintColor;	// G=0x33c010d5; S=0x33c00d81; @synthesize=_progressTintColor
@property(assign, nonatomic) int progressViewStyle;	// G=0x33c01095; S=0x33bffbdd; @synthesize=_progressViewStyle
@property(retain, nonatomic) UIImage *trackImage;	// G=0x33c010b5; S=0x33c00fdd; @synthesize=_trackImage
@property(retain, nonatomic) UIColor *trackTintColor;	// G=0x33c010e5; S=0x33c00f31; @synthesize=_trackTintColor
+ (int)_indexForStyle:(int)style barStyle:(int)style2;	// 0x33bff2ed
+ (XXStruct_Xx1ZfA)_sliceImage:(id)image;	// 0x33bfefad
+ (XXStruct_Xx1ZfA)_standardImagesForStyle:(int)style barStyle:(int)style2;	// 0x33bff345
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x33bfef7d
+ (CGSize)defaultSize;	// 0x33c01149
- (id)initWithCoder:(id)coder;	// 0x33bff83d
- (id)initWithFrame:(CGRect)frame;	// 0x33bff769
- (id)initWithProgressViewStyle:(int)progressViewStyle;	// 0x33bff7f1
- (void)_populateArchivedSubviews:(id)subviews;	// 0x33bffa91
- (id)_progressColor;	// 0x33c00d61
- (void)_setProgress:(float)progress;	// 0x33c00821
- (void)_setProgressAnimated:(float)animated duration:(double)duration delay:(double)delay options:(unsigned)options;	// 0x33c00b2d
- (void)_setProgressColor:(id)color;	// 0x33c00d71
- (BOOL)_shouldTintProgress;	// 0x33bffe49
- (BOOL)_shouldTintTrack;	// 0x33bffe79
- (void)_updateCapsAtEndOfAnimation;	// 0x33c009c5
- (void)_updateCapsAtStartOfAnimation;	// 0x33c00955
- (void)_updateImages;	// 0x33bffea9
// converted property getter: - (int)barStyle;	// 0x33c010f5
- (void)dealloc;	// 0x33bffb3d
- (void)encodeWithCoder:(id)coder;	// 0x33bff999
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;	// 0x33c0660d
- (void)layoutSubviews;	// 0x33c005f1
// declared property getter: - (float)progress;	// 0x33c010a5
// declared property getter: - (id)progressImage;	// 0x33c010c5
// declared property getter: - (id)progressTintColor;	// 0x33c010d5
// declared property getter: - (int)progressViewStyle;	// 0x33c01095
// converted property setter: - (void)setBarStyle:(int)style;	// 0x33c01105
- (void)setFrame:(CGRect)frame;	// 0x33bffc85
// declared property setter: - (void)setProgress:(float)progress;	// 0x33c0086d
- (void)setProgress:(float)progress animated:(BOOL)animated;	// 0x33c00abd
// declared property setter: - (void)setProgressImage:(id)image;	// 0x33c00e59
// declared property setter: - (void)setProgressTintColor:(id)color;	// 0x33c00d81
// declared property setter: - (void)setProgressViewStyle:(int)style;	// 0x33bffbdd
// declared property setter: - (void)setTrackImage:(id)image;	// 0x33c00fdd
// declared property setter: - (void)setTrackTintColor:(id)color;	// 0x33c00f31
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x33bffd09
// declared property getter: - (id)trackImage;	// 0x33c010b5
// declared property getter: - (id)trackTintColor;	// 0x33c010e5
@end

