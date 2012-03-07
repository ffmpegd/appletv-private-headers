/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface UIInputViewAnimationStyle : NSObject {
@private
	BOOL animated;	// 4 = 0x4
	double duration;	// 8 = 0x8
	int outDirection;	// 16 = 0x10
	BOOL force;	// 20 = 0x14
}
@property(assign, nonatomic) BOOL animated;	// G=0x32cf95a5; S=0x32c7b84d; @synthesize
@property(assign, nonatomic) double duration;	// G=0x32cfa649; S=0x32c7b85d; @synthesize
@property(assign, nonatomic) BOOL force;	// G=0x32defc21; S=0x32d4771d; @synthesize
@property(assign, nonatomic) int outDirection;	// G=0x32cf8c31; S=0x32c7b871; @synthesize
+ (id)animationStyleAnimated:(BOOL)animated duration:(double)duration outDirection:(int)direction;	// 0x32c7b7c5
+ (id)animationStyleDefault;	// 0x32c7b78d
+ (id)animationStyleImmediate;	// 0x32d49035
// declared property getter: - (BOOL)animated;	// 0x32cf95a5
- (id)description;	// 0x32f9229d
// declared property getter: - (double)duration;	// 0x32cfa649
// declared property getter: - (BOOL)force;	// 0x32defc21
- (BOOL)isEqual:(id)equal;	// 0x32dce1a5
// declared property getter: - (int)outDirection;	// 0x32cf8c31
// declared property setter: - (void)setAnimated:(BOOL)animated;	// 0x32c7b84d
// declared property setter: - (void)setDuration:(double)duration;	// 0x32c7b85d
// declared property setter: - (void)setForce:(BOOL)force;	// 0x32d4771d
// declared property setter: - (void)setOutDirection:(int)direction;	// 0x32c7b871
@end

