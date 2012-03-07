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
}
+ (BOOL)loadBundleForAccountWithProperties:(id)properties;	// 0x3379d8a1
+ (id)sharedInstance;	// 0x3379cb0d
- (id)init;	// 0x3379ce0d
- (void)_addAccountInfo:(id)info forFrameworkNamed:(id)frameworkNamed;	// 0x3379cc0d
- (BOOL)_loadFrameworkAtSubpath:(id)subpath;	// 0x3379d2e1
- (Class)accountClassForAccountType:(id)accountType;	// 0x3379d445
- (Class)agentClassForAccountType:(id)accountType;	// 0x3379d745
- (Class)clientAccountClassForAccountType:(id)accountType;	// 0x3379d525
- (Class)daemonAccountClassForAccountType:(id)accountType;	// 0x3379d625
- (Class)daemonAppropriateAccountClassForAccountType:(id)accountType;	// 0x3379d825
- (BOOL)loadBundleForAccountWithProperties:(id)properties;	// 0x3379d859
- (void)loadDaemonBundleForAccountType:(id)accountType;	// 0x3379d409
- (void)loadFrameworkForAccountType:(id)accountType;	// 0x3379d349
@end
