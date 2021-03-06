/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MCAsset.h"

@class NSMutableSet;

@interface MCAssetAudio : MCAsset {
	NSMutableSet *mSongs;	// 20 = 0x14
}
- (id)init;	// 0x3217a179
- (void)demolish;	// 0x3217a1dd
- (void)forgetSong:(id)song;	// 0x3217a2a9
- (BOOL)isInUse;	// 0x3217a22d
- (void)learnSong:(id)song;	// 0x3217a289
@end

