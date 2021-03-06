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
@property(readonly, assign, nonatomic) MPAudioDeviceController *audioDeviceController;	// G=0x31a6722d; @synthesize=_audioDeviceController
+ (id)routesPreferringMirroring;	// 0x31a66bd5
- (id)initWithType:(unsigned)type displayMirroringRoutes:(BOOL)routes;	// 0x31a65291
- (id)_effectivePickedRouteReturningActualPickedRouteType:(int *)type;	// 0x31a66c41
- (void)_mirroringSwitchValueDidChange:(id)_mirroringSwitchValue;	// 0x31a66a5d
- (id)_pickedRoute;	// 0x31a66d7d
- (id)_routes;	// 0x31a66e35
- (BOOL)_wirelessDisplayCapableRouteIsPicked;	// 0x31a671dd
// declared property getter: - (id)audioDeviceController;	// 0x31a6722d
- (void)audioDeviceControllerAudioRoutesChanged:(id)changed;	// 0x31a65815
- (void)dealloc;	// 0x31a6577d
- (id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;	// 0x31a659b9
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;	// 0x31a6627d
- (int)tableView:(id)view numberOfRowsInSection:(int)section;	// 0x31a65975
- (id)tableView:(id)view willSelectRowAtIndexPath:(id)indexPath;	// 0x31a661f1
- (void)viewDidAppear:(BOOL)view;	// 0x31a65911
@end

