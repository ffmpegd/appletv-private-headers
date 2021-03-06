/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRViewController.h"
#import "AppleTV-Structs.h"

@class BRMerchant, BRImage;
@protocol BRImageProxy;

__attribute__((visibility("hidden")))
@interface ATVImageViewController : BRViewController {
@private
	BOOL _waitingForImage;	// 84 = 0x54
	BRMerchant *_merchant;	// 88 = 0x58
	BRImage *_image;	// 92 = 0x5c
	id<BRImageProxy> _imageProxy;	// 96 = 0x60
}
@property(retain) BRImage *image;	// G=0x35d85971; S=0x35d85985; @synthesize=_image
@property(retain) id<BRImageProxy> imageProxy;	// G=0x35d859a9; S=0x35d859bd; @synthesize=_imageProxy
@property(retain) BRMerchant *merchant;	// G=0x35d85939; S=0x35d8594d; @synthesize=_merchant
- (id)initWithDictionary:(id)dictionary;	// 0x35d85701
- (void)_imageLoadFailed:(id)failed;	// 0x35d85ab1
- (void)_imageLoadSucceeded:(id)succeeded;	// 0x35d859e1
- (void)_setWaitingForImage:(BOOL)image;	// 0x35d85b71
- (void)dealloc;	// 0x35d857e1
- (void)drawInContext:(CGContextRef)context;	// 0x35d85885
// declared property getter: - (id)image;	// 0x35d85971
// declared property getter: - (id)imageProxy;	// 0x35d859a9
// declared property getter: - (id)merchant;	// 0x35d85939
// declared property setter: - (void)setImage:(id)image;	// 0x35d85985
// declared property setter: - (void)setImageProxy:(id)proxy;	// 0x35d859bd
// declared property setter: - (void)setMerchant:(id)merchant;	// 0x35d8594d
@end

