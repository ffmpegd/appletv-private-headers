/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRViewController.h"
#import "BRTextFieldDelegate.h"

@class BRTextEntryController, NSArray;

__attribute__((visibility("hidden")))
@interface SettingsDeviceNameController : BRViewController <BRTextFieldDelegate> {
	NSArray *_names;	// 104 = 0x68
	BRTextEntryController *_customNameController;	// 108 = 0x6c
}
- (id)init;	// 0xb8b89
- (void).cxx_destruct;	// 0xb9571
- (id)_collectNames;	// 0xb9795
- (unsigned)_indexOfCurrentName;	// 0xb95a5
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0xb8fdd
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0xb8ea5
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0xb8fb5
- (void)textDidChange:(id)text;	// 0xb9471
- (void)textDidEndEditing:(id)text;	// 0xb9475
- (void)wasPushed;	// 0xb8de1
@end

