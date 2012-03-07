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
@property(readonly, assign) void *abDB;	// G=0x345fe20d; converted property
@property(readonly, assign) void *bookmarkDB;	// G=0x345ff131; converted property
@property(readonly, assign) int calConnectionCount;	// G=0x345ff121; converted property
@property(readonly, assign) CalDatabase *calDB;	// G=0x345fe7d1; converted property
+ (void)abSetTestABDBDir:(id)dir;	// 0x345ff5bd
+ (id)abTestABDBDir;	// 0x345ff63d
+ (void)calSetTestCalDBDir:(id)dir;	// 0x345ff64d
+ (id)calTestCalDBDir;	// 0x345ff6cd
+ (id)sharedInstanceForAccountType:(id)accountType creatingClass:(Class)aClass;	// 0x345fe129
- (void)_registerForAddressBookYieldNotifications;	// 0x345fe21d
- (void)_registerForCalendarYieldNotifications;	// 0x345fe885
- (BOOL)abCloseDBAndSave:(BOOL)save;	// 0x345fe69d
- (id)abConstraintPlistPath;	// 0x345fe7cd
// converted property getter: - (void *)abDB;	// 0x345fe20d
- (void)abOpenDB;	// 0x345fe371
- (void)abProcessAddedImages;	// 0x345fe541
- (void)abProcessAddedRecords;	// 0x345fe4d5
- (BOOL)abSaveDB;	// 0x345fe5ad
- (void)bookmarkCloseDBAndSave:(BOOL)save;	// 0x345ff3f1
// converted property getter: - (void *)bookmarkDB;	// 0x345ff131
- (BOOL)bookmarkOpenDB;	// 0x345ff1e5
- (void)bookmarkSaveDB;	// 0x345ff335
- (BOOL)calCloseDBAndSave:(BOOL)save;	// 0x345fef4d
// converted property getter: - (int)calConnectionCount;	// 0x345ff121
// converted property getter: - (CalDatabase *)calDB;	// 0x345fe7d1
- (void)calOpenDB;	// 0x345fe9d9
- (void)calOpenDBWithChangeLogging;	// 0x345feb39
- (void)calProcessAddedRecords;	// 0x345fec89
- (BOOL)calSaveDB;	// 0x345fecf5
- (BOOL)calSaveDBAndFlushCaches;	// 0x345fee21
- (void)calUnitTestsSetCallbackBlockForSave:(id)save;	// 0x345ff6dd
@end

