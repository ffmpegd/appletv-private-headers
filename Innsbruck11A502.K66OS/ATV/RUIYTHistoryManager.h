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
+ (id)historyCacheDirectory;	// 0x28c815
+ (int)historySize;	// 0x28c891
- (id)init;	// 0x28c67d
- (void).cxx_destruct;	// 0x28ce8d
- (void)_accountWasRemoved:(id)removed;	// 0x28ce49
- (void)_archiveHistoryToDisk;	// 0x28d0e5
- (id)_assetArchivesForCurrentAccount;	// 0x28ceed
- (id)_assetArchivesOfAccount:(id)account;	// 0x28cf39
- (void)_assetWasPlayedNotification:(id)notification;	// 0x28cb7d
- (id)_currentAccountName;	// 0x28cea1
- (id)_loadHistoryOfAccount:(id)account;	// 0x28d031
- (id)_pathForHistoryOfAccount:(id)account;	// 0x28cf9d
- (void)_removeHistoryFromDiskForAccount:(id)account;	// 0x28d2e1
- (void)clearAssetHistoryForCurrentAccount;	// 0x28c95d
- (void)dealloc;	// 0x28c795
- (id)historyForCurrentAccount;	// 0x28c8e9
- (void)removeAssetsFromHistoryForCurrentAccoutWithIDs:(id)ids;	// 0x28ca2d
@end

