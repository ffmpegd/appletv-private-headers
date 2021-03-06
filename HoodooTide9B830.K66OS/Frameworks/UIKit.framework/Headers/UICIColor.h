/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIColor.h"

@class CIColor;

__attribute__((visibility("hidden")))
@interface UICIColor : UIColor {
@private
	CIColor *_ciColor;	// 8 = 0x8
	UIColor *_rgbColor;	// 12 = 0xc
}
- (id)initWithCIColor:(id)cicolor;	// 0x3024adcd
- (CGColorRef)CGColor;	// 0x3024b14d
- (id)CIColor;	// 0x3024b175
- (id)_rgbColor;	// 0x3024af79
- (id)colorWithAlphaComponent:(float)alphaComponent;	// 0x3024b0c5
- (void)dealloc;	// 0x3024ae39
- (id)description;	// 0x3024ae99
- (BOOL)getRed:(float *)red green:(float *)green blue:(float *)blue alpha:(float *)alpha;	// 0x3024b20d
- (unsigned)hash;	// 0x3024b1ed
- (BOOL)isEqual:(id)equal;	// 0x3024b185
- (void)set;	// 0x3024b04d
- (void)setFill;	// 0x3024b075
- (void)setStroke;	// 0x3024b09d
@end

