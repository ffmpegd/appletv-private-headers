/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/YouTubeATV.framework/YouTubeATV
 */

#import <NSObject.h> // Unknown library

@class NSMutableArray, YTAccountFeedRequest, YTAuthenticatedAccountPost, NSURL;
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
@property(retain) NSURL *batchURL;	// G=0x367111e9; S=0x36711191; converted property
@property(readonly, assign) BOOL shouldOfferMergeOfLocalBookmarks;	// G=0x367107cd; converted property
@property(assign) BOOL usingAccountFavorites;	// G=0x3671074d; S=0x3671075d; converted property
+ (id)sharedFavoritesController;	// 0x367106b9
- (void)YTAuthenticatedAccountPost:(id)post didFinishWithType:(int)type error:(id)error;	// 0x367111f9
- (void)_bookmarksDidChangeNotifyObservers:(BOOL)_bookmarks;	// 0x36710a61
- (void)_loadBookmarks;	// 0x36710ba9
- (void)_processNextPendingFavoritesBatch;	// 0x367108a1
- (void)_saveBookmarks;	// 0x36710b1d
- (void)accountFeedRequest:(id)request didFailWithError:(id)error;	// 0x3671153d
- (void)accountFeedRequest:(id)request receivedVideos:(id)videos;	// 0x36711245
- (void)addFavoriteForVideo:(id)video;	// 0x36710f55
- (void)addLocalBookmarkForVideo:(id)video;	// 0x36710e89
// converted property getter: - (id)batchURL;	// 0x367111e9
- (id)bookmarkedShortIDs;	// 0x36710e55
- (id)bookmarkedVideos;	// 0x36710dad
- (void)bookmarksSearchRequestInterrupted;	// 0x36710e29
- (void)dealloc;	// 0x36710701
- (void)mergeLocalBookmarksToAccountFavoritesWithDelegate:(id)delegate;	// 0x36710991
- (void)removeFavoriteForVideo:(id)video;	// 0x36711039
- (void)saveBookmarksIfNeeded;	// 0x3671116d
- (void)searchRequestReturnedVideos:(id)videos;	// 0x36710dbd
// converted property setter: - (void)setBatchURL:(id)url;	// 0x36711191
- (void)setLocalBookmarksMergeOffered:(BOOL)offered;	// 0x36710839
// converted property setter: - (void)setUsingAccountFavorites:(BOOL)favorites;	// 0x3671075d
// converted property getter: - (BOOL)shouldOfferMergeOfLocalBookmarks;	// 0x367107cd
// converted property getter: - (BOOL)usingAccountFavorites;	// 0x3671074d
@end

