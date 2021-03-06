/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import <NSObject.h> // Unknown library
#import "ASDynamicAccountClassLoader.h"

@class NSMutableDictionary;

@interface DAAccountLoader : NSObject <ASDynamicAccountClassLoader> {
	NSMutableDictionary *_accountTypeToAccountFrameworkSubpath;	// 4 = 0x4
	NSMutableDictionary *_accountTypeToAccountDaemonBundleSubpath;	// 8 = 0x8
	NSMutableDictionary *_accountTypeToClassNames;	// 12 = 0xc
	NSMutableDictionary *_acAccountTypeToAccountFrameworkSubpath;	// 16 = 0x10
	NSMutableDictionary *_acAccountTypeToAccountDaemonBundleSubpath;	// 20 = 0x14
	NSMutableDictionary *_acAccountTypeToClassNames;	// 24 = 0x18
	NSMutableDictionary *_acParentAccountTypeToChildAccountTypes;	// 28 = 0x1c
}
+ (BOOL)loadBundleForAccountWithProperties:(id)properties;	// 0x30796b8d
+ (id)sharedInstance;	// 0x3079546d
- (id)init;	// 0x307958d1
- (void)_addAccountInfo:(id)info forFrameworkNamed:(id)frameworkNamed;	// 0x30795585
- (BOOL)_loadFrameworkAtSubpath:(id)subpath;	// 0x30795e21
- (Class)accountClassForACAccount:(id)acaccount;	// 0x30795fb1
- (Class)accountClassForAccountType:(id)accountType;	// 0x30796741
- (Class)agentClassForACAccount:(id)acaccount;	// 0x30796499
- (Class)agentClassForAccountType:(id)accountType;	// 0x30796a35
- (Class)clientAccountClassForACAccount:(id)acaccount;	// 0x30796125
- (Class)clientAccountClassForAccountType:(id)accountType;	// 0x3079681d
- (Class)daemonAccountClassForACAccount:(id)acaccount;	// 0x307962d1
- (Class)daemonAccountClassForAccountType:(id)accountType;	// 0x3079691d
- (Class)daemonAppropriateAccountClassForACAccount:(id)acaccount;	// 0x3079660d
- (Class)daemonAppropriateAccountClassForAccountType:(id)accountType;	// 0x30796b11
- (BOOL)loadBundleForAccountWithProperties:(id)properties;	// 0x30796b49
- (void)loadDaemonBundleForACAccountType:(id)acaccountType;	// 0x30795f5d
- (void)loadDaemonBundleForAccountType:(id)accountType;	// 0x30796705
- (void)loadFrameworkForACAccountType:(id)acaccountType;	// 0x30795e89
- (void)loadFrameworkForAccountType:(id)accountType;	// 0x30796645
@end

