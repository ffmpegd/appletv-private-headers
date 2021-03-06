/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import "Preferences-Structs.h"
#import "PSListController.h"


@interface PSAppListController : PSListController {
}
- (id)_localizedTitlesFromUnlocalizedTitles:(id)unlocalizedTitles stringsTable:(id)table;	// 0x3317b0dd
- (id)_readToggleSwitchSpecifierValue:(id)value;	// 0x3317ae65
- (void)_setToggleSwitchSpecifierValue:(id)value specifier:(id)specifier;	// 0x3317aff9
- (id)_uiValueFromValue:(id)value specifier:(id)specifier;	// 0x3317ad7d
- (id)_valueFromUIValue:(id)uivalue specifier:(id)specifier;	// 0x3317ade1
- (id)bundle;	// 0x3317cdd5
- (id)childPaneSpecifierFromDictionary:(id)dictionary stringsTable:(id)table;	// 0x3317c649
- (id)groupSpecifierFromDictionary:(id)dictionary stringsTable:(id)table;	// 0x3317b255
- (id)multiValueSpecifierFromDictionary:(id)dictionary stringsTable:(id)table;	// 0x3317c385
- (void)postThirdPartySettingDidChangeNotificationForSpecifier:(id)postThirdPartySetting;	// 0x3317b1b1
- (id)radioGroupSpecifiersFromDictionary:(id)dictionary stringsTable:(id)table;	// 0x3317b43d
- (void)setPreferenceValue:(id)value specifier:(id)specifier;	// 0x3317b211
- (id)sliderSpecifierFromDictionary:(id)dictionary stringsTable:(id)table;	// 0x3317be75
- (id)specifiers;	// 0x3317ca89
- (id)specifiersFromDictionary:(id)dictionary stringsTable:(id)table;	// 0x3317c779
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;	// 0x3317ccf1
- (id)textFieldSpecifierFromDictionary:(id)dictionary stringsTable:(id)table;	// 0x3317b809
- (id)titleValueSpecifierFromDictionary:(id)dictionary stringsTable:(id)table;	// 0x3317c161
- (id)toggleSwitchSpecifierFromDictionary:(id)dictionary stringsTable:(id)table;	// 0x3317bc6d
@end

