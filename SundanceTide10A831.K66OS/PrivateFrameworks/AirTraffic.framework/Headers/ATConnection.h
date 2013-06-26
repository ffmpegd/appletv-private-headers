/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
 */

#import <NSObject.h> // Unknown library

@class ATXPCConnection, NSMutableArray;
@protocol ATConnectionDelegate;

@interface ATConnection : NSObject {
	ATXPCConnection *_connection;	// 4 = 0x4
	NSObject<ATConnectionDelegate> *_delegate;	// 8 = 0x8
	BOOL _registerForStatus;	// 12 = 0xc
	NSMutableArray *_registeredDataclasses;	// 16 = 0x10
	int _atcRunningToken;	// 20 = 0x14
	BOOL _atcRunning;	// 24 = 0x18
}
@property(retain, nonatomic) NSObject<ATConnectionDelegate> *delegate;	// G=0x32c231f5; S=0x32c23205; @synthesize=_delegate
- (id)init;	// 0x32c22e79
- (id)_connection;	// 0x32c22181
- (void)_handleMessage:(id)message;	// 0x32c21d81
- (void)_resetConnection;	// 0x32c22005
- (void)_sendMessage:(id)message info:(id)info reply:(id)reply;	// 0x32c223c9
- (void)_sendStatusRegistration;	// 0x32c224dd
- (void)cancelSync;	// 0x32c22959
- (void)clearSyncData;	// 0x32c229d1
- (void)dataMigrationFinished;	// 0x32c229fd
- (void)dealloc;	// 0x32c23109
// declared property getter: - (id)delegate;	// 0x32c231f5
- (BOOL)isSyncing:(BOOL *)syncing automatically:(BOOL *)automatically wirelessly:(BOOL *)wirelessly;	// 0x32c22b05
- (void)keepATCAlive:(BOOL)alive;	// 0x32c22a91
- (void)lowBatteryNotification;	// 0x32c22a65
- (void)prioritizeAsset:(id)asset forDataclass:(id)dataclass;	// 0x32c227f1
- (void)purgePartialAsset:(id)asset forDataclass:(id)dataclass;	// 0x32c22859
- (void)registerForAssetProgressForDataclass:(id)dataclass;	// 0x32c22661
- (void)registerForStatus;	// 0x32c225e9
- (void)requestSyncForLibrary:(id)library;	// 0x32c228c1
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x32c23205
- (void)unregisterForStatus;	// 0x32c22625
@end
