/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRViewController.h"

@class BRMerchant, BRImage;
@protocol BRImageProxy;

__attribute__((visibility("hidden")))
@interface ATVImageViewController : BRViewController {
	BOOL _waitingForImage;	// 104 = 0x68
	BRMerchant *_merchant;	// 108 = 0x6c
	BRImage *_image;	// 112 = 0x70
	id<BRImageProxy> _imageProxy;	// 116 = 0x74
}
@property(retain) BRImage *image;	// G=0x11d1b1; S=0x11d1c5; @synthesize=_image
@property(retain) id<BRImageProxy> imageProxy;	// G=0x11d1d5; S=0x11d1e9; @synthesize=_imageProxy
@property(retain) BRMerchant *merchant;	// G=0x11d18d; S=0x11d1a1; @synthesize=_merchant
- (id)initWithDictionary:(id)dictionary;	// 0x11cf51
- (void)_imageLoadFailed:(id)failed;	// 0x11d2d5
- (void)_imageLoadSucceeded:(id)succeeded;	// 0x11d1f9
- (void)_setWaitingForImage:(BOOL)image;	// 0x11d395
- (void)dealloc;	// 0x11d031
- (void)drawRect:(CGRect)rect;	// 0x11d0d5
// declared property getter: - (id)image;	// 0x11d1b1
// declared property getter: - (id)imageProxy;	// 0x11d1d5
// declared property getter: - (id)merchant;	// 0x11d18d
// declared property setter: - (void)setImage:(id)image;	// 0x11d1c5
// declared property setter: - (void)setImageProxy:(id)proxy;	// 0x11d1e9
// declared property setter: - (void)setMerchant:(id)merchant;	// 0x11d1a1
@end

