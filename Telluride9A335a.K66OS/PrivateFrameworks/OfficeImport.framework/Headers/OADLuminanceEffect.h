/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "OADBlipEffect.h"


__attribute__((visibility("hidden")))
@interface OADLuminanceEffect : OADBlipEffect {
@private
	float mBrightness;	// 8 = 0x8
	float mContrast;	// 12 = 0xc
}
@property(assign) float brightness;	// G=0x353c3769; S=0x351ecf2d; converted property
@property(assign) float contrast;	// G=0x353c3779; S=0x351ecf09; converted property
- (id)init;	// 0x351ecea1
// converted property getter: - (float)brightness;	// 0x353c3769
// converted property getter: - (float)contrast;	// 0x353c3779
- (id)copyWithZone:(NSZone *)zone;	// 0x353c3b4d
- (unsigned)hash;	// 0x353c39fd
- (BOOL)isEqual:(id)equal;	// 0x353c3a65
// converted property setter: - (void)setBrightness:(float)brightness;	// 0x351ecf2d
// converted property setter: - (void)setContrast:(float)contrast;	// 0x351ecf09
@end

