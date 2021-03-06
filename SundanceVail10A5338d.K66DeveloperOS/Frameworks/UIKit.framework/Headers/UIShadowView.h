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
	UIImage *_image;	// 84 = 0x54
}
+ (id)bottomShadowImage;	// 0x30d3fff1
+ (id)topShadowImage;	// 0x30d3fef5
- (id)initWithFrame:(CGRect)frame;	// 0x30d3fe91
- (void)dealloc;	// 0x30d420d1
- (void)drawRect:(CGRect)rect;	// 0x30d403e1
- (void)setShadowImage:(id)image forEdge:(int)edge inside:(BOOL)inside;	// 0x30d3ff05
@end

