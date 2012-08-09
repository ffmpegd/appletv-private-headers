/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVSearchAgent.h"

@class NSString, BRMerchant;

__attribute__((visibility("hidden")))
@interface ATVMusicStoreSearchAgent : ATVSearchAgent {
	NSString *_baseURLString;	// 12 = 0xc
	BRMerchant *_merchant;	// 16 = 0x10
}
- (id)initWithBaseURLString:(id)baseURLString merchant:(id)merchant;	// 0x1e87f1
- (void)_loadSearchURL:(id)url forSearchTerm:(id)searchTerm;	// 0x1e8a99
- (void)_searchComplete:(id)complete forSearchTerm:(id)searchTerm;	// 0x1e8d29
- (void)_searchRequestProcessed:(id)processed;	// 0x1e8bf5
- (void)dealloc;	// 0x1e8869
- (BOOL)isNetworkDependent;	// 0x1e8a95
- (void)search:(id)search ignoringCache:(BOOL)cache;	// 0x1e88f9
- (BOOL)showRecentSearches;	// 0x1e8a91
@end
