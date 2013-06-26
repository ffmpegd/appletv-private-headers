/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

#import <ML3MusicLibrary.h> // Unknown library


@interface ML3MusicLibrary (HomeSharingAdditions)
+ (void)buildDatabaseFromHomeSharingConnection:(id)homeSharingConnection atPath:(id)path completionHandler:(id)handler;	// 0x333765e5
+ (void)buildDatabaseFromHomeSharingConnection:(id)homeSharingConnection atPath:(id)path completionHandler:(id)handler progressHandler:(id)handler4;	// 0x33377051
- (void)checkForChangesOnConnection:(id)changesOnConnection completionHandler:(id)handler;	// 0x33376609
- (void)clearTrackAndCollectionCloudStatus;	// 0x33377d15
- (void)fillContainerForHomeSharingConnection:(id)homeSharingConnection containerID:(long long)anId completionHandler:(id)handler;	// 0x33376279
@end
