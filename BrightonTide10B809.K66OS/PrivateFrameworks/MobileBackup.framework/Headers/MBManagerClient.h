/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
 */

#import "MBConnectionHandler.h"
#import "MBManager.h"
#import "MobileBackup-Structs.h"

@class MBConnection;
@protocol OS_dispatch_queue;

@interface MBManagerClient : MBManager <MBConnectionHandler> {
	MBConnection *_conn;	// 8 = 0x8
	int _stateToken;	// 12 = 0xc
	NSObject<OS_dispatch_queue> *_eventQueue;	// 16 = 0x10
}
@property(assign) BOOL allowiTunesBackup;	// G=0x345d2fc9; S=0x345d2f61; converted property
@property(assign, getter=isBackupEnabled) BOOL backupEnabled;	// G=0x345d1b25; S=0x345d1b59; converted property
- (id)initWithDelegate:(id)delegate eventQueue:(id)queue;	// 0x345d1701
- (void)_backupDidBeginNotification;	// 0x345d1aa5
- (void)_establishConnection;	// 0x345d3035
- (id)_sendRequest:(id)request arguments:(id)arguments;	// 0x345d30d5
- (id)_sendRequest:(id)request arguments:(id)arguments error:(id *)error;	// 0x345d30f9
- (void)accountChanged;	// 0x345d25b1
- (BOOL)acquireLockWithBackupUDID:(id)backupUDID owner:(id)owner timeout:(double)timeout error:(id *)error;	// 0x345d2781
// converted property getter: - (BOOL)allowiTunesBackup;	// 0x345d2fc9
- (id)backupState;	// 0x345d1c59
- (void)cancel;	// 0x345d1cb1
- (BOOL)cancelApplicationRestoreWithBundleID:(id)bundleID error:(id *)error;	// 0x345d24c5
- (void)cancelRestore;	// 0x345d1ccd
- (void)connection:(id)connection didReceiveMessage:(id)message;	// 0x345d324d
- (void)connectionWasInterrupted:(id)interrupted;	// 0x345d36b5
- (void)connectionWasInvalid:(id)invalid;	// 0x345d37c1
- (unsigned)countOfRestoreFailuresForDataclass:(id)dataclass assetType:(id)type;	// 0x345d216d
- (id)dateOfLastBackup;	// 0x345d2221
- (id)dateOfNextScheduledBackup;	// 0x345d223d
- (void)dealloc;	// 0x345d17d9
- (BOOL)deleteAccountWithError:(id *)error;	// 0x345d25e9
- (BOOL)deleteBackupUDID:(id)udid error:(id *)error;	// 0x345d2625
- (BOOL)deleteSnapshotID:(unsigned)anId fromBackupUDID:(id)backupUDID error:(id *)error;	// 0x345d26b9
- (id)domainInfoForName:(id)name;	// 0x345d2ad9
- (id)domainInfoList;	// 0x345d2b1d
- (BOOL)extractItemFromBackupUDID:(id)backupUDID snapshotID:(unsigned)anId domainName:(id)name relativePath:(id)path toPath:(id)path5 error:(id *)error;	// 0x345d2c69
- (void)finishRestore;	// 0x345d255d
- (id)getAppleIDsForBackupUDID:(id)backupUDID snapshotID:(unsigned)anId error:(id *)error;	// 0x345d2df5
- (id)getBackupListWithError:(id *)error;	// 0x345d1bd9
- (id)getBackupListWithFiltering:(BOOL)filtering error:(id *)error;	// 0x345d1bed
- (int)getLogLevel;	// 0x345d2f2d
- (void)insufficientFreeSpaceToRestore;	// 0x345d2579
- (void)invalidate;	// 0x345d179d
// converted property getter: - (BOOL)isBackupEnabled;	// 0x345d1b25
- (BOOL)isBackupEnabledForDomainName:(id)domainName;	// 0x345d2ba5
- (void)keyBagIsLocking;	// 0x345d25cd
- (unsigned long long)nextBackupSize;	// 0x345d2aa5
- (void)prioritizeRestoreFileWithPath:(id)path;	// 0x345d1f09
- (void)rebootDevice;	// 0x345d2ffd
- (BOOL)recordRestoreFailure:(id)failure error:(id *)error;	// 0x345d1f4d
- (BOOL)releaseLockWithBackupUDID:(id)backupUDID owner:(id)owner error:(id *)error;	// 0x345d290d
- (BOOL)removeDomainName:(id)name error:(id *)error;	// 0x345d2b49
- (void)repair;	// 0x345d3019
- (BOOL)restoreApplicationWithBundleID:(id)bundleID failed:(BOOL)failed context:(id)context error:(id *)error;	// 0x345d23fd
- (BOOL)restoreApplicationWithBundleID:(id)bundleID failed:(BOOL)failed error:(id *)error;	// 0x345d23d9
- (BOOL)restoreDataExistsForApplicationWithBundleID:(id)bundleID size:(unsigned long long *)size;	// 0x345d1d91
- (id)restoreFailuresForDataclass:(id)dataclass assetType:(id)type range:(NSRange)range;	// 0x345d20b9
- (BOOL)restoreFileExistsWithPath:(id)path;	// 0x345d1d05
- (BOOL)restoreFileWithPath:(id)path context:(id)context error:(id *)error;	// 0x345d2341
- (BOOL)restoreFileWithPath:(id)path error:(id *)error;	// 0x345d2321
- (id)restoreFilesForDomain:(id)domain relativePath:(id)path pendingOnly:(BOOL)only range:(NSRange)range error:(id *)error;	// 0x345d1e2d
- (id)restoreInfo;	// 0x345d2ea9
- (id)restoreState;	// 0x345d1ce9
// converted property setter: - (void)setAllowiTunesBackup:(BOOL)backup;	// 0x345d2f61
// converted property setter: - (void)setBackupEnabled:(BOOL)enabled;	// 0x345d1b59
- (void)setBackupEnabled:(BOOL)enabled forDomainName:(id)domainName;	// 0x345d2bf9
- (void)setDelegate:(id)delegate;	// 0x345d1865
- (void)setLogLevel:(int)level;	// 0x345d2ec5
- (BOOL)setupBackupWithPasscode:(id)passcode error:(id *)error;	// 0x345d1ab5
- (BOOL)startBackupWithError:(id *)error;	// 0x345d1c75
- (BOOL)startRestoreForBackupUDID:(id)backupUDID snapshotID:(unsigned)anId error:(id *)error;	// 0x345d2259
- (BOOL)startScanWithError:(id *)error;	// 0x345d2a69
- (void)syncBackupEnabled;	// 0x345d1bbd
- (void)wakeUp;	// 0x345d2595
@end

