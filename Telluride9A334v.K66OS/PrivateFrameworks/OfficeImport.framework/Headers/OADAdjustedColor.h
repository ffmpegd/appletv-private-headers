/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OADColor.h"
#import "OfficeImport-Structs.h"


__attribute__((visibility("hidden")))
@interface OADAdjustedColor : OADColor {
@private
	OADColor *mBaseColor;	// 8 = 0x8
	int mAdjustmentType;	// 12 = 0xc
	unsigned char mAdjustmentParam;	// 16 = 0x10
	BOOL mInvert;	// 17 = 0x11
	BOOL mInvert128;	// 18 = 0x12
	BOOL mGray;	// 19 = 0x13
}
- (id)initWithBaseColor:(id)baseColor adjustmentType:(int)type adjustmentParam:(unsigned char)param invert:(BOOL)invert invert128:(BOOL)a128 gray:(BOOL)gray;	// 0x355ae5a5
- (unsigned char)adjustmentParam;	// 0x355afa5d
- (int)adjustmentType;	// 0x355afa6d
- (id)baseColor;	// 0x355af8e5
- (id)copyWithZone:(NSZone *)zone;	// 0x35780d11
- (void)dealloc;	// 0x355b165d
- (BOOL)gray;	// 0x355afa4d
- (unsigned)hash;	// 0x356dd5c9
- (BOOL)invert;	// 0x355afa7d
- (BOOL)invert128;	// 0x355afa8d
- (BOOL)isEqual:(id)equal;	// 0x356dd449
@end

