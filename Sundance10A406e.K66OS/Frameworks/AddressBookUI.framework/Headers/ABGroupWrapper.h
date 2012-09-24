/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

#import <NSObject.h> // Unknown library

@class AccountsManager, ACAccountStore, NSSet, NSString;
@protocol ABGroupWrapperDelegate;

@interface ABGroupWrapper : NSObject {
	void *_addressBook;	// 4 = 0x4
	NSString *_accountIdentifier;	// 8 = 0x8
	void *_source;	// 12 = 0xc
	void *_group;	// 16 = 0x10
	NSString *_cachedName;	// 20 = 0x14
	AccountsManager *_accountsManager;	// 24 = 0x18
	ACAccountStore *_accountStore;	// 28 = 0x1c
	id _delegate;	// 32 = 0x20
	NSSet *_childGroupWrappers;	// 36 = 0x24
	BOOL _shouldBeSelectedWhenAllChildrenAreSelected;	// 40 = 0x28
	BOOL _selected;	// 41 = 0x29
	ABGroupWrapper *_parentGroupWrapper;	// 44 = 0x2c
}
@property(readonly, assign, nonatomic) NSString *_accountDescriptionBasedOnIdentifier;	// G=0x3147df75; 
@property(readonly, assign, nonatomic) NSString *accountIdentifier;	// G=0x3147e619; @synthesize=_accountIdentifier
@property(retain, nonatomic) ACAccountStore *accountStore;	// G=0x3147d145; S=0x3147e599; @synthesize=_accountStore
@property(retain, nonatomic) AccountsManager *accountsManager;	// G=0x3147e579; S=0x3147e589; @synthesize=_accountsManager
@property(readonly, assign, nonatomic) void *addressBook;	// G=0x3147e629; @synthesize=_addressBook
@property(retain, nonatomic) NSSet *childGroupWrappers;	// G=0x3147e5a9; S=0x3147e5b9; @synthesize=_childGroupWrappers
@property(assign, nonatomic) id<ABGroupWrapperDelegate> delegate;	// G=0x3147e5e9; S=0x3147e5f9; @synthesize=_delegate
@property(readonly, assign, nonatomic) void *group;	// G=0x3147e649; @synthesize=_group
@property(readonly, assign, nonatomic) NSString *name;	// G=0x3147d9c1; 
@property(assign, nonatomic) ABGroupWrapper *parentGroupWrapper;	// G=0x3147e659; S=0x3147e669; @synthesize=_parentGroupWrapper
@property(assign, nonatomic, getter=isSelected) BOOL selected;	// G=0x3147e609; S=0x3147dd1d; @synthesize=_selected
@property(assign, nonatomic) BOOL shouldBeSelectedWhenAllChildrenAreSelected;	// G=0x3147e5c9; S=0x3147e5d9; @synthesize=_shouldBeSelectedWhenAllChildrenAreSelected
@property(readonly, assign, nonatomic) void *source;	// G=0x3147e639; @synthesize=_source
@property(readonly, assign, nonatomic) int sourceType;	// G=0x3147e495; 
+ (id)newGroupWrapperFromDictionaryRepresentation:(id)dictionaryRepresentation withAddressBook:(void *)addressBook;	// 0x3147e1a9
+ (id)newGroupWrappersWithAccountIdentifier:(id)accountIdentifier addressBook:(void *)book;	// 0x3147d7bd
+ (id)newGroupWrappersWithAccountIdentifier:(id)accountIdentifier addressBook:(void *)book accountsManager:(id)manager accountStore:(id)store;	// 0x3147d789
+ (id)newGroupWrappersWithAccountIdentifier:(id)accountIdentifier addressBook:(void *)book accountsManager:(id)manager accountStore:(id)store excludingSearchableStores:(BOOL)stores isSoleAccount:(BOOL)account;	// 0x3147d195
+ (id)newGroupWrappersWithAccountIdentifier:(id)accountIdentifier addressBook:(void *)book excludingSearchableStores:(BOOL)stores;	// 0x3147d7e5
- (id)initWithAddressBook:(void *)addressBook accountIdentifier:(id)identifier source:(void *)source group:(void *)group;	// 0x3147d819
// declared property getter: - (id)_accountDescriptionBasedOnIdentifier;	// 0x3147df75
// declared property getter: - (id)accountIdentifier;	// 0x3147e619
- (id)accountManager;	// 0x3147d0f5
// declared property getter: - (id)accountStore;	// 0x3147d145
// declared property getter: - (id)accountsManager;	// 0x3147e579
// declared property getter: - (void *)addressBook;	// 0x3147e629
- (void)childGroupWrapper:(id)wrapper didBecomeSelected:(BOOL)selected;	// 0x3147dd31
// declared property getter: - (id)childGroupWrappers;	// 0x3147e5a9
- (int)compareToGroupWrapper:(id)groupWrapper;	// 0x3147def9
- (id)copyDictionaryRepresentation;	// 0x3147dff5
- (void)dealloc;	// 0x3147d8d1
// declared property getter: - (id)delegate;	// 0x3147e5e9
- (id)description;	// 0x3147e4e1
// declared property getter: - (void *)group;	// 0x3147e649
- (BOOL)isContainerWrapper;	// 0x3147d9b5
- (BOOL)isDirectoryWrapper;	// 0x3147d9b9
- (BOOL)isEqual:(id)equal;	// 0x3147e401
- (BOOL)isGlobalWrapper;	// 0x3147d9b1
// declared property getter: - (BOOL)isSelected;	// 0x3147e609
// declared property getter: - (id)name;	// 0x3147d9c1
// declared property getter: - (id)parentGroupWrapper;	// 0x3147e659
- (int)score;	// 0x3147de3d
// declared property setter: - (void)setAccountStore:(id)store;	// 0x3147e599
// declared property setter: - (void)setAccountsManager:(id)manager;	// 0x3147e589
// declared property setter: - (void)setChildGroupWrappers:(id)wrappers;	// 0x3147e5b9
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x3147e5f9
// declared property setter: - (void)setParentGroupWrapper:(id)wrapper;	// 0x3147e669
// declared property setter: - (void)setSelected:(BOOL)selected;	// 0x3147dd1d
- (void)setSelected:(BOOL)selected propagateSelectionToChildren:(BOOL)children;	// 0x3147dad9
// declared property setter: - (void)setShouldBeSelectedWhenAllChildrenAreSelected:(BOOL)beSelectedWhenAllChildrenAreSelected;	// 0x3147e5d9
// declared property getter: - (BOOL)shouldBeSelectedWhenAllChildrenAreSelected;	// 0x3147e5c9
- (BOOL)showLinkedPeople;	// 0x3147d9bd
// declared property getter: - (void *)source;	// 0x3147e639
// declared property getter: - (int)sourceType;	// 0x3147e495
@end
