/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Accounts.framework/Accounts
 */

#import <NSObject.h> // Unknown library
#import "Accounts-Structs.h"

@class NSURL, ACAccountType, NSDate, NSMutableSet, ACAccountCredential, NSSet, NSDictionary, NSString, NSArray, ACAccountStore, NSMutableDictionary;

@interface ACAccount : NSObject {
	ACAccountStore *_store;	// 4 = 0x4
	NSString *_identifier;	// 8 = 0x8
	NSString *_accountDescription;	// 12 = 0xc
	NSString *_owningBundleID;	// 16 = 0x10
	NSString *_username;	// 20 = 0x14
	NSString *_password;	// 24 = 0x18
	NSString *_authToken;	// 28 = 0x1c
	ACAccountType *_accountType;	// 32 = 0x20
	ACAccountCredential *_credential;	// 36 = 0x24
	NSMutableDictionary *_properties;	// 40 = 0x28
	NSMutableDictionary *_dataclassProperties;	// 44 = 0x2c
	BOOL _accountAccessAvailable;	// 48 = 0x30
	BOOL _authenticated;	// 49 = 0x31
	BOOL _active;	// 50 = 0x32
	BOOL _supportsAuthentication;	// 51 = 0x33
	NSURL *_objectID;	// 52 = 0x34
	NSDate *_date;	// 56 = 0x38
	ACAccount *_parentAccount;	// 60 = 0x3c
	BOOL _haveCheckedForParentAccount;	// 64 = 0x40
	NSString *_parentAccountIdentifier;	// 68 = 0x44
	NSArray *_childAccounts;	// 72 = 0x48
	NSMutableSet *_enabledDataclasses;	// 76 = 0x4c
	NSMutableSet *_provisionedDataclasses;	// 80 = 0x50
}
@property(copy, nonatomic) NSString *accountDescription;	// G=0x3572fad9; S=0x3572faed; 
@property(readonly, assign, nonatomic) NSDictionary *accountProperties;	// G=0x3572fb69; 
@property(assign, nonatomic) __weak ACAccountStore *accountStore;	// G=0x3572fcd9; S=0x3572fcc5; 
@property(retain, nonatomic) ACAccountType *accountType;	// G=0x3572fcf9; S=0x3572fd51; 
@property(assign, nonatomic) BOOL active;	// G=0x3572fc85; S=0x3572fc95; 
@property(assign, nonatomic) BOOL authenticated;	// G=0x3572fc65; S=0x3572fc75; 
@property(readonly, assign, nonatomic) NSArray *childAccounts;	// G=0x3572ff39; 
@property(retain, nonatomic) ACAccountCredential *credential;	// G=0x3572fa59; S=0x3572fab1; 
@property(readonly, assign, nonatomic) NSDictionary *dataclassProperties;	// G=0x3573060d; 
@property(readonly, assign, nonatomic) NSDate *date;	// G=0x35730751; 
@property(readonly, assign, nonatomic) ACAccount *displayAccount;	// G=0x3572fee5; 
@property(retain, nonatomic) NSMutableSet *enabledDataclasses;	// G=0x35730215; S=0x35730229; 
@property(readonly, assign, nonatomic) NSString *identifier;	// G=0x3572f9c9; 
@property(copy, nonatomic) NSURL *objectID;	// G=0x35730709; S=0x3573071d; 
@property(retain) NSString *owningBundleID;	// G=0x3572fb21; S=0x3572fb35; converted property
@property(retain, nonatomic) ACAccount *parentAccount;	// G=0x3572fd79; S=0x3572fe75; 
@property(readonly, assign, nonatomic) NSString *parentAccountIdentifier;	// G=0x3572fde9; 
@property(retain, nonatomic) NSSet *provisionedDataclasses;	// G=0x3572ff91; S=0x3573004d; 
@property(assign, nonatomic) BOOL supportsAuthentication;	// G=0x3572fca5; S=0x3572fcb5; 
@property(copy, nonatomic) NSString *username;	// G=0x3572fa11; S=0x3572fa25; 
+ (id)_createNewAccountUID;	// 0x35730a41
- (id)initWithAccountType:(id)accountType;	// 0x3572ee45
- (id)initWithCoder:(id)coder;	// 0x3572ef99
- (void).cxx_destruct;	// 0x35730a79
- (id)_enabledDataclassesShouldFaultEmptySet:(BOOL)_enabledDataclasses;	// 0x35730081
// declared property getter: - (id)accountDescription;	// 0x3572fad9
// declared property getter: - (id)accountProperties;	// 0x3572fb69
- (id)accountPropertyForKey:(id)key;	// 0x3572fbb1
// declared property getter: - (id)accountStore;	// 0x3572fcd9
// declared property getter: - (id)accountType;	// 0x3572fcf9
// declared property getter: - (BOOL)active;	// 0x3572fc85
// declared property getter: - (BOOL)authenticated;	// 0x3572fc65
// declared property getter: - (id)childAccounts;	// 0x3572ff39
// declared property getter: - (id)credential;	// 0x3572fa59
- (void)credentialsChanged:(id)changed;	// 0x3572f935
// declared property getter: - (id)dataclassProperties;	// 0x3573060d
// declared property getter: - (id)date;	// 0x35730751
- (void)dealloc;	// 0x3572f6e9
- (id)description;	// 0x3572f769
// declared property getter: - (id)displayAccount;	// 0x3572fee5
- (id)enabledAndSyncableDataclasses;	// 0x35730365
// declared property getter: - (id)enabledDataclasses;	// 0x35730215
- (void)encodeWithCoder:(id)coder;	// 0x3572f3a5
// declared property getter: - (id)identifier;	// 0x3572f9c9
- (BOOL)isEnabledForDataclass:(NSString *)dataclass;	// 0x35730309
- (BOOL)isEnabledToSyncDataclass:(NSString *)syncDataclass;	// 0x357303fd
- (BOOL)isProvisionedForDataclass:(NSString *)dataclass;	// 0x357305b1
// declared property getter: - (id)objectID;	// 0x35730709
// converted property getter: - (id)owningBundleID;	// 0x3572fb21
// declared property getter: - (id)parentAccount;	// 0x3572fd79
// declared property getter: - (id)parentAccountIdentifier;	// 0x3572fde9
- (id)propertiesForDataclass:(NSString *)dataclass;	// 0x35730655
// declared property getter: - (id)provisionedDataclasses;	// 0x3572ff91
- (void)reload;	// 0x35730799
// declared property setter: - (void)setAccountDescription:(id)description;	// 0x3572faed
- (void)setAccountProperties:(id)properties;	// 0x3572fb7d
- (void)setAccountProperty:(id)property forKey:(id)key;	// 0x3572fbd1
// declared property setter: - (void)setAccountStore:(id)store;	// 0x3572fcc5
// declared property setter: - (void)setAccountType:(id)type;	// 0x3572fd51
// declared property setter: - (void)setActive:(BOOL)active;	// 0x3572fc95
// declared property setter: - (void)setAuthenticated:(BOOL)authenticated;	// 0x3572fc75
// declared property setter: - (void)setCredential:(id)credential;	// 0x3572fab1
- (void)setDataclassProperties:(id)properties;	// 0x35730621
- (void)setDate:(id)date;	// 0x35730765
- (void)setEnabled:(BOOL)enabled forDataclass:(NSString *)dataclass;	// 0x35730499
// declared property setter: - (void)setEnabledDataclasses:(id)dataclasses;	// 0x35730229
- (void)setIdentifier:(id)identifier;	// 0x3572f9dd
// declared property setter: - (void)setObjectID:(id)anId;	// 0x3573071d
// converted property setter: - (void)setOwningBundleID:(id)anId;	// 0x3572fb35
// declared property setter: - (void)setParentAccount:(id)account;	// 0x3572fe75
- (void)setProperties:(id)properties forDataclass:(NSString *)dataclass;	// 0x35730675
// declared property setter: - (void)setProvisionedDataclasses:(id)dataclasses;	// 0x3573004d
// declared property setter: - (void)setSupportsAuthentication:(BOOL)authentication;	// 0x3572fcb5
// declared property setter: - (void)setUsername:(id)username;	// 0x3572fa25
// declared property getter: - (BOOL)supportsAuthentication;	// 0x3572fca5
// declared property getter: - (id)username;	// 0x3572fa11
@end
