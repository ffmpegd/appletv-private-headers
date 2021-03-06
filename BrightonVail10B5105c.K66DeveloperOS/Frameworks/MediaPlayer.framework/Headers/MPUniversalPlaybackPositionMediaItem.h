/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MZUniversalPlaybackPositionMediaItem.h"
#import <NSObject.h> // Unknown library

@class MPMediaItem;

@interface MPUniversalPlaybackPositionMediaItem : NSObject <MZUniversalPlaybackPositionMediaItem> {
	MPMediaItem *_mediaItem;	// 4 = 0x4
}
+ (id)mediaPropertiesToMZProperties;	// 0x3505da3d
+ (id)mzPropertiesToMediaProperties;	// 0x3505d819
+ (id)mzPropertyValueForMediaProperty:(id)mediaProperty mediaValue:(id)value;	// 0x3505db89
- (id)initWithMediaItem:(id)mediaItem;	// 0x3505d7c5
- (void)dealloc;	// 0x3505db3d
- (void)enumerateValuesForProperties:(id)properties usingBlock:(id)block;	// 0x3505dd9d
@end

