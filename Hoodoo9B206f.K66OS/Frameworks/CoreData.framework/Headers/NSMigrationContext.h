/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library

@class NSEntityMapping, NSPropertyMapping, NSMutableDictionary, NSMigrationManager;

__attribute__((visibility("hidden")))
@interface NSMigrationContext : NSObject {
@private
	NSMutableDictionary *_bySourceAssociationTable;	// 4 = 0x4
	NSMutableDictionary *_byDestinationAssociationTable;	// 8 = 0x8
	NSMutableDictionary *_byMappingBySourceAssociationTable;	// 12 = 0xc
	NSMutableDictionary *_byMappingByDestinationAssociationTable;	// 16 = 0x10
	NSMigrationManager *_migrationManager;	// 20 = 0x14
	NSEntityMapping *_currentMapping;	// 24 = 0x18
	unsigned _currentStep;	// 28 = 0x1c
	NSPropertyMapping *_currentPropertyMapping;	// 32 = 0x20
}
@property(retain) id currentEntityMapping;	// G=0x362c1d4d; S=0x362c26d5; converted property
@property(assign) unsigned currentMigrationStep;	// G=0x362c1d6d; S=0x362c25dd; converted property
@property(retain) NSPropertyMapping *currentPropertyMapping;	// G=0x362c1d5d; S=0x362c2641; converted property
- (id)initWithMigrationManager:(id)migrationManager;	// 0x362c1d7d
- (void)_createAssociationsByDestination:(id)destination fromSource:(id)source forEntityMapping:(id)entityMapping;	// 0x362c225d
- (void)_createAssociationsBySource:(id)source withDestination:(id)destination forEntityMapping:(id)entityMapping;	// 0x362c241d
- (void)associateSourceInstance:(id)instance withDestinationInstance:(id)destinationInstance forEntityMapping:(id)entityMapping;	// 0x362c221d
- (void)clearAssociationTables;	// 0x362c278d
// converted property getter: - (id)currentEntityMapping;	// 0x362c1d4d
// converted property getter: - (unsigned)currentMigrationStep;	// 0x362c1d6d
// converted property getter: - (id)currentPropertyMapping;	// 0x362c1d5d
- (void)dealloc;	// 0x362c2825
- (id)destinationInstancesForEntityMapping:(id)entityMapping sourceInstance:(id)instance;	// 0x362c204d
// converted property setter: - (void)setCurrentEntityMapping:(id)mapping;	// 0x362c26d5
// converted property setter: - (void)setCurrentMigrationStep:(unsigned)step;	// 0x362c25dd
// converted property setter: - (void)setCurrentPropertyMapping:(id)mapping;	// 0x362c2641
- (id)sourceInstancesForEntityMapping:(id)entityMapping destinationInstance:(id)instance;	// 0x362c1e7d
@end

