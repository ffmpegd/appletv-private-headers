/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRImageProxy.h"
#import <NSObject.h> // Unknown library

@class BRPhotoMediaAsset, BRPhotoMediaCollection;

@interface BRPhotoImageProxy : NSObject <BRImageProxy> {
@private
	BRPhotoMediaAsset *_asset;	// 4 = 0x4
	BRPhotoMediaCollection *_collection;	// 8 = 0x8
}
@property(readonly, retain) BRPhotoMediaAsset *asset;	// G=0x341b8e1d; converted property
+ (id)imageProxyWithAsset:(id)asset;	// 0x341b87bd
+ (id)imageProxyWithCollection:(id)collection;	// 0x341b8861
- (id)initWithAsset:(id)asset;	// 0x341b8809
- (id)initWithCollection:(id)collection;	// 0x341b88ad
// converted property getter: - (id)asset;	// 0x341b8e1d
- (void)cancelImageRequestsForImageSizes:(int)imageSizes;	// 0x341b8c15
- (void)dealloc;	// 0x341b896d
- (id)defaultImageForImageSize:(int)imageSize;	// 0x341b8bc5
- (id)imageForImageSize:(int)imageSize;	// 0x341b8a35
- (id)imageIDForImageSize:(int)imageSize;	// 0x341b89cd
- (id)object;	// 0x341b8df9
- (BOOL)supportsImageForImageSize:(int)imageSize;	// 0x341b8c11
@end

