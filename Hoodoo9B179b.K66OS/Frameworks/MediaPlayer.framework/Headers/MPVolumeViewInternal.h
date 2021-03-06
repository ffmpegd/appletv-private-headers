/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library

@class MPVolumeSlider, MPAudioVideoRoutingPopoverController, MPAudioDeviceController, UILabel, UIButton, MPAudioVideoRoutingActionSheet;

@interface MPVolumeViewInternal : NSObject {
@private
	MPVolumeSlider *_volumeSlider;	// 4 = 0x4
	int _style;	// 8 = 0x8
	UIButton *_routeButton;	// 12 = 0xc
	UILabel *_routeLabel;	// 16 = 0x10
	MPAudioDeviceController *_audioDeviceController;	// 20 = 0x14
	BOOL _showsVolumeSlider;	// 24 = 0x18
	BOOL _showsRouteButton;	// 25 = 0x19
	BOOL _volumeSliderShrinksFromBothEnds;	// 26 = 0x1a
	BOOL _hidesRouteLabelWhenNoRouteChoice;	// 27 = 0x1b
	BOOL _showingSlider;	// 28 = 0x1c
	BOOL _showingLabel;	// 29 = 0x1d
	BOOL _showingButton;	// 30 = 0x1e
	MPAudioVideoRoutingActionSheet *_actionSheet;	// 32 = 0x20
	MPAudioVideoRoutingPopoverController *_routePopoverController;	// 36 = 0x24
	BOOL _routeDiscoveryEnabled;	// 40 = 0x28
}
@end

