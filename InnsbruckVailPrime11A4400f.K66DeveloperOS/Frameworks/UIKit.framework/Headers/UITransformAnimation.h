/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIAnimation.h"


@interface UITransformAnimation : UIAnimation {
	CGAffineTransform _startTransform;	// 44 = 0x2c
	CGAffineTransform _endTransform;	// 68 = 0x44
}
- (CGAffineTransform)_transformWithMultiplier:(float)multiplier;	// 0x2f5ead31
- (void)setEndTransform:(CGAffineTransform)transform;	// 0x2f5eacfd
- (void)setProgress:(float)progress;	// 0x2f5eae05
- (void)setStartTransform:(CGAffineTransform)transform;	// 0x2f5eacc9
- (CGAffineTransform)transformForFraction:(float)fraction;	// 0x2f5eae89
@end
