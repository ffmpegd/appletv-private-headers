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
@property(assign) SEL mediaPreviewSelector;	// G=0x3264c5; S=0x3264b5; converted property
@property(assign) SEL menuActionSelector;	// G=0x3264e5; S=0x3264d5; converted property
@property(readonly, retain) BRMenuItem *menuItem;	// G=0x3264a5; converted property
@property(readonly, retain) id object;	// G=0x326541; converted property
+ (id)mediatorWithMenuItem:(id)menuItem;	// 0x3263a1
- (id)initWithMenuItem:(id)menuItem;	// 0x3263ed
- (void)dealloc;	// 0x326441
// converted property getter: - (SEL)mediaPreviewSelector;	// 0x3264c5
// converted property getter: - (SEL)menuActionSelector;	// 0x3264e5
// converted property getter: - (id)menuItem;	// 0x3264a5
// converted property getter: - (id)object;	// 0x326541
// converted property setter: - (void)setMediaPreviewSelector:(SEL)selector;	// 0x3264b5
// converted property setter: - (void)setMenuActionSelector:(SEL)selector;	// 0x3264d5
- (void)setMenuActionSelector:(SEL)selector withObject:(id)object;	// 0x3264f5
@end
