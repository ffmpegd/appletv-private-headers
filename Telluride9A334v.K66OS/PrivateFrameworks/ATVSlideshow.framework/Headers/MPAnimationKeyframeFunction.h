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
	double _duration;	// 20 = 0x14
	NSString *_function;	// 28 = 0x1c
	NSDictionary *_functionParameters;	// 32 = 0x20
	double _functionTimeOffset;	// 36 = 0x24
	double _functionTimeFactor;	// 44 = 0x2c
	double _innerEaseInControl;	// 52 = 0x34
	double _innerEaseOutControl;	// 60 = 0x3c
}
@property(assign, nonatomic) double duration;	// G=0x32e469b9; S=0x32e4617d; @synthesize=_duration
@property(copy, nonatomic) NSString *function;	// G=0x32e469d1; S=0x32e46731; @synthesize=_function
@property(copy, nonatomic) NSDictionary *functionParameters;	// G=0x32e469e1; S=0x32e46875; @synthesize=_functionParameters
@property(assign, nonatomic) double functionTimeFactor;	// G=0x32e46a09; S=0x32e463c5; @synthesize=_functionTimeFactor
@property(assign, nonatomic) double functionTimeOffset;	// G=0x32e469f1; S=0x32e462a1; @synthesize=_functionTimeOffset
@property(assign, nonatomic) double innerEaseInControl;	// G=0x32e46a21; S=0x32e464e9; @synthesize=_innerEaseInControl
@property(assign, nonatomic) double innerEaseOutControl;	// G=0x32e46a39; S=0x32e4660d; @synthesize=_innerEaseOutControl
+ (id)keyframeFunctionWithFunction:(id)function atTime:(double)time offsetType:(int)type withDuration:(double)duration;	// 0x32e459f1
+ (id)keyframeFunctionWithFunction:(id)function atTime:(double)time withDuration:(double)duration;	// 0x32e4599d
- (id)initKeyframeFunctionWithFunction:(id)function atTime:(double)time offsetType:(int)type withDuration:(double)duration;	// 0x32e45a45
- (id)initWithCoder:(id)coder;	// 0x32e45d35
- (id)copyWithZone:(NSZone *)zone;	// 0x32e45ee1
- (void)dealloc;	// 0x32e4603d
- (id)description;	// 0x32e460b5
// declared property getter: - (double)duration;	// 0x32e469b9
- (void)encodeWithCoder:(id)coder;	// 0x32e45b59
// declared property getter: - (id)function;	// 0x32e469d1
// declared property getter: - (id)functionParameters;	// 0x32e469e1
// declared property getter: - (double)functionTimeFactor;	// 0x32e46a09
// declared property getter: - (double)functionTimeOffset;	// 0x32e469f1
// declared property getter: - (double)innerEaseInControl;	// 0x32e46a21
// declared property getter: - (double)innerEaseOutControl;	// 0x32e46a39
- (id)keyframe;	// 0x32e46b4d
// declared property setter: - (void)setDuration:(double)duration;	// 0x32e4617d
// declared property setter: - (void)setFunction:(id)function;	// 0x32e46731
// declared property setter: - (void)setFunctionParameters:(id)parameters;	// 0x32e46875
// declared property setter: - (void)setFunctionTimeFactor:(double)factor;	// 0x32e463c5
// declared property setter: - (void)setFunctionTimeOffset:(double)offset;	// 0x32e462a1
// declared property setter: - (void)setInnerEaseInControl:(double)control;	// 0x32e464e9
// declared property setter: - (void)setInnerEaseOutControl:(double)control;	// 0x32e4660d
@end

