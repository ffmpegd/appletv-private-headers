/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import "CAPropertyAnimation.h"
#import "QuartzCore-Structs.h"

@class NSString, NSArray;

@interface CAKeyframeAnimation : CAPropertyAnimation {
}
@property(copy) NSArray *biasValues;	// G=0x361548b9; S=0x361548a1; 
@property(copy) NSString *calculationMode;	// G=0x360d0d71; S=0x360d0739; 
@property(copy) NSArray *continuityValues;	// G=0x361548e9; S=0x361548d1; 
@property(copy) NSArray *keyTimes;	// G=0x360d0e1d; S=0x360f07c5; 
@property(assign) CGPathRef path;	// G=0x360d0ddd; S=0x360f07f5; 
@property(copy) NSString *rotationMode;	// G=0x360d0e4d; S=0x36154889; 
@property(copy) NSArray *tensionValues;	// G=0x36154919; S=0x36154901; 
@property(copy) NSArray *timingFunctions;	// G=0x360d0e35; S=0x360f07dd; 
@property(copy) NSArray *values;	// G=0x360d07ed; S=0x360d0721; 
- (void)CA_prepareRenderValue;	// 0x360d0785
- (Animation *)_copyRenderAnimationForLayer:(id)layer;	// 0x360d0805
- (void)applyForTime:(double)time presentationObject:(id)object modelObject:(id)object3;	// 0x36154931
// declared property getter: - (id)biasValues;	// 0x361548b9
// declared property getter: - (id)calculationMode;	// 0x360d0d71
// declared property getter: - (id)continuityValues;	// 0x361548e9
// declared property getter: - (id)keyTimes;	// 0x360d0e1d
// declared property getter: - (CGPathRef)path;	// 0x360d0ddd
// declared property getter: - (id)rotationMode;	// 0x360d0e4d
// declared property setter: - (void)setBiasValues:(id)values;	// 0x361548a1
// declared property setter: - (void)setCalculationMode:(id)mode;	// 0x360d0739
// declared property setter: - (void)setContinuityValues:(id)values;	// 0x361548d1
// declared property setter: - (void)setKeyTimes:(id)times;	// 0x360f07c5
// declared property setter: - (void)setPath:(CGPathRef)path;	// 0x360f07f5
// declared property setter: - (void)setRotationMode:(id)mode;	// 0x36154889
// declared property setter: - (void)setTensionValues:(id)values;	// 0x36154901
// declared property setter: - (void)setTimingFunctions:(id)functions;	// 0x360f07dd
// declared property setter: - (void)setValues:(id)values;	// 0x360d0721
// declared property getter: - (id)tensionValues;	// 0x36154919
// declared property getter: - (id)timingFunctions;	// 0x360d0e35
// declared property getter: - (id)values;	// 0x360d07ed
@end

