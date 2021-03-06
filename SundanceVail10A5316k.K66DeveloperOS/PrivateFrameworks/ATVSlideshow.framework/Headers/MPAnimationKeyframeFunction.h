/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MPAnimationKeyframe.h"
#import "ATVSlideshow-Structs.h"

@class NSDictionary, NSString;

@interface MPAnimationKeyframeFunction : MPAnimationKeyframe {
	double _duration;	// 44 = 0x2c
	NSString *_function;	// 52 = 0x34
	NSDictionary *_functionParameters;	// 56 = 0x38
	double _functionTimeOffset;	// 60 = 0x3c
	double _functionTimeFactor;	// 68 = 0x44
	double _innerEaseInControl;	// 76 = 0x4c
	double _innerEaseOutControl;	// 84 = 0x54
}
@property(assign, nonatomic) double duration;	// G=0x363e2535; S=0x363e1f59; @synthesize=_duration
@property(copy, nonatomic) NSString *function;	// G=0x363e254d; S=0x363e235d; @synthesize=_function
@property(copy, nonatomic) NSDictionary *functionParameters;	// G=0x363e2561; S=0x363e2449; @synthesize=_functionParameters
@property(assign, nonatomic) double functionTimeFactor;	// G=0x363e258d; S=0x363e20f1; @synthesize=_functionTimeFactor
@property(assign, nonatomic) double functionTimeOffset;	// G=0x363e2575; S=0x363e2025; @synthesize=_functionTimeOffset
@property(assign, nonatomic) double innerEaseInControl;	// G=0x363e25a5; S=0x363e21bd; @synthesize=_innerEaseInControl
@property(assign, nonatomic) double innerEaseOutControl;	// G=0x363e25bd; S=0x363e228d; @synthesize=_innerEaseOutControl
+ (id)keyframeFunctionWithFunction:(id)function atTime:(double)time offsetType:(int)type withDuration:(double)duration;	// 0x363e1805
+ (id)keyframeFunctionWithFunction:(id)function atTime:(double)time withDuration:(double)duration;	// 0x363e17b1
- (id)initKeyframeFunctionWithFunction:(id)function atTime:(double)time offsetType:(int)type withDuration:(double)duration;	// 0x363e1859
- (id)initWithCoder:(id)coder;	// 0x363e1b21
- (id)copyWithZone:(NSZone *)zone;	// 0x363e1cb1
- (void)dealloc;	// 0x363e1e0d
- (id)description;	// 0x363e1e85
// declared property getter: - (double)duration;	// 0x363e2535
- (void)encodeWithCoder:(id)coder;	// 0x363e1955
// declared property getter: - (id)function;	// 0x363e254d
// declared property getter: - (id)functionParameters;	// 0x363e2561
// declared property getter: - (double)functionTimeFactor;	// 0x363e258d
// declared property getter: - (double)functionTimeOffset;	// 0x363e2575
// declared property getter: - (double)innerEaseInControl;	// 0x363e25a5
// declared property getter: - (double)innerEaseOutControl;	// 0x363e25bd
- (id)keyframe;	// 0x363e26c9
// declared property setter: - (void)setDuration:(double)duration;	// 0x363e1f59
// declared property setter: - (void)setFunction:(id)function;	// 0x363e235d
// declared property setter: - (void)setFunctionParameters:(id)parameters;	// 0x363e2449
// declared property setter: - (void)setFunctionTimeFactor:(double)factor;	// 0x363e20f1
// declared property setter: - (void)setFunctionTimeOffset:(double)offset;	// 0x363e2025
// declared property setter: - (void)setInnerEaseInControl:(double)control;	// 0x363e21bd
// declared property setter: - (void)setInnerEaseOutControl:(double)control;	// 0x363e228d
@end

