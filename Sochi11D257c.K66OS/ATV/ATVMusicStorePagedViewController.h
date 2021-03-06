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
+ (id)pagedViewControllerForStoreItem:(id)storeItem;	// 0x1d9da5
- (id)init;	// 0x1d9e61
- (id)initWithStoreItem:(id)storeItem;	// 0x1d9e65
- (long)_itemsPerPage;	// 0x1da9d5
- (long)_pageCount;	// 0x1da9d9
- (BOOL)datasourceShouldBeRetainedByPagedView:(id)datasource;	// 0x1da591
- (void)dealloc;	// 0x1da119
- (BOOL)delegateShouldBeRetainedByPagedView:(id)delegate;	// 0x1da58d
- (float)grid:(id)grid heightForItemAtIndex:(long)index;	// 0x1da9b5
- (id)grid:(id)grid itemAtIndex:(long)index;	// 0x1da629
- (long)numberOfItemsInGrid:(id)grid;	// 0x1da595
- (long)pageCountForPagedView:(id)pagedView;	// 0x1da3f9
- (void)pagedView:(id)view didSwitchToPageAtIndex:(long)index fromPageAtIndex:(long)index3;	// 0x1da589
- (id)pagedView:(id)view itemForPage:(long)page;	// 0x1da285
- (void)pagedView:(id)view willSwitchToPageAtIndex:(long)index fromPageAtIndex:(long)index3;	// 0x1da409
- (void)toggleCursorMode:(id)mode;	// 0x1da1bd
- (id)view;	// 0x1da281
@end

