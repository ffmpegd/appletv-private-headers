/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DABookmarkDAV.framework/DABookmarkDAV
 */

#import "BookmarkDAVAccount.h"

@class BasicAccount;

@interface BookmarkDAVChildAccount : BookmarkDAVAccount {
	BasicAccount *_parent;	// 76 = 0x4c
}
@property(retain) id password;	// G=0x31d7d9c5; S=0x31d7d62d; converted property
+ (Class)accountClass;	// 0x31d7d709
+ (Class)clientClass;	// 0x31d7d6e9
+ (id)supportedDataclasses;	// 0x31d7d6bd
- (id)initWithParent:(id)parent childProperties:(id)properties;	// 0x31d7da15
- (BOOL)_keyIsShared:(id)shared;	// 0x31d7d925
- (id)accountPropertyForKey:(id)key;	// 0x31d7d765
- (void)dealloc;	// 0x31d7d71d
- (BOOL)enabledForDataclass:(int)dataclass;	// 0x31d7d645
- (BOOL)isChildAccount;	// 0x31d7d629
- (BOOL)isDisabled;	// 0x31d7d641
// converted property getter: - (id)password;	// 0x31d7d9c5
- (id)persistentUUID;	// 0x31d7d6a9
- (void)removeAccountPropertyForKey:(id)key;	// 0x31d7d7c9
- (void)removePasswordFromKeychain;	// 0x31d7d631
- (void)renewAccountCredentialsWithHandler:(id)handler;	// 0x31d7d9a5
- (void)saveAccountProperties;	// 0x31d7d8c1
- (void)saveChildAccountSettingsWithAccountsManager:(id)accountsManager;	// 0x31d7da65
- (id)scheduleIdentifier;	// 0x31d7d689
- (void)setAccountProperty:(id)property forKey:(id)key;	// 0x31d7d80d
// converted property setter: - (void)setPassword:(id)password;	// 0x31d7d62d
- (BOOL)supportsDataclass:(int)dataclass;	// 0x31d7d635
- (id)username;	// 0x31d7d9e5
@end
