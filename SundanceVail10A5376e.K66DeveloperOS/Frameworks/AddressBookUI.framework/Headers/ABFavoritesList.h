/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

#import <NSObject.h> // Unknown library

@class ABFavoritesListManager;

@interface ABFavoritesList : NSObject {
	ABFavoritesListManager *_favoritesListManager;	// 4 = 0x4
}
+ (id)sharedInstance;	// 0x30fd219d
+ (id)sharedInstanceWithAddressBook:(void *)addressBook;	// 0x30fa6b79
- (id)initWithAddressBook:(void *)addressBook;	// 0x30fa6bc5
- (void)_applicationWillSuspend:(id)_application;	// 0x30fc7a3d
- (void)addEntry:(id)entry;	// 0x30fd224d
- (BOOL)addEntryForPerson:(void *)person property:(int)property withIdentifier:(int)identifier;	// 0x30fd2355
- (BOOL)containsEntryWithIdentifier:(int)identifier forPerson:(void *)person;	// 0x30fd22ed
- (BOOL)containsEntryWithType:(int)type forPerson:(void *)person property:(int)property identifier:(int)identifier;	// 0x30fa6f89
- (void)dealloc;	// 0x30fd21b1
- (id)entries;	// 0x30fd220d
- (id)entriesForPerson:(void *)person;	// 0x30fd222d
- (BOOL)entryIsDuplicateAndThusRemoved:(id)removed oldUid:(int)uid;	// 0x30fd2389
- (id)entryWithIdentifier:(int)identifier forPerson:(void *)person;	// 0x30fd2315
- (id)entryWithType:(int)type forPerson:(void *)person property:(int)property identifier:(int)identifier;	// 0x30fd2335
- (BOOL)isFull;	// 0x30fa6c81
- (void)moveEntryAtIndex:(int)index toIndex:(int)index2;	// 0x30fd228d
- (void)recacheIdentitiesSoon;	// 0x30fd22cd
- (void)removeEntryAtIndex:(int)index;	// 0x30fd226d
- (void)save;	// 0x30fd22ad
@end

