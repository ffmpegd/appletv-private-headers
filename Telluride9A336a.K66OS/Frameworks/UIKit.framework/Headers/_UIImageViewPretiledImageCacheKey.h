/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library

@class UIImage;

__attribute__((visibility("hidden")))
@interface _UIImageViewPretiledImageCacheKey : NSObject {
@private
	UIImage *_originalImage;	// 4 = 0x4
	CGSize _pretiledSize;	// 8 = 0x8
}
+ (id)cacheKeyWithOriginalImage:(id)originalImage pretiledSize:(CGSize)size;	// 0x35468745
- (id)description;	// 0x35468889
- (unsigned)hash;	// 0x354687b5
- (BOOL)isEqual:(id)equal;	// 0x354687f5
@end

