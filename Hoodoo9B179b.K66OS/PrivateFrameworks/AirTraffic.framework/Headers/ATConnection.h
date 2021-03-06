/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
 */

#import <NSObject.h> // Unknown library

@class ATXPCConnection;
@protocol ATConnectionDelegate;

@interface ATConnection : NSObject {
	ATXPCConnection *_connection;	// 4 = 0x4
	NSObject<ATConnectionDelegate> *_delegate;	// 8 = 0x8
	BOOL _registerForStatus;	// 12 = 0xc
	int _atcRunningToken;	// 16 = 0x10
	BOOL _atcRunning;	// 20 = 0x14
}
@property(retain, nonatomic) NSObject<ATConnectionDelegate> *delegate;	// G=0x33c63c9d; S=0x33c63cad; @synthesize=_delegate
- (id)init;	// 0x33c63885
- (id)_connection;	// 0x33c62f21
- (void)_handleMessage:(id)message;	// 0x33c62d05
- (void)_resetConnection;	// 0x33c62da1
- (void)_sendMessage:(id)message info:(id)info reply:(id)reply;	// 0x33c63161
- (void)_setRegisterForStatus:(BOOL)status;	// 0x33c63275
- (void)cancelSync;	// 0x33c63431
- (void)clearSyncData;	// 0x33c634a9
- (void)dataMigrationFinished;	// 0x33c634d5
- (void)dealloc;	// 0x33c63bc1
// declared property getter: - (id)delegate;	// 0x33c63c9d
- (BOOL)isSyncing:(BOOL *)syncing automatically:(BOOL *)automatically wirelessly:(BOOL *)wirelessly;	// 0x33c6352d
- (void)lowBatteryNotification;	// 0x33c63501
- (void)registerForStatus;	// 0x33c63371
- (void)requestSyncForLibrary:(id)library;	// 0x33c63399
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x33c63cad
- (void)unregisterForStatus;	// 0x33c63385
@end

