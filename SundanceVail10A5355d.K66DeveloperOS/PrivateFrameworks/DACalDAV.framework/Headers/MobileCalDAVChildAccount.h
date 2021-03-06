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
@property(readonly, assign, nonatomic) BasicAccount *parent;	// G=0x3403b58d; @synthesize=_parent
+ (Class)accountClass;	// 0x3403ab69
+ (Class)clientClass;	// 0x3403b3f5
+ (id)supportedDataclasses;	// 0x3403b411
- (id)initWithParent:(id)parent childProperties:(id)properties;	// 0x3403aac5
- (id)accountCredentialsHandler;	// 0x3403b0fd
- (id)accountPropertyForKey:(id)key;	// 0x3403afdd
- (BOOL)childKeyIsSharedForReading:(id)reading;	// 0x3403b195
- (BOOL)childKeyIsSharedForWriting:(id)writing;	// 0x3403b305
- (void)dealloc;	// 0x3403ab1d
- (BOOL)isChildAccount;	// 0x3403ab79
- (BOOL)isDisabled;	// 0x3403b46d
- (BOOL)isEnabledForDataclass:(id)dataclass;	// 0x3403b471
- (id)localizedInvalidPasswordMessage;	// 0x3403b4dd
// declared property getter: - (id)parent;	// 0x3403b58d
- (id)password;	// 0x3403abf5
- (id)persistentUUID;	// 0x3403b085
- (void)removeAccountPropertyForKey:(id)key;	// 0x3403af59
- (void)renewAccountCredentialsWithHandler:(id)handler;	// 0x3403b131
- (void)saveAccountProperties;	// 0x3403ad59
- (void)saveChildAccountSettingsWithAccountsManager:(id)accountsManager;	// 0x3403ac61
- (id)scheduleIdentifier;	// 0x3403b095
- (void)setAccountProperty:(id)property forKey:(id)key;	// 0x3403ae09
- (void)setPassword:(id)password withAccessibility:(int)accessibility;	// 0x3403ac5d
- (BOOL)supportsDADataclass:(int)dataclass;	// 0x3403b45d
- (id)username;	// 0x3403ab7d
@end

