/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray, NSAttributedString;

__attribute__((visibility("hidden")))
@interface BRTypesetter : XXUnknownSuperclass {
	NSAttributedString *_resolvedString;	// 4 = 0x4
	CTTypesetterRef _setter;	// 8 = 0x8
	NSMutableArray *_lines;	// 12 = 0xc
	CGSize _boxSize;	// 16 = 0x10
	CGSize _shadowOffset;	// 24 = 0x18
	CGColorRef _shadowColor;	// 32 = 0x20
	float _shadowBlurAmount;	// 36 = 0x24
	float _flushFactor;	// 40 = 0x28
	BOOL _renderingAttributesFetched;	// 44 = 0x2c
}
+ (float)pointSizeForBoxHeight:(float)boxHeight fontName:(id)name;	// 0x3878d1
- (id)initWithAttributedString:(id)attributedString textBoxSize:(CGSize)size;	// 0x3870e5
- (id)_boxLines:(BOOL *)lines;	// 0x387b09
- (void)_justifyLines:(id)lines;	// 0x387ccd
- (CTLineRef)_truncateLine:(CTLineRef)line withSetting:(unsigned char)setting;	// 0x387d69
- (CTLineRef)_truncationToken;	// 0x387e01
- (void)_updateRenderingAttributes;	// 0x387925
- (void)dealloc;	// 0x3873b9
- (void)drawTextAtPoint:(CGPoint)point inContext:(CGContextRef)context;	// 0x38757d
- (id)lineAtIndex:(long)index;	// 0x3877d9
- (long)numLines;	// 0x3877b9
- (CGSize)typographicBounds;	// 0x387449
@end
