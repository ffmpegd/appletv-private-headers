/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UIImage;

__attribute__((visibility("hidden")))
@interface UIShadowView : UIView {
@private
	UIImage *_image;	// 84 = 0x54
}
+ (id)bottomShadowImage;	// 0x301bd691
+ (id)topShadowImage;	// 0x301bd595
- (id)initWithFrame:(CGRect)frame;	// 0x301bd531
- (void)dealloc;	// 0x301bf779
- (void)drawRect:(CGRect)rect;	// 0x301bda81
- (void)setShadowImage:(id)image forEdge:(int)edge inside:(BOOL)inside;	// 0x301bd5a5
@end
