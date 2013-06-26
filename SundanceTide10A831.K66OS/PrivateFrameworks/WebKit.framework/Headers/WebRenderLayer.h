/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import "WebKit-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString, NSArray;

@interface WebRenderLayer : NSObject {
	NSArray *children;	// 4 = 0x4
	NSString *name;	// 8 = 0x8
	NSString *compositingInfo;	// 12 = 0xc
	CGRect bounds;	// 16 = 0x10
	BOOL composited;	// 32 = 0x20
	BOOL separator;	// 33 = 0x21
}
@property(readonly, retain) NSArray *children;	// G=0x350a6381; converted property
@property(readonly, assign, getter=isComposited) BOOL composited;	// G=0x350a64ad; converted property
@property(readonly, retain) NSString *compositingInfo;	// G=0x350a649d; converted property
@property(readonly, retain) NSString *name;	// G=0x350a6391; converted property
@property(readonly, assign, getter=isSeparator) BOOL separator;	// G=0x350a64bd; converted property
+ (id)compositingInfoForLayer:(RenderLayer *)layer;	// 0x350a5ce1
+ (id)nameForLayer:(RenderLayer *)layer;	// 0x350a5831
- (id)initWithName:(id)name;	// 0x350a5e7d
- (id)initWithRenderLayer:(RenderLayer *)renderLayer;	// 0x350a5d89
- (id)initWithWebFrame:(id)webFrame;	// 0x350a5ee1
- (id).cxx_construct;	// 0x350a64cd
- (void)buildDescendantLayers:(RenderLayer *)layers;	// 0x350a6099
// converted property getter: - (id)children;	// 0x350a6381
// converted property getter: - (id)compositingInfo;	// 0x350a649d
- (void)dealloc;	// 0x350a6021
- (id)heightString;	// 0x350a644d
// converted property getter: - (BOOL)isComposited;	// 0x350a64ad
// converted property getter: - (BOOL)isSeparator;	// 0x350a64bd
// converted property getter: - (id)name;	// 0x350a6391
- (id)positionString;	// 0x350a63a1
- (id)widthString;	// 0x350a63fd
@end
