/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import <NSObject.h> // Unknown library

@class NSString, BRControl;

@interface BRControlMediator : NSObject {
@private
	NSString *_identifier;	// 4 = 0x4
	BRControl *_control;	// 8 = 0x8
	BRControl *_preview;	// 12 = 0xc
	BOOL _active;	// 16 = 0x10
}
@property(assign) BOOL active;	// G=0x329ad76d; S=0x329adb49; converted property
@property(retain) BRControl *control;	// G=0x329ad77d; S=0x329adad5; converted property
@property(retain) NSString *identifier;	// G=0x329ad75d; S=0x329adb99; converted property
@property(retain) id previewControl;	// G=0x329ad78d; S=0x329ada61; converted property
+ (id)mediator;	// 0x329adc89
+ (id)mediatorWithControl:(id)control identifier:(id)identifier;	// 0x329adc3d
- (id)init;	// 0x329ad79d
// converted property getter: - (BOOL)active;	// 0x329ad76d
// converted property getter: - (id)control;	// 0x329ad77d
- (void)dealloc;	// 0x329adbd1
// converted property getter: - (id)identifier;	// 0x329ad75d
// converted property getter: - (id)previewControl;	// 0x329ad78d
// converted property setter: - (void)setActive:(BOOL)active;	// 0x329adb49
// converted property setter: - (void)setControl:(id)control;	// 0x329adad5
// converted property setter: - (void)setIdentifier:(id)identifier;	// 0x329adb99
// converted property setter: - (void)setPreviewControl:(id)control;	// 0x329ada61
@end

