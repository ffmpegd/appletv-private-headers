/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "MFPen.h"


__attribute__((visibility("hidden")))
@interface MFCocoaPen : MFPen {
@private
	float m_PixelSize;	// 20 = 0x14
}
+ (id)penWithStyle:(int)style width:(long)width colour:(id)colour styleArray:(double *)array LPToDPTransform:(id)dptransform;	// 0x30c78a35
- (id)initWithStyle:(int)style width:(long)width colour:(id)colour styleArray:(double *)array;	// 0x30c78b2d
- (void)applyDashedLinesToPath:(id)path;	// 0x30c7d3dd
- (void)applyLineCapStyleToPath:(id)path;	// 0x30c7d491
- (void)applyLineJoinStyleToPath:(id)path :(id)arg2;	// 0x30c7d4f9
- (void)strokePath:(id)path :(id)arg2;	// 0x30c7d1f5
@end

