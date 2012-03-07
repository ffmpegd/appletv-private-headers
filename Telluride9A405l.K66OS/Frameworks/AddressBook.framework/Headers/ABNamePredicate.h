/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBook.framework/AddressBook
 */

#import "AddressBook-Structs.h"
#import "ABPredicate.h"

@class NSString;

@interface ABNamePredicate : ABPredicate {
@private
	void *_addressBook;	// 8 = 0x8
	NSString *_name;	// 12 = 0xc
	void *_source;	// 16 = 0x10
	void *_group;	// 20 = 0x14
	NSString *_accountIdentifier;	// 24 = 0x18
	BOOL _showPersonLinks;	// 28 = 0x1c
	BOOL _matchWholeWords;	// 29 = 0x1d
	BOOL _matchNameOnly;	// 30 = 0x1e
	CFArrayRef _tokenizations;	// 32 = 0x20
	CFArrayRef _tokenizationSortKeys;	// 36 = 0x24
}
@property(copy, nonatomic) NSString *accountIdentifier;	// G=0x365acb85; S=0x365acbe1; @synthesize=_accountIdentifier
@property(assign, nonatomic) void *addressBook;	// G=0x365acb95; S=0x365ad161; @synthesize=_addressBook
@property(assign, nonatomic) void *group;	// G=0x365acb15; S=0x365ad0c9; @synthesize=_group
@property(assign, nonatomic) BOOL matchNameOnly;	// G=0x365acb25; S=0x365acb35; @synthesize=_matchNameOnly
@property(assign, nonatomic) BOOL matchWholeWords;	// G=0x365acb45; S=0x365acb55; @synthesize=_matchWholeWords
@property(copy, nonatomic) NSString *name;	// G=0x365acba5; S=0x365ad0fd; @synthesize=_name
@property(assign, nonatomic) BOOL showPersonLinks;	// G=0x365acb65; S=0x365acb75; @synthesize=_showPersonLinks
@property(assign, nonatomic) void *source;	// G=0x365acb05; S=0x365ad095; @synthesize=_source
@property(readonly, assign) CFArrayRef tokenizations;	// G=0x365ad055; converted property
- (id)init;	// 0x365acbb5
- (void)_doBindingWithStatement:(CPSqliteStatement *)statement bindingOffset:(int *)offset;	// 0x365acced
- (void)ab_bindStatement:(CPSqliteStatement *)statement withBindingOffset:(int *)bindingOffset predicateIdentifier:(int)identifier;	// 0x365acca9
// declared property getter: - (id)accountIdentifier;	// 0x365acb85
// declared property getter: - (void *)addressBook;	// 0x365acb95
- (void)dealloc;	// 0x365ad195
// declared property getter: - (void *)group;	// 0x365acb15
- (BOOL)isValid;	// 0x365ad029
// declared property getter: - (BOOL)matchNameOnly;	// 0x365acb25
// declared property getter: - (BOOL)matchWholeWords;	// 0x365acb45
// declared property getter: - (id)name;	// 0x365acba5
- (id)predicateFormat;	// 0x365acc05
- (id)queryJoinsInCompound:(BOOL)compound;	// 0x365ad001
- (id)queryWhereString;	// 0x365acdad
// declared property setter: - (void)setAccountIdentifier:(id)identifier;	// 0x365acbe1
// declared property setter: - (void)setAddressBook:(void *)book;	// 0x365ad161
// declared property setter: - (void)setGroup:(void *)group;	// 0x365ad0c9
// declared property setter: - (void)setMatchNameOnly:(BOOL)only;	// 0x365acb35
// declared property setter: - (void)setMatchWholeWords:(BOOL)words;	// 0x365acb55
// declared property setter: - (void)setName:(id)name;	// 0x365ad0fd
// declared property setter: - (void)setShowPersonLinks:(BOOL)links;	// 0x365acb75
// declared property setter: - (void)setSource:(void *)source;	// 0x365ad095
// declared property getter: - (BOOL)showPersonLinks;	// 0x365acb65
// declared property getter: - (void *)source;	// 0x365acb05
// converted property getter: - (CFArrayRef)tokenizations;	// 0x365ad055
@end

