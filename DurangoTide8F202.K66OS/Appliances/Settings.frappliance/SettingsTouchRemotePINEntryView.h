/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class BRTextControl, BRHeaderControl, BRPasscodeEntryControl, NSString;

@interface SettingsTouchRemotePINEntryView : XXUnknownSuperclass {
	BRHeaderControl *_header;	// 44 = 0x2c
	BRPasscodeEntryControl *_editor;	// 48 = 0x30
	BRTextControl *_prompt;	// 52 = 0x34
	NSString *_remoteName;	// 56 = 0x38
	id _delegate;	// 60 = 0x3c
}
@property(assign) id delegate;	// G=0x17455; S=0x17445; converted property
@property(retain) NSString *remoteName;	// G=0x17435; S=0x1756d; converted property
- (id)init;	// 0x17731
- (void)dealloc;	// 0x17689
// converted property getter: - (id)delegate;	// 0x17455
- (void)layoutSubcontrols;	// 0x178f9
- (void)pinFailedTryAgain;	// 0x17465
// converted property getter: - (id)remoteName;	// 0x17435
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x17445
// converted property setter: - (void)setRemoteName:(id)name;	// 0x1756d
- (void)textDidChange:(id)text;	// 0x17431
- (void)textDidEndEditing:(id)text;	// 0x17625
@end

