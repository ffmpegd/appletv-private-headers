/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRATVDataImageProxy.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface BRPhotoSubImageProxy : BRATVDataImageProxy {
	CGRect _rect;	// 20 = 0x14
	NSString *_rectString;	// 36 = 0x24
	int _requestedImageSize;	// 40 = 0x28
}
+ (id)subImageProxyWithMediaObject:(void *)mediaObject dataClient:(id)client rect:(CGRect)rect;	// 0x29ae09
- (id)initWithMediaObject:(void *)mediaObject dataClient:(id)client rect:(CGRect)rect;	// 0x29ae65
- (void)_imageLoadFailed:(id)failed;	// 0x29b491
- (void)_imageLoaded:(id)loaded;	// 0x29b2b9
- (id)_rectString;	// 0x29b221
- (void)dealloc;	// 0x29aec1
- (id)imageForImageSize:(int)imageSize;	// 0x29b011
- (id)imageIDForImageSize:(int)imageSize;	// 0x29af3d
@end
