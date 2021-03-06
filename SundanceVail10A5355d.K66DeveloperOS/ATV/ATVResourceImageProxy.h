/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "BRImageProxy.h"

@class NSString, NSBundle;

__attribute__((visibility("hidden")))
@interface ATVResourceImageProxy : XXUnknownSuperclass <BRImageProxy> {
	NSBundle *_bundle;	// 4 = 0x4
	NSString *_imageName;	// 8 = 0x8
	NSString *_imageType;	// 12 = 0xc
	BOOL _shouldCacheImage;	// 16 = 0x10
}
@property(retain, nonatomic) NSBundle *bundle;	// G=0x241489; S=0x241499; @synthesize=_bundle
@property(retain, nonatomic) NSString *imageName;	// G=0x2414a9; S=0x2414b9; @synthesize=_imageName
@property(retain, nonatomic) NSString *imageType;	// G=0x2414c9; S=0x2414d9; @synthesize=_imageType
@property(assign, nonatomic) BOOL shouldCacheImage;	// G=0x2414e9; S=0x2414f9; @synthesize=_shouldCacheImage
+ (id)imageProxyWithImageName:(id)imageName imageType:(id)type;	// 0x241105
+ (id)imageProxyWithImageName:(id)imageName imageType:(id)type bundle:(id)bundle;	// 0x241155
- (id)initWithImageName:(id)imageName imageType:(id)type;	// 0x2411ad
- (id)initWithImageName:(id)imageName imageType:(id)type bundle:(id)bundle;	// 0x2411f1
// declared property getter: - (id)bundle;	// 0x241489
- (void)cancelImageRequestsForImageSizes:(int)imageSizes;	// 0x241481
- (void)dealloc;	// 0x241271
- (id)defaultImageForImageSize:(int)imageSize;	// 0x241479
- (id)imageForImageSize:(int)imageSize;	// 0x24137d
- (id)imageIDForImageSize:(int)imageSize;	// 0x2412e9
// declared property getter: - (id)imageName;	// 0x2414a9
// declared property getter: - (id)imageType;	// 0x2414c9
- (id)object;	// 0x241485
// declared property setter: - (void)setBundle:(id)bundle;	// 0x241499
// declared property setter: - (void)setImageName:(id)name;	// 0x2414b9
// declared property setter: - (void)setImageType:(id)type;	// 0x2414d9
// declared property setter: - (void)setShouldCacheImage:(BOOL)cacheImage;	// 0x2414f9
// declared property getter: - (BOOL)shouldCacheImage;	// 0x2414e9
- (BOOL)supportsImageForImageSize:(int)imageSize;	// 0x24147d
@end

