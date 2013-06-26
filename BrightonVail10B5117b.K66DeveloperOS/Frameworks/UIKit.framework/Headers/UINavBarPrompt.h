/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class NSString, UINavigationBar;

__attribute__((visibility("hidden")))
@interface UINavBarPrompt : UIView {
	NSString *_prompt;	// 84 = 0x54
	UINavigationBar *_navBar;	// 88 = 0x58
}
@property(retain) NSString *prompt;	// G=0x32df82d5; S=0x32e816ad; converted property
- (id)initWithPrompt:(id)prompt navBar:(id)bar;	// 0x32df8089
- (void)clearWeakReference:(id)reference;	// 0x32e81649
- (void)dealloc;	// 0x32e81661
- (void)drawRect:(CGRect)rect;	// 0x32df84f5
// converted property getter: - (id)prompt;	// 0x32df82d5
- (CGRect)promptBounds;	// 0x32e81705
- (void)setFrame:(CGRect)frame;	// 0x32df812d
// converted property setter: - (void)setPrompt:(id)prompt;	// 0x32e816ad
@end
