/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSPersistentStoreMap.h"

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface NSDictionaryStoreMap : NSPersistentStoreMap {
@private
	NSMutableDictionary *_theMap;	// 28 = 0x1c
}
+ (void)initialize;	// 0x322aba71
- (id)initWithStore:(id)store;	// 0x322ab629
- (id)initWithStore:(id)store fromArchivedData:(id)archivedData;	// 0x322ac8e9
- (id)initWithStore:(id)store fromPath:(id)path;	// 0x322acccd
- (id)_archivedData;	// 0x322ab871
- (id)_nodeFromObject:(id)object objectIDMap:(id)map;	// 0x322abebd
- (id)_theDictionary;	// 0x322ab619
- (void)addObject:(id)object objectIDMap:(id)map;	// 0x322ab661
- (id)dataForKey:(id)key;	// 0x322ab63d
- (void)dealloc;	// 0x322aba8d
- (id)handleFetchRequest:(id)request;	// 0x322abae1
- (void)removeObject:(id)object objectIDMap:(id)map;	// 0x322ab6f9
- (id)retainedObjectIDsForRelationship:(id)relationship forObjectID:(id)objectID;	// 0x322ab745
- (void)saveToPath:(id)path;	// 0x322ac535
- (void)updateObject:(id)object objectIDMap:(id)map;	// 0x322abd6d
@end

