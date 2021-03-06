/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/IDSCore.framework/IDSCore
 */

#import "IDSCore-Structs.h"
#import </libobjc.A.h>

@class IMTimer, NSRecursiveLock, NSString;

@interface IDSAppleRegistrationKeyManager : NSObject {
	SecMPFullIdentity *_identity;	// 4 = 0x4
	SecKey *_privateKey;	// 8 = 0x8
	SecKey *_publicKey;	// 12 = 0xc
	NSString *_signature;	// 16 = 0x10
	BOOL _isMigratedSignature;	// 20 = 0x14
	BOOL _loaded;	// 21 = 0x15
	BOOL _identityLoaded;	// 22 = 0x16
	BOOL _detectedMigrationNeeded;	// 23 = 0x17
	NSRecursiveLock *_lock;	// 24 = 0x18
	id _purgeCancelBlock;	// 28 = 0x1c
	id _purgeEnqueueBlock;	// 32 = 0x20
	IMTimer *_purgeTimer;	// 36 = 0x24
}
+ (BOOL)setupKeys;	// 0x311b2c6d
+ (id)sharedInstance;	// 0x311b2bb9
- (id)init;	// 0x311b3ccd
- (BOOL)_isUnderFirstDataProtectionLock;	// 0x311b2d39
- (void)_loadIfNeeded:(BOOL)needed;	// 0x311b34e1
- (void)_purgeMap;	// 0x311b2fcd
- (void)_save;	// 0x311b3149
- (void)_setPurgeTimer;	// 0x311b30b1
- (SecMPFullIdentity *)copyMessageProtectionIdentity;	// 0x311b4185
- (void)dealloc;	// 0x311b3f15
- (id)generateCSRForUserID:(id)userID;	// 0x311b4015
- (SecKey *)identityPrivateKey;	// 0x311b451d
- (SecKey *)identityPublicKey;	// 0x311b4549
- (BOOL)isMigratedKeyPairSignature;	// 0x311b45a1
- (id)keyPairSignature;	// 0x311b4575
- (id)publicMessageProtectionData;	// 0x311b4245
- (void)purgeMessageProtectionIdentity;	// 0x311b446d
- (BOOL)requiresKeychainMigration;	// 0x311b45cd
- (void)systemDidLeaveFirstDataProtectionLock;	// 0x311b2d6d
@end

