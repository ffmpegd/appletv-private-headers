/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAIMAPNotes.framework/DAIMAPNotes
 */

#import <DAAccount.h> // Unknown library

@class BasicAccount;

@interface DAIMAPNotesAccount : DAAccount {
	BasicAccount *_parent;	// 64 = 0x40
	BasicAccount *_imapMailAccount;	// 68 = 0x44
}
@property(readonly, assign) BasicAccount *imapMailAccount;	// G=0x32cd36dd; @synthesize=_imapMailAccount
@property(assign, setter=setIMAPNotesAccountVersion:) int imapNotesAccountVersion;	// G=0x32cd3635; S=0x32cd3669; 
@property(readonly, assign) BasicAccount *parent;	// G=0x32cd36cd; @synthesize=_parent
+ (Class)accountClass;	// 0x32cd332d
+ (Class)clientClass;	// 0x32cd3349
+ (id)defaultProperties;	// 0x32cd2dfd
+ (id)supportedDataclasses;	// 0x32cd3365
- (id)initWithParent:(id)parent imapMailAccount:(id)account childProperties:(id)properties;	// 0x32cd3061
- (BOOL)_upgradeSelfFromVersion:(int)version superClassUpgraded:(BOOL)upgraded;	// 0x32cd33bd
- (BOOL)accountNeedsUpgrade;	// 0x32cd3541
- (id)accountPropertyForKey:(id)key;	// 0x32cd323d
- (void)dealloc;	// 0x32cd32cd
- (BOOL)enabledForDADataclass:(int)dadataclass;	// 0x32cd33a1
// declared property getter: - (id)imapMailAccount;	// 0x32cd36dd
// declared property getter: - (int)imapNotesAccountVersion;	// 0x32cd3635
- (BOOL)isChildAccount;	// 0x32cd30d9
- (BOOL)isDisabled;	// 0x32cd339d
// declared property getter: - (id)parent;	// 0x32cd36cd
- (id)persistentUUID;	// 0x32cd33ad
- (void)removeAccountPropertyForKey:(id)key;	// 0x32cd31f1
- (void)renewAccountCredentialsWithHandler:(id)handler;	// 0x32cd32ad
- (void)saveAccountProperties;	// 0x32cd2ff1
- (void)saveChildAccountSettingsWithAccountsManager:(id)accountsManager;	// 0x32cd2ef1
- (id)scheduleIdentifier;	// 0x32cd36ad
- (void)setAccountProperty:(id)property forKey:(id)key;	// 0x32cd30dd
// declared property setter: - (void)setIMAPNotesAccountVersion:(int)version;	// 0x32cd3669
- (BOOL)supportsDADataclass:(int)dataclass;	// 0x32cd3391
- (BOOL)upgradeAccount;	// 0x32cd34b9
@end

