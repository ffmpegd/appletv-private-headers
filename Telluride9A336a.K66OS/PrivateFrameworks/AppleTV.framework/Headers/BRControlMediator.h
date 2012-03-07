/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
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
@property(assign) BOOL active;	// G=0x33b09915; S=0x33b098b9; converted property
@property(retain) BRControl *control;	// G=0x33b099a9; S=0x33b09925; converted property
@property(retain) NSString *identifier;	// G=0x33b098a9; S=0x33b09869; converted property
@property(retain) id previewControl;	// G=0x33b09a3d; S=0x33b099b9; converted property
+ (id)mediator;	// 0x33b09755
+ (id)mediatorWithControl:(id)control identifier:(id)identifier;	// 0x33b0979d
- (id)init;	// 0x33b09711
// converted property getter: - (BOOL)active;	// 0x33b09915
// converted property getter: - (id)control;	// 0x33b099a9
- (void)dealloc;	// 0x33b097f5
// converted property getter: - (id)identifier;	// 0x33b098a9
// converted property getter: - (id)previewControl;	// 0x33b09a3d
// converted property setter: - (void)setActive:(BOOL)active;	// 0x33b098b9
// converted property setter: - (void)setControl:(id)control;	// 0x33b09925
// converted property setter: - (void)setIdentifier:(id)identifier;	// 0x33b09869
// converted property setter: - (void)setPreviewControl:(id)control;	// 0x33b099b9
@end

