/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library

@class NSIndexPath, UIView;

__attribute__((visibility("hidden")))
@interface UIViewAnimation : NSObject {
	UIView *_view;	// 4 = 0x4
	NSIndexPath *_indexPath;	// 8 = 0x8
	CGRect _endRect;	// 12 = 0xc
	float _endAlpha;	// 28 = 0x1c
	float _startFraction;	// 32 = 0x20
	float _endFraction;	// 36 = 0x24
	int _curve;	// 40 = 0x28
	BOOL _animateFromCurrentPosition;	// 44 = 0x2c
	BOOL _shouldDeleteAfterAnimation;	// 45 = 0x2d
	BOOL _editing;	// 46 = 0x2e
	BOOL _shouldAnimateShadow;	// 47 = 0x2f
	BOOL _shouldRasterizeAfterAnimation;	// 48 = 0x30
	BOOL _shouldResetRasterizationAfterAnimation;	// 49 = 0x31
}
@property(readonly, assign, nonatomic) BOOL animateFromCurrentPosition;	// G=0x302a5d71; @synthesize=_animateFromCurrentPosition
@property(readonly, assign, nonatomic) int curve;	// G=0x302a5d95; @synthesize=_curve
@property(readonly, assign, nonatomic) BOOL editing;	// G=0x302a5e11; @synthesize=_editing
@property(readonly, assign, nonatomic) float endAlpha;	// G=0x302a5da5; @synthesize=_endAlpha
@property(readonly, assign, nonatomic) float endFraction;	// G=0x302a5ce5; @synthesize=_endFraction
@property(readonly, assign, nonatomic) CGRect endRect;	// G=0x302a5dc5; @synthesize=_endRect
@property(readonly, assign, nonatomic) NSIndexPath *indexPath;	// G=0x302a5de9; @synthesize=_indexPath
@property(assign, nonatomic) BOOL shouldAnimateShadow;	// G=0x302a5db5; S=0x302a5025; @synthesize=_shouldAnimateShadow
@property(readonly, assign, nonatomic) BOOL shouldDeleteAfterAnimation;	// G=0x302a6299; @synthesize=_shouldDeleteAfterAnimation
@property(assign, nonatomic) BOOL shouldRasterizeAfterAnimation;	// G=0x3037e315; S=0x3037e2f5; @synthesize=_shouldRasterizeAfterAnimation
@property(assign, nonatomic) BOOL shouldResetRasterizationAfterAnimation;	// G=0x302a6289; S=0x3037e305; @synthesize=_shouldResetRasterizationAfterAnimation
@property(readonly, assign, nonatomic) float startFraction;	// G=0x302a5cd5; @synthesize=_startFraction
@property(readonly, assign, nonatomic) UIView *view;	// G=0x302a5cc5; @synthesize=_view
- (id)initWithView:(id)view indexPath:(id)path endRect:(CGRect)rect endAlpha:(float)alpha startFraction:(float)fraction endFraction:(float)fraction6 curve:(int)curve animateFromCurrentPosition:(BOOL)currentPosition shouldDeleteAfterAnimation:(BOOL)animation editing:(BOOL)editing;	// 0x302521c1
// declared property getter: - (BOOL)animateFromCurrentPosition;	// 0x302a5d71
// declared property getter: - (int)curve;	// 0x302a5d95
- (void)dealloc;	// 0x302a68a9
- (id)description;	// 0x304b8fe1
// declared property getter: - (BOOL)editing;	// 0x302a5e11
// declared property getter: - (float)endAlpha;	// 0x302a5da5
// declared property getter: - (float)endFraction;	// 0x302a5ce5
// declared property getter: - (CGRect)endRect;	// 0x302a5dc5
// declared property getter: - (id)indexPath;	// 0x302a5de9
// declared property setter: - (void)setShouldAnimateShadow:(BOOL)animateShadow;	// 0x302a5025
// declared property setter: - (void)setShouldRasterizeAfterAnimation:(BOOL)rasterizeAfterAnimation;	// 0x3037e2f5
// declared property setter: - (void)setShouldResetRasterizationAfterAnimation:(BOOL)resetRasterizationAfterAnimation;	// 0x3037e305
// declared property getter: - (BOOL)shouldAnimateShadow;	// 0x302a5db5
// declared property getter: - (BOOL)shouldDeleteAfterAnimation;	// 0x302a6299
// declared property getter: - (BOOL)shouldRasterizeAfterAnimation;	// 0x3037e315
// declared property getter: - (BOOL)shouldResetRasterizationAfterAnimation;	// 0x302a6289
// declared property getter: - (float)startFraction;	// 0x302a5cd5
// declared property getter: - (id)view;	// 0x302a5cc5
@end

