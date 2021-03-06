/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"


__attribute__((visibility("hidden")))
@interface _UITableViewHeaderFooterViewBackground : UIView {
	UIView *_opaqueBackgroundView;	// 84 = 0x54
	UIView *_transparentBackgroundView;	// 88 = 0x58
}
- (id)initWithFrame:(CGRect)frame;	// 0x32b84f35
- (id)_opaqueBackgroundView;	// 0x32b851a9
- (id)_transparentBackgroundView;	// 0x32c201cd
- (void)_updateBackingView;	// 0x32b8523d
- (void)dealloc;	// 0x32f2c67d
- (void)setBackgroundImage:(id)image;	// 0x32b850e5
- (void)setOpaque:(BOOL)opaque;	// 0x32b84f89
@end

