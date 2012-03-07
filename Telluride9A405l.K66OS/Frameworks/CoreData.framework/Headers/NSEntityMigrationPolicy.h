/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library


@interface NSEntityMigrationPolicy : NSObject {
}
- (id)_nonNilValueOrDefaultValueForAttribute:(id)attribute source:(id)source destination:(id)destination;	// 0x33f9473d
- (BOOL)beginEntityMapping:(id)mapping manager:(id)manager error:(id *)error;	// 0x33f94729
- (BOOL)createDestinationInstancesForSourceInstance:(id)sourceInstance entityMapping:(id)mapping manager:(id)manager error:(id *)error;	// 0x33f947e5
- (BOOL)createRelationshipsForDestinationInstance:(id)destinationInstance entityMapping:(id)mapping manager:(id)manager error:(id *)error;	// 0x33f94a71
- (BOOL)endEntityMapping:(id)mapping manager:(id)manager error:(id *)error;	// 0x33f94739
- (BOOL)endInstanceCreationForEntityMapping:(id)entityMapping manager:(id)manager error:(id *)error;	// 0x33f9472d
- (BOOL)endRelationshipCreationForEntityMapping:(id)entityMapping manager:(id)manager error:(id *)error;	// 0x33f94731
- (BOOL)performCustomValidationForEntityMapping:(id)entityMapping manager:(id)manager error:(id *)error;	// 0x33f94735
@end

