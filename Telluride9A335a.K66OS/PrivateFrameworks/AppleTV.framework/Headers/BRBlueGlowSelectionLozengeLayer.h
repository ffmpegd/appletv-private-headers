/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRSelectionLozengeLayer.h"
#import "AppleTV-Structs.h"


@interface BRBlueGlowSelectionLozengeLayer : BRSelectionLozengeLayer {
@private
	BOOL _focusedImage;	// 46 = 0x2e
	BOOL _clearCenter;	// 47 = 0x2f
}
@property(assign) BOOL clearCenter;	// G=0x341f5469; S=0x341f5439; converted property
- (id)init;	// 0x341f4d79
- (float)bottomGlowHeight;	// 0x341f5011
// converted property getter: - (BOOL)clearCenter;	// 0x341f5469
- (void)drawInContext:(CGContextRef)context;	// 0x341f50f9
- (float)edgeGlowWidth;	// 0x341f506d
// converted property setter: - (void)setClearCenter:(BOOL)center;	// 0x341f5439
- (void)setFocused:(BOOL)focused;	// 0x341f50c9
- (float)topGlowHeight;	// 0x341f4fb5
@end

