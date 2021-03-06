/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class BRMenuItem;

__attribute__((visibility("hidden")))
@interface BRMenuItemMediator : XXUnknownSuperclass {
	BRMenuItem *_menuItem;	// 4 = 0x4
	SEL _mediaParadeSelector;	// 8 = 0x8
	SEL _menuSelector;	// 12 = 0xc
	id _object;	// 16 = 0x10
}
@property(assign) SEL mediaPreviewSelector;	// G=0x30df35; S=0x30df25; converted property
@property(assign) SEL menuActionSelector;	// G=0x30df55; S=0x30df45; converted property
@property(readonly, retain) BRMenuItem *menuItem;	// G=0x30df15; converted property
@property(readonly, retain) id object;	// G=0x30dfb1; converted property
+ (id)mediatorWithMenuItem:(id)menuItem;	// 0x30de11
- (id)initWithMenuItem:(id)menuItem;	// 0x30de5d
- (void)dealloc;	// 0x30deb1
// converted property getter: - (SEL)mediaPreviewSelector;	// 0x30df35
// converted property getter: - (SEL)menuActionSelector;	// 0x30df55
// converted property getter: - (id)menuItem;	// 0x30df15
// converted property getter: - (id)object;	// 0x30dfb1
// converted property setter: - (void)setMediaPreviewSelector:(SEL)selector;	// 0x30df25
// converted property setter: - (void)setMenuActionSelector:(SEL)selector;	// 0x30df45
- (void)setMenuActionSelector:(SEL)selector withObject:(id)object;	// 0x30df65
@end

