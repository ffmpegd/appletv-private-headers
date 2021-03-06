/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SyncedDefaults.framework/SyncedDefaults
 */

#import <NSObject.h> // Unknown library

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface SYDJournal : NSObject {
	NSMutableDictionary *store;	// 4 = 0x4
	NSMutableDictionary *journal;	// 8 = 0x8
	BOOL readonly;	// 12 = 0xc
}
- (id)init;	// 0x377b2681
- (id)initWithMutableStore:(id)mutableStore;	// 0x377b27a9
- (id)initWithStore:(id)store;	// 0x377b2711
- (void)addChange:(int)change forKey:(id)key changeCount:(long long)count;	// 0x377b2ce9
- (int)changeSinceChangeCount:(long long)count forKey:(id)key;	// 0x377b285d
- (id)changesSinceChangeCount:(long long)count;	// 0x377b2901
- (void)dealloc;	// 0x377b26ad
- (id)description;	// 0x377b3199
- (long long)maximumChangeCount;	// 0x377b2b4d
- (BOOL)removeChangesUntilChangeCount:(long long)count;	// 0x377b2ead
@end

