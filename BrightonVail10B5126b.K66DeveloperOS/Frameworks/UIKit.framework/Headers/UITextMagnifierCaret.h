/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"
#import "UITextMagnifier.h"

@class UITextMagnifierTimeWeightedPoint;
@protocol UITextInput;

__attribute__((visibility("hidden")))
@interface UITextMagnifierCaret : UIView <UITextMagnifier> {
	UIResponder<UITextInput> *_text;	// 84 = 0x54
	UIView *_target;	// 88 = 0x58
	CGPoint _magnificationPoint;	// 92 = 0x5c
	CGPoint _offset;	// 100 = 0x64
	UITextMagnifierTimeWeightedPoint *_weightedPoint;	// 108 = 0x6c
	float _yOffset;	// 112 = 0x70
	UIView *_magnifierRenderer;	// 116 = 0x74
	UIView *_autoscrollRenderer;	// 120 = 0x78
	int _autoscrollDirections;	// 124 = 0x7c
}
@property(assign, nonatomic) CGPoint animationPoint;	// G=0x32dc5909; S=0x32dc66d5; @synthesize=_magnificationPoint
@property(assign, nonatomic) CGPoint magnificationPoint;	// G=0x32dc57c5; S=0x32dc57dd; 
@property(assign, nonatomic) CGPoint offset;	// G=0x32dc6689; S=0x32dc66a1; @synthesize=_offset
@property(retain, nonatomic) UIView *target;	// G=0x32c2c399; S=0x32dc6679; @synthesize=_target
@property(readonly, assign, nonatomic) CGPoint terminalPoint;	// G=0x32dc5869; 
@property(readonly, assign, nonatomic) BOOL terminalPointPlacedCarefully;	// G=0x32dc5899; 
@property(retain, nonatomic) UIResponder<UITextInput> *text;	// G=0x32dc6659; S=0x32dc6669; @synthesize=_text
@property(assign, nonatomic) float yOffset;	// G=0x32dc66b5; S=0x32dc66c5; @synthesize=_yOffset
+ (id)sharedCaretMagnifier;	// 0x32c2c025
- (id)initWithDefaultFrame;	// 0x32c2c0b1
- (void)animateToAutoscrollRenderer;	// 0x32dc5941
- (void)animateToMagnifierRenderer;	// 0x32dc5a31
// declared property getter: - (CGPoint)animationPoint;	// 0x32dc5909
- (void)autoscrollWillNotStart;	// 0x32dc5c25
- (void)beginMagnifyingTarget:(id)target text:(id)text magnificationPoint:(CGPoint)point offset:(CGPoint)offset animated:(BOOL)animated;	// 0x32dc63f1
- (void)dealloc;	// 0x32dc574d
- (void)detectLostTouches:(id)touches;	// 0x32dc6339
// declared property getter: - (CGPoint)magnificationPoint;	// 0x32dc57c5
// declared property getter: - (CGPoint)offset;	// 0x32dc6689
- (void)postAutoscrollPoint:(CGPoint)point;	// 0x32dc5921
- (void)remove;	// 0x32dc603d
// declared property setter: - (void)setAnimationPoint:(CGPoint)point;	// 0x32dc66d5
- (void)setAutoscrollDirections:(int)directions;	// 0x32dc5aa9
- (void)setFrame:(CGRect)frame;	// 0x32c2c1b9
// declared property setter: - (void)setMagnificationPoint:(CGPoint)point;	// 0x32dc57dd
- (void)setNeedsDisplay;	// 0x32c2c27d
// declared property setter: - (void)setOffset:(CGPoint)offset;	// 0x32dc66a1
// declared property setter: - (void)setTarget:(id)target;	// 0x32dc6679
// declared property setter: - (void)setText:(id)text;	// 0x32dc6669
- (void)setToMagnifierRenderer;	// 0x32dc59e9
// declared property setter: - (void)setYOffset:(float)offset;	// 0x32dc66c5
- (void)stopMagnifying:(BOOL)magnifying;	// 0x32dc659d
// declared property getter: - (id)target;	// 0x32c2c399
// declared property getter: - (CGPoint)terminalPoint;	// 0x32dc5869
// declared property getter: - (BOOL)terminalPointPlacedCarefully;	// 0x32dc5899
// declared property getter: - (id)text;	// 0x32dc6659
- (void)updateFrameAndOffset;	// 0x32dc60b5
- (void)windowWillRotate:(id)window;	// 0x32dc63dd
// declared property getter: - (float)yOffset;	// 0x32dc66b5
- (void)zoomDownAnimation;	// 0x32dc5db9
- (void)zoomDownAnimationDidStop:(id)zoomDownAnimation finished:(id)finished;	// 0x32dc6009
- (void)zoomUpAnimation;	// 0x32dc5c49
- (void)zoomUpAnimationDidStop:(id)zoomUpAnimation finished:(id)finished;	// 0x32dc5da9
@end

