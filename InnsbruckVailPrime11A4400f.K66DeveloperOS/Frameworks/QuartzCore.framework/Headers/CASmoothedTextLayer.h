/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import "QuartzCore-Structs.h"
#import "CATextLayer.h"


@interface CASmoothedTextLayer : CATextLayer {
}
@property(assign) unsigned fontSmoothingStyle;	// G=0x2f2aa675; S=0x2f2aa67d; 
+ (BOOL)CA_automaticallyNotifiesObservers:(Class)observers;	// 0x2f2aa61d
+ (BOOL)_hasRenderLayerSubclass;	// 0x2f2a9ec9
+ (id)defaultValueForKey:(id)key;	// 0x2f2a9dcd
+ (BOOL)needsDisplayForKey:(id)key;	// 0x2f2a9e71
- (Layer *)_copyRenderLayer:(Transaction *)layer layerFlags:(unsigned)flags commitFlags:(unsigned *)flags3;	// 0x2f2aa521
- (void)_drawLine:(CTLineRef)line inContext:(CGContextRef)context atPoint:(CGPoint)point;	// 0x2f2a9f31
- (bool)_renderLayerDefinesProperty:(unsigned)property;	// 0x2f2aa5b5
- (unsigned)_renderLayerPropertyAnimationFlags:(unsigned)flags;	// 0x2f2aa5e9
- (void)didChangeValueForKey:(id)key;	// 0x2f2a9ecd
// declared property getter: - (unsigned)fontSmoothingStyle;	// 0x2f2aa675
// declared property setter: - (void)setFontSmoothingStyle:(unsigned)style;	// 0x2f2aa67d
@end

