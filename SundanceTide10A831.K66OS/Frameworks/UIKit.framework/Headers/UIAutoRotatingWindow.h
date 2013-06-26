/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIWindow.h"


@interface UIAutoRotatingWindow : UIWindow {
	int _interfaceOrientation;	// 196 = 0xc4
	BOOL _unknownOrientation;	// 200 = 0xc8
}
+ (id)sharedPopoverHostingWindow;	// 0x31e6c9bd
- (id)initWithFrame:(CGRect)frame;	// 0x31c4af21
- (void)_didRemoveSubview:(id)subview;	// 0x31cbc089
- (void)dealloc;	// 0x31e6cb19
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x31cb5d89
- (void)updateForOrientation:(int)orientation;	// 0x31c4b041
@end
