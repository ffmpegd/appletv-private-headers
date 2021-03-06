/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBook.framework/AddressBook
 */

#import </libobjc.A.h>

@class NSMutableDictionary;

@interface ABPersonLinker : NSObject {
	void *_addressBook;	// 4 = 0x4
	NSMutableDictionary *_peopleByFirstName;	// 8 = 0x8
	NSMutableDictionary *_peopleByLastName;	// 12 = 0xc
	NSMutableDictionary *_peopleByOrganization;	// 16 = 0x10
}
+ (BOOL)isLinkDataValidForAddressBook:(void *)addressBook;	// 0x2c9c9351
+ (void)startAutoLinkingNewPeopleInAddressBook:(void *)addressBook inProcess:(BOOL)process;	// 0x2c9c9371
- (id)init;	// 0x2c9c9499
- (id)initWithAddressBook:(void *)addressBook;	// 0x2c9c944d
- (void)addPerson:(void *)person toDictionary:(id)dictionary withProperty:(int)property;	// 0x2c9ca569
- (id)copyArrayOfAllPeopleWithROWIDGreatThan:(int)rowidgreatThan withLimit:(int)limit;	// 0x2c9caf35
- (void)dealloc;	// 0x2c9c9515
- (void)linkNewlyAddedPerson:(void *)person;	// 0x2c9cb145
- (void)linkRecentlyAddedPeople;	// 0x2c9cb131
- (BOOL)linkRecentlyAddedPeopleWithLimit:(int)limit;	// 0x2c9cafe1
- (void)makeInitialLinks;	// 0x2c9caf21
- (void)makeInitialLinksCountingOuterIterations:(unsigned *)iterations;	// 0x2c9caf01
- (void)makeLinksForAddedPeople:(id)addedPeople inInitialLinking:(BOOL)initialLinking countingOuterIterations:(unsigned *)iterations;	// 0x2c9ca7f1
- (id)otherPeopleInArray:(id)array matchingPerson:(void *)person;	// 0x2c9c9d99
- (id)otherPeopleInDatabaseMatchingPerson:(void *)databaseMatchingPerson notIncludingPeople:(id)people;	// 0x2c9c95a1
- (void)presortPeople:(id)people;	// 0x2c9ca629
- (void)removeAllLinks;	// 0x2c9cadc5
- (BOOL)shouldLinkPerson:(void *)person toPeopleInDatabase:(id)database andNewlyAddedPeople:(id)people inInitialLinking:(BOOL)initialLinking;	// 0x2c9ca109
- (id)suggestedPeopleToLinkWithPerson:(void *)person isInitialLinking:(BOOL)linking;	// 0x2c9ca515
@end

