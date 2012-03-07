/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class NSArray, UIKeyboardDicationBackgroundGradientView;

__attribute__((visibility("hidden")))
@interface UIKeyboardDicationBackground : UIView {
@private
	UIKeyboardDicationBackgroundGradientView *_gradient;	// 48 = 0x30
	NSArray *_shadows;	// 52 = 0x34
}
@property(readonly, retain) NSArray *shadows;	// G=0x303ca431; converted property
- (id)initWithFrame:(CGRect)frame;	// 0x303ca951
- (void)dealloc;	// 0x303cab81
- (void)layoutSubviews;	// 0x303ca515
// converted property getter: - (id)shadows;	// 0x303ca431
@end

