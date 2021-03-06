/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Accounts.framework/Accounts
 */

#import "Accounts-Structs.h"
#import </libobjc.A.h>

@protocol OS_dispatch_source, OS_dispatch_queue;

@interface ACSystemConfigManager : NSObject {
	NSObject<OS_dispatch_queue> *_timerQueue;	// 4 = 0x4
	NSObject<OS_dispatch_source> *_timerSource;	// 8 = 0x8
	SCPreferencesRef _prefs;	// 12 = 0xc
	BOOL _notifyForExternalChangeOnly;	// 16 = 0x10
	int _applySkipCount;	// 20 = 0x14
}
+ (id)_livingInstance;	// 0x2c992f21
+ (unsigned)_timeoutInterval;	// 0x2c992f31
+ (id)sharedInstance;	// 0x2c992ea1
- (id)init;	// 0x2c992f35
- (void).cxx_destruct;	// 0x2c993819
- (void)_keepAlive;	// 0x2c993035
- (void)_tearDown;	// 0x2c993239
- (int)accountsWithAccountTypeIdentifierExist:(id)accountTypeIdentifierExist;	// 0x2c99326d
- (int)countOfAccountsWithAccountTypeIdentifier:(id)accountTypeIdentifier;	// 0x2c993391
- (void)dealloc;	// 0x2c992fa9
- (void *)getValueForKey:(id)key;	// 0x2c9936e1
- (void)initializeSCPrefs:(id)prefs;	// 0x2c9934ad
- (BOOL)lockPrefs;	// 0x2c9936f5
- (void)notifyTarget:(unsigned)target;	// 0x2c9935e1
- (void)setAccountsWithAccountTypeIdentifier:(id)accountTypeIdentifier exist:(BOOL)exist;	// 0x2c9932e5
- (void)setCallback:(/*function-pointer*/ void *)callback withContext:(XXStruct_K1psTC *)context;	// 0x2c993801
- (void)setCountOfAccounts:(int)accounts withAccountTypeIdentifier:(id)accountTypeIdentifier;	// 0x2c99340d
- (void)setValue:(void *)value forKey:(id)key;	// 0x2c993769
- (void)synchronize;	// 0x2c993621
- (void)unlockPrefs;	// 0x2c993755
@end

