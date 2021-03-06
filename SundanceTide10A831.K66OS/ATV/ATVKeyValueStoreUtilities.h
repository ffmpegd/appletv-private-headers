/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <StoreBookkeeper/_MZUniversalPlaybackPositionMediaItemPropertyStoreID.h>

@class NSMutableSet;

__attribute__((visibility("hidden")))
@interface ATVKeyValueStoreUtilities : _MZUniversalPlaybackPositionMediaItemPropertyStoreID {
	NSMutableSet *_keyValueStores;	// 4 = 0x4
	BOOL _usingKVS;	// 8 = 0x8
}
@property(assign, nonatomic) BOOL _usingKVS;	// G=0x1bbe19; S=0x1bbe29; @synthesize
+ (id)sharedInstance;	// 0x1bbad1
- (id)init;	// 0x1bbb35
- (void)_startPeriodicCleanupTaskOnKeyValueStore:(id)store;	// 0x1bbe39
- (void)_updateKeyValueStoreState:(id)state;	// 0x1bbf09
// declared property getter: - (BOOL)_usingKVS;	// 0x1bbe19
- (void)dealloc;	// 0x1bbc3d
- (BOOL)isKeyValueStoreAvailable;	// 0x1bbda9
// declared property setter: - (void)set_usingKVS:(BOOL)kvs;	// 0x1bbe29
- (void)startMonitoringStore:(id)store;	// 0x1bbcb9
@end

