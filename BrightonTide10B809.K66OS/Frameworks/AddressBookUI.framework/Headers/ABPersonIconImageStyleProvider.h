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
- (id)initWithIconImageView:(id)iconImageView imageView:(id)view;	// 0x30950c05
- (void)_clearAsStyleProvider;	// 0x30950c95
- (id)cardPhotoBackgroundImage;	// 0x30950d39
- (id)cardPhotoFacebookAttributionImage;	// 0x30950de1
- (float)cardPhotoFrameBorderSize;	// 0x30950de5
- (id)cardPhotoMaskImage;	// 0x30950d5d
- (CGSize)cardPhotoOffset;	// 0x30950de9
- (id)cardPhotoOverlayImage;	// 0x30950d3d
- (id)cardPlaceholderCompanyImage;	// 0x30950dc1
- (BOOL)cardPlaceholderImageShouldApplyMaskAndOverlay;	// 0x30950d7d
- (id)cardPlaceholderPersonImage;	// 0x30950da1
- (void)clearWeakReferencesToObject:(id)object;	// 0x30950c7d
- (void)dealloc;	// 0x30950cd9
- (float)personViewHeaderImageHeight;	// 0x30950e05
- (float)personViewHeaderImageWidth;	// 0x30950e01
@end
