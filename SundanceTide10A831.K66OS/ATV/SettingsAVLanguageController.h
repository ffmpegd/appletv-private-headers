/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRViewController.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface SettingsAVLanguageController : BRViewController {
	int _type;	// 104 = 0x68
	NSArray *_menuItemKeys;	// 108 = 0x6c
}
+ (id)audioLanguageController;	// 0xaf4d5
+ (id)subtitleLanguageController;	// 0xaf51d
- (id)initWithType:(int)type;	// 0xaf565
- (void).cxx_destruct;	// 0xafb09
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0xafa09
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0xaf84d
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0xaf9e9
@end

