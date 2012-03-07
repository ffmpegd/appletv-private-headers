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
@private
	BOOL _alwaysStretches;	// 13 = 0xd
	UIEdgeInsets _capInsets;	// 16 = 0x10
}
@property(readonly, assign) UIEdgeInsets capInsets;	// G=0x30064b65; converted property
- (id)initWithCoder:(id)coder;	// 0x301e11cd
- (id)initWithImage:(id)image capInsets:(UIEdgeInsets)insets;	// 0x300649e1
- (CGRect)_contentStretchInPixels;	// 0x30064b89
- (BOOL)_isResizable;	// 0x300562fd
- (BOOL)_isTiledWhenStretchedToSize:(CGSize)size;	// 0x30064a7d
- (void)_setAlwaysStretches:(BOOL)stretches;	// 0x30064a6d
// converted property getter: - (UIEdgeInsets)capInsets;	// 0x30064b65
- (void)encodeWithCoder:(id)coder;	// 0x301e1369
@end

