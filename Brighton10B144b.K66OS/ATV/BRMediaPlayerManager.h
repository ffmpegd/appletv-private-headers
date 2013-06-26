/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRSingleton.h"

@class NSObject, BRMediaPlayerController, NSMutableArray, NSDictionary, BRWindow, NSTimer;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface BRMediaPlayerManager : BRSingleton {
	NSObject<OS_dispatch_queue> *_nowPlayingQueue;	// 4 = 0x4
	NSMutableArray *_registrations;	// 8 = 0x8
	NSDictionary *_singletons;	// 12 = 0xc
	BRWindow *_shroudyMcShroud;	// 16 = 0x10
	BRWindow *_playerWindow;	// 20 = 0x14
	NSTimer *_popupDelay;	// 24 = 0x18
	NSTimer *_autoPresentTimer;	// 28 = 0x1c
	NSTimer *_safetyTimer;	// 32 = 0x20
	NSTimer *_cloudMusicStopTimer;	// 36 = 0x24
	double _autoPresentTimeout;	// 40 = 0x28
	int _playerWindowState;	// 48 = 0x30
	BOOL _screensaverUp;	// 52 = 0x34
	BOOL _playerInOwnWindow;	// 53 = 0x35
	float _savedVolume;	// 56 = 0x38
	BRMediaPlayerController *_externallyPresentedPlayerController;	// 60 = 0x3c
}
@property(assign) double autoPresentTimeout;	// G=0x37891d; S=0x3788e5; converted property
@property(retain, nonatomic) BRMediaPlayerController *externallyPresentedPlayerController;	// G=0x3791e5; S=0x3791f5; @synthesize=_externallyPresentedPlayerController
+ (void)setSingleton:(id)singleton;	// 0x377161
+ (id)singleton;	// 0x377151
- (id)init;	// 0x377171
- (void)_addPlayerWindowForController:(id)controller;	// 0x37a4f5
- (void)_addPlayerWindowUnderShroud;	// 0x37a855
- (void)_addShroudWindowWithSelector:(SEL)selector;	// 0x379ef1
- (id)_autoPresentPlayer;	// 0x37af01
- (void)_autoPresentTimerFired:(id)fired;	// 0x37b03d
- (int)_calculateAccessModeForExtrasAsset:(id)extrasAsset;	// 0x3797cd
- (void)_cloudMusicStopTimerFired:(id)fired;	// 0x379951
- (id)_copyAirPlayMetaDataTimeForPlayer:(id)player;	// 0x3799e1
- (void)_dataClientStatusChanged:(id)changed;	// 0x37b9bd
- (void)_deferredPresentPlayerAndOptions:(id)options;	// 0x37990d
- (id)_fetchCoverArtForPlayer:(id)player insertPlaceholder:(BOOL)placeholder;	// 0x379e49
- (Class)_findRegisteredPlayerClassForType:(id)type visualContent:(BOOL)content;	// 0x3793f5
- (void)_initializeMediaRemote;	// 0x379205
- (void)_networkStatusChanged:(id)changed;	// 0x37bb61
- (void)_periodicMetadataChanged:(id)changed;	// 0x37bd31
- (void)_playerAssetChanged:(id)changed;	// 0x37b509
- (void)_playerControllerUserEvent:(id)event;	// 0x37ab41
- (void)_playerControllerWasPopped:(id)popped;	// 0x37bcd9
- (id)_playerInstanceForAssetAtIndex:(long)index inTrackList:(id)trackList;	// 0x3794ad
- (id)_playerInstanceForClass:(Class)aClass;	// 0x37965d
- (void)_playerStackBankrupt:(id)bankrupt;	// 0x37ab61
- (void)_playerStateChanged:(id)changed;	// 0x37b221
- (void)_playerVolumeChanged:(id)changed;	// 0x37b5b1
- (void)_popupDelayTimerFired:(id)fired;	// 0x37aec1
- (id)_presentedPlayer;	// 0x37a449
- (id)_presentedPlayerController;	// 0x37a471
- (void)_removePlayerWindow:(BOOL)window;	// 0x37a909
- (void)_removePlayerWindowUnderShroud;	// 0x37aa41
- (void)_removeShroudWindow;	// 0x37a3e9
- (void)_removeShroudWindowWithAnimation;	// 0x37a175
- (void)_removeTrackPopup;	// 0x37abd5
- (void)_safetyTimerFired:(id)fired;	// 0x37a361
- (void)_screenSaverActivated:(id)activated;	// 0x37b765
- (void)_screenSaverDismissed:(id)dismissed;	// 0x37b7d1
- (void)_serverStatusChanged:(id)changed;	// 0x37b839
- (void)_showTrackPopupForPlayer:(id)player;	// 0x37ac39
- (void)_showTrackPopupWithDelayForPlayer:(id)player;	// 0x37ae21
- (void)_simulatePresentationForController:(id)controller;	// 0x37a7b5
- (BOOL)_stopCurrentPlayerUsingNewPlayer:(id)player;	// 0x379865
- (void)_updateAirPlayMetaData;	// 0x379d61
- (void)_updateAirPlayMetaDataTime;	// 0x379c79
- (void)_updateAutoPresentPlayer;	// 0x37b0ed
- (void)_updateCoverArt:(id)art;	// 0x37b6b5
- (void)_updateTrackPopupForPlayer:(id)player;	// 0x37ab75
- (void)_userActivity:(id)activity;	// 0x37bc51
- (id)activeAudioPlayer;	// 0x378105
- (id)activePlayer;	// 0x3780b9
- (id)airtunesAudioPlayer;	// 0x378249
- (id)audioPlayer;	// 0x3781f1
// converted property getter: - (double)autoPresentTimeout;	// 0x37891d
- (id)copyNowPlayingMetadataForPlayer:(id)player forAirPlay:(BOOL)airPlay;	// 0x378995
- (void)dealloc;	// 0x3774a5
- (void)dismissErrorsIfNeeded;	// 0x377811
- (void)endPresentation;	// 0x37806d
// declared property getter: - (id)externallyPresentedPlayerController;	// 0x3791e5
- (BOOL)handleVolumeRemoteAction:(int)action;	// 0x378549
- (void)manageExternallyPresentedPlayerController:(id)controller;	// 0x378025
- (id)playerForATVMediaAssetAtIndex:(long)index inTrackList:(id)trackList error:(id *)error;	// 0x3777d1
- (id)playerForMediaAsset:(id)mediaAsset error:(id *)error;	// 0x37764d
- (id)playerForMediaAssetAtIndex:(long)index inCollection:(id)collection error:(id *)error;	// 0x377739
- (id)playerForMediaAssetAtIndex:(long)index inTrackList:(id)trackList error:(id *)error;	// 0x3776b9
- (void)presentATVMediaAsset:(id)asset options:(id)options;	// 0x377ed1
- (void)presentATVMediaAssetAtIndex:(long)index inItemList:(id)itemList options:(id)options;	// 0x377f31
- (void)presentMediaAsset:(id)asset options:(id)options;	// 0x377e09
- (void)presentMediaAssetAtIndex:(long)index inCollection:(id)collection options:(id)options;	// 0x377fe9
- (void)presentMediaAssetAtIndex:(long)index inTrackList:(id)trackList options:(id)options;	// 0x377fad
- (void)presentPlayer:(id)player options:(id)options;	// 0x377859
- (BOOL)presentationCanBeScreenSaver;	// 0x378091
- (id)presentationWindow;	// 0x378081
- (void)registerPlayerClass:(Class)aClass;	// 0x3775c9
- (void)removePresentation;	// 0x378059
// converted property setter: - (void)setAutoPresentTimeout:(double)timeout;	// 0x3788e5
// declared property setter: - (void)setExternallyPresentedPlayerController:(id)controller;	// 0x3791f5
- (void)setJavascriptOverlay:(id)overlay;	// 0x378935
- (void)setTransportControlDisabled:(BOOL)disabled;	// 0x3788b9
- (void)showVolumeControl;	// 0x3783ed
- (void)showVolumeControlWithVolume:(float)volume;	// 0x37842d
- (void)stopMediaPlayersWithMediaFromProvider:(id)provider;	// 0x3782f9
- (id)videoPlayer;	// 0x3782a1
@end
