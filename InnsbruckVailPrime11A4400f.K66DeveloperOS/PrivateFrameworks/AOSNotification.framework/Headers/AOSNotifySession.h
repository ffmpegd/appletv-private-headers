/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AOSNotification.framework/AOSNotification
 */

#import </libobjc.A.h>

@class NSXPCConnection, CPDistributedNotificationCenter;
@protocol AOSNotifySessionDelegate;

@interface AOSNotifySession : NSObject {
	NSXPCConnection *_xpcConnection;	// 4 = 0x4
	CPDistributedNotificationCenter *_center;	// 8 = 0x8
	id<AOSNotifySessionDelegate> _delegate;	// 12 = 0xc
}
@property(retain, nonatomic) CPDistributedNotificationCenter *center;	// G=0x2fb3c6e1; S=0x2fb3c6f1; @synthesize=_center
@property(assign, nonatomic) id<AOSNotifySessionDelegate> delegate;	// G=0x2fb3c701; S=0x2fb3c711; @synthesize=_delegate
@property(retain, nonatomic) NSXPCConnection *xpcConnection;	// G=0x2fb3c6c1; S=0x2fb3c6d1; @synthesize=_xpcConnection
+ (id)copyStoreAccount;	// 0x2fb3c5b9
+ (id)sharedInstance;	// 0x2fb372e5
- (id)init;	// 0x2fb37349
- (id)initWithDelegate:(id)delegate;	// 0x2fb37801
- (void)_destroyXPCConnection;	// 0x2fb37749
- (void)_stopVettingNotifications;	// 0x2fb3c415
- (void)_vetFinished:(id)finished;	// 0x2fb3c4a5
- (void)_vetResultReceived:(id)received;	// 0x2fb3c399
- (void)activationLockStateWithCompletion:(id)completion;	// 0x2fb3acd9
- (id)addFMFAccount:(id)account;	// 0x2fb3b705
- (id)cancelEmailVet;	// 0x2fb37cbd
// declared property getter: - (id)center;	// 0x2fb3c6e1
- (id)currentXPCConnection;	// 0x2fb37441
- (void)dealloc;	// 0x2fb37399
// declared property getter: - (id)delegate;	// 0x2fb3c701
- (void)deviceActivationDidSucceed;	// 0x2fb38f99
- (void)didEnterFMFRegion:(id)region atLocation:(id)location;	// 0x2fb3b48d
- (void)didExitFMFRegion:(id)region atLocation:(id)location;	// 0x2fb3b5c9
- (id)disableActivationLockUsingToken:(id)token;	// 0x2fb3b165
- (id)disableFMIPUsingToken:(id)token inContext:(int)context;	// 0x2fb3a921
- (void)disableLostMode;	// 0x2fb387f1
- (void)dumpDebugInfo:(id)info;	// 0x2fb3c2b1
- (id)enableActivationLock;	// 0x2fb3ae41
- (id)enableFMIPInContext:(int)context;	// 0x2fb3a5f9
- (id)enableLostModeWithInfo:(id)info;	// 0x2fb384c9
- (id)fmfDeviceId;	// 0x2fb39259
- (id)fmipAccount;	// 0x2fb39d09
- (id)fmipDeviceId;	// 0x2fb395e9
- (void)fmipStateWithCompletion:(id)completion;	// 0x2fb390f1
- (id)iCloudAccount;	// 0x2fb3a181
- (void)isActivationLockStateChangeInProgressWithCompletion:(id)completion;	// 0x2fb3ac51
- (void)isFMIPStateChangeInProgressWithCompletion:(id)completion;	// 0x2fb39069
- (BOOL)lockdownShouldDisableDevicePairing;	// 0x2fb38c2d
- (BOOL)lockdownShouldDisableDeviceRestore;	// 0x2fb388c1
- (id)lostModeInfo;	// 0x2fb38181
- (BOOL)lostModeIsActive;	// 0x2fb37ff5
- (id)lostModeParams;	// 0x2fb383c9
- (id)newErrorForCode:(int)code message:(id)message;	// 0x2fb37789
- (id)removeFMFAccountWithUsername:(id)username;	// 0x2fb3ba2d
- (id)retrieveAllAccounts:(id *)accounts;	// 0x2fb3c601
- (id)retrieveFMFAccount:(id *)account;	// 0x2fb3bd55
// declared property setter: - (void)setCenter:(id)center;	// 0x2fb3c6f1
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x2fb3c711
// declared property setter: - (void)setXpcConnection:(id)connection;	// 0x2fb3c6d1
- (void)startListeningOnTopic:(id)topic;	// 0x2fb3c0e1
- (void)stopListeningOnTopic:(id)topic;	// 0x2fb3c1c9
- (id)storeAccount;	// 0x2fb39979
- (id)vetEmailAccount:(id)account;	// 0x2fb37849
// declared property getter: - (id)xpcConnection;	// 0x2fb3c6c1
@end
