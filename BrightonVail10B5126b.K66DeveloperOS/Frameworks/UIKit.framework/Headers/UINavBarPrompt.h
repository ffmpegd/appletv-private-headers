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
@property(retain) NSString *prompt;	// G=0x32c51f7d; S=0x32cdb355; converted property
- (id)initWithPrompt:(id)prompt navBar:(id)bar;	// 0x32c51d31
- (void)clearWeakReference:(id)reference;	// 0x32cdb2f1
- (void)dealloc;	// 0x32cdb309
- (void)drawRect:(CGRect)rect;	// 0x32c5219d
// converted property getter: - (id)prompt;	// 0x32c51f7d
- (CGRect)promptBounds;	// 0x32cdb3ad
- (void)setFrame:(CGRect)frame;	// 0x32c51dd5
// converted property setter: - (void)setPrompt:(id)prompt;	// 0x32cdb355
@end
