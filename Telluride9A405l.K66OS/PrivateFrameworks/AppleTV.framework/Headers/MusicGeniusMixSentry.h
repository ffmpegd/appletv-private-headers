/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRSingleton.h"


__attribute__((visibility("hidden")))
@interface MusicGeniusMixSentry : BRSingleton {
@private
	BOOL _queryPending;	// 4 = 0x4
	ATVMediaQueryRef _geniusMixSongsQuery;	// 8 = 0x8
}
+ (void)setSingleton:(id)singleton;	// 0x35f115cd
+ (id)singleton;	// 0x35f115bd
- (ATVDataClientRef)_dataClient;	// 0x35f11835
- (void)_geniusMixSongsQueryComplete;	// 0x35f1190d
- (void)_playerAssetChanged:(id)changed;	// 0x35f11789
- (void)_playerStateChanged:(id)changed;	// 0x35f116f9
- (void)_setGeniusMixSongsQuery:(ATVMediaQueryRef)query;	// 0x35f1186d
- (void)dealloc;	// 0x35f115dd
- (void)enableWithQuery:(ATVMediaQueryRef)query;	// 0x35f11655
@end

