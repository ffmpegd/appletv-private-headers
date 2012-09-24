/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"

@class BRPhotoMediaCollection, BRMediaPlayer;
@protocol BRProvider;

__attribute__((visibility("hidden")))
@interface RUISlideShowControl : BRControl {
	BRMediaPlayer *_player;	// 84 = 0x54
	id<BRProvider> _provider;	// 88 = 0x58
	BRPhotoMediaCollection *_collection;	// 92 = 0x5c
	BOOL _screenSaverAutoFired;	// 96 = 0x60
}
- (id)init;	// 0x3a0f01
- (void).cxx_destruct;	// 0x3a129d
- (void)_cupidDataClientUpdated:(id)updated;	// 0x3a131d
- (void)_initiatePlaybackForMediaUpdate:(BOOL)mediaUpdate;	// 0x3a1b9d
- (void)_photoDatabaseUpdated:(id)updated;	// 0x3a1581
- (void)_photoPlayerVisusalsChanged:(id)changed;	// 0x3a1509
- (void)_providerUpdated:(id)updated;	// 0x3a13f1
- (void)_screenSaverCacheUpdated:(id)updated;	// 0x3a12e5
- (void)_screenSaverDataReady:(id)ready;	// 0x3a15e9
- (void)_screenSaverDataReadyForMediaUpdate:(id)mediaUpdate;	// 0x3a1a7d
- (void)_setScreenSaverAutoFired:(BOOL)fired;	// 0x3a21ed
- (void)_startSlideshowWithCollection:(id)collection;	// 0x3a1ccd
- (void)controlWasActivated;	// 0x3a1105
- (void)controlWasDeactivated;	// 0x3a1149
- (void)dealloc;	// 0x3a1075
- (void)layoutSubcontrols;	// 0x3a1199
@end
