/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIView.h"
#import "UIKit-Structs.h"

@class UIKBBackdropView;

__attribute__((visibility("hidden")))
@interface UIKBInputBackdropView : UIView {
	UIKBBackdropView *_inputBackdropFullView;	// 96 = 0x60
	UIKBBackdropView *_inputBackdropLeftView;	// 100 = 0x64
	UIKBBackdropView *_inputBackdropRightView;	// 104 = 0x68
	unsigned _innerCorners;	// 108 = 0x6c
	BOOL _isTransitioning;	// 112 = 0x70
	float _transitionGap;	// 116 = 0x74
	float _transitionLeftOffset;	// 120 = 0x78
}
@property(retain, nonatomic) UIKBBackdropView *inputBackdropFullView;	// G=0x2f62b8b5; S=0x2f62b8c5; @synthesize=_inputBackdropFullView
@property(retain, nonatomic) UIKBBackdropView *inputBackdropLeftView;	// G=0x2f62b8d5; S=0x2f62b8e5; @synthesize=_inputBackdropLeftView
@property(retain, nonatomic) UIKBBackdropView *inputBackdropRightView;	// G=0x2f62b8f5; S=0x2f62b905; @synthesize=_inputBackdropRightView
- (id)initWithFrame:(CGRect)frame primaryBackdrop:(BOOL)backdrop;	// 0x2f62ae8d
- (void)_beginSplitTransitionIfNeeded:(float)needed gapWidth:(float)width;	// 0x2f62b7f9
- (void)_endSplitTransitionIfNeeded:(BOOL)needed;	// 0x2f62b845
- (void)_setLeftOffset:(float)offset gapWidth:(float)width progress:(float)progress;	// 0x2f62b579
- (void)_setProgress:(float)progress boundedBy:(float)by;	// 0x2f62b711
- (void)dealloc;	// 0x2f62b049
// declared property getter: - (id)inputBackdropFullView;	// 0x2f62b8b5
// declared property getter: - (id)inputBackdropLeftView;	// 0x2f62b8d5
// declared property getter: - (id)inputBackdropRightView;	// 0x2f62b8f5
- (void)layoutInputBackdropToFullWithRect:(CGRect)rect;	// 0x2f62b439
- (void)layoutInputBackdropToSplitWithLeftViewRect:(CGRect)leftViewRect andRightViewRect:(CGRect)rect innerCorners:(int)corners;	// 0x2f62b19d
// declared property setter: - (void)setInputBackdropFullView:(id)view;	// 0x2f62b8c5
// declared property setter: - (void)setInputBackdropLeftView:(id)view;	// 0x2f62b8e5
// declared property setter: - (void)setInputBackdropRightView:(id)view;	// 0x2f62b905
- (int)textEffectsVisibilityLevel;	// 0x2f62b0c1
- (void)transitionToStyle:(int)style isSplit:(BOOL)split;	// 0x2f62b0d5
@end
