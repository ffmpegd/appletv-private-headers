/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import <NSManagedObjectContext.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface EKSideTableContext : NSManagedObjectContext {
@private
	NSString *_path;	// 128 = 0x80
}
- (id)init;	// 0x30e4a859
- (id)initWithPath:(id)path;	// 0x30de8a41
- (id)_alarmsMatchingPredicate:(id)predicate;	// 0x30e4a86d
- (id)_managedObjectModel;	// 0x30de8e5d
- (id)_pathForPersistentStore;	// 0x30de8db1
- (id)_persistentStoreCoordinator;	// 0x30de8af5
- (void)_removeSqliteFiles;	// 0x30e4ac25
- (id)_settingForKey:(id)key;	// 0x30de96cd
- (id)_urlForPersistentStore;	// 0x30de8d79
- (id)alarmsBetweenStartDate:(id)date endDate:(id)date2;	// 0x30e4aa35
- (void)deleteAllAlarms;	// 0x30e4a941
- (id)insertNewAlarm;	// 0x30e4aa0d
- (id)nextAlarmFireTime;	// 0x30de94d5
- (id)rootDirectory;	// 0x30de8de5
- (void)setSetting:(id)setting forKey:(id)key;	// 0x30e4ab91
- (id)settingForKey:(id)key;	// 0x30de9699
@end

