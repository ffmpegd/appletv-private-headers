/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class ATVImage, NSString;
@protocol BRImageProxy;

__attribute__((visibility("hidden")))
@interface BRImageControl : BRControl {
	id<BRImageProxy> _imageProxy;	// 84 = 0x54
	ATVImage *_image;	// 88 = 0x58
	BOOL _renderingImage;	// 92 = 0x5c
	BOOL _autoDownsample;	// 93 = 0x5d
	NSString *_artworkIdentifier;	// 96 = 0x60
	BOOL _sizeIgnoresPixelBounds;	// 100 = 0x64
}
@property(assign) BOOL automaticDownsample;	// G=0x385011; S=0x384f8d; converted property
@property(retain) ATVImage *image;	// G=0x384f21; S=0x384e39; converted property
@property(assign) BOOL sizeIgnoresPixelBounds;	// G=0x3850dd; S=0x3850cd; converted property
- (void)_imageUpdated:(id)updated;	// 0x385405
- (void)_loadImage;	// 0x38550d
- (void)_unloadImage;	// 0x3854a9
- (id)accessibilityLabel;	// 0x3853a9
- (id)accessibilityTraitsList;	// 0x3853c9
- (float)aspectRatio;	// 0x384f6d
// converted property getter: - (BOOL)automaticDownsample;	// 0x385011
- (void)controlWasActivated;	// 0x3852c5
- (void)controlWasDeactivated;	// 0x385315
- (void)dealloc;	// 0x384c8d
- (void)drawRect:(CGRect)rect;	// 0x3850ed
// converted property getter: - (id)image;	// 0x384f21
- (CGSize)pixelBounds;	// 0x384f31
- (void)setArtworkIdentifier:(id)identifier;	// 0x385021
// converted property setter: - (void)setAutomaticDownsample:(BOOL)downsample;	// 0x384f8d
// converted property setter: - (void)setImage:(id)image;	// 0x384e39
- (void)setImageAsContents:(id)contents;	// 0x384e99
- (void)setImageProxy:(id)proxy;	// 0x384d31
- (void)setImageProxyAsContents:(id)contents;	// 0x384db5
// converted property setter: - (void)setSizeIgnoresPixelBounds:(BOOL)bounds;	// 0x3850cd
// converted property getter: - (BOOL)sizeIgnoresPixelBounds;	// 0x3850dd
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x3851c9
- (CGSize)sizeThatReallyFitsMaintainingAspectRatio:(CGSize)ratio;	// 0x511981
- (void)windowMaxBoundsChanged;	// 0x385365
@end

