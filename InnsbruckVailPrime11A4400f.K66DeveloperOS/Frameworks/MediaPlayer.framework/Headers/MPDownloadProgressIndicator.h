/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import <UIKit/UIButton.h>

@class CADisplayLink, UIImageView;

@interface MPDownloadProgressIndicator : UIButton {
	float _animatedStartValue;	// 224 = 0xe0
	float _animatedValue;	// 228 = 0xe4
	BOOL _animating;	// 232 = 0xe8
	BOOL _canCancel;	// 233 = 0xe9
	double _animationEndTime;	// 236 = 0xec
	double _animationStartTime;	// 244 = 0xf4
	CADisplayLink *_displayLink;	// 252 = 0xfc
	UIImageView *_centerImageView;	// 256 = 0x100
	BOOL _mpExternalHidden;	// 260 = 0x104
	BOOL _mpInternalHidden;	// 261 = 0x105
	int _style;	// 264 = 0x108
	float _value;	// 268 = 0x10c
}
@property(assign, nonatomic) BOOL canCancel;	// G=0x2e32ddc1; S=0x2e32cba1; @synthesize=_canCancel
@property(readonly, assign, nonatomic) int style;	// G=0x2e32ddd1; @synthesize=_style
@property(assign, nonatomic) float value;	// G=0x2e32dde1; S=0x2e32cc3d; @synthesize=_value
+ (id)_baseImageForStyle:(int)style;	// 0x2e32cf59
+ (void)_drawModernGradientInRect:(CGRect)rect;	// 0x2e32d171
+ (id)_fillImageForStyle:(int)style;	// 0x2e32d215
+ (BOOL)_isStyleModernShimmer:(int)shimmer;	// 0x2e32d485
+ (id)_nonstopImageForStyle:(int)style;	// 0x2e32d499
+ (CGSize)_sizeForStyle:(int)style;	// 0x2e32d509
+ (id)_stopImageForStyle:(int)style;	// 0x2e32d579
- (id)initWithStyle:(int)style;	// 0x2e32c069
- (void).cxx_destruct;	// 0x2e32ddf1
- (void)_animateValueOnDisplayLink:(id)link;	// 0x2e32dafd
- (CGRect)_baseFrameForSize:(CGSize)size inBounds:(CGRect)bounds;	// 0x2e32dc19
- (CGRect)_centerImageViewFrame:(CGRect)frame inBounds:(CGRect)bounds forStyle:(int)style;	// 0x2e32dc59
- (CGRect)_fillFrameForSize:(CGSize)size inBounds:(CGRect)bounds;	// 0x2e32dd2d
- (void)_setInternalHidden:(BOOL)hidden;	// 0x2e32dd6d
// declared property getter: - (BOOL)canCancel;	// 0x2e32ddc1
- (void)drawRect:(CGRect)rect;	// 0x2e32c239
- (void)layoutSubviews;	// 0x2e32ca11
// declared property setter: - (void)setCanCancel:(BOOL)cancel;	// 0x2e32cba1
- (void)setHidden:(BOOL)hidden;	// 0x2e32cafd
// declared property setter: - (void)setValue:(float)value;	// 0x2e32cc3d
- (void)setValue:(float)value animated:(BOOL)animated;	// 0x2e32cc51
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x2e32cb59
// declared property getter: - (int)style;	// 0x2e32ddd1
- (void)updateFromObserver:(id)observer;	// 0x2e32ce59
- (void)updateFromObserver:(id)observer animated:(BOOL)animated;	// 0x2e32ce71
// declared property getter: - (float)value;	// 0x2e32dde1
@end
