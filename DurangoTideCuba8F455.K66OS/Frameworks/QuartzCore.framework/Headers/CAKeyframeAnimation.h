/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import "QuartzCore-Structs.h"
#import "CAPropertyAnimation.h"

@class NSString, NSArray;

@interface CAKeyframeAnimation : CAPropertyAnimation {
}
@property(copy) NSArray *biasValues;	// G=0x3340fbcd; S=0x3340fd91; 
@property(copy) NSString *calculationMode;	// G=0x333b7265; S=0x333b69e1; 
@property(copy) NSArray *continuityValues;	// G=0x3340fbd9; S=0x3340fd9d; 
@property(copy) NSArray *keyTimes;	// G=0x333b72f1; S=0x3340fdd9; 
@property(assign) CGPathRef path;	// G=0x333b72bd; S=0x3340fdb9; 
@property(copy) NSString *rotationMode;	// G=0x333b730d; S=0x3340fd81; 
@property(copy) NSArray *tensionValues;	// G=0x3340fbe5; S=0x3340fda9; 
@property(copy) NSArray *timingFunctions;	// G=0x333b72fd; S=0x3340fdc9; 
@property(copy) NSArray *values;	// G=0x333b6c41; S=0x333b69d1; 
- (void)CA_prepareRenderValue;	// 0x333b6be1
- (Animation *)_copyRenderAnimationForLayer:(id)layer;	// 0x333b6c51
- (void)applyForTime:(double)time presentationObject:(id)object modelObject:(id)object3;	// 0x33412241
// declared property getter: - (id)biasValues;	// 0x3340fbcd
// declared property getter: - (id)calculationMode;	// 0x333b7265
// declared property getter: - (id)continuityValues;	// 0x3340fbd9
// declared property getter: - (id)keyTimes;	// 0x333b72f1
// declared property getter: - (CGPathRef)path;	// 0x333b72bd
// declared property getter: - (id)rotationMode;	// 0x333b730d
// declared property setter: - (void)setBiasValues:(id)values;	// 0x3340fd91
// declared property setter: - (void)setCalculationMode:(id)mode;	// 0x333b69e1
// declared property setter: - (void)setContinuityValues:(id)values;	// 0x3340fd9d
// declared property setter: - (void)setKeyTimes:(id)times;	// 0x3340fdd9
// declared property setter: - (void)setPath:(CGPathRef)path;	// 0x3340fdb9
// declared property setter: - (void)setRotationMode:(id)mode;	// 0x3340fd81
// declared property setter: - (void)setTensionValues:(id)values;	// 0x3340fda9
// declared property setter: - (void)setTimingFunctions:(id)functions;	// 0x3340fdc9
// declared property setter: - (void)setValues:(id)values;	// 0x333b69d1
// declared property getter: - (id)tensionValues;	// 0x3340fbe5
// declared property getter: - (id)timingFunctions;	// 0x333b72fd
// declared property getter: - (id)values;	// 0x333b6c41
@end

