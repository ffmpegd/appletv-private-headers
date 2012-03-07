/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MediaToolbox.framework/MediaToolbox
 */

#import "MediaToolbox-Structs.h"
#import <CALayer.h> // Unknown library

@class FigCaptionLayerPrivate;

@interface FigCaptionLayer : CALayer {
@private
	FigCaptionLayerPrivate *_priv;	// 48 = 0x30
}
- (id)init;	// 0x369647b5
- (void)_renderer:(OpaqueFigCFCaptionRenderer *)renderer didChangeRows:(XXStruct_K5nmsA)rows;	// 0x36964a39
- (void)dealloc;	// 0x36965029
- (void)drawLayer:(id)layer inContext:(CGContextRef)context;	// 0x36964b55
- (void)finalize;	// 0x369650c5
- (void)layoutSublayers;	// 0x36964c9d
- (void)processCaptionCommand:(unsigned)command data:(id)data;	// 0x36964ef9
- (void)resetCaptions;	// 0x36964f21
- (void)setFontName:(const char *)name;	// 0x36965135
@end

