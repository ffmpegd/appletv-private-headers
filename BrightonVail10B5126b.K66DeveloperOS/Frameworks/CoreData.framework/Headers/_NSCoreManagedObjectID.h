/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSManagedObjectID.h"
#import "CoreData-Structs.h"


@interface _NSCoreManagedObjectID : NSManagedObjectID {
}
+ (void)_release_1;	// 0x30eb0161
+ (id)_retain_1;	// 0x30eb0141
+ (void)_setStoreInfo1:(id)a1;	// 0x30eb01e5
+ (void)_storeDeallocated;	// 0x30ed252d
+ (id)_storeInfo1;	// 0x30eb01d1
+ (BOOL)accessInstanceVariablesDirectly;	// 0x30ed2119
+ (id)alloc;	// 0x30ed2111
+ (id)allocWithZone:(NSZone *)zone;	// 0x30ed2109
+ (unsigned)allocateBatch:(id *)batch count:(unsigned)count;	// 0x30eb01f5
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x30ed2065
+ (Class)classWithStore:(id)store andEntity:(id)entity;	// 0x30eafd41
+ (char *)generatedNameSuffix;	// 0x30ed2069
+ (void)initialize;	// 0x30e8b24d
+ (id)managedObjectIDFromURIRepresentation:(id)urirepresentation;	// 0x30ed22c1
+ (id)managedObjectIDFromUTF8String:(const char *)utf8String length:(unsigned)length;	// 0x30ed2131
+ (void)release;	// 0x30ed212d
+ (id)retain;	// 0x30ed2129
+ (void)setObjectStoreIdentifier:(id)identifier;	// 0x30ed24e5
+ (int)version;	// 0x30ed211d
- (id)URIRepresentation;	// 0x30ed26c5
- (BOOL)_isPersistentStoreAlive;	// 0x30ed268d
- (id)_storeIdentifier;	// 0x30ed2611
- (id)_storeInfo1;	// 0x30ed2671
- (id)entity;	// 0x30eb1021
- (void)finalize;	// 0x30ed25c1
- (unsigned)hash;	// 0x30ed28c9
- (BOOL)isEqual:(id)equal;	// 0x30ed2939
- (BOOL)isTemporaryID;	// 0x30eb15a1
- (id)persistentStore;	// 0x30ed25f5
- (void)release;	// 0x30ed257d
- (id)retain;	// 0x30ed255d
- (unsigned)retainCount;	// 0x30ed26b1
@end

