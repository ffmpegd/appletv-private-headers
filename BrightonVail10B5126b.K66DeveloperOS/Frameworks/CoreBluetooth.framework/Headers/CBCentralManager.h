/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
 */

#import <NSObject.h> // Unknown library
#import "CoreBluetooth-Structs.h"

@protocol CBCentralManagerDelegate;

@interface CBCentralManager : NSObject {
	id<CBCentralManagerDelegate> _delegate;	// 4 = 0x4
	int _state;	// 8 = 0x8
}
@property(assign, nonatomic) id<CBCentralManagerDelegate> delegate;	// G=0x30e76485; S=0x30e76495; @synthesize=_delegate
@property(readonly, assign) int state;	// G=0x30e764a5; @synthesize=_state
+ (id)allocWithZone:(NSZone *)zone;	// 0x30e763c1
- (id)initWithDelegate:(id)delegate queue:(id)queue;	// 0x30e763f1
- (void)cancelPeripheralConnection:(id)connection;	// 0x30e76471
- (void)connectPeripheral:(id)peripheral options:(id)options;	// 0x30e7645d
// declared property getter: - (id)delegate;	// 0x30e76485
- (void)retrieveConnectedPeripherals;	// 0x30e76421
- (void)retrievePeripherals:(id)peripherals;	// 0x30e7640d
- (void)scanForPeripheralsWithServices:(id)services options:(id)options;	// 0x30e76435
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x30e76495
// declared property getter: - (int)state;	// 0x30e764a5
- (void)stopScan;	// 0x30e76449
@end
