/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIMotionEffect.h"


@interface _UITiltMotionEffect : UIMotionEffect {
	float _maximumHorizontalTiltAngle;	// 8 = 0x8
	float _maximumVerticalTiltAngle;	// 12 = 0xc
	float _rotatingSphereRadius;	// 16 = 0x10
}
@property(assign, nonatomic) float maximumHorizontalTiltAngle;	// G=0x2f68faad; S=0x2f68fabd; @synthesize=_maximumHorizontalTiltAngle
@property(assign, nonatomic) float maximumVerticalTiltAngle;	// G=0x2f68facd; S=0x2f68fadd; @synthesize=_maximumVerticalTiltAngle
@property(assign, nonatomic) float rotatingSphereRadius;	// G=0x2f68faed; S=0x2f68fa1d; @synthesize=_rotatingSphereRadius
- (id)initWithCoder:(id)coder;	// 0x2f68f7c5
- (id)copyWithZone:(NSZone *)zone;	// 0x2f68f905
- (id)description;	// 0x2f68f981
- (void)encodeWithCoder:(id)coder;	// 0x2f68f869
- (id)keyPathsAndRelativeValuesForViewerOffset:(UIOffset)viewerOffset;	// 0x2f68f45d
// declared property getter: - (float)maximumHorizontalTiltAngle;	// 0x2f68faad
// declared property getter: - (float)maximumVerticalTiltAngle;	// 0x2f68facd
// declared property getter: - (float)rotatingSphereRadius;	// 0x2f68faed
// declared property setter: - (void)setMaximumHorizontalTiltAngle:(float)angle;	// 0x2f68fabd
// declared property setter: - (void)setMaximumVerticalTiltAngle:(float)angle;	// 0x2f68fadd
// declared property setter: - (void)setRotatingSphereRadius:(float)radius;	// 0x2f68fa1d
@end

