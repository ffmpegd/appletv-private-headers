/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRSingleton.h"

@class BRStateMachine, NSDictionary, NSArray, ATVSliderMenuItemView, NSTimer;

__attribute__((visibility("hidden")))
@interface ATVAirTunesManager : BRSingleton {
	BRStateMachine *_stateMachine;	// 4 = 0x4
	BOOL _alternateSpeakersEnabled;	// 8 = 0x8
	BOOL _shouldReconnectOnRouteChange;	// 9 = 0x9
	BOOL _preparingToSleep;	// 10 = 0xa
	NSTimer *_speakerSleepTimer;	// 12 = 0xc
	NSArray *_pickableRoutes;	// 16 = 0x10
	NSArray *_pickableSpeakers;	// 20 = 0x14
	NSArray *_pickableScreens;	// 24 = 0x18
	NSDictionary *_cachedDefaultRoute;	// 28 = 0x1c
	NSDictionary *_previousRoute;	// 32 = 0x20
	BOOL _updatesDisabledForScreenSaver;	// 36 = 0x24
	NSTimer *_disableRouteTimer;	// 40 = 0x28
	ATVSliderMenuItemView *_onScreenVolumeSlider;	// 44 = 0x2c
}
@property(retain) ATVSliderMenuItemView *onScreenVolumeSlider;	// G=0xb16fd; S=0xb1711; @synthesize=_onScreenVolumeSlider
@property(readonly, retain) NSArray *pickableScreens;	// G=0xb0a7d; converted property
@property(readonly, retain) NSArray *pickableSpeakers;	// G=0xb0745; converted property
+ (void)setSingleton:(id)singleton;	// 0xaed61
+ (id)singleton;	// 0xaed51
- (id)init;	// 0xaed85
- (void).cxx_destruct;	// 0xb1721
- (void)_airPlayActiveAudioRouteChanged:(id)changed;	// 0xb2f1d
- (id)_airPlayAuthFailed:(id)failed;	// 0xb23c9
- (void)_airPlayPickableRoutesChanged:(id)changed;	// 0xb2e25
- (id)_cleanUpSpeakerState:(id)state;	// 0xb2939
- (void)_deviceWillSleep:(id)_device;	// 0xaf9d5
- (void)_deviceWillWake:(id)_device;	// 0xafa2d
- (void)_displayModeChanged:(id)changed;	// 0xafb69
- (float)_displayVolumeValue;	// 0xaf241
- (void)_initializeStateMachine:(id)machine;	// 0xb17e1
- (BOOL)_isMuted;	// 0xaf2b9
- (BOOL)_isRouteToMe:(id)me;	// 0xb2d71
- (id)_newPasswordDialogForSpeaker:(id)speaker;	// 0xb1265
- (void)_portStatusDidChange:(id)_portStatus;	// 0xb2fb1
- (void)_postSpeakerWasSelectedNotificationForSpeaker:(id)speaker;	// 0xb2a35
- (void)_refreshSpeakerUpdateState;	// 0xafc35
- (void)_screenSaverActivated:(id)activated;	// 0xafbf5
- (void)_screenSaverDeactivated:(id)deactivated;	// 0xafc15
- (id)_selectRoute:(id)route withPassword:(id)password showDialog:(BOOL)dialog isTransient:(BOOL)transient;	// 0xb0df5
- (id)_selectedSpeakerInfo;	// 0xb04c9
- (void)_setSelectedSpeakerInfo:(id)info;	// 0xb06bd
- (id)_supportedMediaTypes;	// 0xb2bad
- (void)_updateSpeakerSelectionAfterSleep:(id)sleep;	// 0xafaad
- (BOOL)areAlternateSpeakersSelected;	// 0xafdc9
- (id)bonjourDeviceID;	// 0xafe95
- (id)cachedPasswordForSpeaker:(id)speaker;	// 0xb14bd
- (void)configureSelectedSpeakerSliderMenuItem:(id)item;	// 0xaf305
- (void)dealloc;	// 0xaf1a9
- (id)defaultRoute;	// 0xb0be5
- (BOOL)destinationIsAppleTV;	// 0xafdf5
- (BOOL)disableSelectedRoute;	// 0xb112d
- (void)disableSelectedRouteWithDelay:(float)delay;	// 0xb11f5
- (BOOL)doesSpeakerHavePINCode:(id)code;	// 0xb028d
- (BOOL)doesSpeakerHavePassword:(id)password;	// 0xb0241
- (BOOL)doesSpeakerSupportAirPlayAudio:(id)audio;	// 0xb02d9
- (BOOL)doesSpeakerSupportAirPlayScreen:(id)screen;	// 0xb0371
- (BOOL)doesSpeakerSupportAirPlayVideo:(id)video;	// 0xb0325
- (BOOL)enableSelectedRoute;	// 0xb1039
- (BOOL)isActivelyUsingAlternateSpeakers;	// 0xafd8d
- (BOOL)isDefaultRoute:(id)route;	// 0xb01e5
- (BOOL)isSpeakerConnectedForInfo:(id)info;	// 0xb00fd
- (int)numPickableRoutes;	// 0xafeb1
- (int)numPickableScreens;	// 0xafed1
- (int)numPickableSpeakers;	// 0xaff0d
// declared property getter: - (id)onScreenVolumeSlider;	// 0xb16fd
// converted property getter: - (id)pickableScreens;	// 0xb0a7d
// converted property getter: - (id)pickableSpeakers;	// 0xb0745
- (id)remoteSpeakerInfoAtIndex:(int)index;	// 0xaff49
- (id)remoteSpeakerInfoWithUID:(id)uid;	// 0xaff95
- (BOOL)selectRoute:(id)route;	// 0xb0d41
- (void)setCachedPassword:(id)password forSpeaker:(id)speaker;	// 0xb15b5
// declared property setter: - (void)setOnScreenVolumeSlider:(id)slider;	// 0xb1711
- (id)speakerNameForInfo:(id)info;	// 0xb03e1
- (id)speakerUIDForInfo:(id)info;	// 0xb03bd
- (id)speakersProviderWithHandler:(id)handler title:(id)title initialSelection:(long *)selection disableAlternateRoutes:(BOOL)routes;	// 0xaf545
@end

