/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "ATVITunesTouchRemoteManager.h"
#import "BRSingleton.h"

@class NSTimer;

__attribute__((visibility("hidden")))
@interface METouchRemoteManager : BRSingleton <ATVITunesTouchRemoteManager> {
	NSTimer *_updateTimer;	// 4 = 0x4
}
+ (BOOL)_connectToDataServer:(id *)dataServer withRequest:(ATVServerRequestRef)request arguments:(id)arguments machineID:(unsigned long long *)anId;	// 0x62399
+ (id)_containerItemIdFromQueryString:(id)queryString;	// 0x62669
+ (void)_convertedFilterType:(id *)type andValue:(id *)value fromQueryString:(id)queryString;	// 0x625a5
+ (id)_copyDataQueryForQueueFilterType:(id)queueFilterType andFilterValue:(id)value forAsset:(id)asset;	// 0x627b1
+ (id)_dataClientForRequestArguments:(id)requestArguments dataServer:(id)server;	// 0x62329
+ (id)_dataServerForRequestArguments:(id)requestArguments;	// 0x62095
+ (void)_filterType:(id *)type andValue:(id *)value fromString:(id)string;	// 0x6252d
+ (void)addNowPlayingSpecToBuffer:(id)buffer;	// 0x5be35
+ (id)albumForMedia:(id)media;	// 0x62001
+ (id)argumentsForRequest:(ATVServerRequestRef)request;	// 0x61df1
+ (unsigned long)availableRepeatStates;	// 0x613ed
+ (unsigned long)availableShuffleStates;	// 0x6135d
+ (BOOL)connectHomeShareWithMachineID:(unsigned long long)machineID;	// 0x61b8d
+ (void)daapPlayQueueEditAddQueryCompleted:(id)completed;	// 0x60bb5
+ (void)dacpGeniusItemsQueryCompleted:(id)completed;	// 0x60a6d
+ (void)dacpPlayRequestQueryCompleted:(id)completed;	// 0x5fdad
+ (id)dataServerWithMachineID:(unsigned long long)machineID;	// 0x61a7d
+ (void)handleBonjourSourcesUpdateRequest:(ATVServerRequestRef)request;	// 0x5e05d
+ (void)handleControlInterfacesRequest:(ATVServerRequestRef)request;	// 0x5b845
+ (void)handleDACPRequest:(ATVServerRequestRef)request;	// 0x5b519
+ (void)handleGeniusSeedRequest:(ATVServerRequestRef)request withArguments:(id)arguments;	// 0x5faed
+ (void)handleGetPropertyRequest:(ATVServerRequestRef)request;	// 0x5e3c9
+ (void)handleNowPlayingArtworkRequest:(ATVServerRequestRef)request;	// 0x60ee9
+ (void)handlePlayOrCueRequest:(ATVServerRequestRef)request withArguments:(id)arguments machineID:(unsigned long long)anId;	// 0x5eed9
+ (void)handlePlayQueueContentsRequest:(ATVServerRequestRef)request;	// 0x5c559
+ (void)handlePlayQueueEditAddRequest:(ATVServerRequestRef)request withArguments:(id)arguments;	// 0x5cecd
+ (void)handlePlayQueueEditClearRequest:(ATVServerRequestRef)request withArguments:(id)arguments;	// 0x5d3bd
+ (void)handlePlayQueueEditMoveRequest:(ATVServerRequestRef)request withArguments:(id)arguments;	// 0x5d15d
+ (void)handlePlayQueueEditPlayNowRequest:(ATVServerRequestRef)request withArguments:(id)arguments;	// 0x5d4cd
+ (void)handlePlayQueueEditRemoveRequest:(ATVServerRequestRef)request withArguments:(id)arguments;	// 0x5d05d
+ (void)handlePlayQueueEditRequest:(ATVServerRequestRef)request;	// 0x5ccc1
+ (void)handlePlayQueueEditRequest:(ATVServerRequestRef)request withArguments:(id)arguments machineID:(unsigned long long)anId;	// 0x5d919
+ (void)handlePlayQueueEditStartGeniusRequest:(ATVServerRequestRef)request withArguments:(id)arguments;	// 0x5d589
+ (void)handlePlayRequest:(ATVServerRequestRef)request;	// 0x5eded
+ (BOOL)handlePlayRequestWithMachineID:(unsigned long long)machineID containerName:(id)name playlistKind:(unsigned long)kind containerID:(unsigned long long)anId containerItemID:(unsigned long long)anId5 querySpecifier:(id)specifier queryCriteria:(SearchCriteriaList *)criteria sortType:(int)type isInvertedSort:(BOOL)sort index:(long)index shuffleState:(unsigned long)state repeatState:(unsigned long)state12;	// 0x5f1b9
+ (BOOL)handlePlayRequestWithMachineID:(unsigned long long)machineID containerName:(id)name playlistKind:(unsigned long)kind containerID:(unsigned long long)anId containerItemID:(unsigned long long)anId5 querySpecifier:(id)specifier queryCriteria:(SearchCriteriaList *)criteria sortType:(int)type isInvertedSort:(BOOL)sort index:(long)index shuffleState:(unsigned long)state repeatState:(unsigned long)state12 playQueueAddMode:(int)mode queueFilter:(id)filter;	// 0x5f23d
+ (void)handlePlayStatusUpdateRequest:(ATVServerRequestRef)request;	// 0x5bad1
+ (unsigned long)handleSetPropertyRequest:(ATVServerRequestRef)request;	// 0x5e951
+ (BOOL)isNowPlayingAssetScrubbable;	// 0x6197d
+ (unsigned long)mediaKindForMedia:(id)media;	// 0x615d5
+ (unsigned long)nowPlayingMediaKind;	// 0x61579
+ (unsigned long)nowPlayingRemainingTime;	// 0x614d9
+ (unsigned long)nowPlayingStopTime;	// 0x61439
+ (unsigned char)playerState;	// 0x612b5
+ (unsigned char)repeatState;	// 0x613a9
+ (void)setSingleton:(id)singleton;	// 0x5af49
+ (unsigned char)shuffleState;	// 0x61321
+ (id)singleton;	// 0x5af59
+ (id)transportDataProvider;	// 0x61a19
+ (long)volume;	// 0x619c1
- (id)init;	// 0x5af69
- (void)_clearUpdateTimer;	// 0x62da9
- (void)_coverArtChanged:(id)changed;	// 0x62d19
- (void)_dataClientConnectionHandler:(id)handler;	// 0x63061
- (void)_dataServerConnectionHandler:(id)handler;	// 0x6316d
- (void)_iTunesPlaybackMetadataChanged:(id)changed;	// 0x62d89
- (void)_nowPlayingUpdated:(id)updated;	// 0x62cf9
- (void)_playerStateChanged:(id)changed;	// 0x62c89
- (void)_playerTimeChanged:(id)changed;	// 0x62c11
- (void)_playerTimeSkipped:(id)skipped;	// 0x62d49
- (void)_playerVolumeChanged:(id)changed;	// 0x62d69
- (void)_processPendingRequestsWithDataServer:(id)dataServer;	// 0x632ad
- (void)_scaleImage:(id)image;	// 0x62e8d
- (void)_updateNowPlayingArtworkWithInfo:(id)info;	// 0x62fa1
- (void)_updateTimerFired:(id)fired;	// 0x62e7d
- (void)_updateTouchRemotes;	// 0x62ddd
- (void)_updateTouchRemotesWithDelay:(double)delay;	// 0x62e15
- (void)dealloc;	// 0x5b11d
- (void)pairWithTouchRemote:(id)touchRemote withPIN:(id)pin;	// 0x5b365
- (id)pairableTouchRemotes;	// 0x5b305
- (id)pairedTouchRemotes;	// 0x5b18d
- (BOOL)removePairedTouchRemote:(id)remote;	// 0x5b309
- (unsigned long)sendGeneralPurposeMessage:(id)message;	// 0x5b3c1
@end
