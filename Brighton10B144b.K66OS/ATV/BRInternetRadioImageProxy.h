/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRImageProxy.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface BRInternetRadioImageProxy : XXUnknownSuperclass <BRImageProxy> {
	NSString *_category;	// 4 = 0x4
}
- (id)initWithCategory:(id)category;	// 0x2afe01
- (id)_convertCategory:(id)category;	// 0x2b00b1
- (void)cancelImageRequestsForImageSizes:(int)imageSizes;	// 0x2b009d
- (void)dealloc;	// 0x2afe69
- (id)defaultImageForImageSize:(int)imageSize;	// 0x2b0045
- (id)imageForImageSize:(int)imageSize;	// 0x2aff3d
- (id)imageIDForImageSize:(int)imageSize;	// 0x2afeb5
- (id)object;	// 0x2b00a1
- (BOOL)supportsImageForImageSize:(int)imageSize;	// 0x2b0085
@end

