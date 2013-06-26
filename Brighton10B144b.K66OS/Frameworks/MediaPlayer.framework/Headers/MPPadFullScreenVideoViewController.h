/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MPAbstractFullScreenVideoViewController.h"
#import "MediaPlayer-Structs.h"
#import "MPVideoOverlayDelegate.h"
#import "UIPopoverControllerDelegate.h"

@class MPAudioVideoRoutingPopoverController, MPPadFullScreenVideoOverlay;

@interface MPPadFullScreenVideoViewController : MPAbstractFullScreenVideoViewController <MPVideoOverlayDelegate, UIPopoverControllerDelegate> {
	MPPadFullScreenVideoOverlay *_fullscreenVideoOverlay;	// 336 = 0x150
	MPAudioVideoRoutingPopoverController *_routePopoverController;	// 340 = 0x154
}
- (id)init;	// 0x31ce02a5
- (void)_availableRoutesDidChangeNotification:(id)_availableRoutes;	// 0x31ce1525
- (void)_hideOverlayAnimationFinished:(id)finished;	// 0x31ce1375
- (void)_rotationAnimationFinished:(id)finished;	// 0x31ce15a1
- (BOOL)canChangeScaleMode;	// 0x31ce0b5d
- (BOOL)controlsOverlayVisible;	// 0x31ce09cd
- (void)dealloc;	// 0x31ce02d1
- (void)didChangeToInterfaceOrientation:(int)interfaceOrientation;	// 0x31ce06d5
- (void)hideOverlayAnimated:(BOOL)animated;	// 0x31ce0f59
- (void)loadView;	// 0x31ce047d
- (void)overlayDidDismissAlternateTracksPopover:(id)overlay;	// 0x31ce1511
- (void)overlayTappedBackButton:(id)button;	// 0x31ce1465
- (void)overlayTappedScaleModeButton:(id)button;	// 0x31ce14e5
- (id)overlayView;	// 0x31ce0bd1
- (void)popoverControllerDidDismissPopover:(id)popoverController;	// 0x31ce1319
- (void)registerForPlayerNotifications;	// 0x31ce0391
- (void)setDesiredParts:(unsigned long long)parts animate:(BOOL)animate;	// 0x31ce084d
- (void)setDisabledParts:(unsigned long long)parts;	// 0x31ce0955
- (void)setItem:(id)item;	// 0x31ce0a25
- (void)setPlayer:(id)player;	// 0x31ce0725
- (void)setScaleMode:(unsigned)mode animated:(BOOL)animated;	// 0x31ce0aad
- (void)setVisibleParts:(unsigned long long)parts animate:(BOOL)animate;	// 0x31ce08d1
- (void)showOverlayAnimated:(BOOL)animated;	// 0x31ce0d59
- (void)startTicking;	// 0x31ce05c9
- (void)stopTicking;	// 0x31ce0609
- (void)swipableView:(id)view tappedWithCount:(unsigned)count atLocation:(CGPoint)location;	// 0x31ce076d
- (BOOL)transportControls:(id)controls tappedButtonPart:(unsigned long long)part;	// 0x31ce1169
- (void)unregisterForPlayerNotifications;	// 0x31ce040d
- (id)videoOverlayView;	// 0x31ce0d39
- (id)videoOverlayViewIfLoaded;	// 0x31ce0d49
- (void)videoView_itemTypeAvailableNotification:(id)notification;	// 0x31ce10c1
- (void)viewWillDisappear:(BOOL)view;	// 0x31ce04cd
- (void)willChangeToInterfaceOrientation:(int)interfaceOrientation;	// 0x31ce0629
@end
