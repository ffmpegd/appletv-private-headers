/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRSingleton.h"

@class NSString, NSMutableDictionary, NSMutableArray;

@interface BRAccountManager : BRSingleton {
@private
	NSString *_accountPath;	// 4 = 0x4
	NSString *_dataPath;	// 8 = 0x8
	NSMutableArray *_accounts;	// 12 = 0xc
	NSMutableDictionary *_accountTypes;	// 16 = 0x10
	NSMutableDictionary *_preferredAccounts;	// 20 = 0x14
	NSMutableArray *_pendingAccounts;	// 24 = 0x18
}
+ (void)initialize;	// 0x33b13325
+ (void)setSingleton:(id)singleton;	// 0x33b13315
+ (id)singleton;	// 0x33b13305
- (id)init;	// 0x33b133d1
- (void)_accountDirty:(id)dirty;	// 0x33b15061
- (void)_deleteAccount:(id)account;	// 0x33b14f45
- (void)_load;	// 0x33b14521
- (id)_loadAccountFromFilePath:(id)filePath;	// 0x33b14e0d
- (void)_save;	// 0x33b14a5d
- (void)_saveAccount:(id)account;	// 0x33b14bad
- (void)_saveAccount:(id)account flushDiskImmediately:(BOOL)immediately;	// 0x33b14bc1
- (void)_savePrefs;	// 0x33b14d51
- (id)accountWithName:(id)name ofType:(id)type;	// 0x33b13d55
- (id)accountWithName:(id)name ofType:(id)type create:(BOOL)create;	// 0x33b13d79
- (id)accountsOfType:(id)type;	// 0x33b13f25
- (id)allAccounts;	// 0x33b13ef9
- (void)clearPreferredAccountForType:(id)type;	// 0x33b139c1
- (void)dealloc;	// 0x33b13571
- (void)evaluatePendingAccounts;	// 0x33b13651
- (BOOL)isAccountManaged:(id)managed;	// 0x33b13f79
- (void)manageAccount:(id)account;	// 0x33b1403d
- (void)markAsPreferredAccount:(id)account;	// 0x33b13b25
- (id)preferredAccountForType:(id)type;	// 0x33b13851
- (void)registerClass:(Class)aClass forType:(id)type;	// 0x33b143c1
- (void)removeAccount:(id)account;	// 0x33b1418d
@end

