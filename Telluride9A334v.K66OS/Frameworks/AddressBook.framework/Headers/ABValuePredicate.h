/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBook.framework/AddressBook
 */

#import "ABPredicate.h"
#import "AddressBook-Structs.h"

@class NSObject;
@protocol NSObject;

@interface ABValuePredicate : ABPredicate {
@private
	int _property;	// 8 = 0x8
	int _comparison;	// 12 = 0xc
	id<NSObject> _value;	// 16 = 0x10
	BOOL _dictionaryValue;	// 20 = 0x14
}
@property(assign, nonatomic) int comparison;	// G=0x35a9675d; S=0x35a9676d; @synthesize=_comparison
@property(assign, nonatomic) int property;	// G=0x35a9677d; S=0x35a9678d; @synthesize=_property
@property(copy, nonatomic) NSObject *value;	// G=0x35a9674d; S=0x35a974fd; @synthesize=_value
+ (id)stringForComparison:(id)comparison withComparision:(long)comparision;	// 0x35a967ed
- (id)init;	// 0x35a9679d
- (void)ab_bindStatement:(CPSqliteStatement *)statement withBindingOffset:(int *)bindingOffset predicateIdentifier:(int)identifier;	// 0x35a9692d
// declared property getter: - (long)comparison;	// 0x35a9675d
- (void)dealloc;	// 0x35a97595
- (BOOL)isValid;	// 0x35a9730d
- (id)predicateFormat;	// 0x35a9685d
// declared property getter: - (int)property;	// 0x35a9677d
- (id)queryJoinsInCompound:(BOOL)compound;	// 0x35a9725d
- (id)querySelectProperties;	// 0x35a972bd
- (id)queryWhereString;	// 0x35a96e39
// declared property setter: - (void)setComparison:(long)comparison;	// 0x35a9676d
// declared property setter: - (void)setProperty:(int)property;	// 0x35a9678d
// declared property setter: - (void)setValue:(id)value;	// 0x35a974fd
- (id)stringForComparison:(id)comparison;	// 0x35a96dfd
// declared property getter: - (id)value;	// 0x35a9674d
@end

