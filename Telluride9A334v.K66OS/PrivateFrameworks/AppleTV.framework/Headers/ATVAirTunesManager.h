/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRSingleton.h"

@class NSMutableArray;
@protocol ATVAirTunesManagerDelegate;

@interface ATVAirTunesManager : BRSingleton {
@private
	id<ATVAirTunesManagerDelegate> _delegate;	// 4 = 0x4
	NSMutableArray *_speakersPendingConnection;	// 8 = 0x8
	NSMutableArray *_speakersPendingDisconnection;	// 12 = 0xc
}
+ (void)setSingleton:(id)singleton;	// 0x330b78a5
+ (id)singleton;	// 0x330b7895
- (id)init;	// 0x330b78b5
- (void)_connectionFailedToAuth:(id)auth;	// 0x330b837d
- (void)_connectionFinished:(id)finished;	// 0x330b833d
- (void)_connectionStarted:(id)started;	// 0x330b8211
- (id)_connectionStatus;	// 0x330b8169
- (void)_retryConnection:(id)connection;	// 0x330b845d
- (id)_supportedMediaTypes;	// 0x330b8071
- (BOOL)airTunesAvailableForAsset:(id)asset;	// 0x330b7ad1
- (id)cachedPasswordForSpeaker:(id)speaker;	// 0x330b7ee9
- (void)connectSpeaker:(id)speaker withPassword:(id)password saved:(BOOL)saved andDisconnectOthers:(BOOL)others;	// 0x330b7d05
- (void)connectionFinishedForSpeaker:(id)speaker;	// 0x330b7df1
- (void)connectionStartedForSpeaker:(id)speaker;	// 0x330b7da9
- (void)dealloc;	// 0x330b79ed
- (void)disconnectSpeaker:(id)speaker;	// 0x330b7d69
- (void)disconnectionFinishedForSpeaker:(id)speaker;	// 0x330b7e81
- (void)disconnectionStartedForSpeaker:(id)speaker;	// 0x330b7e39
- (int)numRemoteSpeakers;	// 0x330b7b3d
- (id)remoteSpeakerInfoAtIndex:(int)index;	// 0x330b7b5d
- (id)remoteSpeakerInfoForAllConnectedSpeakers;	// 0x330b7c01
- (id)remoteSpeakerInfoForSpeakerID:(id)speakerID;	// 0x330b7b7d
- (void)setAirTunesManagerDelegate:(id)delegate;	// 0x330b7a91
- (void)setCachedPassword:(id)password forSpeaker:(id)speaker;	// 0x330b7f75
- (void)setControlEnabledFromRemoteSpeakers:(BOOL)remoteSpeakers;	// 0x330b7d89
- (id)speakersWithConnectionsPending;	// 0x330b7ec9
- (id)speakersWithDisconnectionsPending;	// 0x330b7ed9
@end

