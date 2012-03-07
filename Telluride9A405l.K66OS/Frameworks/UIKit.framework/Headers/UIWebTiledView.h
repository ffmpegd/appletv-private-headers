/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class WAKWindow;

@interface UIWebTiledView : UIView {
	WAKWindow *_wakWindow;	// 48 = 0x30
	int _inGestureType;	// 52 = 0x34
	int _tilingArea;	// 56 = 0x38
	BOOL _didFirstTileLayout;	// 60 = 0x3c
	BOOL _layoutTilesInMainThread;	// 61 = 0x3d
	BOOL _tilingModeIsLocked;	// 62 = 0x3e
}
@property(assign) BOOL drawsGrid;	// G=0x32f3a37d; S=0x32f3a379; converted property
@property(assign) BOOL keepsZoomedOutTiles;	// G=0x32f3a3e9; S=0x32d21241; converted property
@property(assign) BOOL layoutTilesInMainThread;	// G=0x32f3a44d; S=0x32e0de35; converted property
@property(assign) BOOL logsTilingChanges;	// G=0x32f3a391; S=0x32f3a38d; converted property
@property(assign) unsigned maxTileCount;	// G=0x32f3a381; S=0x32d02e29; converted property
@property(assign) BOOL tileDrawingEnabled;	// G=0x32f3a3c1; S=0x32f3a395; converted property
@property(assign) CGSize tileSize;	// G=0x32f3a36d; S=0x32d02e25; converted property
@property(assign) BOOL tilesOpaque;	// G=0x32f3a3c5; S=0x32d030c1; converted property
@property(assign) int tilingArea;	// G=0x32dcda25; S=0x32d07e91; converted property
@property(assign, getter=isTilingEnabled) BOOL tilingEnabled;	// G=0x32f3a389; S=0x32d02e2d; converted property
@property(readonly, retain) WAKWindow *wakWindow;	// G=0x32f3a45d; converted property
- (id)initWithFrame:(CGRect)frame;	// 0x32d0191d
- (void)_didScroll;	// 0x32dc6c8d
- (void)_screenChanged:(id)changed;	// 0x32f3a225
- (void)_updateForScreen:(id)screen;	// 0x32d04c31
- (unsigned)adjustedMaxTileCount;	// 0x32f3a385
- (void)dealloc;	// 0x32dd7dcd
// converted property getter: - (BOOL)drawsGrid;	// 0x32f3a37d
- (void)dumpTiles;	// 0x32f3a42d
// converted property getter: - (BOOL)isTilingEnabled;	// 0x32f3a389
// converted property getter: - (BOOL)keepsZoomedOutTiles;	// 0x32f3a3e9
- (void)layoutSubviews;	// 0x32d052d9
// converted property getter: - (BOOL)layoutTilesInMainThread;	// 0x32f3a44d
- (void)layoutTilesNow;	// 0x32dc5f65
- (void)layoutTilesNowForRect:(CGRect)rect;	// 0x32f3a1e5
- (void)layoutTilesNowOnWebThread;	// 0x32f3a1c5
- (void)lockTilingMode;	// 0x32f3a2b5
// converted property getter: - (BOOL)logsTilingChanges;	// 0x32f3a391
// converted property getter: - (unsigned)maxTileCount;	// 0x32f3a381
- (void)removeAllNonVisibleTiles;	// 0x32dc50b5
- (void)removeAllTiles;	// 0x32dc62a1
- (void)removeForegroundTiles;	// 0x32f3a40d
// converted property setter: - (void)setDrawsGrid:(BOOL)grid;	// 0x32f3a379
- (void)setInGesture:(int)gesture;	// 0x32dcd6f9
// converted property setter: - (void)setKeepsZoomedOutTiles:(BOOL)tiles;	// 0x32d21241
// converted property setter: - (void)setLayoutTilesInMainThread:(BOOL)mainThread;	// 0x32e0de35
// converted property setter: - (void)setLogsTilingChanges:(BOOL)changes;	// 0x32f3a38d
// converted property setter: - (void)setMaxTileCount:(unsigned)count;	// 0x32d02e29
- (void)setNeedsDisplay;	// 0x32d04995
- (void)setNeedsDisplayInRect:(CGRect)rect;	// 0x32f3a2e9
- (void)setNeedsLayout;	// 0x32d01ca5
// converted property setter: - (void)setTileDrawingEnabled:(BOOL)enabled;	// 0x32f3a395
// converted property setter: - (void)setTileSize:(CGSize)size;	// 0x32d02e25
// converted property setter: - (void)setTilesOpaque:(BOOL)opaque;	// 0x32d030c1
// converted property setter: - (void)setTilingArea:(int)area;	// 0x32d07e91
// converted property setter: - (void)setTilingEnabled:(BOOL)enabled;	// 0x32d02e2d
- (void)setTransform:(CGAffineTransform)transform;	// 0x32f3a325
- (void)setWAKWindow:(id)window;	// 0x32f3a185
// converted property getter: - (BOOL)tileDrawingEnabled;	// 0x32f3a3c1
// converted property getter: - (CGSize)tileSize;	// 0x32f3a36d
// converted property getter: - (BOOL)tilesOpaque;	// 0x32f3a3c5
// converted property getter: - (int)tilingArea;	// 0x32dcda25
- (void)unlockTilingMode;	// 0x32f3a2c9
- (void)updateTilingMode;	// 0x32d07ed1
- (CGRect)visibleRect;	// 0x32dcc529
// converted property getter: - (id)wakWindow;	// 0x32f3a45d
- (void)willMoveToWindow:(id)window;	// 0x32d04c01
- (WKWindow *)wkWindow;	// 0x32d01d2d
@end

