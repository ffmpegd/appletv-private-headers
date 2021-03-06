/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import "WebKit-Structs.h"
#import <NSObject.h> // Unknown library

@class NSMutableArray, NSMutableDictionary;

@interface WebHistoryPrivate : NSObject {
	NSMutableDictionary *_entriesByURL;	// 4 = 0x4
	HashMap<long long, WTF::RetainPtr<NSMutableArray>, WTF::IntHash<unsigned long long>, WTF::HashTraits<long long>, WTF::HashTraits<WTF::RetainPtr<NSMutableArray>> > *_entriesByDate;	// 8 = 0x8
	NSMutableArray *_orderedLastVisitedDays;	// 12 = 0xc
	BOOL itemLimitSet;	// 16 = 0x10
	int itemLimit;	// 20 = 0x14
	BOOL ageInDaysLimitSet;	// 24 = 0x18
	int ageInDaysLimit;	// 28 = 0x1c
}
@property(assign) int historyAgeInDaysLimit;	// G=0x307d78fd; S=0x3082b11d; converted property
@property(assign) int historyItemLimit;	// G=0x307d783d; S=0x3082b141; converted property
@property(readonly, retain) NSMutableArray *orderedLastVisitedDays;	// G=0x307f8de9; converted property
+ (void)initialize;	// 0x307dcfe9
- (id)init;	// 0x307dd075
- (BOOL)addItem:(id)item discardDuplicate:(BOOL)duplicate;	// 0x307d8b6d
- (void)addItemToDateCaches:(id)dateCaches;	// 0x307d8cad
- (void)addItems:(id)items;	// 0x3082b069
- (void)addVisitedLinksToPageGroup:(PageGroup *)pageGroup;	// 0x307edccd
- (id)ageLimitDate;	// 0x307d789d
- (id)allItems;	// 0x3082b0fd
- (BOOL)containsURL:(id)url;	// 0x3082b0c9
- (id)data;	// 0x307d9301
- (void)dealloc;	// 0x3082a75d
- (void)finalize;	// 0x3082a8c9
- (BOOL)findKey:(long long *)key forDay:(double)day;	// 0x307d8ead
// converted property getter: - (int)historyAgeInDaysLimit;	// 0x307d78fd
// converted property getter: - (int)historyItemLimit;	// 0x307d783d
- (void)insertItem:(id)item forDateKey:(long long)dateKey;	// 0x307d9041
- (id)itemForURL:(id)url;	// 0x307e7115
- (id)itemForURLString:(id)urlstring;	// 0x307e7199
- (BOOL)loadFromURL:(id)url collectDiscardedItemsInto:(id)into error:(id *)error;	// 0x307d744d
- (BOOL)loadHistoryGutsFromURL:(id)url savedItemsCount:(int *)count collectDiscardedItemsInto:(id)into error:(id *)error;	// 0x307d7479
- (id)orderedItemsLastVisitedOnDay:(id)day;	// 0x307f9195
// converted property getter: - (id)orderedLastVisitedDays;	// 0x307f8de9
- (void)rebuildHistoryByDayIfNeeded:(id)needed;	// 0x3082aa79
- (BOOL)removeAllItems;	// 0x3082afb5
- (BOOL)removeItem:(id)item;	// 0x3082aef1
- (BOOL)removeItemForURLString:(id)urlstring;	// 0x3082a9fd
- (BOOL)removeItemFromDateCaches:(id)dateCaches;	// 0x307f6475
- (BOOL)removeItems:(id)items;	// 0x3082af51
- (BOOL)saveToURL:(id)url error:(id *)error;	// 0x3082b165
// converted property setter: - (void)setHistoryAgeInDaysLimit:(int)daysLimit;	// 0x3082b11d
// converted property setter: - (void)setHistoryItemLimit:(int)limit;	// 0x3082b141
- (id)visitedURL:(id)url withTitle:(id)title increaseVisitCount:(BOOL)count;	// 0x307ea325
@end

