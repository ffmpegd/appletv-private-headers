/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"


__attribute__((visibility("hidden")))
@interface UITextFieldAtomBackgroundView : UIView {
	int _atomStyle;	// 84 = 0x54
}
@property(assign) int atomStyle;	// G=0x30413149; S=0x30413159; converted property
+ (id)_blueAtomBackgroundImage;	// 0x30412e8d
+ (id)_blueAtomBackgroundImageSmall;	// 0x30412f3d
+ (id)_purpleAtomBackgroundImage;	// 0x30412ee5
+ (id)_purpleAtomBackgroundImageSmall;	// 0x30412f95
- (id)initWithFrame:(CGRect)frame;	// 0x30412e15
// converted property getter: - (int)atomStyle;	// 0x30413149
- (void)drawRect:(CGRect)rect;	// 0x30412fed
// converted property setter: - (void)setAtomStyle:(int)style;	// 0x30413159
@end
