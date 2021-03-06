/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import "MSCupidStateMachine.h"
#import "MSSubscriber.h"
#import "MSSubscribeStreamsProtocolDelegate.h"
#import "MSSubscribeStorageProtocolDelegate.h"
#import "MSReauthorizationProtocolDelegate.h"

@class NSMutableArray, NSMutableDictionary, MSMediaStreamDaemon, MSReauthorizationProtocol, MSSubscribeStreamsProtocol, MSObjectQueue;
@protocol MSSubscribeStorageProtocol, MSSubscriberDelegate;

@protocol MSSubscriber
@property(assign, nonatomic) id<MSSubscriberDelegate> delegate;
- (void)abort;
- (void)checkForNewAssetCollections;
- (void)checkForOutstandingActivities;
// declared property getter: - (id)delegate;
- (id)ownSubscribedStream;
- (void)resetSync;
- (void)retrieveAssets:(id)assets;
// declared property setter: - (void)setDelegate:(id)delegate;
- (void)stop;
- (id)subscribedStreams;
@end

@interface MSSubscriber : MSCupidStateMachine <MSSubscriber, MSSubscribeStreamsProtocolDelegate, MSSubscribeStorageProtocolDelegate, MSReauthorizationProtocolDelegate> {
	id<MSSubscriberDelegate> _delegate;	// 32 = 0x20
	MSMediaStreamDaemon *_daemon;	// 36 = 0x24
	BOOL _checkOneMoreTime;	// 40 = 0x28
	int _state;	// 44 = 0x2c
	MSSubscribeStreamsProtocol *_protocol;	// 48 = 0x30
	NSMutableDictionary *_newSubscriptionsByStreamID;	// 52 = 0x34
	int _retrievalState;	// 56 = 0x38
	id<MSSubscribeStorageProtocol> _storageProtocol;	// 60 = 0x3c
	MSReauthorizationProtocol *_reauthProtocol;	// 64 = 0x40
	MSObjectQueue *_retrievalQueue;	// 68 = 0x44
	NSMutableArray *_assetsBeingRetrieved;	// 72 = 0x48
	long long _targetRetrievalByteCount;	// 76 = 0x4c
	int _retrievalBatchSize;	// 84 = 0x54
	int _maxErrorCount;	// 88 = 0x58
}
@property(assign, nonatomic) MSMediaStreamDaemon *daemon;	// G=0x33932779; S=0x33932789; @synthesize=_daemon
@property(assign, nonatomic) id<MSSubscriberDelegate> delegate;	// G=0x33932759; S=0x33932769; @synthesize=_delegate
@property(assign, nonatomic) int retrievalBatchSize;	// G=0x339327c5; S=0x339327d5; @synthesize=_retrievalBatchSize
@property(assign, nonatomic) long long targetRetrievalByteCount;	// G=0x33932799; S=0x339327b1; @synthesize=_targetRetrievalByteCount
+ (id)_clearInstantiatedSubscribersByPersonID;	// 0x3392e135
+ (void)_setMasterNextActivityDate:(id)date forPersonID:(id)personID;	// 0x3392e1b5
+ (id)existingSubscriberForPersonID:(id)personID;	// 0x3392e119
+ (void)forgetPersonID:(id)anId;	// 0x3392e149
+ (BOOL)isInRetryState;	// 0x3392e789
+ (id)nextActivityDate;	// 0x3392e509
+ (id)nextActivityDateForPersonID:(id)personID;	// 0x3392e61d
+ (id)personIDsWithOutstandingActivities;	// 0x3392e66d
+ (void)stopAllActivities;	// 0x3392e6a9
+ (id)subscriberForPersonID:(id)personID;	// 0x3392dffd
- (id)initWithPersonID:(id)personID baseURL:(id)url;	// 0x3392ea39
- (void).cxx_destruct;	// 0x339327e5
- (void)_abort;	// 0x3393123d
- (void)_checkForNewAssetCollections;	// 0x3392f76d
- (void)_didFinishRetrievingSubscriptionUpdate;	// 0x3392f981
- (void)_didReceiveAuthenticationError:(id)error;	// 0x33930485
- (void)_finishedRetrievingAsset:(id)asset;	// 0x3393159d
- (void)_forget;	// 0x33931521
- (BOOL)_hasOutstandingPoll;	// 0x3392f1a5
- (BOOL)_isAllowedToDownload;	// 0x3392f491
- (BOOL)_isInRetryState;	// 0x33931569
- (void)_reauthorizeAssets;	// 0x33930fd1
- (void)_refreshServerSideConfigurationParameters;	// 0x3392ee01
- (void)_retrieveAssets;	// 0x33930bed
- (void)_retrieveNextAssets;	// 0x33930db5
- (void)_serverSideConfigurationDidChange:(id)_serverSideConfiguration;	// 0x3392ef1d
- (void)_setHasOutstandingPoll:(BOOL)poll;	// 0x3392f209
- (void)_setSubscriptionsByStreamID:(id)anId;	// 0x3392f39d
- (void)_stopOutSubscriberState:(int *)state outRetrievalState:(int *)state2;	// 0x339310e9
- (id)_subscriptionsByStreamID;	// 0x3392f2f1
- (void)_updateMasterManifest;	// 0x3392f0c1
- (void)abort;	// 0x33931511
- (void)checkForNewAssetCollections;	// 0x3392f5e5
- (void)checkForOutstandingActivities;	// 0x33930af9
// declared property getter: - (id)daemon;	// 0x33932779
- (void)deactivate;	// 0x3392ec81
- (void)dealloc;	// 0x3392edc1
// declared property getter: - (id)delegate;	// 0x33932759
- (id)ownSubscribedStream;	// 0x3392e9cd
- (void)reauthorizationProtocol:(id)protocol didReceiveAuthenticationError:(id)error;	// 0x339320cd
- (void)reauthorizationProtocol:(id)protocol reauthorizedAssets:(id)assets rejectedAssets:(id)assets3 error:(id)error;	// 0x339321d1
- (void)resetSync;	// 0x3392f411
// declared property getter: - (int)retrievalBatchSize;	// 0x339327c5
- (void)retrieveAssets:(id)assets;	// 0x33930691
// declared property setter: - (void)setDaemon:(id)daemon;	// 0x33932789
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x33932769
// declared property setter: - (void)setRetrievalBatchSize:(int)size;	// 0x339327d5
// declared property setter: - (void)setTargetRetrievalByteCount:(long long)count;	// 0x339327b1
- (void)stop;	// 0x33931229
- (void)subscribeStorageProtocol:(id)protocol didFinishRetrievingAsset:(id)asset error:(id)error;	// 0x339316e9
- (void)subscribeStorageProtocolDidFinishRetrievingAllAssets:(id)subscribeStorageProtocol;	// 0x33931811
- (void)subscribeStreamsProtocol:(id)protocol didFindDisappearedSubscriptionForPersonID:(id)personID;	// 0x33930179
- (void)subscribeStreamsProtocol:(id)protocol didFindShareState:(id)state;	// 0x33930615
- (void)subscribeStreamsProtocol:(id)protocol didFindTemporarilyUnavailableSubscriptionForPersonID:(id)personID;	// 0x3393059d
- (void)subscribeStreamsProtocol:(id)protocol didFinishError:(id)error;	// 0x33930251
- (void)subscribeStreamsProtocol:(id)protocol didFinishReceivingUpdatesForPersonID:(id)personID ctag:(id)ctag;	// 0x3392ff65
- (void)subscribeStreamsProtocol:(id)protocol didReceiveAssetCollections:(id)collections forPersonID:(id)personID;	// 0x3392fce1
- (void)subscribeStreamsProtocol:(id)protocol didReceiveAuthenticationError:(id)error;	// 0x33930589
- (void)subscribeStreamsProtocol:(id)protocol willReceiveUpdatesForPersonID:(id)personID wasReset:(BOOL)reset metadata:(id)metadata;	// 0x3392fa7d
- (id)subscribedStreams;	// 0x3392e879
// declared property getter: - (long long)targetRetrievalByteCount;	// 0x33932799
@end

