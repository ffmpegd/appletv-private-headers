/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
 */

#import <NSObject.h> // Unknown library

@class PSSpecifierStub, UIAlertView, UITableView, NSMutableArray, NSPredicate, NSString;
@protocol BTDevicePickerDelegate;

@interface BTDevicePicker : NSObject {
	UIAlertView *_alertView;	// 4 = 0x4
	UITableView *_tableView;	// 8 = 0x8
	NSMutableArray *_deviceList;	// 12 = 0xc
	id<BTDevicePickerDelegate> _delegate;	// 16 = 0x10
	NSString *_title;	// 20 = 0x14
	unsigned _service;	// 24 = 0x18
	NSPredicate *_predicate;	// 28 = 0x1c
	BOOL _showingAlert;	// 32 = 0x20
	BOOL _checkingPaired;	// 33 = 0x21
	PSSpecifierStub *_connectingSpec;	// 36 = 0x24
	Class _btSSPRequestClass;	// 40 = 0x28
	Class _btAlertClass;	// 44 = 0x2c
	id _btSSPAlert;	// 48 = 0x30
	id _btAlert;	// 52 = 0x34
}
@property(assign, nonatomic) id<BTDevicePickerDelegate> delegate;	// G=0x30e7e97d; S=0x30e7e98d; @synthesize=_delegate
- (id)initWithTitle:(id)title service:(unsigned)service discoveryNameFilter:(id)filter;	// 0x30e7c799
- (void)_btSSPConfirmationHandler:(id)handler;	// 0x30e7dc25
- (void)_btSSPNumericComparisonHandler:(id)handler;	// 0x30e7dcc9
- (void)_btSSPPasskeyDisplayHandler:(id)handler;	// 0x30e7dda9
- (void)alertSheetDismissed:(id)dismissed;	// 0x30e7e689
- (void)alertView:(id)view clickedButtonAtIndex:(int)index;	// 0x30e7d459
- (void)applicationWillResignActive:(id)application;	// 0x30e7d3d9
- (void)authenticationRequestHandler:(id)handler;	// 0x30e7de89
- (void)checkAttachTimeout;	// 0x30e7d1cd
- (void)cleanupPairing;	// 0x30e7d191
- (void)dealloc;	// 0x30e7cbd9
// declared property getter: - (id)delegate;	// 0x30e7e97d
- (void)deviceConnectionCompleteHandler:(id)handler;	// 0x30e7e4c9
- (void)deviceDiscoveryStoppedHandler:(id)handler;	// 0x30e7d719
- (void)deviceFoundHandler:(id)handler;	// 0x30e7d775
- (void)deviceLostHandler:(id)handler;	// 0x30e7db65
- (void)deviceNameChangedHandler:(id)handler;	// 0x30e7d939
- (void)devicePairedHandler:(id)handler;	// 0x30e7e275
- (void)dismissAnimated:(BOOL)animated;	// 0x30e7d0cd
- (void)powerChanged:(id)changed;	// 0x30e7d5b1
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x30e7e98d
- (void)show;	// 0x30e7cdc1
- (void)showInternal;	// 0x30e7ce9d
- (void)startScanning;	// 0x30e7d271
- (id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;	// 0x30e7e891
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;	// 0x30e7e705
- (int)tableView:(id)view numberOfRowsInSection:(int)section;	// 0x30e7e871
@end
