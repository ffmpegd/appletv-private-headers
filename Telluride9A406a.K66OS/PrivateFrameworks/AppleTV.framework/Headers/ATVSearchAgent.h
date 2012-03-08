/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class NSMutableArray, NSMutableDictionary;

@interface ATVSearchAgent : NSObject {
@private
	NSMutableDictionary *_resultsCache;	// 4 = 0x4
	NSMutableArray *_resultsCacheTerms;	// 8 = 0x8
}
+ (id)_searchTermCache;	// 0x32f9345d
- (id)init;	// 0x32f92ad5
- (void)cacheResults:(id)results forSearchTerm:(id)searchTerm;	// 0x32f9310d
- (long)cacheSize;	// 0x32f93415
- (id)cachedResultsForSearchTerm:(id)searchTerm;	// 0x32f93341
- (void)clearSavedSearchTerms;	// 0x32f92cb9
- (id)contextMenuUtility;	// 0x32f93455
- (void)dealloc;	// 0x32f92b51
- (id)defaultPreviewImage;	// 0x32f93421
- (BOOL)handlePlayForObject:(id)object;	// 0x32f93459
- (BOOL)isNetworkDependent;	// 0x32f9341d
- (void)purgeCache;	// 0x32f93305
- (void)saveSearchTerm:(id)term;	// 0x32f92da1
- (id)savedSearchTerms;	// 0x32f92bb1
- (void)search:(id)search;	// 0x32f933fd
- (void)search:(id)search ignoringCache:(BOOL)cache;	// 0x32f93411
- (BOOL)showRecentSearches;	// 0x32f93419
@end
