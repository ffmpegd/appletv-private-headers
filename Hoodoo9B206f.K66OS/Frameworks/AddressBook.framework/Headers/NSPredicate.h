/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBook.framework/AddressBook
 */

#import "AddressBook-Structs.h"
#import <NSPredicate.h> // Unknown library


@interface NSPredicate (ABPredicateQueryCreation)
- (void)ab_addCallbackContextToArray:(CFArrayRef)array;	// 0x308b3465
- (void)ab_bindStatement:(CPSqliteStatement *)statement withBindingOffset:(int *)bindingOffset predicateIdentifier:(int)identifier;	// 0x308b2029
- (BOOL)ab_hasCallback;	// 0x308b2025
- (id)ab_newQueryWithSortOrder:(unsigned)sortOrder addressBook:(void *)book propertyIndices:(const CFDictionaryRef *)indices;	// 0x308b202d
@end

@interface NSPredicate (ABPredicateRunner)
- (void)ab_runPredicateWithSortOrder:(unsigned)sortOrder inAddressBook:(void *)addressBook withDelegate:(id)delegate;	// 0x308b3219
@end

