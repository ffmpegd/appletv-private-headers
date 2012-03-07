/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library


@interface BRMediaCollectionGeniusInfo : NSObject {
}
+ (id)geniusInfoForGeniusPlaylist:(id)geniusPlaylist;	// 0x331d6535
+ (BOOL)isGeniusDBAvailable;	// 0x331d657d
+ (void)setImplementationClass:(Class)aClass;	// 0x331d6525
- (id)initWithGeniusPlaylist:(id)geniusPlaylist;	// 0x331d65a9
- (BOOL)assetIsCurrentSeed:(id)seed;	// 0x331d65d5
- (BOOL)assetIsValidSeed:(id)seed;	// 0x331d65d9
- (BOOL)playlistIsDirty;	// 0x331d65e9
- (BOOL)refreshGeniusPlaylist;	// 0x331d65e1
- (id)saveGeniusPlaylist;	// 0x331d65e5
- (BOOL)setGeniusSeed:(id)seed;	// 0x331d65dd
@end
