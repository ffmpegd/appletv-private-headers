/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "ABNewPersonViewControllerDelegate.h"
#import "AddressBookUI-Structs.h"
#import <NSObject.h> // Unknown library

@class ABUnknownPersonViewController;

@interface ABUnknownPersonViewDelegateForwarder : NSObject <ABNewPersonViewControllerDelegate, UITableViewDelegate, UITableViewDataSource> {
	ABUnknownPersonViewController *_viewController;	// 4 = 0x4
}
- (id)initWithUnknownPersonViewController:(id)unknownPersonViewController;	// 0x370a70d1
- (void)newPersonViewController:(id)controller didCompleteWithNewPerson:(void *)newPerson;	// 0x370a7111
- (int)numberOfSectionsInTableView:(id)tableView;	// 0x370a7131
- (id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;	// 0x370a7171
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;	// 0x370a7191
- (int)tableView:(id)view numberOfRowsInSection:(int)section;	// 0x370a7151
@end

