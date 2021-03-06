/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BackRow-Structs.h"
#import <NSObject.h> // Unknown library

@class BRControl;

@interface BRWindow : NSObject {
@private
	BRControl *_content;	// 4 = 0x4
	BRControl *_plane;	// 8 = 0x8
	int _level;	// 12 = 0xc
	BOOL _orderedIn;	// 16 = 0x10
	BOOL _opaque;	// 17 = 0x11
}
@property(assign) BOOL acceptsFocus;	// G=0x3289dbc9; S=0x328e5a25; converted property
@property(retain) BRControl *content;	// G=0x328b60f9; S=0x3289d7fd; converted property
@property(assign) BOOL isOpaque;	// G=0x3289d9c9; S=0x328cbb51; converted property
@property(assign) int level;	// G=0x3289d9b9; S=0x328b5b4d; converted property
@property(readonly, assign, getter=isOrderedIn) BOOL orderedIn;	// G=0x328e5491; converted property
+ (BOOL)dispatchEvent:(id)event;	// 0x328e59d1
+ (id)focusedLeafControl;	// 0x328e59a5
+ (void)initialize;	// 0x328e5c19
+ (CGRect)interfaceFrame;	// 0x328e5f71
+ (CGSize)maxBounds;	// 0x328e547d
+ (id)rootLayer;	// 0x328e5a05
+ (void)setMaxBounds:(CGSize)bounds;	// 0x328e5f91
+ (id)window;	// 0x328b5cc1
+ (id)windowList;	// 0x328e54a1
- (id)init;	// 0x3289d52d
- (void)_addWindow:(id)window atIndex:(long)index;	// 0x328e5669
- (id)_controlPlane;	// 0x328e54ad
- (void)_orderWindow:(id)window above:(id)above;	// 0x328e5709
- (void)_orderWindow:(id)window below:(id)below;	// 0x328e57a1
- (void)_orderWindowBack:(id)back;	// 0x328e5839
- (void)_orderWindowFront:(id)front;	// 0x328e58c5
- (void)_orderWindowOut:(id)anOut;	// 0x328e5951
- (void)_updateContent;	// 0x328e5b5d
- (void)_updateRenderedWindows;	// 0x328e54bd
// converted property getter: - (BOOL)acceptsFocus;	// 0x3289dbc9
// converted property getter: - (id)content;	// 0x328b60f9
- (void)dealloc;	// 0x328b1871
// converted property getter: - (BOOL)isOpaque;	// 0x3289d9c9
// converted property getter: - (BOOL)isOrderedIn;	// 0x328e5491
// converted property getter: - (int)level;	// 0x3289d9b9
- (void)orderAbove:(id)above;	// 0x328e5a49
- (void)orderBack;	// 0x328e5ab9
- (void)orderBelow:(id)below;	// 0x328e5a81
- (void)orderFront;	// 0x3289d8cd
- (void)orderOut;	// 0x328b15e5
// converted property setter: - (void)setAcceptsFocus:(BOOL)focus;	// 0x328e5a25
// converted property setter: - (void)setContent:(id)content;	// 0x3289d7fd
// converted property setter: - (void)setIsOpaque:(BOOL)opaque;	// 0x328cbb51
// converted property setter: - (void)setLevel:(int)level;	// 0x328b5b4d
@end

