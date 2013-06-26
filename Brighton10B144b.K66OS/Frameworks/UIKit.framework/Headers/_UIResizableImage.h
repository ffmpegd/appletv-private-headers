/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIImage.h"


__attribute__((visibility("hidden")))
@interface _UIResizableImage : UIImage {
	BOOL _alwaysStretches;	// 36 = 0x24
	UIEdgeInsets _capInsets;	// 40 = 0x28
}
@property(readonly, assign) UIEdgeInsets capInsets;	// G=0x32b28d79; converted property
- (id)initWithCoder:(id)coder;	// 0x32cbbe55
- (id)initWithImage:(id)image capInsets:(UIEdgeInsets)insets;	// 0x32b0a60d
- (CGRect)_contentStretchInPixels;	// 0x32b28d9d
- (id)_initWithOtherImage:(id)otherImage;	// 0x32bb50d1
- (BOOL)_isResizable;	// 0x32b114dd
- (BOOL)_isTiledWhenStretchedToSize:(CGSize)size;	// 0x32b28ca1
- (id)_resizableImageWithCapMask:(int)capMask;	// 0x32bb4e11
- (void)_setAlwaysStretches:(BOOL)stretches;	// 0x32b0a729
// converted property getter: - (UIEdgeInsets)capInsets;	// 0x32b28d79
- (void)encodeWithCoder:(id)coder;	// 0x32cbbfb9
- (int)resizingMode;	// 0x32cbc025
@end
