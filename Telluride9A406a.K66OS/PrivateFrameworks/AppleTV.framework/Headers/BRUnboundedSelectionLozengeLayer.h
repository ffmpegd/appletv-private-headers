/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRSelectionLozengeLayer.h"

@class BRImage;

__attribute__((visibility("hidden")))
@interface BRUnboundedSelectionLozengeLayer : BRSelectionLozengeLayer {
@private
	BRImage *_topImage;	// 48 = 0x30
	BRImage *_bottomImage;	// 52 = 0x34
	BOOL _brighterImage;	// 56 = 0x38
	BOOL _focusedImage;	// 57 = 0x39
}
@property(assign) BOOL useBrighterUnselectedImage;	// G=0x33080119; S=0x330800e9; converted property
- (id)init;	// 0x3308002d
- (void)_updateImages;	// 0x3308022d
- (void)dealloc;	// 0x33080089
- (void)drawInContext:(CGContextRef)context;	// 0x3308015d
- (void)layoutSubcontrols;	// 0x33080159
- (void)setFocused:(BOOL)focused;	// 0x33080129
// converted property setter: - (void)setUseBrighterUnselectedImage:(BOOL)image;	// 0x330800e9
// converted property getter: - (BOOL)useBrighterUnselectedImage;	// 0x33080119
@end
