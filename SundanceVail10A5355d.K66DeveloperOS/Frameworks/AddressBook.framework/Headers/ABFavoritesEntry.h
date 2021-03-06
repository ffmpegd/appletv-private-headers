/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBook.framework/AddressBook
 */

#import <NSObject.h> // Unknown library

@class NSString;

@interface ABFavoritesEntry : NSObject {
	int _abUid;	// 4 = 0x4
	int _abIdentifier;	// 8 = 0x8
	NSString *_value;	// 12 = 0xc
	int _property;	// 16 = 0x10
	int _type;	// 20 = 0x14
	unsigned _dirty : 1;	// 24 = 0x18
	NSString *_label;	// 28 = 0x1c
	NSString *_name;	// 32 = 0x20
	NSString *_abDatabaseUUID;	// 36 = 0x24
	void *_addressBook;	// 40 = 0x28
}
@property(readonly, retain) NSString *label;	// G=0x361fe089; converted property
@property(readonly, assign) int property;	// G=0x361fe079; converted property
@property(readonly, assign) int type;	// G=0x361fe101; converted property
@property(readonly, retain) NSString *value;	// G=0x361fe0e1; converted property
+ (void)_runLookup;	// 0x361fe211
- (id)initWithDictionaryRepresentation:(id)dictionaryRepresentation;	// 0x361fdb65
- (id)initWithDictionaryRepresentation:(id)dictionaryRepresentation addressBook:(void *)book;	// 0x361fdb79
- (id)initWithPerson:(void *)person property:(int)property identifier:(int)identifier;	// 0x361fd9d1
- (id)initWithPerson:(void *)person property:(int)property identifier:(int)identifier type:(int)type;	// 0x361fd9f5
- (void *)ABPerson;	// 0x361fe111
- (int)_abUid;	// 0x361fe13d
- (void)_lookupChanged:(id)changed;	// 0x361fec99
- (void)_lookupNotFound;	// 0x361febc1
- (void)_postEntryChanged;	// 0x361feb79
- (void)_queueLookup;	// 0x361fea2d
- (void)_unqueueLookup;	// 0x361feb19
- (void)dealloc;	// 0x361fdda9
- (id)dictionaryRepresentation;	// 0x361fde5d
- (void)dictionaryRepresentation:(id *)representation isDirty:(BOOL *)dirty;	// 0x361fe005
- (id)displayName;	// 0x361fe041
- (int)identifier;	// 0x361fe0f1
- (BOOL)isEqual:(id)equal;	// 0x361fe14d
// converted property getter: - (id)label;	// 0x361fe089
- (id)nonLocalizedLabel;	// 0x361fe0d1
// converted property getter: - (int)property;	// 0x361fe079
- (void)recheckAddressBook;	// 0x361fe201
// converted property getter: - (int)type;	// 0x361fe101
// converted property getter: - (id)value;	// 0x361fe0e1
@end

