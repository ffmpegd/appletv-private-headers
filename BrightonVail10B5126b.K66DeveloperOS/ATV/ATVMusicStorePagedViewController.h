/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSArray, NSMutableArray, NSDictionary;

__attribute__((visibility("hidden")))
@interface ATVMusicStorePagedViewController : XXUnknownSuperclass {
	NSDictionary *_storeDict;	// 4 = 0x4
	NSMutableArray *_pages;	// 8 = 0x8
	NSArray *_items;	// 12 = 0xc
}
+ (id)pagedViewControllerForStoreItem:(id)storeItem;	// 0x1db4c9
- (id)init;	// 0x1db585
- (id)initWithStoreItem:(id)storeItem;	// 0x1db589
- (long)_itemsPerPage;	// 0x1dc0a1
- (long)_pageCount;	// 0x1dc0a5
- (BOOL)datasourceShouldBeRetainedByPagedView:(id)datasource;	// 0x1dbcad
- (void)dealloc;	// 0x1db83d
- (BOOL)delegateShouldBeRetainedByPagedView:(id)delegate;	// 0x1dbca9
- (float)grid:(id)grid heightForItemAtIndex:(long)index;	// 0x1dc095
- (id)grid:(id)grid itemAtIndex:(long)index;	// 0x1dbd45
- (long)numberOfItemsInGrid:(id)grid;	// 0x1dbcb1
- (long)pageCountForPagedView:(id)pagedView;	// 0x1dbb1d
- (void)pagedView:(id)view didSwitchToPageAtIndex:(long)index fromPageAtIndex:(long)index3;	// 0x1dbca5
- (id)pagedView:(id)view itemForPage:(long)page;	// 0x1db9a9
- (void)pagedView:(id)view willSwitchToPageAtIndex:(long)index fromPageAtIndex:(long)index3;	// 0x1dbb2d
- (void)toggleCursorMode:(id)mode;	// 0x1db8e1
- (id)view;	// 0x1db9a5
@end
