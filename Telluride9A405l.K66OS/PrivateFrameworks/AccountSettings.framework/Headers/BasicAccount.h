/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AccountSettings.framework/AccountSettings
 */

#import "AccountFullAccountProtocol.h"
#import <NSObject.h> // Unknown library

@class NSMutableDictionary, NSDictionary;
@protocol AccountRefreshProtocol;

@interface BasicAccount : NSObject <AccountFullAccountProtocol> {
	NSDictionary *_originalProperties;	// 4 = 0x4
	NSMutableDictionary *_properties;	// 8 = 0x8
	id<AccountFullAccountProtocol> _fullAccount;	// 12 = 0xc
	id<AccountRefreshProtocol> _syncAccount;	// 16 = 0x10
	BasicAccount *_parentAccount;	// 20 = 0x14
}
@property(retain) id accountClass;	// G=0x350de105; S=0x350de125; converted property
@property(retain) id displayName;	// G=0x350de185; S=0x350dffd1; converted property
@property(retain, nonatomic) NSDictionary *originalProperties;	// G=0x350dde8d; S=0x350df3a1; @synthesize=_originalProperties
@property(retain) BasicAccount *parentAccount;	// G=0x350dde75; S=0x350de0a5; converted property
@property(readonly, retain) NSMutableDictionary *properties;	// G=0x350dde65; converted property
+ (id)_accountCreationMap;	// 0x350e00e5
+ (id)_creatorsInfo;	// 0x350dfd89
+ (id)_dataclassesProperties;	// 0x350dfe25
+ (BOOL)_isValidAccountType:(id)type;	// 0x350dfd41
+ (id)accountWithProperties:(id)properties;	// 0x350de6d5
+ (id)accountWithType:(id)type class:(id)aClass;	// 0x350de695
+ (id)allSupportedDataclasses;	// 0x350de721
+ (id)createNewAccountUID;	// 0x350e07e9
+ (id)deleteAccountActionsForAccountType:(id)accountType;	// 0x350dea21
+ (BOOL)displayToggleForDataclass:(id)dataclass;	// 0x350deb45
+ (void)initialize;	// 0x350dec0d
+ (BOOL)isMultitaskingEnabled;	// 0x350df359
+ (BOOL)multipleStoresSupportedByDataclass:(id)dataclass;	// 0x350deba9
+ (id)removeActionsIncompatibleWithSingleStoreDataclass:(id)singleStoreDataclass;	// 0x350de89d
+ (BOOL)showRemindersSeparatelyForAccountType:(id)accountType;	// 0x350dea59
+ (id)supportedDataclassesForAccountType:(id)accountType;	// 0x350de865
+ (id)userActionsToDisableDataclass:(id)disableDataclass forAccountType:(id)accountType;	// 0x350de9b1
+ (id)userActionsToEnableDataclass:(id)enableDataclass forAccountType:(id)accountType;	// 0x350de941
+ (BOOL)userConfirmationIsRequiredByDataclass:(id)dataclass;	// 0x350deae1
- (id)init;	// 0x350dde9d
- (id)initWithProperties:(id)properties;	// 0x350df7c1
- (id)_cachedSyncAccount;	// 0x350e02b5
- (id)_creatorClassNameForAccountType:(id)accountType creatorType:(id)type loader:(id)loader;	// 0x350e0375
- (void)_forcedSetAccountProperty:(id)property forKey:(id)key;	// 0x350dfec1
- (void)_forcedSetEnabled:(BOOL)enabled forDataclass:(id)dataclass;	// 0x350dfeed
- (id)_initWithType:(id)type class:(id)aClass;	// 0x350df9b9
- (id)_orderedDataclasses:(id)dataclasses;	// 0x350e012d
- (id)_profileRestrictedDataclasses;	// 0x350dfbf1
// converted property getter: - (id)accountClass;	// 0x350de105
- (id)accountPropertyForKey:(id)key;	// 0x350ddfc9
- (void)dealloc;	// 0x350df725
- (id)defaultContainerIdentifierForDataclass:(id)dataclass;	// 0x350de57d
// converted property getter: - (id)displayName;	// 0x350de185
- (id)enabledDataclasses;	// 0x350de34d
- (id)fullAccountCreatorClassNameForAccountType:(id)accountType loader:(id)loader;	// 0x350e0091
- (id)fullAccountUsingLoader:(id)loader;	// 0x350df3ed
- (id)identifier;	// 0x350de059
- (BOOL)isEnabledForDataclass:(id)dataclass;	// 0x350de445
// declared property getter: - (id)originalProperties;	// 0x350dde8d
// converted property getter: - (id)parentAccount;	// 0x350dde75
- (id)parentAccountIdentifier;	// 0x350de079
// converted property getter: - (id)properties;	// 0x350dde65
- (id)propertiesToSave;	// 0x350de029
- (id)provisionedDataclasses;	// 0x350de259
- (BOOL)refreshContainerListForDataclass:(id)dataclass;	// 0x350de665
- (BOOL)refreshContainerListForDataclass:(id)dataclass isUserRequested:(BOOL)requested;	// 0x350de5e1
- (BOOL)refreshContainerWithIdentifier:(id)identifier forDataclass:(id)dataclass;	// 0x350de641
- (BOOL)refreshContainerWithIdentifier:(id)identifier forDataclass:(id)dataclass isUserRequested:(BOOL)requested;	// 0x350de5a9
- (BOOL)refreshContainersForDataclass:(id)dataclass;	// 0x350de67d
- (BOOL)refreshContainersForDataclass:(id)dataclass isUserRequested:(BOOL)requested;	// 0x350de611
- (void)removeAccountPropertyForKey:(id)key;	// 0x350ddfa5
- (void)renewAccountCredentialsWithHandler:(id)handler;	// 0x350dde85
// converted property setter: - (void)setAccountClass:(id)aClass;	// 0x350de125
- (void)setAccountProperty:(id)property forKey:(id)key;	// 0x350ddf29
// converted property setter: - (void)setDisplayName:(id)name;	// 0x350dffd1
- (void)setEnabled:(BOOL)enabled forDataclass:(id)dataclass;	// 0x350de471
- (void)setEnabledForDataclasses:(id)dataclasses;	// 0x350df655
- (void)setFullAccount:(id)account;	// 0x350e0049
// declared property setter: - (void)setOriginalProperties:(id)properties;	// 0x350df3a1
// converted property setter: - (void)setParentAccount:(id)account;	// 0x350de0a5
- (id)shortTypeString;	// 0x350de1c5
- (id)supportedDataclasses;	// 0x350de1e5
- (id)syncAccountCreatorClassNameForAccountType:(id)accountType;	// 0x350e00b9
- (id)syncStoreIdentifier;	// 0x350de0e5
- (id)type;	// 0x350de039
- (id)typeString;	// 0x350de1a5
@end

