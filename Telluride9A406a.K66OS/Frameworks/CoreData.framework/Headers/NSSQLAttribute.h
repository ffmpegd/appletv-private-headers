/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSSQLColumn.h"


__attribute__((visibility("hidden")))
@interface NSSQLAttribute : NSSQLColumn {
}
- (id)initForReadOnlyFetchWithExpression:(id)expression;	// 0x34809b25
- (id)initWithEntity:(id)entity propertyDescription:(id)description;	// 0x34762409
- (unsigned)_sqlTypeForAttributeType:(unsigned)attributeType flags:(unsigned)flags;	// 0x34762919
- (id)attributeDescription;	// 0x34809b15
- (BOOL)shouldIndex;	// 0x34809aed
@end

