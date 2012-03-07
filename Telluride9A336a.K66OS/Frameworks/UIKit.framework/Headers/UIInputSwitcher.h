/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library
#import "UIKit-Structs.h"

@class UIDelayedAction, NSString, UIInputSwitcherView;

__attribute__((visibility("hidden")))
@interface UIInputSwitcher : NSObject {
@private
	UIDelayedAction *m_switcherDelay;	// 4 = 0x4
	int m_state;	// 8 = 0x8
	UIInputSwitcherView *m_switcherView;	// 12 = 0xc
	NSString *_newMode;	// 16 = 0x10
}
@property(retain) NSString *newMode;	// G=0x353dcef1; S=0x353dcf29; converted property
+ (id)activeInstance;	// 0x351ad70d
+ (id)sharedInstance;	// 0x353dcdd9
- (id)init;	// 0x353dce15
- (void)cancelSwitcherTimer;	// 0x353dd10d
- (void)clearSwitcherTimer;	// 0x353dd139
- (void)dealloc;	// 0x353dce81
- (BOOL)handleModifiersChangedEvent:(GSEventRef)event;	// 0x353dd461
- (void)handleRotate:(id)rotate;	// 0x353dcf6d
- (BOOL)handleSwitchCommand:(BOOL)command;	// 0x353dd195
- (void)hideSwitcher;	// 0x353dcf7d
- (BOOL)isVisible;	// 0x353dd17d
// converted property getter: - (id)newMode;	// 0x353dcef1
// converted property setter: - (void)setNewMode:(id)mode;	// 0x353dcf29
- (void)showSwitcher;	// 0x353dcff5
- (BOOL)switchMode:(id)mode withDelay:(BOOL)delay;	// 0x353dd1ed
- (void)touchSwitcherTimer;	// 0x353dd089
@end

