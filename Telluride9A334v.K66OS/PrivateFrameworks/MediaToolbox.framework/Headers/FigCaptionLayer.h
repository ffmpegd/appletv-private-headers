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
- (id)init;	// 0x33b207b5
- (void)_renderer:(OpaqueFigCFCaptionRenderer *)renderer didChangeRows:(XXStruct_K5nmsA)rows;	// 0x33b20a39
- (void)dealloc;	// 0x33b21029
- (void)drawLayer:(id)layer inContext:(CGContextRef)context;	// 0x33b20b55
- (void)finalize;	// 0x33b210c5
- (void)layoutSublayers;	// 0x33b20c9d
- (void)processCaptionCommand:(unsigned)command data:(id)data;	// 0x33b20ef9
- (void)resetCaptions;	// 0x33b20f21
- (void)setFontName:(const char *)name;	// 0x33b21135
@end

