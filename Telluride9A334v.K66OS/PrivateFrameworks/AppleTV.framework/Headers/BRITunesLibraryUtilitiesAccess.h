/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRSingleton.h"
#import "BRITunesUtilities.h"


@interface BRITunesLibraryUtilitiesAccess : BRSingleton <BRITunesUtilities> {
@private
	id<BRITunesUtilities> _utilitiesDelegate;	// 4 = 0x4
}
+ (void)setSingleton:(id)singleton;	// 0x332d56e1
+ (id)singleton;	// 0x332d56d1
- (BOOL)attemptAuthorizationForAsset:(id)asset error:(id *)error;	// 0x332d577d
- (void)dealloc;	// 0x332d56f1
- (void)deauthorizeAssetIfNecessary:(id)necessary;	// 0x332d57a5
- (void)deleteImportedKeybagData;	// 0x332d5941
- (id)iTunesCompareAscending:(BOOL)ascending withKey:(id)key;	// 0x332d583d
- (id)iTunesCompareAscending:(BOOL)ascending withKey:(id)key fallbackSortSelector:(SEL)selector;	// 0x332d57c5
- (int)iTunesCompareString:(id)string toString:(id)string2;	// 0x332d5881
- (void)importKeybagData:(id)data forDSID:(id)dsid;	// 0x332d5921
- (id)keyBagPathForMachineID:(unsigned long long)machineID;	// 0x332d58e1
- (unsigned long)randomPlaylistIndex:(unsigned long)index;	// 0x332d58c1
- (id)rentalGUID;	// 0x332d5901
- (void)setITunesUtilitiesDelegate:(id)delegate;	// 0x332d573d
- (id)sortStringForString:(id)string;	// 0x332d5861
- (id)urlSuitableForPlayback:(id)playback;	// 0x332d58a1
@end

