/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface ATVPlayQueue : XXUnknownSuperclass {
}
+ (unsigned)_adjustQueueIndex:(unsigned)index forPlaylist:(id)playlist;	// 0x18a315
+ (id)_mediaAssetsFromArray:(id)array;	// 0x18a065
+ (void)_playAssets:(id)assets;	// 0x18a33d
+ (id)_playlist;	// 0x18a221
+ (void)_pruneHistory;	// 0x18a2d1
+ (void)_refreshLookaheadItem;	// 0x189ca9
+ (void)adjustPlayerForQueueAction:(int)queueAction;	// 0x189f69
+ (void)clearBackToItems;	// 0x1899e9
+ (void)clearHistory;	// 0x189a2d
+ (void)demoteAssetAtIndex:(unsigned)index;	// 0x188e85
+ (id)description;	// 0x189d0d
+ (void)enqueueItem:(id)item action:(int)action;	// 0x189849
+ (void)enqueueItems:(id)items action:(int)action;	// 0x1892ad
+ (void)enqueueItems:(id)items action:(int)action askUser:(BOOL)user;	// 0x1892dd
+ (void)enqueueItemsInCollection:(id)collection action:(int)action;	// 0x188f0d
+ (unsigned)historyLength;	// 0x188ced
+ (BOOL)isQueueValidForDataClient:(id)dataClient;	// 0x188c0d
+ (BOOL)isQueueingEnabled;	// 0x188c69
+ (void)moveObjectAtIndex:(unsigned)index toIndex:(unsigned)index2;	// 0x189959
+ (id)nowPlaying;	// 0x189e2d
+ (void)playExistingQueueAssetAtIndex:(unsigned)index;	// 0x189b8d
+ (id)playingNext;	// 0x189dd9
+ (id)playlistName;	// 0x189e81
+ (id)previouslyPlayedItems;	// 0x188d51
+ (void)promoteAssetAtIndex:(unsigned)index;	// 0x188dfd
+ (void)purge;	// 0x1899a5
+ (id)queueAssetAtIndex:(int)index;	// 0x189ed5
+ (id)queuedItems;	// 0x188cfd
+ (void)removeQueuedAssetAtIndex:(unsigned)index;	// 0x189a71
+ (void)setHistoryLength:(unsigned)length;	// 0x188cd1
+ (void)setUpNextLength:(unsigned)length;	// 0x188cb1
+ (BOOL)shouldGeniusPlaybackReplaceQueue;	// 0x1889b9
+ (BOOL)shouldPlaybackSwitchToAnotherSource;	// 0x188b29
+ (id)upNext:(unsigned *)next;	// 0x188da5
+ (unsigned)upNextLength;	// 0x188cc1
@end
