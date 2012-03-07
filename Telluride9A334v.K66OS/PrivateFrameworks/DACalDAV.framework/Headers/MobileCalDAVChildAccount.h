/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
 */

#import "MobileCalDAVAccount.h"

@class BasicAccount;

@interface MobileCalDAVChildAccount : MobileCalDAVAccount {
	BasicAccount *_parent;	// 140 = 0x8c
}
@property(readonly, assign, nonatomic) BasicAccount *parent;	// G=0x35b5b421; @synthesize=_parent
+ (Class)accountClass;	// 0x35b5b365
+ (Class)clientClass;	// 0x35b5b375
+ (id)supportedDataclasses;	// 0x35b5b391
- (id)initWithParent:(id)parent childProperties:(id)properties;	// 0x35b5acbd
- (id)accountCredentialsHandler;	// 0x35b5ad39
- (id)accountPropertyForKey:(id)key;	// 0x35b5b2a9
- (BOOL)childKeyIsSharedForReading:(id)reading;	// 0x35b5adb1
- (BOOL)childKeyIsSharedForWriting:(id)writing;	// 0x35b5aec5
- (void)dealloc;	// 0x35b5b319
- (BOOL)isChildAccount;	// 0x35b5ad15
- (BOOL)isDisabled;	// 0x35b5b3ed
- (BOOL)isEnabledForDataclass:(id)dataclass;	// 0x35b5b125
// declared property getter: - (id)parent;	// 0x35b5b421
- (id)password;	// 0x35b5ad19
- (id)persistentUUID;	// 0x35b5b3f1
- (void)removeAccountPropertyForKey:(id)key;	// 0x35b5b25d
- (void)renewAccountCredentialsWithHandler:(id)handler;	// 0x35b5ad49
- (void)saveAccountProperties;	// 0x35b5b0b5
- (void)saveChildAccountSettingsWithAccountsManager:(id)accountsManager;	// 0x35b5afb5
- (id)scheduleIdentifier;	// 0x35b5b401
- (void)setAccountProperty:(id)property forKey:(id)key;	// 0x35b5b149
- (void)setPassword:(id)password withAccessibility:(int)accessibility;	// 0x35b5adad
- (BOOL)supportsDADataclass:(int)dataclass;	// 0x35b5b3dd
@end

