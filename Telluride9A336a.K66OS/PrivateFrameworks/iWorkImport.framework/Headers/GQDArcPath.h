/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "iWorkImport-Structs.h"
#import "GQDPath.h"


__attribute__((visibility("hidden")))
@interface GQDArcPath : GQDPath {
@private
	CGSize mSize;	// 8 = 0x8
	double mHeadAngle;	// 16 = 0x10
	double mArcWidth;	// 24 = 0x18
	double mArrowWidth;	// 32 = 0x20
	double mArrowLength;	// 40 = 0x28
}
- (double)arcWidth;	// 0x304d05d5
- (double)arrowLength;	// 0x304d0605
- (double)arrowWidth;	// 0x304d05ed
- (CGPathRef)createBezierPath;	// 0x304d06c9
- (double)headAngle;	// 0x304d05bd
- (int)readAttributesFromReader:(xmlTextReader *)reader processor:(id)processor;	// 0x304d09c5
- (CGSize)size;	// 0x304d05a5
@end

