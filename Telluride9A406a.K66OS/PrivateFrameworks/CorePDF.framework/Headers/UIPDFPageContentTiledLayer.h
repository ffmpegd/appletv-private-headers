/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import <CATiledLayer.h> // Unknown library
#import "CorePDF-Structs.h"

@class CALayer;

@interface UIPDFPageContentTiledLayer : CATiledLayer {
	CALayer *selectionLayer;	// 48 = 0x30
}
- (id)init;	// 0x3051ce6d
- (void)dealloc;	// 0x3051cd31
- (void)drawLayer:(id)layer inContext:(CGContextRef)context;	// 0x3051cd5d
- (void)layoutSublayers;	// 0x3051cd91
- (void)setNeedsDisplay;	// 0x3051ce29
@end

