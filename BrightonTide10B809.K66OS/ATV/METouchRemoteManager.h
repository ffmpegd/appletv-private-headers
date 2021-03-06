/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRSingleton.h"
#import "ATVITunesTouchRemoteManager.h"
#import "AppleTV-Structs.h"

@class NSTimer;

__attribute__((visibility("hidden")))
@interface METouchRemoteManager : BRSingleton <ATVITunesTouchRemoteManager> {
	NSTimer *_updateTimer;	// 4 = 0x4
}
+ (id)_atvFilterWithQueueFilterType:(id)queueFilterType filterValue:(id)value;	// 0x660c9
+ (BOOL)_connectToDataServer:(id *)dataServer withRequest:(ATVServerRequestRef)request arguments:(id)arguments machineID:(unsigned long long *)anId;	// 0x65961
+ (int)_daapSortTypeFromSortStr:(id)sortStr;	// 0x65f8d
+ (id)_dataClientForRequestArguments:(id)requestArguments dataServer:(id)server;	// 0x658f1
+ (id)_dataClientWithMachineID:(unsigned long long)machineID;	// 0x66049
+ (id)_dataServerForRequestArguments:(id)requestArguments;	// 0x6565d
+ (id)_dmapItemIDFromQueueQueryStr:(id)queueQueryStr dmapKey:(id *)key;	// 0x66229
+ (void)_filterType:(id *)type andValue:(id *)value fromString:(id)string;	// 0x663a9
+ (void)_startPlaybackWithItems:(id)items initialIndex:(long)index shuffleMode:(unsigned long)mode repeatMode:(unsigned long)mode4;	// 0x65d35
+ (void)addNowPlayingSpecToBuffer:(id)buffer;	// 0x5ef51
+ (id)albumForMedia:(id)media;	// 0x655c9
+ (id)argumentsForRequest:(ATVServerRequestRef)request;	// 0x653b9
+ (unsigned long)availableRepeatStates;	// 0x649b5
+ (unsigned long)availableShuffleStates;	// 0x64925
+ (BOOL)connectHomeShareWithMachineID:(unsigned long long)machineID;	// 0x65155
+ (void)dacpGeniusItemsQueryCompleted:(id)completed;	// 0x64369
+ (void)dacpPlayRequestQueryCompleted:(id)completed;	// 0x638fd
+ (id)dataServerWithMachineID:(unsigned long long)machineID;	// 0x65045
+ (void)handleBonjourSourcesUpdateRequest:(ATVServerRequestRef)request;	// 0x60d99
+ (void)handleControlInterfacesRequest:(ATVServerRequestRef)request;	// 0x5e961
+ (void)handleDACPRequest:(ATVServerRequestRef)request;	// 0x5e635
+ (void)handleGeniusSeedRequest:(ATVServerRequestRef)request withArguments:(id)arguments;	// 0x61f85
+ (void)handleGetPropertyRequest:(ATVServerRequestRef)request;	// 0x61105
+ (void)handleNowPlayingArtworkRequest:(ATVServerRequestRef)request;	// 0x644b1
+ (void)handlePlayOrCueRequest:(ATVServerRequestRef)request withArguments:(id)arguments machineID:(unsigned long long)anId;	// 0x61c15
+ (void)handlePlayQueueContentsRequest:(ATVServerRequestRef)request;	// 0x5f675
+ (void)handlePlayQueueEditAddRequest:(ATVServerRequestRef)request withArguments:(id)arguments machineID:(unsigned long long)anId;	// 0x6227d
+ (void)handlePlayQueueEditClearRequest:(ATVServerRequestRef)request withArguments:(id)arguments;	// 0x60625
+ (void)handlePlayQueueEditMoveRequest:(ATVServerRequestRef)request withArguments:(id)arguments;	// 0x603c5
+ (void)handlePlayQueueEditPlayNowRequest:(ATVServerRequestRef)request withArguments:(id)arguments;	// 0x60735
+ (void)handlePlayQueueEditRemoveRequest:(ATVServerRequestRef)request withArguments:(id)arguments;	// 0x602c5
+ (void)handlePlayQueueEditRequest:(ATVServerRequestRef)request;	// 0x600a5
+ (void)handlePlayQueueEditStartGeniusRequest:(ATVServerRequestRef)request withArguments:(id)arguments;	// 0x607f1
+ (void)handlePlayRequest:(ATVServerRequestRef)request;	// 0x61b29
+ (BOOL)handlePlayRequestWithMachineID:(unsigned long long)machineID containerName:(id)name playlistKind:(unsigned long)kind containerID:(unsigned long long)anId containerItemID:(unsigned long long)anId5 querySpecifier:(id)specifier queryCriteria:(SearchCriteriaList *)criteria sortType:(int)type isInvertedSort:(BOOL)sort index:(long)index shuffleState:(unsigned long)state repeatState:(unsigned long)state12;	// 0x6333d
+ (void)handlePlayStatusUpdateRequest:(ATVServerRequestRef)request;	// 0x5ebed
+ (unsigned long)handleSetPropertyRequest:(ATVServerRequestRef)request;	// 0x6168d
+ (BOOL)isNowPlayingAssetScrubbable;	// 0x64f45
+ (unsigned long)mediaKindForMedia:(id)media;	// 0x64b9d
+ (id)newItemsQuery;	// 0x65af5
+ (unsigned long)nowPlayingMediaKind;	// 0x64b41
+ (unsigned long)nowPlayingRemainingTime;	// 0x64aa1
+ (unsigned long)nowPlayingStopTime;	// 0x64a01
+ (unsigned char)playerState;	// 0x6487d
+ (unsigned char)repeatState;	// 0x64971
+ (void)setSingleton:(id)singleton;	// 0x5e039
+ (unsigned char)shuffleState;	// 0x648e9
+ (id)singleton;	// 0x5e049
+ (id)transportDataProvider;	// 0x64fe1
+ (long)volume;	// 0x64f89
- (id)init;	// 0x5e059
- (void)_clearUpdateTimer;	// 0x665d9
- (void)_coverArtChanged:(id)changed;	// 0x66529
- (void)_dataClientConnectionHandler:(id)handler;	// 0x66891
- (void)_dataServerConnectionHandler:(id)handler;	// 0x6699d
- (void)_iTunesPlaybackMetadataChanged:(id)changed;	// 0x66599
- (void)_nowPlayingUpdated:(id)updated;	// 0x66509
- (void)_playerStateChanged:(id)changed;	// 0x66499
- (void)_playerTimeChanged:(id)changed;	// 0x66421
- (void)_playerTimeSkipped:(id)skipped;	// 0x66559
- (void)_playerVolumeChanged:(id)changed;	// 0x66579
- (void)_processPendingRequestsWithDataServer:(id)dataServer;	// 0x66add
- (void)_queueChanged:(id)changed;	// 0x665b9
- (void)_scaleImage:(id)image;	// 0x666bd
- (void)_updateNowPlayingArtworkWithInfo:(id)info;	// 0x667d1
- (void)_updateTimerFired:(id)fired;	// 0x666ad
- (void)_updateTouchRemotes;	// 0x6660d
- (void)_updateTouchRemotesWithDelay:(double)delay;	// 0x66645
- (void)dealloc;	// 0x5e239
- (void)pairWithTouchRemote:(id)touchRemote withPIN:(id)pin;	// 0x5e481
- (id)pairableTouchRemotes;	// 0x5e421
- (id)pairedTouchRemotes;	// 0x5e2a9
- (BOOL)removePairedTouchRemote:(id)remote;	// 0x5e425
- (unsigned long)sendGeneralPurposeMessage:(id)message;	// 0x5e4dd
@end

