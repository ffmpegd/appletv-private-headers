/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRSingleton.h"

@class ATVDataClient, ATVDataQuery;

__attribute__((visibility("hidden")))
@interface MusicGeniusMixSentry : BRSingleton {
	BOOL _queryPending;	// 4 = 0x4
	ATVDataQuery *_geniusMixSongsQuery;	// 8 = 0x8
	ATVDataClient *_dataClient;	// 12 = 0xc
}
+ (void)setSingleton:(id)singleton;	// 0x1cb7c5
+ (id)singleton;	// 0x1cb7b5
- (void)_dataClientStatusChanged:(id)changed;	// 0x1cba59
- (void)_geniusMixSongsQueryComplete;	// 0x1cbbd1
- (void)_playerAssetChanged:(id)changed;	// 0x1cb99d
- (void)_playerStateChanged:(id)changed;	// 0x1cb959
- (void)_setGeniusMixSongsQuery:(id)query;	// 0x1cbb01
- (void)_shutdownGeniusMix;	// 0x1cba99
- (void)dealloc;	// 0x1cb7d5
- (void)enableWithQuery:(id)query dataClient:(id)client;	// 0x1cb865
@end

