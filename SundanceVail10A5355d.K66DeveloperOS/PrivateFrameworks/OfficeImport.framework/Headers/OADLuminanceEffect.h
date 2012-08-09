/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OADBlipEffect.h"
#import "OfficeImport-Structs.h"


@interface OADLuminanceEffect : OADBlipEffect {
	float mBrightness;	// 8 = 0x8
	float mContrast;	// 12 = 0xc
}
@property(assign) float brightness;	// G=0x31dca67d; S=0x31c00a4d; converted property
@property(assign) float contrast;	// G=0x31dca68d; S=0x31c00a29; converted property
- (id)init;	// 0x31c009a5
// converted property getter: - (float)brightness;	// 0x31dca67d
// converted property getter: - (float)contrast;	// 0x31dca68d
- (id)copyWithZone:(NSZone *)zone;	// 0x31dca5f9
- (unsigned)hash;	// 0x31dca69d
- (BOOL)isEqual:(id)equal;	// 0x31dca705
// converted property setter: - (void)setBrightness:(float)brightness;	// 0x31c00a4d
// converted property setter: - (void)setContrast:(float)contrast;	// 0x31c00a29
@end
