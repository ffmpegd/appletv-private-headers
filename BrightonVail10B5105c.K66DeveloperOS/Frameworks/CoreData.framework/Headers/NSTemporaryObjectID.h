/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSManagedObjectID.h"
#import "CoreData-Structs.h"

@class NSEntityDescription;

@interface NSTemporaryObjectID : NSManagedObjectID {
	int _cd_rc;	// 4 = 0x4
	int _counter;	// 8 = 0x8
	NSEntityDescription *_entity;	// 12 = 0xc
}
@property(readonly, retain) NSEntityDescription *entity;	// G=0x36318025; converted property
+ (id)initWithEntity:(id)entity;	// 0x36317e7d
+ (id)initWithEntity:(id)entity andUUIDString:(id)string;	// 0x36317ec9
+ (void)_release_1;	// 0x36317c31
+ (id)_retain_1;	// 0x36317c0d
+ (void)_storeDeallocated;	// 0x363178a5
+ (BOOL)accessInstanceVariablesDirectly;	// 0x36317bf9
+ (id)alloc;	// 0x36317bf5
+ (id)allocWithZone:(NSZone *)zone;	// 0x36317bf1
+ (unsigned)allocateBatch:(id *)batch forEntity:(id)entity count:(unsigned)count;	// 0x36317dfd
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x363178a1
+ (Class)classForStore:(id)store;	// 0x36317945
+ (void)initialize;	// 0x36233339
+ (void)release;	// 0x36317c2d
+ (id)retain;	// 0x36317c09
+ (void)setObjectStoreIdentifier:(id)identifier;	// 0x363178fd
+ (int)version;	// 0x36317bfd
- (id)initWithEntity:(id)entity;	// 0x36317ee5
- (id)initWithEntity:(id)entity andUUIDString:(id)string;	// 0x36317f01
- (id)URIRepresentation;	// 0x363181bd
- (BOOL)_isPersistentStoreAlive;	// 0x36318099
- (id)_referenceData;	// 0x36318209
- (id)_retainedURIString;	// 0x363180bd
- (void)_setPersistentStore:(id)store;	// 0x36317fe5
- (id)_storeIdentifier;	// 0x36318039
- (void)dealloc;	// 0x36317cdd
// converted property getter: - (id)entity;	// 0x36318025
- (void)finalize;	// 0x36317d49
- (unsigned)hash;	// 0x36317f1d
- (BOOL)isEqual:(id)equal;	// 0x36317f7d
- (BOOL)isTemporaryID;	// 0x36318035
- (id)persistentStore;	// 0x36317fc9
- (void)release;	// 0x36317c8d
- (id)retain;	// 0x36317c6d
- (unsigned)retainCount;	// 0x36317cc9
@end
