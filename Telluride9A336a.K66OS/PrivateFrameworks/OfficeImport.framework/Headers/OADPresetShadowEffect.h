/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OADShadowEffect.h"
#import "OfficeImport-Structs.h"


__attribute__((visibility("hidden")))
@interface OADPresetShadowEffect : OADShadowEffect {
@private
	int mPresetShadowType;	// 24 = 0x18
}
@property(assign) int presetShadowType;	// G=0x34d71149; S=0x34d71139; converted property
- (id)init;	// 0x34d71009
- (id)copyWithZone:(NSZone *)zone;	// 0x34e2370d
- (id)equivalentOuterShadowEffect;	// 0x34e23361
- (unsigned)hash;	// 0x34e23325
- (BOOL)isEqual:(id)equal;	// 0x34e23285
// converted property getter: - (int)presetShadowType;	// 0x34d71149
// converted property setter: - (void)setPresetShadowType:(int)type;	// 0x34d71139
@end

