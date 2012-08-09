/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class BRControl, NSString;

__attribute__((visibility("hidden")))
@interface BRControlMediator : XXUnknownSuperclass {
	NSString *_identifier;	// 4 = 0x4
	BRControl *_control;	// 8 = 0x8
	BRControl *_preview;	// 12 = 0xc
	BOOL _active;	// 16 = 0x10
}
@property(assign) BOOL active;	// G=0x335849; S=0x3357ed; converted property
@property(retain) BRControl *control;	// G=0x3358d9; S=0x335859; converted property
@property(retain) NSString *identifier;	// G=0x3357dd; S=0x3357a1; converted property
@property(retain) id previewControl;	// G=0x335969; S=0x3358e9; converted property
+ (id)mediator;	// 0x335689
+ (id)mediatorWithControl:(id)control identifier:(id)identifier;	// 0x3356d1
- (id)init;	// 0x335645
// converted property getter: - (BOOL)active;	// 0x335849
// converted property getter: - (id)control;	// 0x3358d9
- (void)dealloc;	// 0x335729
// converted property getter: - (id)identifier;	// 0x3357dd
// converted property getter: - (id)previewControl;	// 0x335969
// converted property setter: - (void)setActive:(BOOL)active;	// 0x3357ed
// converted property setter: - (void)setControl:(id)control;	// 0x335859
// converted property setter: - (void)setIdentifier:(id)identifier;	// 0x3357a1
// converted property setter: - (void)setPreviewControl:(id)control;	// 0x3358e9
@end
