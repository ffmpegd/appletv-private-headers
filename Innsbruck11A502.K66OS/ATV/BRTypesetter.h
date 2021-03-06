/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSAttributedString, NSMutableArray;

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
+ (id)parseTypographicMarkup:(id)markup;	// 0x45a3e1
+ (float)pointSizeForBoxHeight:(float)boxHeight fontName:(id)name;	// 0x45a68d
- (id)initWithAttributedString:(id)attributedString textBoxSize:(CGSize)size;	// 0x459c09
- (id)_boxLines:(BOOL *)lines;	// 0x45a8d1
- (void)_justifyLines:(id)lines;	// 0x45aab5
- (CTLineRef)_truncateLine:(CTLineRef)line withSetting:(unsigned char)setting;	// 0x45acb1
- (CTLineRef)_truncationToken;	// 0x45ad49
- (void)_updateRenderingAttributes;	// 0x45a6e1
- (void)dealloc;	// 0x459edd
- (void)drawTextAtPoint:(CGPoint)point inContext:(CGContextRef)context;	// 0x45a0a1
- (id)lineAtIndex:(long)index;	// 0x45a2e9
- (long)numLines;	// 0x45a2c9
- (CGSize)typographicBounds;	// 0x459f6d
@end

