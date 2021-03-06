/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import <WebCore/WAKView.h>
#import "WebKit-Structs.h"

@class NSMutableArray, WebNodeHighlight;

@interface WebNodeHighlightView : WAKView {
	WebNodeHighlight *_webNodeHighlight;	// 40 = 0x28
	NSMutableArray *_layers;	// 44 = 0x2c
}
@property(readonly, retain) WebNodeHighlight *webNodeHighlight;	// G=0x339893c1; converted property
- (id)initWithWebNodeHighlight:(id)webNodeHighlight;	// 0x339883b1
- (void)_attach:(id)attach numLayers:(unsigned)layers;	// 0x339884ed
- (void)_layoutForNodeHighlight:(Highlight *)nodeHighlight parent:(id)parent;	// 0x339885ed
- (void)_layoutForRectsHighlight:(Highlight *)rectsHighlight parent:(id)parent;	// 0x33989125
- (void)_removeAllLayers;	// 0x339882d5
- (void)dealloc;	// 0x3398844d
- (void)detachFromWebNodeHighlight;	// 0x339884bd
- (BOOL)isFlipped;	// 0x339884e9
- (void)layoutSublayers:(id)sublayers;	// 0x33989241
// converted property getter: - (id)webNodeHighlight;	// 0x339893c1
@end

