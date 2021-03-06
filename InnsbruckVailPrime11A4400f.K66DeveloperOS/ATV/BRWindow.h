/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "AppleTV-Structs.h"

@class BRControl;

__attribute__((visibility("hidden")))
@interface BRWindow : XXUnknownSuperclass {
	BRControl *_content;	// 4 = 0x4
	BRControl *_plane;	// 8 = 0x8
	int _level;	// 12 = 0xc
	BOOL _orderedIn;	// 16 = 0x10
	BOOL _opaque;	// 17 = 0x11
}
@property(assign) BOOL acceptsFocus;	// G=0x2cecbd; S=0x2cec9d; converted property
@property(retain) BRControl *content;	// G=0x2ceacd; S=0x2cea25; converted property
@property(assign) BOOL isOpaque;	// G=0x2cece1; S=0x2cec5d; converted property
@property(assign) int level;	// G=0x2ceb19; S=0x2ceadd; converted property
@property(readonly, assign, getter=isOrderedIn) BOOL orderedIn;	// G=0x2cecf1; converted property
+ (void)_establishRootContext;	// 0x2ced01
+ (void)_establishRootLayerBounds;	// 0x2cf129
+ (void)adjustToDisplayChange;	// 0x2ce615
+ (BOOL)dispatchEvent:(id)event;	// 0x2cf6c9
+ (id)focusedLeafControl;	// 0x2cf701
+ (void)initialize;	// 0x2ce4b9
+ (CGRect)interfaceFrame;	// 0x2ce5b5
+ (id)rootLayer;	// 0x2cf4a1
+ (void)setMaxBounds:(CGRect)bounds;	// 0x2cf4cd
+ (id)window;	// 0x2ce57d
+ (id)windowList;	// 0x2cf4bd
- (id)init;	// 0x2ce8e9
- (void)_addWindow:(id)window atIndex:(long)index;	// 0x2cfa09
- (id)_controlPlane;	// 0x2cf72d
- (void)_orderWindow:(id)window above:(id)above;	// 0x2cf965
- (void)_orderWindow:(id)window below:(id)below;	// 0x2cf8c5
- (void)_orderWindowBack:(id)back;	// 0x2cf831
- (void)_orderWindowFront:(id)front;	// 0x2cf79d
- (void)_orderWindowOut:(id)anOut;	// 0x2cf73d
- (void)_updateContent;	// 0x2cfc91
- (void)_updateRenderedWindows;	// 0x2cfab9
// converted property getter: - (BOOL)acceptsFocus;	// 0x2cecbd
// converted property getter: - (id)content;	// 0x2ceacd
- (void)dealloc;	// 0x2ce995
// converted property getter: - (BOOL)isOpaque;	// 0x2cece1
// converted property getter: - (BOOL)isOrderedIn;	// 0x2cecf1
// converted property getter: - (int)level;	// 0x2ceb19
- (void)orderAbove:(id)above;	// 0x2cec19
- (void)orderBack;	// 0x2ceb95
- (void)orderBelow:(id)below;	// 0x2cebd5
- (void)orderFront;	// 0x2ceb55
- (void)orderOut;	// 0x2ceb29
// converted property setter: - (void)setAcceptsFocus:(BOOL)focus;	// 0x2cec9d
// converted property setter: - (void)setContent:(id)content;	// 0x2cea25
// converted property setter: - (void)setIsOpaque:(BOOL)opaque;	// 0x2cec5d
// converted property setter: - (void)setLevel:(int)level;	// 0x2ceadd
@end

