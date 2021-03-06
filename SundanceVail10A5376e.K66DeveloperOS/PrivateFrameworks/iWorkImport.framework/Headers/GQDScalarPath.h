/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "GQDPath.h"
#import "iWorkImport-Structs.h"


@interface GQDScalarPath : GQDPath {
	int mType;	// 8 = 0x8
	double mScalar;	// 12 = 0xc
	CGSize mSize;	// 20 = 0x14
}
- (id).cxx_construct;	// 0x358117d1
- (CGPathRef)createBezierPath;	// 0x358114f1
- (BOOL)isRect;	// 0x3581148d
- (BOOL)isRectangular;	// 0x35811451
- (int)readAttributesFromReader:(xmlTextReader *)reader processor:(id)processor;	// 0x358117d5
- (double)scalar;	// 0x358114b1
- (CGSize)size;	// 0x358114d9
- (int)type;	// 0x358114c9
@end

