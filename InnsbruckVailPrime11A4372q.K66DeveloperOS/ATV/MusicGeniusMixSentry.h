/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRSingleton.h"

@class ATVDataQuery, ATVDataClient;

__attribute__((visibility("hidden")))
@interface MusicGeniusMixSentry : BRSingleton {
	BOOL _queryPending;	// 4 = 0x4
	ATVDataQuery *_geniusMixSongsQuery;	// 8 = 0x8
	ATVDataClient *_dataClient;	// 12 = 0xc
}
+ (void)setSingleton:(id)singleton;	// 0x1a53ed
+ (id)singleton;	// 0x1a53dd
- (void)_dataClientStatusChanged:(id)changed;	// 0x1a5681
- (void)_geniusMixSongsQueryComplete;	// 0x1a57f9
- (void)_playerAssetChanged:(id)changed;	// 0x1a55c5
- (void)_playerStateChanged:(id)changed;	// 0x1a5581
- (void)_setGeniusMixSongsQuery:(id)query;	// 0x1a5729
- (void)_shutdownGeniusMix;	// 0x1a56c1
- (void)dealloc;	// 0x1a53fd
- (void)enableWithQuery:(id)query dataClient:(id)client;	// 0x1a548d
@end
