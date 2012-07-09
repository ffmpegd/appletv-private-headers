/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import "QuartzCore-Structs.h"
#import "CAPropertyAnimation.h"


@interface CABasicAnimation : CAPropertyAnimation {
}
@property(retain) id byValue;	// G=0x32a573c1; S=0x32af3711; 
@property(assign) float endAngle;	// G=0x32a58169; S=0x32af39f9; 
@property(retain) id fromValue;	// G=0x32a57379; S=0x32a55f39; 
@property(assign) BOOL roundsToInteger;	// G=0x32a58131; S=0x32a57125; 
@property(assign) float startAngle;	// G=0x32a58151; S=0x32af39e1; 
@property(retain) id toValue;	// G=0x32a573a9; S=0x32a696f9; 
- (void)CA_prepareRenderValue;	// 0x32a57319
- (Animation *)_copyRenderAnimationForLayer:(id)layer;	// 0x32a576ed
- (BOOL)_setCARenderAnimation:(Animation *)animation layer:(id)layer;	// 0x32af3599
- (double)_timeFunction:(double)function;	// 0x32af39d9
- (void)applyForTime:(double)time presentationObject:(id)object modelObject:(id)object3;	// 0x32a73dd1
// declared property getter: - (id)byValue;	// 0x32a573c1
// declared property getter: - (float)endAngle;	// 0x32a58169
// declared property getter: - (id)fromValue;	// 0x32a57379
// declared property getter: - (BOOL)roundsToInteger;	// 0x32a58131
// declared property setter: - (void)setByValue:(id)value;	// 0x32af3711
// declared property setter: - (void)setEndAngle:(float)angle;	// 0x32af39f9
// declared property setter: - (void)setFromValue:(id)value;	// 0x32a55f39
// declared property setter: - (void)setRoundsToInteger:(BOOL)integer;	// 0x32a57125
// declared property setter: - (void)setStartAngle:(float)angle;	// 0x32af39e1
// declared property setter: - (void)setToValue:(id)value;	// 0x32a696f9
// declared property getter: - (float)startAngle;	// 0x32a58151
// declared property getter: - (id)toValue;	// 0x32a573a9
@end
