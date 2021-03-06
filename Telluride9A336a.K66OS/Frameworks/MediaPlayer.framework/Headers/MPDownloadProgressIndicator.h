/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import <UIButton.h> // Unknown library

@class UIImageView, CADisplayLink;

@interface MPDownloadProgressIndicator : UIButton {
@private
	float _animatedStartValue;	// 140 = 0x8c
	float _animatedValue;	// 144 = 0x90
	BOOL _animating;	// 148 = 0x94
	BOOL _canCancel;	// 149 = 0x95
	double _animationEndTime;	// 152 = 0x98
	double _animationStartTime;	// 160 = 0xa0
	CADisplayLink *_displayLink;	// 168 = 0xa8
	UIImageView *_centerImageView;	// 172 = 0xac
	BOOL _mpExternalHidden;	// 176 = 0xb0
	BOOL _mpInternalHidden;	// 177 = 0xb1
	int _style;	// 180 = 0xb4
	float _value;	// 184 = 0xb8
}
@property(assign, nonatomic) BOOL canCancel;	// G=0x35be9f0d; S=0x35be96b9; @synthesize=_canCancel
@property(readonly, assign, nonatomic) int style;	// G=0x35be9f1d; @synthesize=_style
@property(assign, nonatomic) float value;	// G=0x35be9f2d; S=0x35be973d; @synthesize=_value
+ (id)_baseImageForStyle:(int)style;	// 0x35be9b89
+ (id)_fillImageForStyle:(int)style;	// 0x35be9c25
+ (id)_nonstopImageForStyle:(int)style;	// 0x35be9ddd
+ (CGSize)_sizeForStyle:(int)style;	// 0x35be9d05
+ (id)_stopImageForStyle:(int)style;	// 0x35be9d41
- (id)initWithStyle:(int)style;	// 0x35be8f2d
- (void)_animateValueOnDisplayLink:(id)link;	// 0x35be9a3d
- (CGRect)_baseFrameForSize:(CGSize)size inBounds:(CGRect)bounds;	// 0x35be9e31
- (CGRect)_fillFrameForSize:(CGSize)size inBounds:(CGRect)bounds;	// 0x35be9e71
- (void)_setInternalHidden:(BOOL)hidden;	// 0x35be9eb1
// declared property getter: - (BOOL)canCancel;	// 0x35be9f0d
- (void)dealloc;	// 0x35be90f1
- (void)drawRect:(CGRect)rect;	// 0x35be9151
- (void)layoutSubviews;	// 0x35be959d
// declared property setter: - (void)setCanCancel:(BOOL)cancel;	// 0x35be96b9
- (void)setHidden:(BOOL)hidden;	// 0x35be9661
// declared property setter: - (void)setValue:(float)value;	// 0x35be973d
- (void)setValue:(float)value animated:(BOOL)animated;	// 0x35be9751
// declared property getter: - (int)style;	// 0x35be9f1d
- (void)updateFromObserver:(id)observer;	// 0x35be9955
- (void)updateFromObserver:(id)observer animated:(BOOL)animated;	// 0x35be9969
// declared property getter: - (float)value;	// 0x35be9f2d
@end

