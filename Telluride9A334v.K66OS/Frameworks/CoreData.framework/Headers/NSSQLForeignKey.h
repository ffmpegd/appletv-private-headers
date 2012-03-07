/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSSQLColumn.h"

@class NSSQLToOne;

__attribute__((visibility("hidden")))
@interface NSSQLForeignKey : NSSQLColumn {
@private
	NSSQLToOne *_toOne;	// 52 = 0x34
}
- (id)initForReadOnlyFetchingOfEntity:(id)entity toOneRelationship:(id)oneRelationship;	// 0x31f03591
- (id)initWithEntity:(id)entity propertyDescription:(id)description;	// 0x31f0363d
- (id)initWithEntity:(id)entity toOneRelationship:(id)oneRelationship;	// 0x31e6ee9d
- (void)copyValuesForReadOnlyFetch:(id)readOnlyFetch;	// 0x31f03541
- (void)dealloc;	// 0x31f03501
- (id)toOneRelationship;	// 0x31e6f9c1
@end

