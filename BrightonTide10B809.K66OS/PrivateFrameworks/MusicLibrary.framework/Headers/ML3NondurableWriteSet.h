/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import "MusicLibrary-Structs.h"
#import "NSMutableCopying.h"
#import <NSObject.h> // Unknown library

@class NSMutableDictionary, NSMutableSet;

@interface ML3NondurableWriteSet : NSObject <NSMutableCopying> {
	NSMutableDictionary *_trackProperties;	// 4 = 0x4
	NSMutableSet *_trackDeletions;	// 8 = 0x8
	NSMutableDictionary *_containerInsertions;	// 12 = 0xc
	NSMutableSet *_containerDeletions;	// 16 = 0x10
	NSMutableDictionary *_containerContents;	// 20 = 0x14
}
- (void).cxx_destruct;	// 0x346af35d
- (void)addDeletedPersistentID:(long long)anId forEntityClass:(Class)entityClass;	// 0x346fd711
- (void)addValuesFromDictionary:(id)dictionary forEntityClass:(Class)entityClass withPersistentID:(long long)persistentID;	// 0x346fd3b5
- (void)addValuesFromWriteSet:(id)writeSet;	// 0x346acf11
- (BOOL)commitToLibrary:(id)library;	// 0x346ad599
- (BOOL)containsDeletedPersistentID:(long long)anId forEntityClass:(Class)entityClass;	// 0x346fd8f9
- (void)dealloc;	// 0x346af2ad
- (id)description;	// 0x346fd2f5
- (BOOL)hasInsertedPersistentID:(long long)anId forEntityClass:(Class)entityClass;	// 0x346fd605
- (BOOL)hasInsertedPersistentIDsForEntityClass:(Class)entityClass;	// 0x346fd699
- (id)insertedPersistentIDsForEntityClass:(Class)entityClass;	// 0x346fd6d1
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x346b4101
- (void)reset;	// 0x346af2ed
- (void)setTrackPersistentIDData:(id)data forContainerWithPersistentID:(long long)persistentID;	// 0x346fd97d
- (void)setValues:(const id *)values forProperties:(const id *)properties count:(unsigned)count forEntityClass:(Class)entityClass withPersistentID:(long long)persistentID;	// 0x346acc8d
- (id)trackPersistentIDDataForContainerWithPersistentID:(long long)persistentID;	// 0x346fda61
- (void)updateValues:(id *)values forProperties:(const id *)properties count:(unsigned)count forEntityClass:(Class)entityClass withPersistentID:(long long)persistentID;	// 0x346b41f9
@end

