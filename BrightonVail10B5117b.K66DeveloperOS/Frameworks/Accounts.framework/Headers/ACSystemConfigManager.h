/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Accounts.framework/Accounts
 */

#import <NSObject.h> // Unknown library
#import "Accounts-Structs.h"


@interface ACSystemConfigManager : NSObject {
	SCPreferencesRef _prefs;	// 4 = 0x4
	BOOL _notifyForExternalChangeOnly;	// 8 = 0x8
	int _applySkipCount;	// 12 = 0xc
}
+ (id)sharedInstance;	// 0x3087fff9
- (id)init;	// 0x30880079
- (void)_keepAlive;	// 0x30880141
- (void)_tearDown;	// 0x308801bd
- (int)accountsWithAccountTypeIdentifierExist:(id)accountTypeIdentifierExist;	// 0x308801f1
- (int)countOfAccountsWithAccountTypeIdentifier:(id)accountTypeIdentifier;	// 0x30880311
- (void)dealloc;	// 0x308800d1
- (void *)getValueForKey:(id)key;	// 0x30880665
- (void)initializeSCPrefs:(id)prefs;	// 0x3088042d
- (BOOL)lockPrefs;	// 0x30880679
- (void)notifyTarget:(unsigned)target;	// 0x30880565
- (void)setAccountsWithAccountTypeIdentifier:(id)accountTypeIdentifier exist:(BOOL)exist;	// 0x30880269
- (void)setCallback:(/*function-pointer*/ void *)callback withContext:(XXStruct_K1psTC *)context;	// 0x30880775
- (void)setCountOfAccounts:(int)accounts withAccountTypeIdentifier:(id)accountTypeIdentifier;	// 0x3088038d
- (void)setValue:(void *)value forKey:(id)key;	// 0x308806dd
- (void)synchronize;	// 0x308805a5
- (void)unlockPrefs;	// 0x308806c9
@end

