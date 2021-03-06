/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRDataQueryController.h"

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface PhotoController : BRDataQueryController {
	NSDictionary *_collectionsByType;	// 164 = 0xa4
	BOOL _forScreenSaver;	// 168 = 0xa8
}
+ (id)allPhotosControllerWithDataServerID:(id)dataServerID;	// 0x8b2d9
+ (id)screenSaverControllerWithDataServerID:(id)dataServerID;	// 0x8b321
- (id)initForScreenSaver:(BOOL)screenSaver dataServerID:(id)anId;	// 0x8b369
- (void).cxx_destruct;	// 0x8cb95
- (id)_BRMediaCollectionsForType:(id)type;	// 0x8cdf1
- (id)_collectionsByType;	// 0x8cba9
- (id)_iconWithName:(id)name;	// 0x8cfed
- (long)_numberOfItemsInSection:(long)section;	// 0x8cf09
- (id)collectionsForType:(id)type;	// 0x8cb2d
- (BOOL)dataClientUpdated:(id)updated;	// 0x8b575
- (BOOL)dataQueryComplete:(id)complete;	// 0x8b5e5
- (id)errorControlForQuery:(id)query;	// 0x8b605
- (void)list:(id)list didFocusItemAtIndexPath:(id)indexPath;	// 0x8bc15
- (void)list:(id)list didPlayItemAtIndexPath:(id)indexPath;	// 0x8c7cd
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0x8bf51
- (float)list:(id)list heightForItemAtIndexPath:(id)indexPath;	// 0x8bbd5
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x8b751
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0x8baf5
- (id)list:(id)list sectionHeaderForSection:(long)section;	// 0x8bb55
- (id)newDataQuery;	// 0x8b44d
- (long)numberOfSectionsInList:(id)list;	// 0x8bab5
@end

