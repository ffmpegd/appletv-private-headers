/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
 */

#import "CBXpcConnectionDelegate.h"
#import "CBCentralManager.h"

@class CBXpcConnection, NSMutableDictionary;

@interface CBConcreteCentralManager : CBCentralManager <CBXpcConnectionDelegate> {
	CBXpcConnection *_connection;	// 12 = 0xc
	NSMutableDictionary *_peripherals;	// 16 = 0x10
	BOOL _isScanning;	// 20 = 0x14
}
- (id)initWithDelegate:(id)delegate queue:(id)queue;	// 0x32e3d199
- (void)cancelPeripheralConnection:(id)connection;	// 0x32e3d5c5
- (void)cancelPeripheralConnection:(id)connection force:(BOOL)force;	// 0x32e3d5d9
- (void)connectPeripheral:(id)peripheral options:(id)options;	// 0x32e3d495
- (void)dealloc;	// 0x32e3d101
- (void)handleConnectedPeripheralsRetrieved:(id)retrieved;	// 0x32e3d9ed
- (void)handlePeripheralConnectionCompleted:(id)completed;	// 0x32e3e015
- (void)handlePeripheralDisconnectionCompleted:(id)completed;	// 0x32e3e175
- (void)handlePeripheralDiscovered:(id)discovered;	// 0x32e3db71
- (void)handlePeripheralEvent:(id)event selector:(SEL)selector;	// 0x32e3e279
- (void)handlePeripheralsRetrieved:(id)retrieved;	// 0x32e3d869
- (void)handleStateUpdated:(id)updated;	// 0x32e3d709
- (void)orphanPeripherals;	// 0x32e3cffd
- (id)peripheralForHandle:(id)handle args:(id)args;	// 0x32e3cd61
- (void)releasePeripheral:(id)peripheral;	// 0x32e3caed
- (void)retainPeripheral:(id)peripheral;	// 0x32e3c951
- (void)retrieveConnectedPeripherals;	// 0x32e3d399
- (void)retrievePeripherals:(id)peripherals;	// 0x32e3d27d
- (void)scanForPeripheralsWithServices:(id)services options:(id)options;	// 0x32e3d3ad
- (void)sendMsg:(int)msg args:(id)args;	// 0x32e3c8f9
- (void)stopScan;	// 0x32e3d465
- (void)xpcConnection:(id)connection didReceiveMessage:(int)message arguments:(id)arguments;	// 0x32e3e2cd
- (void)xpcConnectionDidReset:(id)xpcConnection;	// 0x32e3e501
@end

