/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBook.framework/AddressBook
 */

#import "AddressBook-Structs.h"
#import "ABPredicate.h"


@interface ABAnyValuePredicate : ABPredicate {
@private
	int _property;	// 8 = 0x8
}
@property(assign, nonatomic) int property;	// G=0x365af87d; S=0x365af88d; @synthesize=_property
- (id)init;	// 0x365af89d
- (void)ab_bindStatement:(CPSqliteStatement *)statement withBindingOffset:(int *)bindingOffset predicateIdentifier:(int)identifier;	// 0x365af8dd
- (BOOL)isValid;	// 0x365af861
// declared property getter: - (int)property;	// 0x365af87d
- (id)queryGroupByProperties;	// 0x365af971
- (id)queryJoinsInCompound:(BOOL)compound;	// 0x365af999
- (id)queryWhereString;	// 0x365af921
// declared property setter: - (void)setProperty:(int)property;	// 0x365af88d
@end

