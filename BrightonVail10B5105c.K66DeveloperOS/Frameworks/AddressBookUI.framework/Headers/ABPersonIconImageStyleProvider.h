/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

#import "AddressBookUI-Structs.h"
#import "ABStyleProvider.h"

@class ABPersonImageView, ABPersonIconImageView;

@interface ABPersonIconImageStyleProvider : ABStyleProvider {
	ABPersonImageView *_imageView;	// 4 = 0x4
	ABPersonIconImageView *_iconImageView;	// 8 = 0x8
}
- (id)initWithIconImageView:(id)iconImageView imageView:(id)view;	// 0x37680c05
- (void)_clearAsStyleProvider;	// 0x37680c95
- (id)cardPhotoBackgroundImage;	// 0x37680d39
- (id)cardPhotoFacebookAttributionImage;	// 0x37680de1
- (float)cardPhotoFrameBorderSize;	// 0x37680de5
- (id)cardPhotoMaskImage;	// 0x37680d5d
- (CGSize)cardPhotoOffset;	// 0x37680de9
- (id)cardPhotoOverlayImage;	// 0x37680d3d
- (id)cardPlaceholderCompanyImage;	// 0x37680dc1
- (BOOL)cardPlaceholderImageShouldApplyMaskAndOverlay;	// 0x37680d7d
- (id)cardPlaceholderPersonImage;	// 0x37680da1
- (void)clearWeakReferencesToObject:(id)object;	// 0x37680c7d
- (void)dealloc;	// 0x37680cd9
- (float)personViewHeaderImageHeight;	// 0x37680e05
- (float)personViewHeaderImageWidth;	// 0x37680e01
@end

