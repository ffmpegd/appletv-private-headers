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
@property(retain) id accountClass;	// G=0x305c7105; S=0x305c7125; converted property
@property(retain) id displayName;	// G=0x305c7185; S=0x305c8fd1; converted property
@property(retain, nonatomic) NSDictionary *originalProperties;	// G=0x305c6e8d; S=0x305c83a1; @synthesize=_originalProperties
@property(retain) BasicAccount *parentAccount;	// G=0x305c6e75; S=0x305c70a5; converted property
@property(readonly, retain) NSMutableDictionary *properties;	// G=0x305c6e65; converted property
+ (id)_accountCreationMap;	// 0x305c90e5
+ (id)_creatorsInfo;	// 0x305c8d89
+ (id)_dataclassesProperties;	// 0x305c8e25
+ (BOOL)_isValidAccountType:(id)type;	// 0x305c8d41
+ (id)accountWithProperties:(id)properties;	// 0x305c76d5
+ (id)accountWithType:(id)type class:(id)aClass;	// 0x305c7695
+ (id)allSupportedDataclasses;	// 0x305c7721
+ (id)createNewAccountUID;	// 0x305c97e9
+ (id)deleteAccountActionsForAccountType:(id)accountType;	// 0x305c7a21
+ (BOOL)displayToggleForDataclass:(id)dataclass;	// 0x305c7b45
+ (void)initialize;	// 0x305c7c0d
+ (BOOL)isMultitaskingEnabled;	// 0x305c8359
+ (BOOL)multipleStoresSupportedByDataclass:(id)dataclass;	// 0x305c7ba9
+ (id)removeActionsIncompatibleWithSingleStoreDataclass:(id)singleStoreDataclass;	// 0x305c789d
+ (BOOL)showRemindersSeparatelyForAccountType:(id)accountType;	// 0x305c7a59
+ (id)supportedDataclassesForAccountType:(id)accountType;	// 0x305c7865
+ (id)userActionsToDisableDataclass:(id)disableDataclass forAccountType:(id)accountType;	// 0x305c79b1
+ (id)userActionsToEnableDataclass:(id)enableDataclass forAccountType:(id)accountType;	// 0x305c7941
+ (BOOL)userConfirmationIsRequiredByDataclass:(id)dataclass;	// 0x305c7ae1
- (id)init;	// 0x305c6e9d
- (id)initWithProperties:(id)properties;	// 0x305c87c1
- (id)_cachedSyncAccount;	// 0x305c92b5
- (id)_creatorClassNameForAccountType:(id)accountType creatorType:(id)type loader:(id)loader;	// 0x305c9375
- (void)_forcedSetAccountProperty:(id)property forKey:(id)key;	// 0x305c8ec1
- (void)_forcedSetEnabled:(BOOL)enabled forDataclass:(id)dataclass;	// 0x305c8eed
- (id)_initWithType:(id)type class:(id)aClass;	// 0x305c89b9
- (id)_orderedDataclasses:(id)dataclasses;	// 0x305c912d
- (id)_profileRestrictedDataclasses;	// 0x305c8bf1
// converted property getter: - (id)accountClass;	// 0x305c7105
- (id)accountPropertyForKey:(id)key;	// 0x305c6fc9
- (void)dealloc;	// 0x305c8725
- (id)defaultContainerIdentifierForDataclass:(id)dataclass;	// 0x305c757d
// converted property getter: - (id)displayName;	// 0x305c7185
- (id)enabledDataclasses;	// 0x305c734d
- (id)fullAccountCreatorClassNameForAccountType:(id)accountType loader:(id)loader;	// 0x305c9091
- (id)fullAccountUsingLoader:(id)loader;	// 0x305c83ed
- (id)identifier;	// 0x305c7059
- (BOOL)isEnabledForDataclass:(id)dataclass;	// 0x305c7445
// declared property getter: - (id)originalProperties;	// 0x305c6e8d
// converted property getter: - (id)parentAccount;	// 0x305c6e75
- (id)parentAccountIdentifier;	// 0x305c7079
// converted property getter: - (id)properties;	// 0x305c6e65
- (id)propertiesToSave;	// 0x305c7029
- (id)provisionedDataclasses;	// 0x305c7259
- (BOOL)refreshContainerListForDataclass:(id)dataclass;	// 0x305c7665
- (BOOL)refreshContainerListForDataclass:(id)dataclass isUserRequested:(BOOL)requested;	// 0x305c75e1
- (BOOL)refreshContainerWithIdentifier:(id)identifier forDataclass:(id)dataclass;	// 0x305c7641
- (BOOL)refreshContainerWithIdentifier:(id)identifier forDataclass:(id)dataclass isUserRequested:(BOOL)requested;	// 0x305c75a9
- (BOOL)refreshContainersForDataclass:(id)dataclass;	// 0x305c767d
- (BOOL)refreshContainersForDataclass:(id)dataclass isUserRequested:(BOOL)requested;	// 0x305c7611
- (void)removeAccountPropertyForKey:(id)key;	// 0x305c6fa5
- (void)renewAccountCredentialsWithHandler:(id)handler;	// 0x305c6e85
// converted property setter: - (void)setAccountClass:(id)aClass;	// 0x305c7125
- (void)setAccountProperty:(id)property forKey:(id)key;	// 0x305c6f29
// converted property setter: - (void)setDisplayName:(id)name;	// 0x305c8fd1
- (void)setEnabled:(BOOL)enabled forDataclass:(id)dataclass;	// 0x305c7471
- (void)setEnabledForDataclasses:(id)dataclasses;	// 0x305c8655
- (void)setFullAccount:(id)account;	// 0x305c9049
// declared property setter: - (void)setOriginalProperties:(id)properties;	// 0x305c83a1
// converted property setter: - (void)setParentAccount:(id)account;	// 0x305c70a5
- (id)shortTypeString;	// 0x305c71c5
- (id)supportedDataclasses;	// 0x305c71e5
- (id)syncAccountCreatorClassNameForAccountType:(id)accountType;	// 0x305c90b9
- (id)syncStoreIdentifier;	// 0x305c70e5
- (id)type;	// 0x305c7039
- (id)typeString;	// 0x305c71a5
@end

