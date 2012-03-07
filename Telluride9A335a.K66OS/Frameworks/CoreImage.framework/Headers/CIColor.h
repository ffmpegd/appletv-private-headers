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


@interface CIColor : NSObject <NSCoding, NSCopying> {
	void *_priv;	// 4 = 0x4
	void *_pad[3];	// 8 = 0x8
}
+ (id)colorWithCGColor:(CGColorRef)cgcolor;	// 0x3073d5d1
+ (id)colorWithRed:(float)red green:(float)green blue:(float)blue;	// 0x3073d65d
+ (id)colorWithRed:(float)red green:(float)green blue:(float)blue alpha:(float)alpha;	// 0x3073d60d
+ (id)colorWithString:(id)string;	// 0x3073d68d
- (id)initWithCGColor:(CGColorRef)cgcolor;	// 0x3073d7a9
- (id)initWithCoder:(id)coder;	// 0x3073dd15
- (id)initWithRed:(float)red green:(float)green blue:(float)blue alpha:(float)alpha;	// 0x3073d815
- (id)initWithString:(id)string;	// 0x3073d6c9
- (CGColorRef)CGColor;	// 0x3073db6d
- (float)alpha;	// 0x3073d97d
- (float)blue;	// 0x3073da61
- (CGColorRef)cgColor;	// 0x3073db5d
- (CGColorSpaceRef)colorSpace;	// 0x3073db49
- (const float *)components;	// 0x3073d969
- (id)copyWithZone:(NSZone *)zone;	// 0x3073dc5d
- (void)dealloc;	// 0x3073d8ad
- (id)description;	// 0x3073dda1
- (void)encodeWithCoder:(id)coder;	// 0x3073dca1
- (void)finalize;	// 0x3073d901
- (float)green;	// 0x3073da3d
- (unsigned)hash;	// 0x3073dbed
- (BOOL)isEqual:(id)equal;	// 0x3073db7d
- (unsigned long)numberOfComponents;	// 0x3073d955
- (float)red;	// 0x3073d991
- (id)stringRepresentation;	// 0x3073da85
@end

