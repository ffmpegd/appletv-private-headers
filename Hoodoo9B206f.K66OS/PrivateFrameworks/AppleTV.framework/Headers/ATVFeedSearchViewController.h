/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVSearchViewController.h"
#import "AppleTV-Structs.h"

@class ATVMerchant, ATVFeedSearchResultsLoader, NSDictionary, NSString, NSMutableDictionary, ATVFeedDocument;

__attribute__((visibility("hidden")))
@interface ATVFeedSearchViewController : ATVSearchViewController {
@private
	ATVMerchant *_merchant;	// 108 = 0x6c
	ATVFeedSearchResultsLoader *_searchResultsLoader;	// 112 = 0x70
	NSString *_baseURLString;	// 116 = 0x74
	NSDictionary *_results;	// 120 = 0x78
	NSMutableDictionary *_headerCache;	// 124 = 0x7c
	ATVFeedDocument *_resultsFeedDocument;	// 128 = 0x80
}
@property(retain, nonatomic) ATVFeedDocument *resultsFeedDocument;	// G=0x367856c5; S=0x367856d5; @synthesize=_resultsFeedDocument
- (id)initWithDictionary:(id)dictionary;	// 0x36784a75
- (id)initWithFeedElement:(id)feedElement;	// 0x36784751
- (id)_elementAtIndexPath:(id)indexPath;	// 0x367857e5
- (id)_indexPathForFirstItem;	// 0x36785bbd
- (id)_itemAtIndexPath:(id)indexPath;	// 0x36785905
- (long)_numberOfRowsInSection:(long)section;	// 0x36785aa9
- (long)_numberOfSections;	// 0x367859f9
- (BOOL)_search:(id)search;	// 0x36784f41
- (void)_searchResultsReady:(id)ready;	// 0x367856f9
- (void)_updateSearchResults:(id)results searchString:(id)string;	// 0x36785059
- (void)dealloc;	// 0x36784e0d
- (void)list:(id)list didFocusItemAtIndexPath:(id)indexPath;	// 0x36785599
- (float)list:(id)list heightForItemAtIndexPath:(id)indexPath;	// 0x367854f5
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x36785259
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0x36785319
- (id)list:(id)list sectionHeaderForSection:(long)section;	// 0x3678532d
- (long)numberOfSectionsInList:(id)list;	// 0x36785309
// declared property getter: - (id)resultsFeedDocument;	// 0x367856c5
// declared property setter: - (void)setResultsFeedDocument:(id)document;	// 0x367856d5
@end

