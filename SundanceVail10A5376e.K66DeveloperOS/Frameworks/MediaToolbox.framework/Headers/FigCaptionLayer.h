/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
 */

#import "MediaToolbox-Structs.h"
#import <CALayer.h> // Unknown library

@class FigCaptionLayerPrivate;

@interface FigCaptionLayer : CALayer {
	FigCaptionLayerPrivate *_priv;	// 48 = 0x30
}
- (id)init;	// 0x3253c881
- (void)_renderer:(OpaqueFigCFCaptionRenderer *)renderer didChangeRows:(XXStruct_K5nmsA)rows;	// 0x3253d229
- (void)dealloc;	// 0x3253cc89
- (void)drawLayer:(id)layer inContext:(CGContextRef)context;	// 0x3253d0e5
- (void)finalize;	// 0x3253cc19
- (void)layoutSublayers;	// 0x3253cea1
- (void)processCaptionCommand:(unsigned)command data:(id)data;	// 0x3253ce79
- (void)resetCaptions;	// 0x3253cd35
- (void)setFontName:(const char *)name;	// 0x3253cbc9
@end

