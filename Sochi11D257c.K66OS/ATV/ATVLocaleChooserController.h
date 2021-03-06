/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRViewController.h"

@class BRListView, NSArray;

__attribute__((visibility("hidden")))
@interface ATVLocaleChooserController : BRViewController {
	NSArray *_countryEntries;	// 104 = 0x68
	BRListView *_list;	// 108 = 0x6c
}
- (id)init;	// 0x4e7141
- (void).cxx_destruct;	// 0x4e7a11
- (void)_performLocaleChange:(id)change;	// 0x4e7921
- (void)_showProgressForLocale:(id)locale;	// 0x4e782d
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0x4e775d
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x4e7651
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0x4e773d
- (void)wasPushed;	// 0x4e7475
@end

