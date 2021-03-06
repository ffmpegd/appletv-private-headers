/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRSingleton.h"

@class NSTimer, NSObject, BRMediaPlayerController, NSMutableArray, NSDictionary, BRWindow;
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
@property(assign) double autoPresentTimeout;	// G=0x37aadd; S=0x37aaa5; converted property
@property(retain, nonatomic) BRMediaPlayerController *externallyPresentedPlayerController;	// G=0x37b3a5; S=0x37b3b5; @synthesize=_externallyPresentedPlayerController
+ (void)setSingleton:(id)singleton;	// 0x3792f1
+ (id)singleton;	// 0x3792e1
- (id)init;	// 0x379301
- (void)_addPlayerWindowForController:(id)controller;	// 0x37c6b5
- (void)_addPlayerWindowUnderShroud;	// 0x37ca15
- (void)_addShroudWindowWithSelector:(SEL)selector;	// 0x37c0b1
- (id)_autoPresentPlayer;	// 0x37d0c1
- (void)_autoPresentTimerFired:(id)fired;	// 0x37d1fd
- (int)_calculateAccessModeForExtrasAsset:(id)extrasAsset;	// 0x37b98d
- (void)_cloudMusicStopTimerFired:(id)fired;	// 0x37bb11
- (id)_copyAirPlayMetaDataTimeForPlayer:(id)player;	// 0x37bba1
- (void)_dataClientStatusChanged:(id)changed;	// 0x37db7d
- (void)_deferredPresentPlayerAndOptions:(id)options;	// 0x37bacd
- (id)_fetchCoverArtForPlayer:(id)player insertPlaceholder:(BOOL)placeholder;	// 0x37c009
- (Class)_findRegisteredPlayerClassForType:(id)type visualContent:(BOOL)content;	// 0x37b5b5
- (void)_initializeMediaRemote;	// 0x37b3c5
- (void)_networkStatusChanged:(id)changed;	// 0x37dd21
- (void)_periodicMetadataChanged:(id)changed;	// 0x37def1
- (void)_playerAssetChanged:(id)changed;	// 0x37d6c9
- (void)_playerControllerUserEvent:(id)event;	// 0x37cd01
- (void)_playerControllerWasPopped:(id)popped;	// 0x37de99
- (id)_playerInstanceForAssetAtIndex:(long)index inTrackList:(id)trackList;	// 0x37b66d
- (id)_playerInstanceForClass:(Class)aClass;	// 0x37b81d
- (void)_playerStackBankrupt:(id)bankrupt;	// 0x37cd21
- (void)_playerStateChanged:(id)changed;	// 0x37d3e1
- (void)_playerVolumeChanged:(id)changed;	// 0x37d771
- (void)_popupDelayTimerFired:(id)fired;	// 0x37d081
- (id)_presentedPlayer;	// 0x37c609
- (id)_presentedPlayerController;	// 0x37c631
- (void)_removePlayerWindow:(BOOL)window;	// 0x37cac9
- (void)_removePlayerWindowUnderShroud;	// 0x37cc01
- (void)_removeShroudWindow;	// 0x37c5a9
- (void)_removeShroudWindowWithAnimation;	// 0x37c335
- (void)_removeTrackPopup;	// 0x37cd95
- (void)_safetyTimerFired:(id)fired;	// 0x37c521
- (void)_screenSaverActivated:(id)activated;	// 0x37d925
- (void)_screenSaverDismissed:(id)dismissed;	// 0x37d991
- (void)_serverStatusChanged:(id)changed;	// 0x37d9f9
- (void)_showTrackPopupForPlayer:(id)player;	// 0x37cdf9
- (void)_showTrackPopupWithDelayForPlayer:(id)player;	// 0x37cfe1
- (void)_simulatePresentationForController:(id)controller;	// 0x37c975
- (BOOL)_stopCurrentPlayerUsingNewPlayer:(id)player;	// 0x37ba25
- (void)_updateAirPlayMetaData;	// 0x37bf21
- (void)_updateAirPlayMetaDataTime;	// 0x37be39
- (void)_updateAutoPresentPlayer;	// 0x37d2ad
- (void)_updateCoverArt:(id)art;	// 0x37d875
- (void)_updateTrackPopupForPlayer:(id)player;	// 0x37cd35
- (void)_userActivity:(id)activity;	// 0x37de11
- (id)activeAudioPlayer;	// 0x37a2c1
- (id)activePlayer;	// 0x37a275
- (id)airtunesAudioPlayer;	// 0x37a405
- (id)audioPlayer;	// 0x37a3ad
// converted property getter: - (double)autoPresentTimeout;	// 0x37aadd
- (id)copyNowPlayingMetadataForPlayer:(id)player forAirPlay:(BOOL)airPlay;	// 0x37ab55
- (void)dealloc;	// 0x379635
- (void)dismissErrorsIfNeeded;	// 0x3799a1
- (void)endPresentation;	// 0x37a1fd
- (void)endPresentationWithError:(id)error;	// 0x37a211
// declared property getter: - (id)externallyPresentedPlayerController;	// 0x37b3a5
- (BOOL)handleVolumeRemoteAction:(int)action;	// 0x37a709
- (void)manageExternallyPresentedPlayerController:(id)controller;	// 0x37a1b5
- (id)playerForATVMediaAssetAtIndex:(long)index inTrackList:(id)trackList error:(id *)error;	// 0x379961
- (id)playerForMediaAsset:(id)mediaAsset error:(id *)error;	// 0x3797dd
- (id)playerForMediaAssetAtIndex:(long)index inCollection:(id)collection error:(id *)error;	// 0x3798c9
- (id)playerForMediaAssetAtIndex:(long)index inTrackList:(id)trackList error:(id *)error;	// 0x379849
- (void)presentATVMediaAsset:(id)asset options:(id)options;	// 0x37a061
- (void)presentATVMediaAssetAtIndex:(long)index inItemList:(id)itemList options:(id)options;	// 0x37a0c1
- (void)presentMediaAsset:(id)asset options:(id)options;	// 0x379f99
- (void)presentMediaAssetAtIndex:(long)index inCollection:(id)collection options:(id)options;	// 0x37a179
- (void)presentMediaAssetAtIndex:(long)index inTrackList:(id)trackList options:(id)options;	// 0x37a13d
- (void)presentPlayer:(id)player options:(id)options;	// 0x3799e9
- (BOOL)presentationCanBeScreenSaver;	// 0x37a24d
- (id)presentationWindow;	// 0x37a23d
- (void)registerPlayerClass:(Class)aClass;	// 0x379759
- (void)removePresentation;	// 0x37a1e9
// converted property setter: - (void)setAutoPresentTimeout:(double)timeout;	// 0x37aaa5
// declared property setter: - (void)setExternallyPresentedPlayerController:(id)controller;	// 0x37b3b5
- (void)setJavascriptOverlay:(id)overlay;	// 0x37aaf5
- (void)setTransportControlDisabled:(BOOL)disabled;	// 0x37aa79
- (void)showVolumeControl;	// 0x37a5a9
- (void)showVolumeControlWithVolume:(float)volume;	// 0x37a5e9
- (void)stopMediaPlayersWithMediaFromProvider:(id)provider;	// 0x37a4b5
- (id)videoPlayer;	// 0x37a45d
@end

