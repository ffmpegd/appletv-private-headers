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
@interface OADDuotoneEffect : OADBlipEffect {
@private
	OADColor *mColor1;	// 8 = 0x8
	OADColor *mColor2;	// 12 = 0xc
	int mTransferMode1;	// 16 = 0x10
	int mTransferMode2;	// 20 = 0x14
}
@property(retain) id color1;	// G=0x34587705; S=0x3454cce5; converted property
@property(retain) id color2;	// G=0x34587715; S=0x3454cd1d; converted property
@property(assign) int transferMode1;	// G=0x34587725; S=0x34587735; converted property
@property(assign) int transferMode2;	// G=0x34587745; S=0x34587755; converted property
- (id)init;	// 0x3454ccb1
// converted property getter: - (id)color1;	// 0x34587705
// converted property getter: - (id)color2;	// 0x34587715
- (id)copyWithZone:(NSZone *)zone;	// 0x34565a25
- (void)dealloc;	// 0x3454cd55
- (unsigned)hash;	// 0x34562351
- (BOOL)isEqual:(id)equal;	// 0x345878cd
// converted property setter: - (void)setColor1:(id)a1;	// 0x3454cce5
// converted property setter: - (void)setColor2:(id)a2;	// 0x3454cd1d
- (void)setStyleColor:(id)color;	// 0x34565cbd
// converted property setter: - (void)setTransferMode1:(int)a1;	// 0x34587735
// converted property setter: - (void)setTransferMode2:(int)a2;	// 0x34587755
// converted property getter: - (int)transferMode1;	// 0x34587725
// converted property getter: - (int)transferMode2;	// 0x34587745
@end

