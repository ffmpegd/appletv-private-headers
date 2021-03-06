/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

#import <NSObject.h> // Unknown library

@class NSString, NSManagedObjectContext, NSPersistentStoreCoordinator, NSManagedObjectModel;

@interface AXWordDescriptionManager : NSObject {
	NSManagedObjectContext *_managedObjectContext;	// 4 = 0x4
	NSPersistentStoreCoordinator *_persistentStoreCoordinator;	// 8 = 0x8
	NSManagedObjectModel *_managedObjectModel;	// 12 = 0xc
	NSString *languageDialectCode;	// 16 = 0x10
}
@property(retain, nonatomic) NSString *languageDialectCode;	// G=0x33118231; S=0x33118241; @synthesize
@property(readonly, assign, nonatomic) NSManagedObjectContext *managedObjectContext;	// G=0x33117e41; @synthesize=_managedObjectContext
@property(readonly, assign, nonatomic) NSManagedObjectModel *managedObjectModel;	// G=0x33118121; @synthesize=_managedObjectModel
@property(readonly, assign, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;	// G=0x33117f19; @synthesize=_persistentStoreCoordinator
+ (id)sharedInstance;	// 0x33117bf5
- (void)dealloc;	// 0x33117dc5
- (id)descriptionForWord:(id)word;	// 0x33117e3d
- (id)languageCode;	// 0x33117eb5
// declared property getter: - (id)languageDialectCode;	// 0x33118231
// declared property getter: - (id)managedObjectContext;	// 0x33117e41
// declared property getter: - (id)managedObjectModel;	// 0x33118121
// declared property getter: - (id)persistentStoreCoordinator;	// 0x33117f19
// declared property setter: - (void)setLanguageDialectCode:(id)code;	// 0x33118241
@end

