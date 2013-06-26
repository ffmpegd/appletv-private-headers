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
+ (id)subImageProxyWithMediaObject:(void *)mediaObject dataClient:(id)client rect:(CGRect)rect;	// 0x2ad461
- (id)initWithMediaObject:(void *)mediaObject dataClient:(id)client rect:(CGRect)rect;	// 0x2ad4bd
- (void)_imageLoadFailed:(id)failed;	// 0x2adae9
- (void)_imageLoaded:(id)loaded;	// 0x2ad911
- (id)_rectString;	// 0x2ad879
- (void)dealloc;	// 0x2ad519
- (id)imageForImageSize:(int)imageSize;	// 0x2ad669
- (id)imageIDForImageSize:(int)imageSize;	// 0x2ad595
@end
