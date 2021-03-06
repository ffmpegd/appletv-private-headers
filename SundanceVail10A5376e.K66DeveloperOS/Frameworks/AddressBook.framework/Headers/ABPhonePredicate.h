/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBook.framework/AddressBook
 */

#import "AddressBook-Structs.h"
#import "ABPredicate.h"

@class NSString;

@interface ABPhonePredicate : ABPredicate {
	NSString *_phoneNumber;	// 8 = 0x8
	NSString *_country;	// 12 = 0xc
	NSString *_dbCountry;	// 16 = 0x10
}
@property(copy, nonatomic) NSString *country;	// G=0x32bf8f41; S=0x32bf8f55; @synthesize=_country
@property(readonly, assign, nonatomic) NSString *dbCountry;	// G=0x32bf8ef5; @synthesize=_dbCountry
@property(copy, nonatomic) NSString *phoneNumber;	// G=0x32bf8f1d; S=0x32bf8f31; @synthesize=_phoneNumber
- (void)ab_bindStatement:(CPSqliteStatement *)statement withBindingOffset:(int *)bindingOffset predicateIdentifier:(int)identifier;	// 0x32bf8df5
// declared property getter: - (id)country;	// 0x32bf8f41
// declared property getter: - (id)dbCountry;	// 0x32bf8ef5
- (void)dealloc;	// 0x32bf8ce9
- (void)evaluateCallbackWithSqliteContext:(sqlite3_context *)sqliteContext predicateContext:(void *)context values:(Mem **)values count:(int)count;	// 0x32bf8e55
- (BOOL)hasCallback;	// 0x32bf8df1
- (BOOL)isValid;	// 0x32bf8d61
// declared property getter: - (id)phoneNumber;	// 0x32bf8f1d
- (id)predicateFormat;	// 0x32bf8d8d
- (id)queryJoinsInCompound:(BOOL)compound;	// 0x32bf8de1
- (id)queryWhereString;	// 0x32bf8de5
// declared property setter: - (void)setCountry:(id)country;	// 0x32bf8f55
// declared property setter: - (void)setPhoneNumber:(id)number;	// 0x32bf8f31
@end

