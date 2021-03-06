/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "MFPGradientBrush.h"

@class TSUColor, NSArray;

@interface MFPPathGradientBrush : MFPGradientBrush {
	TSUColor *mCenterColor;	// 52 = 0x34
	CGPoint mCenterPoint;	// 56 = 0x38
	NSArray *mSurroundColors;	// 64 = 0x40
	CGPathRef mPath;	// 68 = 0x44
}
- (id).cxx_construct;	// 0x371f959d
- (void)createShading;	// 0x371f94ad
- (void)dealloc;	// 0x371f9389
- (id)endColor;	// 0x371f957d
- (void)setCenterColor:(id)color;	// 0x371f93fd
- (void)setCenterPoint:(CGPoint)point;	// 0x371f9439
- (void)setPath:(CGPathRef)path;	// 0x371f9489
- (void)setSurroundColors:(id)colors;	// 0x371f944d
- (id)startColor;	// 0x371f956d
@end

