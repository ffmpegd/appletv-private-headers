/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "GQDPath.h"
#import "iWorkImport-Structs.h"


@interface GQDArcPath : GQDPath {
	CGSize mSize;	// 8 = 0x8
	double mHeadAngle;	// 16 = 0x10
	double mArcWidth;	// 24 = 0x18
	double mArrowWidth;	// 32 = 0x20
	double mArrowLength;	// 40 = 0x28
}
- (id).cxx_construct;	// 0x33cf71f9
- (double)arcWidth;	// 0x33cf6e81
- (double)arrowLength;	// 0x33cf6eb1
- (double)arrowWidth;	// 0x33cf6e99
- (CGPathRef)createBezierPath;	// 0x33cf6ec9
- (double)headAngle;	// 0x33cf6e69
- (int)readAttributesFromReader:(xmlTextReader *)reader processor:(id)processor;	// 0x33cf71fd
- (CGSize)size;	// 0x33cf6e51
@end

