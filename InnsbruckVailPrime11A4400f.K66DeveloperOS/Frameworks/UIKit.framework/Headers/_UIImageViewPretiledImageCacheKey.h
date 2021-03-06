/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <ImageIO/NSObject.h>
#import "UIKit-Structs.h"

@class UIImage;

__attribute__((visibility("hidden")))
@interface _UIImageViewPretiledImageCacheKey : NSObject {
	UIImage *_originalImage;	// 4 = 0x4
	CGSize _pretiledSize;	// 8 = 0x8
}
+ (id)cacheKeyWithOriginalImage:(id)originalImage pretiledSize:(CGSize)size;	// 0x2f85d061
- (id)description;	// 0x2f85d1a5
- (unsigned)hash;	// 0x2f85d0d1
- (BOOL)isEqual:(id)equal;	// 0x2f85d111
@end

