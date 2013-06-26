/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class BRControl;

__attribute__((visibility("hidden")))
@interface BRWindow : XXUnknownSuperclass {
	BRControl *_content;	// 4 = 0x4
	BRControl *_plane;	// 8 = 0x8
	int _level;	// 12 = 0xc
	BOOL _orderedIn;	// 16 = 0x10
	BOOL _opaque;	// 17 = 0x11
}
@property(assign) BOOL acceptsFocus;	// G=0x280301; S=0x2802e1; converted property
@property(retain) BRControl *content;	// G=0x280111; S=0x280069; converted property
@property(assign) BOOL isOpaque;	// G=0x280325; S=0x2802a5; converted property
@property(assign) int level;	// G=0x280161; S=0x280121; converted property
@property(readonly, assign, getter=isOrderedIn) BOOL orderedIn;	// G=0x280335; converted property
+ (void)_establishRootContext;	// 0x280345
+ (void)_establishRootLayerBounds;	// 0x280765
+ (void)adjustToDisplayChange;	// 0x27fd61
+ (BOOL)dispatchEvent:(id)event;	// 0x280c79
+ (id)focusedLeafControl;	// 0x280cb1
+ (void)initialize;	// 0x27fc75
+ (CGRect)interfaceFrame;	// 0x27fd41
+ (CGSize)maxBounds;	// 0x27fd2d
+ (id)rootLayer;	// 0x280ab9
+ (void)setMaxBounds:(CGSize)bounds;	// 0x280ae5
+ (id)window;	// 0x27fcf5
+ (id)windowList;	// 0x280ad5
- (id)init;	// 0x27ff2d
- (void)_addWindow:(id)window atIndex:(long)index;	// 0x280fbd
- (id)_controlPlane;	// 0x280cdd
- (void)_orderWindow:(id)window above:(id)above;	// 0x280f19
- (void)_orderWindow:(id)window below:(id)below;	// 0x280e75
- (void)_orderWindowBack:(id)back;	// 0x280de1
- (void)_orderWindowFront:(id)front;	// 0x280d4d
- (void)_orderWindowOut:(id)anOut;	// 0x280ced
- (void)_updateContent;	// 0x281241
- (void)_updateRenderedWindows;	// 0x281071
// converted property getter: - (BOOL)acceptsFocus;	// 0x280301
// converted property getter: - (id)content;	// 0x280111
- (void)dealloc;	// 0x27ffd9
// converted property getter: - (BOOL)isOpaque;	// 0x280325
// converted property getter: - (BOOL)isOrderedIn;	// 0x280335
// converted property getter: - (int)level;	// 0x280161
- (void)orderAbove:(id)above;	// 0x280261
- (void)orderBack;	// 0x2801dd
- (void)orderBelow:(id)below;	// 0x28021d
- (void)orderFront;	// 0x28019d
- (void)orderOut;	// 0x280171
// converted property setter: - (void)setAcceptsFocus:(BOOL)focus;	// 0x2802e1
// converted property setter: - (void)setContent:(id)content;	// 0x280069
// converted property setter: - (void)setIsOpaque:(BOOL)opaque;	// 0x2802a5
// converted property setter: - (void)setLevel:(int)level;	// 0x280121
@end
