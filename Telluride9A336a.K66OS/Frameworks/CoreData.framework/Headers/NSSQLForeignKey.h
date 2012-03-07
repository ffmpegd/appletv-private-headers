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
- (id)initForReadOnlyFetchingOfEntity:(id)entity toOneRelationship:(id)oneRelationship;	// 0x323c0591
- (id)initWithEntity:(id)entity propertyDescription:(id)description;	// 0x323c063d
- (id)initWithEntity:(id)entity toOneRelationship:(id)oneRelationship;	// 0x3232be9d
- (void)copyValuesForReadOnlyFetch:(id)readOnlyFetch;	// 0x323c0541
- (void)dealloc;	// 0x323c0501
- (id)toOneRelationship;	// 0x3232c9c1
@end
