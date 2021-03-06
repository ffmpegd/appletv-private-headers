/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

#import </libobjc.A.h>

@class CUIPSDGradientEvaluator;

@interface CUIPSDGradient : NSObject {
	CUIPSDGradientEvaluator *evaluator;	// 4 = 0x4
	float drawingAngle;	// 8 = 0x8
	unsigned gradientStyle;	// 12 = 0xc
}
@property(assign) float drawingAngle;	// G=0x3076659d; S=0x307665b1; @synthesize
@property(retain) CUIPSDGradientEvaluator *evaluator;	// G=0x30766579; S=0x3076658d; @synthesize
@property(assign) unsigned gradientStyle;	// G=0x307665c9; S=0x307665dd; @synthesize
+ (id)cuiPSDGradientWithColors:(id)colors locations:(id)locations midpointLocations:(id)locations3 angle:(float)angle isRadial:(BOOL)radial;	// 0x30766131
+ (id)getMidpointLocationFromArray:(id)array atIndex:(int)index withPolicy:(int)policy;	// 0x3076609d
- (id)initWithEvaluator:(id)evaluator drawingAngle:(float)angle gradientStyle:(unsigned)style;	// 0x30766499
- (void)dealloc;	// 0x3076652d
// declared property getter: - (float)drawingAngle;	// 0x3076659d
// declared property getter: - (id)evaluator;	// 0x30766579
// declared property getter: - (unsigned)gradientStyle;	// 0x307665c9
// declared property setter: - (void)setDrawingAngle:(float)angle;	// 0x307665b1
// declared property setter: - (void)setEvaluator:(id)evaluator;	// 0x3076658d
// declared property setter: - (void)setGradientStyle:(unsigned)style;	// 0x307665dd
@end

