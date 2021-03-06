/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVSearchViewController.h"

@class ATVMerchant, NSDictionary, ATVFeedSearchResultsLoader, ATVFeedDocument, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface ATVFeedSearchViewController : ATVSearchViewController {
	ATVMerchant *_merchant;	// 120 = 0x78
	ATVFeedSearchResultsLoader *_searchResultsLoader;	// 124 = 0x7c
	NSString *_baseURLString;	// 128 = 0x80
	NSDictionary *_results;	// 132 = 0x84
	NSMutableDictionary *_headerCache;	// 136 = 0x88
	ATVFeedDocument *_resultsFeedDocument;	// 140 = 0x8c
}
@property(retain, nonatomic) ATVFeedDocument *resultsFeedDocument;	// G=0x151a11; S=0x151a21; @synthesize=_resultsFeedDocument
- (id)initWithDictionary:(id)dictionary;	// 0x150ded
- (id)initWithFeedElement:(id)feedElement;	// 0x150af5
- (id)_elementAtIndexPath:(id)indexPath;	// 0x151aed
- (id)_indexPathForFirstItem;	// 0x151e9d
- (id)_itemAtIndexPath:(id)indexPath;	// 0x151c09
- (long)_numberOfRowsInSection:(long)section;	// 0x151da1
- (long)_numberOfSections;	// 0x151cf9
- (BOOL)_search:(id)search;	// 0x15129d
- (void)_searchResultsReady:(id)ready;	// 0x151a31
- (void)_updateSearchResults:(id)results searchString:(id)string;	// 0x1513a9
- (void)dealloc;	// 0x151165
- (void)list:(id)list didFocusItemAtIndexPath:(id)indexPath;	// 0x1518dd
- (float)list:(id)list heightForItemAtIndexPath:(id)indexPath;	// 0x151849
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x1515b5
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0x151679
- (id)list:(id)list sectionHeaderForSection:(long)section;	// 0x15168d
- (long)numberOfSectionsInList:(id)list;	// 0x151669
// declared property getter: - (id)resultsFeedDocument;	// 0x151a11
// declared property setter: - (void)setResultsFeedDocument:(id)document;	// 0x151a21
@end

