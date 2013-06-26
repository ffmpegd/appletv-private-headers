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
@property(assign) BOOL acceptsFocus;	// G=0x2e0895; S=0x2e0875; converted property
@property(retain) BRControl *content;	// G=0x2e06a5; S=0x2e05fd; converted property
@property(assign) BOOL isOpaque;	// G=0x2e08b9; S=0x2e0835; converted property
@property(assign) int level;	// G=0x2e06f1; S=0x2e06b5; converted property
@property(readonly, assign, getter=isOrderedIn) BOOL orderedIn;	// G=0x2e08c9; converted property
+ (void)_establishRootContext;	// 0x2e08d9
+ (void)_establishRootLayerBounds;	// 0x2e0d01
+ (void)adjustToDisplayChange;	// 0x2e01ed
+ (BOOL)dispatchEvent:(id)event;	// 0x2e12a1
+ (id)focusedLeafControl;	// 0x2e12d9
+ (void)initialize;	// 0x2e0091
+ (CGRect)interfaceFrame;	// 0x2e018d
+ (id)rootLayer;	// 0x2e1079
+ (void)setMaxBounds:(CGRect)bounds;	// 0x2e10a5
+ (id)window;	// 0x2e0155
+ (id)windowList;	// 0x2e1095
- (id)init;	// 0x2e04c1
- (void)_addWindow:(id)window atIndex:(long)index;	// 0x2e15e1
- (id)_controlPlane;	// 0x2e1305
- (void)_orderWindow:(id)window above:(id)above;	// 0x2e153d
- (void)_orderWindow:(id)window below:(id)below;	// 0x2e149d
- (void)_orderWindowBack:(id)back;	// 0x2e1409
- (void)_orderWindowFront:(id)front;	// 0x2e1375
- (void)_orderWindowOut:(id)anOut;	// 0x2e1315
- (void)_updateContent;	// 0x2e1869
- (void)_updateRenderedWindows;	// 0x2e1691
// converted property getter: - (BOOL)acceptsFocus;	// 0x2e0895
// converted property getter: - (id)content;	// 0x2e06a5
- (void)dealloc;	// 0x2e056d
// converted property getter: - (BOOL)isOpaque;	// 0x2e08b9
// converted property getter: - (BOOL)isOrderedIn;	// 0x2e08c9
// converted property getter: - (int)level;	// 0x2e06f1
- (void)orderAbove:(id)above;	// 0x2e07f1
- (void)orderBack;	// 0x2e076d
- (void)orderBelow:(id)below;	// 0x2e07ad
- (void)orderFront;	// 0x2e072d
- (void)orderOut;	// 0x2e0701
// converted property setter: - (void)setAcceptsFocus:(BOOL)focus;	// 0x2e0875
// converted property setter: - (void)setContent:(id)content;	// 0x2e05fd
// converted property setter: - (void)setIsOpaque:(BOOL)opaque;	// 0x2e0835
// converted property setter: - (void)setLevel:(int)level;	// 0x2e06b5
@end
