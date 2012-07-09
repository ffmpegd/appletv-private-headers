/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OADBlipEffect.h"
#import "OfficeImport-Structs.h"

@class OADColor;

@interface OADColorChangeEffect : OADBlipEffect {
	OADColor *mFromColor;	// 8 = 0x8
	OADColor *mToColor;	// 12 = 0xc
}
@property(retain) id fromColor;	// G=0x33b9bf9d; S=0x33adfdc5; converted property
@property(retain) id toColor;	// G=0x33b9bfad; S=0x33adfe01; converted property
- (id)init;	// 0x33adfd95
- (id)copyWithZone:(NSZone *)zone;	// 0x33b9becd
- (void)dealloc;	// 0x33ae3735
// converted property getter: - (id)fromColor;	// 0x33b9bf9d
- (unsigned)hash;	// 0x33b9c029
- (BOOL)isEqual:(id)equal;	// 0x33b9c089
// converted property setter: - (void)setFromColor:(id)color;	// 0x33adfdc5
- (void)setStyleColor:(id)color;	// 0x33b9bfbd
// converted property setter: - (void)setToColor:(id)color;	// 0x33adfe01
// converted property getter: - (id)toColor;	// 0x33b9bfad
@end
