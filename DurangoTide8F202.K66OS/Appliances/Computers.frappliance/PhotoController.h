/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "PhotoController.h"
#import "Computers-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSArray;

@interface PhotoController : XXUnknownSuperclass {
	NSArray *_collectionsByType;	// 120 = 0x78
	BOOL _forScreenSaver;	// 124 = 0x7c
}
+ (id)allPhotosController;	// 0xb0c1
+ (id)screenSaverControllerWithServerID:(id)serverID;	// 0xb089
- (id)init;	// 0xb071
- (id)initForScreenSaver:(BOOL)screenSaver withServerID:(id)serverID;	// 0xb139
- (ATVMediaQueryRef)createDataQuery;	// 0xb1bd
- (BOOL)dataClientUpdated:(ATVDataClientRef)updated;	// 0xb025
- (BOOL)dataQueryComplete:(ATVMediaQueryRef)complete;	// 0xaffd
- (void)dealloc;	// 0xb0f1
- (id)errorControlForQuery:(ATVMediaQueryRef)query;	// 0xb22d
- (void)list:(id)list didFocusItemAtIndexPath:(id)indexPath;	// 0xb569
- (void)list:(id)list didPlayItemAtIndexPath:(id)indexPath;	// 0xa919
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0xab45
- (float)list:(id)list heightForItemAtIndexPath:(id)indexPath;	// 0xaf5d
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0xb769
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0xaf91
- (id)list:(id)list sectionHeaderForSection:(long)section;	// 0xb319
- (long)numberOfSectionsInList:(id)list;	// 0xafd1
@end

@interface PhotoController (Private)
- (id)_BRMediaCollectionsForType:(id)type;	// 0xa795
- (id)_collectionDictionaryForType:(id)type;	// 0xa88d
- (id)_collectionsByType;	// 0xb375
- (id)_iconWithName:(id)name;	// 0xba31
- (long)_numberOfItemsInSection:(long)section;	// 0xa6b9
@end

