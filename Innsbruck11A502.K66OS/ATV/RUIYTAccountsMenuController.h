/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRViewController.h"

@class NSArray, BRController;

__attribute__((visibility("hidden")))
@interface RUIYTAccountsMenuController : BRViewController {
	BOOL _lingerOn;	// 104 = 0x68
	NSArray *_accounts;	// 108 = 0x6c
	BRController *_swappingController;	// 112 = 0x70
	BRController *_parentController;	// 116 = 0x74
}
@property(retain) BRController *parentController;	// G=0x29677d; S=0x296791; @synthesize=_parentController
@property(retain) BRController *swappingController;	// G=0x296759; S=0x29676d; @synthesize=_swappingController
- (id)init;	// 0x295de1
- (void).cxx_destruct;	// 0x2967a1
- (void)_logInToNewAccount;	// 0x2968dd
- (void)_logInToSelectedAccount:(unsigned)selectedAccount;	// 0x296975
- (void)_pushAuthenticationControllerWithAccount:(id)account;	// 0x2967e9
- (void)_reloadItems;	// 0x2969d5
- (void)_removeAccount;	// 0x296911
- (id)identifier;	// 0x295fad
- (BOOL)isNetworkDependent;	// 0x295fc5
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0x2966c9
- (id)list:(id)list indexPathForItemID:(id)itemID;	// 0x2965c9
- (id)list:(id)list itemIDForIndexPath:(id)indexPath;	// 0x296535
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x2963d9
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0x296365
- (id)list:(id)list sectionHeaderForSection:(long)section;	// 0x296309
- (long)numberOfSectionsInList:(id)list;	// 0x296305
// declared property getter: - (id)parentController;	// 0x29677d
// declared property setter: - (void)setParentController:(id)controller;	// 0x296791
// declared property setter: - (void)setSwappingController:(id)controller;	// 0x29676d
// declared property getter: - (id)swappingController;	// 0x296759
- (void)wasExhumed;	// 0x296145
- (void)wasPushed;	// 0x295fc9
@end

