/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
 */

#import </libobjc.A.h>


@interface TLVibrationPattern : NSObject {
	id _contextObject;	// 4 = 0x4
	id _propertyListRepresentation;	// 8 = 0x8
	id _complexPatternDescription;	// 12 = 0xc
	double _duration;	// 16 = 0x10
}
@property(readonly, assign) id _artificiallyRepeatingPropertyListRepresentation;	// G=0x32c01b69; 
@property(retain, nonatomic, setter=_setComplexPatternDescription:) id _complexPatternDescription;	// G=0x32c02115; S=0x32c02125; @synthesize
@property(assign, nonatomic, setter=_setDuration:) double _duration;	// G=0x32c020c9; S=0x32c020e1; @synthesize
@property(retain, nonatomic, setter=_setPropertyListRepresentation:) id _propertyListRepresentation;	// G=0x32c020f5; S=0x32c02105; @synthesize
@property(readonly, assign) double computedDuration;	// G=0x32c01cc9; 
@property(retain, nonatomic) id contextObject;	// G=0x32c020a9; S=0x32c020b9; @synthesize=_contextObject
@property(readonly, assign, nonatomic) id propertyListRepresentation;	// G=0x32c01aad; 
+ (id)complexVibrationPatternWithDurationsForVibrationsAndPauses:(double)vibrationsAndPauses;	// 0x32c01531
+ (BOOL)isValidVibrationPatternPropertyListRepresentation:(id)representation;	// 0x32c01129
+ (id)noneVibrationPattern;	// 0x32c01769
+ (id)simpleVibrationPatternWithVibrationDuration:(double)vibrationDuration pauseDuration:(double)duration;	// 0x32c013c1
- (id)init;	// 0x32c018c1
- (id)initWithPropertyListRepresentation:(id)propertyListRepresentation;	// 0x32c01975
// declared property getter: - (id)_artificiallyRepeatingPropertyListRepresentation;	// 0x32c01b69
// declared property getter: - (id)_complexPatternDescription;	// 0x32c02115
// declared property getter: - (double)_duration;	// 0x32c020c9
- (id)_initWithPropertyListRepresentation:(id)propertyListRepresentation skipValidation:(BOOL)validation;	// 0x32c01989
// declared property getter: - (id)_propertyListRepresentation;	// 0x32c020f5
// declared property setter: - (void)_setComplexPatternDescription:(id)description;	// 0x32c02125
// declared property setter: - (void)_setDuration:(double)duration;	// 0x32c020e1
// declared property setter: - (void)_setPropertyListRepresentation:(id)representation;	// 0x32c02105
- (void)appendVibrationComponentWithDuration:(double)duration isPause:(BOOL)pause;	// 0x32c01e69
// declared property getter: - (double)computedDuration;	// 0x32c01cc9
// declared property getter: - (id)contextObject;	// 0x32c020a9
- (void)dealloc;	// 0x32c01a41
// declared property getter: - (id)propertyListRepresentation;	// 0x32c01aad
// declared property setter: - (void)setContextObject:(id)object;	// 0x32c020b9
@end

