/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBook.framework/AddressBook
 */

#import "AddressBook-Structs.h"
#import <NSPredicate.h> // Unknown library


@interface ABPredicate : NSPredicate {
}
+ (id)newQueryFromABPredicate:(id)abpredicate withSortOrder:(unsigned)sortOrder addressBook:(void *)book propertyIndices:(const CFDictionaryRef *)indices;	// 0x365ad961
+ (id)newQueryFromCompoundPredicate:(id)compoundPredicate withSortOrder:(unsigned)sortOrder addressBook:(void *)book propertyIndices:(const CFDictionaryRef *)indices;	// 0x365ad3cd
+ (id)newQueryWithProperties:(id)properties joins:(id)joins whereString:(id)string sortOrder:(unsigned)order groupByProperties:(id)properties5 addressBook:(void *)book propertyIndices:(const CFDictionaryRef *)indices;	// 0x365ad9f1
+ (id)personPredicateWithAnyValueForProperty:(int)property;	// 0x365add29
+ (id)personPredicateWithGroup:(void *)group source:(void *)source account:(id)account;	// 0x365adbf5
+ (id)personPredicateWithName:(id)name addressBook:(void *)book;	// 0x365ade9d
+ (id)personPredicateWithNameLike:(id)nameLike addressBook:(void *)book;	// 0x365ae065
+ (id)personPredicateWithNameLike:(id)nameLike group:(void *)group source:(void *)source account:(id)account showingPersonLinks:(BOOL)links addressBook:(void *)book;	// 0x365ae025
+ (id)personPredicateWithNameLike:(id)nameLike group:(void *)group source:(void *)source account:(id)account showingPersonLinks:(BOOL)links includeSourceInResults:(BOOL)results addressBook:(void *)book;	// 0x365adef9
+ (id)personPredicateWithNameLike:(id)nameLike showingPersonLinks:(BOOL)links addressBook:(void *)book;	// 0x365adec9
+ (id)personPredicateWithNameOnly:(id)nameOnly account:(id)account addressBook:(void *)book;	// 0x365ade45
+ (id)personPredicateWithPhoneLike:(id)phoneLike countryHint:(id)hint addressBook:(void *)book;	// 0x365adc99
+ (id)personPredicateWithValue:(id)value comparison:(long)comparison forProperty:(int)property;	// 0x365adda1
+ (void)searchPeopleWithPredicate:(id)predicate sortOrder:(unsigned)order inAddressBook:(void *)addressBook withDelegate:(id)delegate;	// 0x365ad2c1
- (id)init;	// 0x365ad295
- (void)ab_addCallbackContextToArray:(CFArrayRef)array;	// 0x365ae6f1
- (void)ab_bindStatement:(CPSqliteStatement *)statement withBindingOffset:(int *)bindingOffset predicateIdentifier:(int)identifier;	// 0x365ad285
- (BOOL)ab_hasCallback;	// 0x365ae2bd
- (id)ab_newQueryWithSortOrder:(unsigned)sortOrder addressBook:(void *)book propertyIndices:(const CFDictionaryRef *)indices;	// 0x365ae2d5
- (void)bindDouble:(double)aDouble toStatement:(CPSqliteStatement *)statement withBindingOffset:(int *)bindingOffset;	// 0x365ae0f5
- (void)bindString:(id)string toStatement:(CPSqliteStatement *)statement withBindingOffset:(int *)bindingOffset;	// 0x365ae10d
- (void *)callbackContext;	// 0x365ad27d
- (void)dealloc;	// 0x365ae191
- (void)evaluateCallbackWithSqliteContext:(sqlite3_context *)sqliteContext predicateContext:(void *)context values:(Mem **)values count:(int)count;	// 0x365ad281
- (BOOL)hasCallback;	// 0x365ad279
- (BOOL)isValid;	// 0x365ad265
- (id)predicateFormat;	// 0x365ae145
- (id)queryGroupByProperties;	// 0x365ad271
- (id)queryJoinsInCompound:(BOOL)compound;	// 0x365ad26d
- (id)querySelectProperties;	// 0x365ad269
- (id)queryWhereString;	// 0x365ad275
@end
