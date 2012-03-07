/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

#import "NSNetServiceBrowserDelegate.h"
#import "NSNetServiceDelegate.h"
#import "DeviceManager.h"

@class NSNetServiceBrowser, NSMutableArray;

@interface PTPCameraDeviceManager : DeviceManager <NSNetServiceBrowserDelegate, NSNetServiceDelegate> {
	NSNetServiceBrowser *_netServiceBrowser;	// 16 = 0x10
	NSMutableArray *_netServices;	// 20 = 0x14
}
- (id)init;	// 0x3223e8b1
- (void)closeDeviceImp:(id)imp;	// 0x3223d7b5
- (void)closeSessionImp:(id)imp;	// 0x3223d4a5
- (void)dealloc;	// 0x3223c531
- (void)deleteFileImp:(id)imp;	// 0x3223cd11
- (void)downloadFileImp:(id)imp;	// 0x3223c831
- (void)ejectImp:(id)imp;	// 0x3223c78d
- (void)getMetadataOfFileImp:(id)fileImp;	// 0x3223cf2d
- (void)getThumbnailOfFileImp:(id)fileImp;	// 0x3223d0f5
- (int)handleEvent:(id)event onDevice:(id)device contextInfo:(void *)info;	// 0x3223c659
- (void)handleEventImp:(id)imp;	// 0x3223c55d
- (void)netService:(id)service didNotResolve:(id)resolve;	// 0x3223dfb9
- (void)netService:(id)service didUpdateTXTRecordData:(id)data;	// 0x3223dee1
- (void)netServiceBrowser:(id)browser didFindService:(id)service moreComing:(BOOL)coming;	// 0x3223e7a1
- (void)netServiceBrowser:(id)browser didRemoveService:(id)service moreComing:(BOOL)coming;	// 0x3223e735
- (void)netServiceBrowserDidStopSearch:(id)netServiceBrowser;	// 0x3223e6c9
- (void)netServiceDidResolveAddress:(id)netService;	// 0x3223e05d
- (void)netServiceDidStop:(id)netService;	// 0x3223df4d
- (void)openDeviceImp:(id)imp;	// 0x3223da45
- (void)openSessionImp:(id)imp;	// 0x3223d5d9
- (void)startRunning;	// 0x3223e885
- (void)stopRunning;	// 0x3223e859
- (void)syncClockImp:(id)imp;	// 0x3223d38d
- (id)usbLocationIDsOfPTPDevices;	// 0x3223dd21
@end

