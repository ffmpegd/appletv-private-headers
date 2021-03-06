/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSDictionary, ATVFeedDocument, ATVURLDocument, NSString, ATVMerchant;

__attribute__((visibility("hidden")))
@interface ATVFeedSearchResultsLoader : XXUnknownSuperclass {
	ATVURLDocument *_document;	// 4 = 0x4
	NSString *_baseURLString;	// 8 = 0x8
	ATVMerchant *_merchant;	// 12 = 0xc
	NSString *_searchTerm;	// 16 = 0x10
	NSDictionary *_results;	// 20 = 0x14
	ATVFeedDocument *_resultsFeedDocument;	// 24 = 0x18
}
@property(readonly, assign) NSDictionary *results;	// G=0x158fad; @synthesize=_results
@property(readonly, assign) ATVFeedDocument *resultsFeedDocument;	// G=0x158fc1; @synthesize=_resultsFeedDocument
@property(readonly, assign) NSString *searchTerm;	// G=0x158f99; @synthesize=_searchTerm
- (id)initWithSearchTerm:(id)searchTerm baseURLString:(id)string merchant:(id)merchant;	// 0x1587b9
- (id)_escapedSearchStringForString:(id)string;	// 0x1589ad
- (void)_loadResultsFromURL:(id)url;	// 0x158a9d
- (void)_setDocument:(id)document;	// 0x158b2d
- (void)dealloc;	// 0x158849
- (void)load;	// 0x158929
// declared property getter: - (id)results;	// 0x158fad
// declared property getter: - (id)resultsFeedDocument;	// 0x158fc1
// declared property getter: - (id)searchTerm;	// 0x158f99
@end

