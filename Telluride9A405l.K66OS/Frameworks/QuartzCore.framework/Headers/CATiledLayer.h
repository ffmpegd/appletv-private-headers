/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import "QuartzCore-Structs.h"
#import "CALayer.h"


@interface CATiledLayer : CALayer {
}
@property(assign, getter=isDrawingEnabled) BOOL drawingEnabled;	// G=0x31358c79; S=0x31358c85; 
@property(assign) CGColorRef fillColor;	// G=0x31358c59; S=0x31358c61; 
@property(assign) unsigned levelsOfDetail;	// G=0x31357d05; S=0x31357cfd; 
@property(assign) unsigned levelsOfDetailBias;	// G=0x31357cf5; S=0x31357ced; 
@property(assign) float maximumTileScale;	// G=0x31358c69; S=0x31358c71; 
@property(assign) CGSize tileSize;	// G=0x31357cdd; S=0x31357cd5; 
+ (BOOL)CA_automaticallyNotifiesObservers:(Class)observers;	// 0x31357b09
+ (id)defaultValueForKey:(id)key;	// 0x31357b61
+ (double)fadeDuration;	// 0x313579ed
+ (unsigned)prefetchedTiles;	// 0x31357a01
+ (BOOL)shouldDrawOnMainThread;	// 0x313579fd
- (BOOL)_canDisplayConcurrently;	// 0x313579f9
- (void)_dealloc;	// 0x31358001
- (void)_display;	// 0x31357d0d
- (BOOL)canDrawRect:(CGRect)rect levelOfDetail:(int)detail;	// 0x31358255
- (void)dealloc;	// 0x31357fcd
- (void)didChangeValueForKey:(id)key;	// 0x31357a05
- (void)displayInRect:(CGRect)rect levelOfDetail:(int)detail options:(id)options;	// 0x31358a09
// declared property getter: - (CGColorRef)fillColor;	// 0x31358c59
- (void)invalidateContents;	// 0x31358035
// declared property getter: - (BOOL)isDrawingEnabled;	// 0x31358c79
// declared property getter: - (unsigned long)levelsOfDetail;	// 0x31357d05
// declared property getter: - (unsigned long)levelsOfDetailBias;	// 0x31357cf5
// declared property getter: - (float)maximumTileScale;	// 0x31358c69
- (BOOL)queueIsEmpty;	// 0x31358bbd
- (void)setContents:(id)contents;	// 0x31358049
// declared property setter: - (void)setDrawingEnabled:(BOOL)enabled;	// 0x31358c85
// declared property setter: - (void)setFillColor:(CGColorRef)color;	// 0x31358c61
// declared property setter: - (void)setLevelsOfDetail:(unsigned long)detail;	// 0x31357cfd
// declared property setter: - (void)setLevelsOfDetailBias:(unsigned long)detailBias;	// 0x31357ced
// declared property setter: - (void)setMaximumTileScale:(float)scale;	// 0x31358c71
- (void)setNeedsDisplayInRect:(CGRect)rect;	// 0x31358119
- (void)setNeedsDisplayInRect:(CGRect)rect levelOfDetail:(int)detail;	// 0x31358221
- (void)setNeedsDisplayInRect:(CGRect)rect levelOfDetail:(int)detail options:(id)options;	// 0x313588d9
// declared property setter: - (void)setTileSize:(CGSize)size;	// 0x31357cd5
- (BOOL)shouldArchiveValueForKey:(id)key;	// 0x313581c5
// declared property getter: - (CGSize)tileSize;	// 0x31357cdd
@end

