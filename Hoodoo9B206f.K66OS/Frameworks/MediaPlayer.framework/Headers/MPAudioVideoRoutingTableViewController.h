/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <UITableViewController.h> // Unknown library

@class NSMutableArray, MPAudioDeviceController;

@interface MPAudioVideoRoutingTableViewController : UITableViewController {
@private
	int _airPlayPasswordAlertDidAppearToken;	// 172 = 0xac
	BOOL _airPlayPasswordAlertDidAppearTokenIsValid;	// 176 = 0xb0
	MPAudioDeviceController *_audioDeviceController;	// 180 = 0xb4
	unsigned _avItemType;	// 184 = 0xb8
	BOOL _displayMirroringRoutes;	// 188 = 0xbc
	NSMutableArray *_routes;	// 192 = 0xc0
	BOOL _wirelessDisplayCapableRouteIsPicked;	// 196 = 0xc4
}
@property(readonly, assign, nonatomic) MPAudioDeviceController *audioDeviceController;	// G=0x303ea775; @synthesize=_audioDeviceController
+ (id)routesPreferringMirroring;	// 0x303ea11d
- (id)initWithType:(unsigned)type displayMirroringRoutes:(BOOL)routes;	// 0x303e87d9
- (id)_effectivePickedRouteReturningActualPickedRouteType:(int *)type;	// 0x303ea189
- (void)_mirroringSwitchValueDidChange:(id)_mirroringSwitchValue;	// 0x303e9fa5
- (id)_pickedRoute;	// 0x303ea2c5
- (id)_routes;	// 0x303ea37d
- (BOOL)_wirelessDisplayCapableRouteIsPicked;	// 0x303ea725
// declared property getter: - (id)audioDeviceController;	// 0x303ea775
- (void)audioDeviceControllerAudioRoutesChanged:(id)changed;	// 0x303e8d5d
- (void)dealloc;	// 0x303e8cc5
- (id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;	// 0x303e8f01
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;	// 0x303e97c5
- (int)tableView:(id)view numberOfRowsInSection:(int)section;	// 0x303e8ebd
- (id)tableView:(id)view willSelectRowAtIndexPath:(id)indexPath;	// 0x303e9739
- (void)viewDidAppear:(BOOL)view;	// 0x303e8e59
@end
