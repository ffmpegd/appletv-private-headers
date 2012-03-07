/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import <NSObject.h> // Unknown library
#import "DataAccess-Structs.h"


@interface DALocalDBHelper : NSObject {
	void *_abDB;	// 4 = 0x4
	int _abConnectionCount;	// 8 = 0x8
	CalDatabase *_calDB;	// 12 = 0xc
	int _calConnectionCount;	// 16 = 0x10
	void *_bookmarkDB;	// 20 = 0x14
	int _bookmarkConnectionCount;	// 24 = 0x18
	id _calUnitTestCallbackBlock;	// 28 = 0x1c
}
@property(readonly, assign) void *abDB;	// G=0x3226520d; converted property
@property(readonly, assign) void *bookmarkDB;	// G=0x32266131; converted property
@property(readonly, assign) int calConnectionCount;	// G=0x32266121; converted property
@property(readonly, assign) CalDatabase *calDB;	// G=0x322657d1; converted property
+ (void)abSetTestABDBDir:(id)dir;	// 0x322665bd
+ (id)abTestABDBDir;	// 0x3226663d
+ (void)calSetTestCalDBDir:(id)dir;	// 0x3226664d
+ (id)calTestCalDBDir;	// 0x322666cd
+ (id)sharedInstanceForAccountType:(id)accountType creatingClass:(Class)aClass;	// 0x32265129
- (void)_registerForAddressBookYieldNotifications;	// 0x3226521d
- (void)_registerForCalendarYieldNotifications;	// 0x32265885
- (BOOL)abCloseDBAndSave:(BOOL)save;	// 0x3226569d
- (id)abConstraintPlistPath;	// 0x322657cd
// converted property getter: - (void *)abDB;	// 0x3226520d
- (void)abOpenDB;	// 0x32265371
- (void)abProcessAddedImages;	// 0x32265541
- (void)abProcessAddedRecords;	// 0x322654d5
- (BOOL)abSaveDB;	// 0x322655ad
- (void)bookmarkCloseDBAndSave:(BOOL)save;	// 0x322663f1
// converted property getter: - (void *)bookmarkDB;	// 0x32266131
- (BOOL)bookmarkOpenDB;	// 0x322661e5
- (void)bookmarkSaveDB;	// 0x32266335
- (BOOL)calCloseDBAndSave:(BOOL)save;	// 0x32265f4d
// converted property getter: - (int)calConnectionCount;	// 0x32266121
// converted property getter: - (CalDatabase *)calDB;	// 0x322657d1
- (void)calOpenDB;	// 0x322659d9
- (void)calOpenDBWithChangeLogging;	// 0x32265b39
- (void)calProcessAddedRecords;	// 0x32265c89
- (BOOL)calSaveDB;	// 0x32265cf5
- (BOOL)calSaveDBAndFlushCaches;	// 0x32265e21
- (void)calUnitTestsSetCallbackBlockForSave:(id)save;	// 0x322666dd
@end

