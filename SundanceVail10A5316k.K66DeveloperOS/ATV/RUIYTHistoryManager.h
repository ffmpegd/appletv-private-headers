/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface RUIYTHistoryManager : XXUnknownSuperclass {
	NSMutableDictionary *_accountHistory;	// 4 = 0x4
}
+ (id)historyCacheDirectory;	// 0x23c27d
- (id)init;	// 0x23c0d9
- (void).cxx_destruct;	// 0x23c585
- (void)_accountWasRemoved:(id)removed;	// 0x23c541
- (void)_archiveHistoryToDisk;	// 0x23c7fd
- (id)_assetArrayFromHumanReadableArray:(id)humanReadableArray;	// 0x23cb0d
- (id)_assetHistoryForCurrentAccount;	// 0x23c5e5
- (id)_assetHistoryOfAccount:(id)account;	// 0x23c631
- (void)_assetWasPlayedNotification:(id)notification;	// 0x23c4fd
- (id)_currentAccountName;	// 0x23c599
- (id)_humanReadableAssetsFromAssetArray:(id)assetArray;	// 0x23caf1
- (id)_loadHistoryOfAccount:(id)account;	// 0x23c729
- (id)_pathForHistoryOfAccount:(id)account;	// 0x23c695
- (void)_removeHistoryFromDiskForAccount:(id)account;	// 0x23ca21
- (void)addAssetToHistory:(id)history;	// 0x23c2f9
- (id)assetHistoryForCurrentAccount;	// 0x23c415
- (void)clearAssetHistoryForCurrentAccount;	// 0x23c469
- (void)dealloc;	// 0x23c1fd
@end

