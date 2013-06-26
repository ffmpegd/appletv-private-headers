/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class NSAttributedString;

__attribute__((visibility("hidden")))
@interface BRScrollingTextPlane : BRControl {
	NSAttributedString *_string;	// 84 = 0x54
	float _pursuitGap;	// 88 = 0x58
	CGSize _cachedNaturalTextSize;	// 92 = 0x5c
}
@property(retain) id attributedString;	// G=0x2e3321; S=0x2e3291; converted property
+ (Class)layerClass;	// 0x2e3229
// converted property getter: - (id)attributedString;	// 0x2e3321
- (void)dealloc;	// 0x2e3245
- (void)drawRect:(CGRect)rect;	// 0x2e3445
- (CGSize)naturalTextSize;	// 0x2e3399
// converted property setter: - (void)setAttributedString:(id)string;	// 0x2e3291
- (void)setPursuitGap:(float)gap;	// 0x2e3331
- (void)setTileSize:(CGSize)size;	// 0x2e3369
@end
