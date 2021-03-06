/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AccountSettings.framework/AccountSettings
 */

#import "BasicAccount.h"
#import "AccountCreationProtocol.h"


@interface DeviceLocalAccount : BasicAccount <AccountCreationProtocol> {
}
+ (id)_identifier;	// 0x31eb84bd
+ (id)accountWithBasicAccount:(id)basicAccount;	// 0x31eb8501
+ (id)basicAccountProperties;	// 0x31eb8559
+ (BOOL)isTetheredSyncingDataclass:(id)dataclass;	// 0x31eb8885
+ (id)localizedReferenceToSyncSourceStringForDataClass:(id)dataClass;	// 0x31eb88d1
+ (id)localizedSyncSourceStringForDataClass:(id)dataClass forBeginningOfSentence:(BOOL)sentence;	// 0x31eb89e5
+ (id)tetheredSourceForDataClass:(id)dataClass;	// 0x31eb8879
+ (id)typeString;	// 0x31eb8725
- (id)displayName;	// 0x31eb84dd
- (id)identifier;	// 0x31eb84b1
- (id)syncStoreIdentifier;	// 0x31eb84c9
@end

