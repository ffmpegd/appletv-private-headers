/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIControl.h"

@class UIImageView, NSMutableArray, UILabel, NSTimer;

@interface UICalloutView : UIControl {
	UIImageView *_leftCap;	// 72 = 0x48
	UIImageView *_rightCap;	// 76 = 0x4c
	UIImageView *_topAnchor;	// 80 = 0x50
	UIImageView *_bottomAnchor;	// 84 = 0x54
	UIImageView *_leftBackground;	// 88 = 0x58
	UIImageView *_rightBackground;	// 92 = 0x5c
	UILabel *_title;	// 96 = 0x60
	UILabel *_subtitle;	// 100 = 0x64
	UILabel *_temporary;	// 104 = 0x68
	UIView *_leftView;	// 108 = 0x6c
	UIView *_rightView;	// 112 = 0x70
	struct {
		CGPoint origin;
		CGPoint offset;
		int position;
		CGPoint desiredPoint;
		CGRect desiredBounds;
	} _anchor;	// 116 = 0x74
	CGRect _frame;	// 160 = 0xa0
	id _delegate;	// 176 = 0xb0
	struct {
		unsigned shouldSendTouchPauseUp : 1;
		unsigned delegateViewHandleTapWithCountEvent : 1;
		unsigned delegateViewHandleTapWithCountEventFingerCount : 1;
		unsigned delegateViewHandleTouchPauseIsDown : 1;
		unsigned reserved : 28;
	} _flags;	// 180 = 0xb4
	NSMutableArray *_fadeInViews;	// 184 = 0xb8
	NSMutableArray *_fadeOutViews;	// 188 = 0xbc
	NSTimer *_layoutAnimationTimer;	// 192 = 0xc0
	float _maximumWidth;	// 196 = 0xc4
}
@property(readonly, assign, nonatomic) float UICalloutViewButtonPadding;	// G=0x32e8dc21; 
@property(readonly, assign, nonatomic) float UICalloutViewCapHeight;	// G=0x32e8dc05; 
@property(readonly, assign, nonatomic) float UICalloutViewCapPaddingTop;	// G=0x32e8dc0d; 
@property(readonly, assign, nonatomic) float UICalloutViewHorizontalMargin;	// G=0x32e8dc29; 
@property(readonly, assign, nonatomic) float UICalloutViewHorizontalPadding;	// G=0x32e8dc31; 
@property(readonly, assign, nonatomic) float UICalloutViewLayoutDuration;	// G=0x32e8dc15; 
@property(readonly, assign, nonatomic) float UICalloutViewMinimumWidth;	// G=0x32e8dc41; 
@property(readonly, assign, nonatomic) float UICalloutViewVerticalMargin;	// G=0x32e8dc39; 
@property(assign, nonatomic) BOOL canAnchorFromBottom;	// G=0x32e8e029; S=0x32ded789; 
@property(assign) id delegate;	// G=0x32e8e0f9; S=0x32ded779; converted property
@property(retain, nonatomic) UIView *leftView;	// G=0x32def501; S=0x32dee219; @synthesize=_leftView
@property(assign, nonatomic) float maximumWidth;	// G=0x32e8e231; S=0x32e8e241; @synthesize=_maximumWidth
@property(assign) CGPoint offset;	// G=0x32e8df85; S=0x32e8df6d; converted property
@property(retain, nonatomic) UIView *rightView;	// G=0x32def4cd; S=0x32dee33d; @synthesize=_rightView
@property(retain) UILabel *subtitle;	// G=0x32defb69; S=0x32dee101; converted property
@property(assign, nonatomic) int subtitleLineBreakMode;	// G=0x32e8deed; S=0x32ded759; 
@property(assign, nonatomic) int subtitleTextAlignment;	// G=0x32e8df4d; S=0x32defb89; 
@property(retain) id temporaryTitle;	// G=0x32e8dead; S=0x32e8de8d; converted property
@property(retain) UILabel *title;	// G=0x32e8de6d; S=0x32dedfcd; converted property
@property(assign, nonatomic) int titleLineBreakMode;	// G=0x32e8decd; S=0x32ded739; 
@property(assign, nonatomic) int titleTextAlignment;	// G=0x32e8df0d; S=0x32e8df2d; 
+ (id)_backgroundImage;	// 0x32ded729
+ (id)_bottomAnchorImage;	// 0x32ded6e9
+ (id)_leftCapImage;	// 0x32ded6f9
+ (id)_rightCapImage;	// 0x32ded709
+ (id)_topAnchorImage;	// 0x32ded719
+ (float)defaultHeight;	// 0x32dece79
+ (id)sharedCalloutView;	// 0x32e8dcc1
- (id)initWithFrame:(CGRect)frame;	// 0x32deceb9
// declared property getter: - (float)UICalloutViewButtonPadding;	// 0x32e8dc21
// declared property getter: - (float)UICalloutViewCapHeight;	// 0x32e8dc05
// declared property getter: - (float)UICalloutViewCapPaddingTop;	// 0x32e8dc0d
// declared property getter: - (float)UICalloutViewHorizontalMargin;	// 0x32e8dc29
// declared property getter: - (float)UICalloutViewHorizontalPadding;	// 0x32e8dc31
// declared property getter: - (float)UICalloutViewLayoutDuration;	// 0x32e8dc15
// declared property getter: - (float)UICalloutViewMinimumWidth;	// 0x32e8dc41
// declared property getter: - (float)UICalloutViewVerticalMargin;	// 0x32e8dc39
- (void)_fadeViewsIn:(BOOL)anIn;	// 0x32df05bd
- (void)_layoutAnimation;	// 0x32df055d
- (void)_layoutSubviews:(BOOL)subviews;	// 0x32dee4b9
- (void)_markDidMoveCalled;	// 0x32defa3d
- (void)_scheduleLayoutAnimation;	// 0x32df048d
- (void)_scheduleViewToFadeIn:(id)anIn;	// 0x32df0415
- (void)_scheduleViewToFadeOut:(id)fadeOut;	// 0x32e8dc49
- (void)_setLayoutAnimationTimer:(id)timer;	// 0x32df0505
- (void)_setLeftView:(id)view;	// 0x32df03bd
- (void)_setOriginForScale:(float)scale;	// 0x32defa81
- (void)_setRightView:(id)view;	// 0x32dee461
- (void)addTarget:(id)target action:(SEL)action;	// 0x32e8e03d
- (CGPoint)anchorPoint;	// 0x32e8df9d
- (void)animationDidStop:(id)animation finished:(id)finished context:(void *)context;	// 0x32ded881
// declared property getter: - (BOOL)canAnchorFromBottom;	// 0x32e8e029
- (void)completeBounceAnimation;	// 0x32def8dd
- (void)dealloc;	// 0x32e8dd1d
// converted property getter: - (id)delegate;	// 0x32e8e0f9
- (void)fadeOutWithDuration:(float)duration;	// 0x32ded7a1
- (void)getActualAnchorPoint:(CGPoint *)point frame:(CGRect *)frame position:(int *)position forDesiredAnchorPoint:(CGPoint)desiredAnchorPoint boundaryRect:(CGRect)rect;	// 0x32def099
- (id)hitTest:(CGPoint)test forEvent:(GSEventRef)event;	// 0x32e8e109
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x32defe3d
// declared property getter: - (id)leftView;	// 0x32def501
// declared property getter: - (float)maximumWidth;	// 0x32e8e231
// converted property getter: - (CGPoint)offset;	// 0x32e8df85
- (void)removeTarget:(id)target;	// 0x32e8e0c9
// declared property getter: - (id)rightView;	// 0x32def4cd
- (void)setAnchorPoint:(CGPoint)point boundaryRect:(CGRect)rect animate:(BOOL)animate;	// 0x32def511
// declared property setter: - (void)setCanAnchorFromBottom:(BOOL)bottom;	// 0x32ded789
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x32ded779
// declared property setter: - (void)setLeftView:(id)view;	// 0x32dee219
- (void)setLeftView:(id)view animated:(BOOL)animated;	// 0x32dee22d
// declared property setter: - (void)setMaximumWidth:(float)width;	// 0x32e8e241
// converted property setter: - (void)setOffset:(CGPoint)offset;	// 0x32e8df6d
// declared property setter: - (void)setRightView:(id)view;	// 0x32dee33d
- (void)setRightView:(id)view animated:(BOOL)animated;	// 0x32dee351
// converted property setter: - (void)setSubtitle:(id)subtitle;	// 0x32dee101
- (void)setSubtitle:(id)subtitle animated:(BOOL)animated;	// 0x32dee115
// declared property setter: - (void)setSubtitleLineBreakMode:(int)mode;	// 0x32ded759
// declared property setter: - (void)setSubtitleTextAlignment:(int)alignment;	// 0x32defb89
// converted property setter: - (void)setTemporaryTitle:(id)title;	// 0x32e8de8d
// converted property setter: - (void)setTitle:(id)title;	// 0x32dedfcd
// declared property setter: - (void)setTitleLineBreakMode:(int)mode;	// 0x32ded739
// declared property setter: - (void)setTitleTextAlignment:(int)alignment;	// 0x32e8df2d
// converted property getter: - (id)subtitle;	// 0x32defb69
// declared property getter: - (int)subtitleLineBreakMode;	// 0x32e8deed
// declared property getter: - (int)subtitleTextAlignment;	// 0x32e8df4d
// converted property getter: - (id)temporaryTitle;	// 0x32e8dead
// converted property getter: - (id)title;	// 0x32e8de6d
// declared property getter: - (int)titleLineBreakMode;	// 0x32e8decd
// declared property getter: - (int)titleTextAlignment;	// 0x32e8df0d
@end
