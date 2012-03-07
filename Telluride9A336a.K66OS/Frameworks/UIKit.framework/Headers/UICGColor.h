/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIColor.h"
#import "UIKit-Structs.h"


__attribute__((visibility("hidden")))
@interface UICGColor : UIColor {
@private
	CGColorRef cachedColor;	// 8 = 0x8
}
- (id)initWithCGColor:(CGColorRef)cgcolor;	// 0x35179391
- (CGColorRef)CGColor;	// 0x351793f1
- (float)alphaComponent;	// 0x3518e0e1
- (id)colorSpaceName;	// 0x352e3399
- (id)colorWithAlphaComponent:(float)alphaComponent;	// 0x352e3315
- (void)dealloc;	// 0x3517f9f5
- (id)description;	// 0x352e3431
- (unsigned)hash;	// 0x3518efd1
- (BOOL)isEqual:(id)equal;	// 0x35251721
- (BOOL)isPatternColor;	// 0x352517c5
- (void)set;	// 0x3518eced
- (void)setFill;	// 0x352e3359
- (void)setStroke;	// 0x352e3379
@end

