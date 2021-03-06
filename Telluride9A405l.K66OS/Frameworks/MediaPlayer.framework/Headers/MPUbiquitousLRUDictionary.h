/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library

@class NSArray, NSMutableArray, MPUbiquitousLRUDictionaryEntry, NSString, NSUbiquitousKeyValueStore, NSSet;

@interface MPUbiquitousLRUDictionary : NSObject {
@private
	NSString *_ubiquitousStorageKey;	// 4 = 0x4
	unsigned _maxEntriesCount;	// 8 = 0x8
	NSUbiquitousKeyValueStore *_store;	// 12 = 0xc
	NSMutableArray *_observers;	// 16 = 0x10
	NSArray *_localEntries;	// 20 = 0x14
	int _transactionOpenCount;	// 24 = 0x18
	id _mergeResolver;	// 28 = 0x1c
	BOOL _scheduledDeferredCommit;	// 32 = 0x20
	BOOL _postedWillCommit;	// 33 = 0x21
}
@property(readonly, assign, nonatomic) NSSet *entries;	// G=0x33c64f89; 
@property(retain, nonatomic) NSArray *localEntries;	// G=0x33c63df1; S=0x33c63d19; @synthesize=_localEntries
@property(readonly, assign, nonatomic) unsigned maxEntriesCount;	// G=0x33c65041; @synthesize=_maxEntriesCount
@property(readonly, assign, nonatomic) MPUbiquitousLRUDictionaryEntry *newestEntry;	// G=0x33c64fc1; 
@property(retain, nonatomic) NSArray *observers;	// G=0x33c65051; S=0x33c65061; @synthesize=_observers
@property(readonly, assign, nonatomic) MPUbiquitousLRUDictionaryEntry *oldestEntry;	// G=0x33c65009; 
@property(readonly, assign, nonatomic) NSUbiquitousKeyValueStore *ubiquitousKeyValueStore;	// G=0x33c63a71; 
@property(readonly, assign, nonatomic) NSString *ubiquitousStorageKey;	// G=0x33c65031; @synthesize=_ubiquitousStorageKey
- (id)initForBundleIdentifier:(id)bundleIdentifier storageKeyPrefix:(id)prefix archiveFormatVersion:(unsigned)version maxEntriesCount:(unsigned)count mergeResolver:(id)resolver;	// 0x33c639c1
- (id)initWithStorageDomain:(id)storageDomain storageKeyPrefix:(id)prefix archiveFormatVersion:(unsigned)version maxEntriesCount:(unsigned)count mergeResolver:(id)resolver;	// 0x33c63911
- (void)_commonInitWithStorageKeyPrefix:(id)storageKeyPrefix archiveFormatVersion:(unsigned)version maxEntriesCount:(unsigned)count mergeResolver:(id)resolver;	// 0x33c633e9
- (id)_entryByMergingLocalEntry:(id)entry withEntry:(id)entry2;	// 0x33c64055
- (id)_mergeLocalWithU9Entries;	// 0x33c64121
- (void)_notifyExternalChange:(id)change;	// 0x33c63b71
- (void)_notifyExternalQuotaViolation;	// 0x33c63c65
- (void)_storeU9Entries:(id)entries commitImmediately:(BOOL)immediately;	// 0x33c645bd
- (void)_synchronize;	// 0x33c63b1d
- (void)_synchronizeNow;	// 0x33c64589
- (id)_timestampOrderedLocalEntries;	// 0x33c63e39
- (id)_timestampOrderedU9Entries;	// 0x33c63e49
- (void)addObserver:(id)observer;	// 0x33c63cd9
- (void)addUbiquitousEntry:(id)entry;	// 0x33c649e5
- (void)beginTransaction;	// 0x33c6499d
- (void)commitTransaction;	// 0x33c649b1
- (void)dealloc;	// 0x33c63a81
// declared property getter: - (id)entries;	// 0x33c64f89
// declared property getter: - (id)localEntries;	// 0x33c63df1
// declared property getter: - (unsigned)maxEntriesCount;	// 0x33c65041
// declared property getter: - (id)newestEntry;	// 0x33c64fc1
// declared property getter: - (id)observers;	// 0x33c65051
// declared property getter: - (id)oldestEntry;	// 0x33c65009
- (void)removeObserver:(id)observer;	// 0x33c63cf9
// declared property setter: - (void)setLocalEntries:(id)entries;	// 0x33c63d19
// declared property setter: - (void)setObservers:(id)observers;	// 0x33c65061
- (void)setUbiquitousValue:(id)value forKey:(id)key;	// 0x33c64e41
// declared property getter: - (id)ubiquitousKeyValueStore;	// 0x33c63a71
// declared property getter: - (id)ubiquitousStorageKey;	// 0x33c65031
- (id)ubiquitousValueForKey:(id)key;	// 0x33c64ec1
@end

