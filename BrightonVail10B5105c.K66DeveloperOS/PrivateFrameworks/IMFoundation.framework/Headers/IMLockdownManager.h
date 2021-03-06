/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

#import "IMFoundation-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString;

@interface IMLockdownManager : NSObject {
	int _state;	// 4 = 0x4
	BOOL _settingUpActivationState;	// 8 = 0x8
	BOOL _isInternalInstall;	// 9 = 0x9
	BOOL _isCarrierInstall;	// 10 = 0xa
	BOOL _hasShownMismatchedSIM;	// 11 = 0xb
	BOOL _hasShownWaitingAlertThisSession;	// 12 = 0xc
}
@property(assign, nonatomic) BOOL _hasShownMismatchedSIM;	// G=0x365e1215; S=0x365e1225; @synthesize
@property(assign, nonatomic) BOOL _hasShownWaitingAlertThisSession;	// G=0x365e1235; S=0x365e1245; @synthesize
@property(assign, nonatomic) BOOL _isCarrierInstall;	// G=0x365e11f5; S=0x365e1205; @synthesize
@property(assign, nonatomic) BOOL _isInternalInstall;	// G=0x365e11d5; S=0x365e11e5; @synthesize
@property(assign, nonatomic) BOOL _settingUpActivationState;	// G=0x365e11b5; S=0x365e11c5; @synthesize
@property(assign, nonatomic) int _state;	// G=0x365e1195; S=0x365e11a5; @synthesize
@property(readonly, assign, nonatomic) SecIdentity *copyIdentity;	// G=0x365e116d; 
@property(readonly, assign, nonatomic) BOOL isActivated;	// G=0x365e1119; 
@property(readonly, assign, nonatomic) BOOL isCarrierInstall;	// G=0x365e100d; 
@property(readonly, assign, nonatomic) BOOL isInternalInstall;	// G=0x365e0f35; 
@property(readonly, assign, nonatomic) int lockdownState;	// G=0x365e1139; 
@property(readonly, assign, nonatomic) NSString *uniqueDeviceIdentifier;	// G=0x365e1191; 
+ (id)sharedInstance;	// 0x365e0b09
- (id)init;	// 0x365e0bb5
- (void)_activationFailed;	// 0x365e0d31
// declared property getter: - (BOOL)_hasShownMismatchedSIM;	// 0x365e1215
// declared property getter: - (BOOL)_hasShownWaitingAlertThisSession;	// 0x365e1235
// declared property getter: - (BOOL)_isCarrierInstall;	// 0x365e11f5
// declared property getter: - (BOOL)_isInternalInstall;	// 0x365e11d5
- (void)_resetActivationState;	// 0x365e0d35
// declared property getter: - (BOOL)_settingUpActivationState;	// 0x365e11b5
- (void)_setupActivationState;	// 0x365e0d95
// declared property getter: - (int)_state;	// 0x365e1195
// declared property getter: - (SecIdentity *)copyIdentity;	// 0x365e116d
- (void)dealloc;	// 0x365e0cf9
// declared property getter: - (BOOL)isActivated;	// 0x365e1119
// declared property getter: - (BOOL)isCarrierInstall;	// 0x365e100d
// declared property getter: - (BOOL)isInternalInstall;	// 0x365e0f35
// declared property getter: - (int)lockdownState;	// 0x365e1139
// declared property setter: - (void)set_hasShownMismatchedSIM:(BOOL)sim;	// 0x365e1225
// declared property setter: - (void)set_hasShownWaitingAlertThisSession:(BOOL)session;	// 0x365e1245
// declared property setter: - (void)set_isCarrierInstall:(BOOL)install;	// 0x365e1205
// declared property setter: - (void)set_isInternalInstall:(BOOL)install;	// 0x365e11e5
// declared property setter: - (void)set_settingUpActivationState:(BOOL)state;	// 0x365e11c5
// declared property setter: - (void)set_state:(int)state;	// 0x365e11a5
// declared property getter: - (id)uniqueDeviceIdentifier;	// 0x365e1191
@end

