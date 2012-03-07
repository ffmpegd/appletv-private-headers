/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "OADBlipEffect.h"

@class OADColor;

__attribute__((visibility("hidden")))
@interface OADColorChangeEffect : OADBlipEffect {
@private
	OADColor *mFromColor;	// 8 = 0x8
	OADColor *mToColor;	// 12 = 0xc
}
@property(retain) id fromColor;	// G=0x353c3789; S=0x352738b9; converted property
@property(retain) id toColor;	// G=0x353c3799; S=0x352738f9; converted property
- (id)init;	// 0x352738a5
- (id)copyWithZone:(NSZone *)zone;	// 0x353c3d45
- (void)dealloc;	// 0x35274375
// converted property getter: - (id)fromColor;	// 0x353c3789
- (unsigned)hash;	// 0x353c3f01
- (BOOL)isEqual:(id)equal;	// 0x353c3e11
// converted property setter: - (void)setFromColor:(id)color;	// 0x352738b9
- (void)setStyleColor:(id)color;	// 0x353c3f61
// converted property setter: - (void)setToColor:(id)color;	// 0x352738f9
// converted property getter: - (id)toColor;	// 0x353c3799
@end

