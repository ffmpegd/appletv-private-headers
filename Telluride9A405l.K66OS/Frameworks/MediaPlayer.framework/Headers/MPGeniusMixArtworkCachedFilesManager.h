/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library
#import "MediaPlayer-Structs.h"


@interface MPGeniusMixArtworkCachedFilesManager : NSObject {
@private
	dispatch_queue_s *_cleanupQueue;	// 4 = 0x4
}
+ (id)sharedInstance;	// 0x33c27bcd
- (id)init;	// 0x33c27c39
- (void)cleanupIfNecessaryWithCompletionBlock:(id)completionBlock;	// 0x33c280bd
- (void)dealloc;	// 0x33c27e35
- (void)onQueueSetCurrentSyncGeneration:(unsigned long long)generation;	// 0x33c27e75
@end

