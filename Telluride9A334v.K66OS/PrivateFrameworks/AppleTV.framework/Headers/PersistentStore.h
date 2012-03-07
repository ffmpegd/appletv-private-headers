/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class NSURL, NSManagedObjectModel, NSPersistentStoreCoordinator, PersistentStoreConfiguration, NSString;

__attribute__((visibility("hidden")))
@interface PersistentStore : NSObject {
@private
	PersistentStoreConfiguration *_configuration;	// 4 = 0x4
	NSManagedObjectModel *_model;	// 8 = 0x8
	NSPersistentStoreCoordinator *_storeCoordinator;	// 12 = 0xc
	NSString *_threadContextKey;	// 16 = 0x10
	NSString *_threadCountKey;	// 20 = 0x14
}
@property(readonly, assign) PersistentStoreConfiguration *configuration;	// G=0x3335be81; 
@property(readonly, assign) NSURL *databaseFileURL;	// G=0x3335beb9; 
@property(readonly, assign) NSURL *modelFileURL;	// G=0x3335c071; 
- (id)init;	// 0x3335b8f9
- (id)initWithConfiguration:(id)configuration error:(id *)error;	// 0x3335b90d
- (id)_baseFilePath;	// 0x3335c8bd
- (BOOL)_loadStoreCoordinatorWithIntegrityCheck:(BOOL)integrityCheck error:(id *)error;	// 0x3335c8f5
- (id)_newLegacyManagedObjectModel;	// 0x3335ca15
- (id)beginThreadContextSession;	// 0x3335bb3d
- (void)checkIntegrityWithInitializationBlock:(id)initializationBlock;	// 0x3335bd09
// declared property getter: - (id)configuration;	// 0x3335be81
// declared property getter: - (id)databaseFileURL;	// 0x3335beb9
- (void)dealloc;	// 0x3335baa1
- (void)endThreadContextSession;	// 0x3335bf2d
- (BOOL)loadStoreCoordinatorWithOptions:(id)options error:(id *)error;	// 0x3335c511
- (id)managedObjectModel;	// 0x3335c7e5
// declared property getter: - (id)modelFileURL;	// 0x3335c071
- (BOOL)performLightweightMigration:(id *)migration;	// 0x3335c0e5
- (BOOL)resetStore:(id *)store;	// 0x3335c3a5
@end

