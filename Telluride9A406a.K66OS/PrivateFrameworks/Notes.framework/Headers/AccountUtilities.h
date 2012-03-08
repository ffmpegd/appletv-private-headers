/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Notes.framework/Notes
 */

#import <NSObject.h> // Unknown library

@class AccountsManager, NSArray, NoteContext;

@interface AccountUtilities : NSObject {
	AccountsManager *_accountsManager;	// 4 = 0x4
	NSArray *_syncableAccounts;	// 8 = 0x8
	NoteContext *_noteContext;	// 12 = 0xc
}
@property(readonly, retain) AccountsManager *accountsManager;	// G=0x3635da35; converted property
+ (id)sharedAccountUtilities;	// 0x3635d9e1
- (id)init;	// 0x3635db8d
- (void).cxx_destruct;	// 0x3635ea5d
- (void)accountsChanged;	// 0x3635da75
// converted property getter: - (id)accountsManager;	// 0x3635da35
- (id)allDisplayAccounts;	// 0x3635dd01
- (id)allSyncableAccounts;	// 0x3635dcc1
- (void)dealloc;	// 0x3635dc85
- (id)defaultStoreSyncIdWithDesiredSyncId:(id)desiredSyncId;	// 0x3635e335
- (BOOL)isDeviceLocalAccount:(id)account;	// 0x3635e785
- (BOOL)localNotesExist;	// 0x3635e809
- (id)syncAccountIdForDisplayAccountId:(id)displayAccountId;	// 0x3635e0c9
@end
