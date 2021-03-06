/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import <NSObject.h> // Unknown library


@interface MCPasscodeManager : NSObject {
}
+ (BOOL)_passcodeCharacteristics:(id)characteristics compliesWithPolicyFromRestrictions:(id)restrictions outError:(id *)error;	// 0x347319f5
+ (id)characteristicsDictionaryFromPasscode:(id)passcode;	// 0x34731551
+ (id)generateSalt;	// 0x347324a1
+ (id)hashForPasscode:(id)passcode usingMethod:(int)method salt:(id)salt;	// 0x347314a5
+ (id)localizedDescriptionOfPasscodePolicyFromRestrictions:(id)restrictions;	// 0x3473207d
+ (BOOL)passcode:(id)passcode compliesWithPolicyFromRestrictions:(id)restrictions checkHistory:(BOOL)history outError:(id *)error;	// 0x34731fed
+ (BOOL)sendPasscodeRestrictionChangeNotificationIfNeededWithOldRestrictions:(id)oldRestrictions newRestrictions:(id)restrictions;	// 0x347318a5
+ (id)sharedManager;	// 0x347324d1
+ (int)unlockScreenTypeForPasscodeCharacteristics:(id)passcodeCharacteristics;	// 0x34732431
+ (int)unlockScreenTypeForRestrictions:(id)restrictions;	// 0x3473238d
- (BOOL)_checkPasscode:(id)passcode againstHistoryWithRestrictions:(id)restrictions outError:(id *)error;	// 0x34732659
- (id)_init;	// 0x34731479
- (id)_passcodeCharacteristics;	// 0x34732b25
- (id)_privatePasscodeDict;	// 0x347334e1
- (id)_publicPasscodeDict;	// 0x3473354d
- (void)_sendPasscodeChangedNotification;	// 0x347332cd
- (void)_setPrivatePasscodeDict:(id)dict;	// 0x34733421
- (id)_wrongPasscodeError;	// 0x34733369
- (BOOL)changePasscodeFrom:(id)from to:(id)to outError:(id *)error;	// 0x34732d39
- (BOOL)clearPasscodeWithEscrowKeybagData:(id)escrowKeybagData secret:(id)secret outError:(id *)error;	// 0x34732b59
- (BOOL)currentPasscodeCompliesWithPolicyFromRestrictions:(id)restrictions outError:(id *)error;	// 0x347328f5
- (int)currentUnlockScreenType;	// 0x34732add
- (BOOL)isCurrentPasscodeCompliantOutError:(id *)error;	// 0x347328a9
- (BOOL)isDeviceLocked;	// 0x347333c9
- (BOOL)isPasscodeSet;	// 0x34733409
- (id)localizedDescriptionOfPasscodePolicy;	// 0x347329ed
- (void)lockDevice;	// 0x347333f1
- (int)newPasscodeEntryScreenType;	// 0x34732a45
- (BOOL)passcode:(id)passcode compliesWithPolicyCheckHistory:(BOOL)policyCheckHistory outError:(id *)error;	// 0x34732989
- (id)passcodeExpiryDateOutError:(id *)error;	// 0x34732519
- (BOOL)unlockDeviceWithPasscode:(id)passcode outError:(id *)error;	// 0x3473330d
@end

