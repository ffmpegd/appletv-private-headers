/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import "NSCoding.h"
#import "NSCopying.h"
#import "CoreImage-Structs.h"
#import <NSObject.h> // Unknown library


@interface CIVector : NSObject <NSCopying, NSCoding> {
	unsigned long _count;	// 4 = 0x4
	union {
		float vec[4];
		float *ptr;
	} _u;	// 8 = 0x8
}
@property(readonly, assign) unsigned long count;	// G=0x35884245; converted property
+ (id)vectorWithCGAffineTransform:(CGAffineTransform)cgaffineTransform;	// 0x35883dc5
+ (id)vectorWithCGPoint:(CGPoint)cgpoint;	// 0x35883d39
+ (id)vectorWithCGRect:(CGRect)cgrect;	// 0x35883d79
+ (id)vectorWithString:(id)string;	// 0x35883e21
+ (id)vectorWithValues:(const float *)values count:(unsigned long)count;	// 0x35883bdd
+ (id)vectorWithX:(float)x;	// 0x35883c1d
+ (id)vectorWithX:(float)x Y:(float)y;	// 0x35883c59
+ (id)vectorWithX:(float)x Y:(float)y Z:(float)z;	// 0x35883c99
+ (id)vectorWithX:(float)x Y:(float)y Z:(float)z W:(float)w;	// 0x35883ce9
- (id)init;	// 0x35883e5d
- (id)initWithCGAffineTransform:(CGAffineTransform)cgaffineTransform;	// 0x35883f71
- (id)initWithCGPoint:(CGPoint)cgpoint;	// 0x35883f1d
- (id)initWithCGRect:(CGRect)cgrect;	// 0x35883f41
- (id)initWithCoder:(id)coder;	// 0x35884865
- (id)initWithString:(id)string;	// 0x358840a9
- (id)initWithValues:(const float *)values count:(unsigned long)count;	// 0x35883fad
- (id)initWithX:(float)x;	// 0x35883e71
- (id)initWithX:(float)x Y:(float)y;	// 0x35883e91
- (id)initWithX:(float)x Y:(float)y Z:(float)z;	// 0x35883eb5
- (id)initWithX:(float)x Y:(float)y Z:(float)z W:(float)w;	// 0x35883ee5
- (CGAffineTransform)CGAffineTransformValue;	// 0x358843d5
- (CGPoint)CGPointValue;	// 0x35884335
- (CGRect)CGRectValue;	// 0x3588436d
- (float)W;	// 0x3588430d
- (float)X;	// 0x35884295
- (float)Y;	// 0x358842bd
- (float)Z;	// 0x358842e5
- (id)copyWithZone:(NSZone *)zone;	// 0x35884855
// converted property getter: - (unsigned long)count;	// 0x35884245
- (void)dealloc;	// 0x3588419d
- (id)description;	// 0x35884485
- (void)encodeWithCoder:(id)coder;	// 0x35884981
- (void)finalize;	// 0x358841f1
- (unsigned)hash;	// 0x358847c9
- (BOOL)isEqual:(id)equal;	// 0x35884731
- (id)stringRepresentation;	// 0x35884475
- (float)valueAtIndex:(unsigned long)index;	// 0x35884255
@end

