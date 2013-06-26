/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import <QuartzCore/CATiledLayer.h>
#import "WebCore-Structs.h"


@interface WebTiledLayer : CATiledLayer {
}
+ (double)fadeDuration;	// 0x33810789
+ (unsigned)prefetchedTiles;	// 0x338107b1
+ (BOOL)shouldDrawOnMainThread;	// 0x338107a1
- (id)actionForKey:(id)key;	// 0x338107b5
- (void)display;	// 0x33810999
- (void)drawInContext:(CGContextRef)context;	// 0x338109ed
- (void)setNeedsDisplay;	// 0x338107b9
- (void)setNeedsDisplayInRect:(CGRect)rect;	// 0x33810801
@end
