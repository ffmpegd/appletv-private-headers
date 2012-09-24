/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class ATVJSContext, BRMediaPlayer, ATVInterstitialGroup, ATVJSPlayerMoreAssetsSpinnerController, BRStateMachine;

__attribute__((visibility("hidden")))
@interface ATVJSPlayer : XXUnknownSuperclass {
	BRMediaPlayer *_activePlayer;	// 4 = 0x4
	BRStateMachine *_playlistStateMachine;	// 8 = 0x8
	ATVJSPlayerMoreAssetsSpinnerController *_moreAssetsSpinner;	// 12 = 0xc
	ATVJSContext *context;	// 16 = 0x10
	ATVInterstitialGroup *interstitialGroup;	// 20 = 0x14
}
@property(retain, nonatomic) ATVJSContext *context;	// G=0x173a71; S=0x173a81; @synthesize
@property(retain) ATVInterstitialGroup *interstitialGroup;	// G=0x173a91; S=0x173aa5; @synthesize
- (BOOL)_isNotificationForMyMerchant:(id)myMerchant;	// 0x171349
- (void)_loadAssetsActivity;	// 0x172619
- (void)_playerBufferSufficientToPlay:(id)play;	// 0x171821
- (void)_playerCurrentAssetChanged:(id)changed;	// 0x172555
- (void)_playerPlaybackEnded:(id)ended;	// 0x1725ed
- (void)_playerPlaybackError:(id)error;	// 0x171871
- (void)_playerQualityOfServiceReport:(id)serviceReport;	// 0x171a21
- (void)_playerStallDuringPlayback:(id)playback;	// 0x171941
- (void)_playerStartedBuffering:(id)buffering;	// 0x171779
- (void)_playerStateChanged:(id)changed;	// 0x171409
- (void)_playerTransportDisplayChange:(id)change;	// 0x171b35
- (void)_playerWillStop:(id)_player;	// 0x171a95
- (void)_registerPlaylistHandlers;	// 0x173015
- (void)_setupSpinnerActivity;	// 0x172f01
- (void)_updateAsset:(id)asset;	// 0x171c0d
- (void)_updateEventGroupsForEventMediaAsset:(id)eventMediaAsset;	// 0x171eb5
- (void)_updateEventGroupsNotification:(id)notification;	// 0x1724e9
// declared property getter: - (id)context;	// 0x173a71
// declared property getter: - (id)interstitialGroup;	// 0x173a91
// declared property setter: - (void)setContext:(id)context;	// 0x173a81
// declared property setter: - (void)setInterstitialGroup:(id)group;	// 0x173aa5
- (void)setup;	// 0x171011
- (void)tearDown;	// 0x1712a1
@end
