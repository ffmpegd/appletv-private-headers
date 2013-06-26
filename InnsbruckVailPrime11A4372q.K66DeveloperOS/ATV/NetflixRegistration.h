/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NetflixNrdObject.h"
#import "NetflixNrdObjectProtocol.h"

@class NetflixNrdObjectCallback, NSString, NSDictionary, NSArray;

@interface NetflixRegistration : NetflixNrdObject <NetflixNrdObjectProtocol> {
	NetflixNrdObjectCallback *createDeviceAccountCallback_;	// 4 = 0x4
	NetflixNrdObjectCallback *selectDeviceAccountCallback_;	// 8 = 0x8
	NetflixNrdObjectCallback *unselectDeviceAccountCallback_;	// 12 = 0xc
	NetflixNrdObjectCallback *deactivateCallback_;	// 16 = 0x10
	NetflixNrdObjectCallback *deactivateAllCallback_;	// 20 = 0x14
}
@property(copy) NSDictionary *activationTokens;	// G=0x52adf9; S=0x52b039; 
@property(retain) NetflixNrdObjectCallback *createDeviceAccountCallback;	// G=0x52c455; S=0x52c469; @synthesize=createDeviceAccountCallback_
@property(readonly, assign) NSString *currentDeviceAccount;	// G=0x52ad19; 
@property(retain) NetflixNrdObjectCallback *deactivateAllCallback;	// G=0x52c4e5; S=0x52c4f9; @synthesize=deactivateAllCallback_
@property(retain) NetflixNrdObjectCallback *deactivateCallback;	// G=0x52c4c1; S=0x52c4d5; @synthesize=deactivateCallback_
@property(readonly, assign) NSArray *deviceAccounts;	// G=0x52aca1; 
@property(readonly, assign) BOOL registered;	// G=0x52ad91; 
@property(retain) NetflixNrdObjectCallback *selectDeviceAccountCallback;	// G=0x52c479; S=0x52c48d; @synthesize=selectDeviceAccountCallback_
@property(retain) NetflixNrdObjectCallback *unselectDeviceAccountCallback;	// G=0x52c49d; S=0x52c4b1; @synthesize=unselectDeviceAccountCallback_
+ (id)sharedInstance;	// 0x52aaf5
- (void)activate:(id)activate params:(id)params;	// 0x52b719
// declared property getter: - (id)activationTokens;	// 0x52adf9
- (void)addEventListener:(id)listener name:(id)name;	// 0x52c3c5
- (void)cancelRendezvous;	// 0x52b349
- (void)createDeviceAccount:(id)account;	// 0x52b381
// declared property getter: - (id)createDeviceAccountCallback;	// 0x52c455
// declared property getter: - (id)currentDeviceAccount;	// 0x52ad19
- (void)deactivate:(id)deactivate callback:(id)callback;	// 0x52b5d9
- (void)deactivateAll:(id)all;	// 0x52b6a1
// declared property getter: - (id)deactivateAllCallback;	// 0x52c4e5
// declared property getter: - (id)deactivateCallback;	// 0x52c4c1
- (void)dealloc;	// 0x52abe1
// declared property getter: - (id)deviceAccounts;	// 0x52aca1
- (void)emailActivate:(id)activate password:(id)password;	// 0x52b515
- (void)getDeviceTokens;	// 0x52b4c1
- (BOOL)handleEvent:(id)event;	// 0x52b895
- (void)massDeactivationCheck;	// 0x52b5a1
// declared property getter: - (BOOL)registered;	// 0x52ad91
- (void)removeEventListener:(id)listener name:(id)name;	// 0x52c40d
- (void)selectDeviceAccount:(id)account callback:(id)callback;	// 0x52b3c9
// declared property getter: - (id)selectDeviceAccountCallback;	// 0x52c479
// declared property setter: - (void)setActivationTokens:(id)tokens;	// 0x52b039
// declared property setter: - (void)setCreateDeviceAccountCallback:(id)callback;	// 0x52c469
// declared property setter: - (void)setDeactivateAllCallback:(id)callback;	// 0x52c4f9
// declared property setter: - (void)setDeactivateCallback:(id)callback;	// 0x52c4d5
// declared property setter: - (void)setSelectDeviceAccountCallback:(id)callback;	// 0x52c48d
// declared property setter: - (void)setUnselectDeviceAccountCallback:(id)callback;	// 0x52c4b1
- (void)startRendezvous;	// 0x52b2e5
- (void)tokenActivate:(id)activate;	// 0x52b4f9
- (void)unselectDeviceAccount:(id)account;	// 0x52b479
// declared property getter: - (id)unselectDeviceAccountCallback;	// 0x52c49d
- (BOOL)validateDak:(id)dak;	// 0x52b79d
@end
