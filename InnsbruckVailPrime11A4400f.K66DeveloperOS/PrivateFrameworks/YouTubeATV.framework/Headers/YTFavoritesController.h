/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/YouTubeATV.framework/YouTubeATV
 */

#import </libobjc.A.h>

@class YTAccountFeedRequest, NSMutableArray, YTAuthenticatedAccountPost, NSURL;
@protocol YTFavoritesControllerDelegate;

@interface YTFavoritesController : NSObject {
	NSMutableArray *_pendingFavoritesShortIDs;	// 4 = 0x4
	NSMutableArray *_mergedFavorites;	// 8 = 0x8
	YTAuthenticatedAccountPost *_accountPost;	// 12 = 0xc
	YTAccountFeedRequest *_accountFeedRequest;	// 16 = 0x10
	BOOL _usingAccountFavorites;	// 20 = 0x14
	BOOL _shouldOfferMergeOfLocalBookmarks;	// 21 = 0x15
	NSURL *_batchURL;	// 24 = 0x18
	NSMutableArray *_bookmarkVideos;	// 28 = 0x1c
	NSMutableArray *_bookmarkShortIDs;	// 32 = 0x20
	id<YTFavoritesControllerDelegate> _mergeBookmarksDelegate;	// 36 = 0x24
}
@property(retain) NSURL *batchURL;	// G=0x33aaf07d; S=0x33aaf025; converted property
@property(readonly, assign) BOOL shouldOfferMergeOfLocalBookmarks;	// G=0x33aae5f1; converted property
@property(assign) BOOL usingAccountFavorites;	// G=0x33aae571; S=0x33aae581; converted property
+ (id)sharedFavoritesController;	// 0x33aae4dd
- (void)YTAuthenticatedAccountPost:(id)post didFinishWithType:(int)type error:(id)error;	// 0x33aaf08d
- (void)_bookmarksDidChangeNotifyObservers:(BOOL)_bookmarks;	// 0x33aae88d
- (void)_loadBookmarks;	// 0x33aae9d9
- (void)_processNextPendingFavoritesBatch;	// 0x33aae6c5
- (void)_saveBookmarks;	// 0x33aae94d
- (void)accountFeedRequest:(id)request didFailWithError:(id)error;	// 0x33aaf3b1
- (void)accountFeedRequest:(id)request receivedVideos:(id)videos;	// 0x33aaf0d9
- (void)addFavoriteForVideo:(id)video;	// 0x33aaeddd
- (void)addLocalBookmarkForVideo:(id)video;	// 0x33aaed11
// converted property getter: - (id)batchURL;	// 0x33aaf07d
- (id)bookmarkedShortIDs;	// 0x33aaecdd
- (id)bookmarkedVideos;	// 0x33aaec35
- (void)bookmarksSearchRequestInterrupted;	// 0x33aaecb1
- (void)dealloc;	// 0x33aae525
- (void)mergeLocalBookmarksToAccountFavoritesWithDelegate:(id)delegate;	// 0x33aae7b9
- (void)removeFavoriteForVideo:(id)video;	// 0x33aaeecd
- (void)saveBookmarksIfNeeded;	// 0x33aaf001
- (void)searchRequestReturnedVideos:(id)videos;	// 0x33aaec45
// converted property setter: - (void)setBatchURL:(id)url;	// 0x33aaf025
- (void)setLocalBookmarksMergeOffered:(BOOL)offered;	// 0x33aae65d
// converted property setter: - (void)setUsingAccountFavorites:(BOOL)favorites;	// 0x33aae581
// converted property getter: - (BOOL)shouldOfferMergeOfLocalBookmarks;	// 0x33aae5f1
// converted property getter: - (BOOL)usingAccountFavorites;	// 0x33aae571
@end
