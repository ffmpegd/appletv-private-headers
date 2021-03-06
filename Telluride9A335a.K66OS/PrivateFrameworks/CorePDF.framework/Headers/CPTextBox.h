/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import "CorePDF-Structs.h"
#import "CPRegion.h"


@interface CPTextBox : CPRegion {
	float rotationAngle;	// 68 = 0x44
}
@property(assign) float rotationAngle;	// G=0x31237ae9; S=0x31237cad; converted property
- (id)init;	// 0x31237b51
- (void)accept:(id)accept;	// 0x31237cd1
- (CGRect)bounds;	// 0x31237bd1
- (id)copyWithZone:(NSZone *)zone;	// 0x31237ce9
- (id)description;	// 0x31237b7d
- (BOOL)isBoxRegion;	// 0x31237ae5
- (BOOL)isRotated;	// 0x31237af9
// converted property getter: - (float)rotationAngle;	// 0x31237ae9
// converted property setter: - (void)setRotationAngle:(float)angle;	// 0x31237cad
@end

