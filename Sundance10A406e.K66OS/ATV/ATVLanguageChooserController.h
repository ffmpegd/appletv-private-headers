/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRViewController.h"

@class BRSystemLanguages, NSDictionary, NSArray;

__attribute__((visibility("hidden")))
@interface ATVLanguageChooserController : BRViewController {
	BRSystemLanguages *_systemLanguages;	// 104 = 0x68
	NSArray *_languageKeys;	// 108 = 0x6c
	NSDictionary *_languageKeysAndPrompts;	// 112 = 0x70
	BOOL _canBePopped;	// 116 = 0x74
	BOOL _useVoiceOverGreeting;	// 117 = 0x75
	double _lastPlayButtonPress;	// 120 = 0x78
	int _playButtonPressCount;	// 128 = 0x80
}
@property(assign) BOOL canBePopped;	// G=0x127839; S=0x127829; converted property
@property(assign, nonatomic) BOOL useVoiceOverGreeting;	// G=0x127849; S=0x127859; @synthesize=_useVoiceOverGreeting
+ (id)controlOOB;	// 0x1271a9
- (id)init;	// 0x1271f1
- (id)initWithOOBLayout:(BOOL)ooblayout;	// 0x127205
- (void)_collectLanguages;	// 0x127929
- (long)_defaultIndex;	// 0x127869
- (void)_performLanguageChange:(id)change;	// 0x127e71
- (void)_showProgressForLanguage:(id)language;	// 0x127d31
- (BOOL)brEventAction:(id)action;	// 0x1274e5
// converted property getter: - (BOOL)canBePopped;	// 0x127839
- (void)dealloc;	// 0x1273d5
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0x127795
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x12767d
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0x127775
// converted property setter: - (void)setCanBePopped:(BOOL)popped;	// 0x127829
// declared property setter: - (void)setUseVoiceOverGreeting:(BOOL)greeting;	// 0x127859
// declared property getter: - (BOOL)useVoiceOverGreeting;	// 0x127849
- (void)wasPushed;	// 0x12744d
@end
