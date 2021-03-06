/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library
#import "MediaPlayer-Structs.h"


@interface MCMediaControlClientRemote : NSObject {
}
- (void)authorizeWithPICRequest:(id)picrequest completionQueue:(dispatch_queue_s *)queue completionBlock:(id)block;	// 0x35bca3c5
- (void)dealloc;	// 0x35bca319
- (void)getPlaybackInfoWithOptions:(unsigned)options completionQueue:(dispatch_queue_s *)queue completionBlock:(id)block;	// 0x35bca70d
- (void)getPositionWithOptions:(unsigned)options completionQueue:(dispatch_queue_s *)queue completionBlock:(id)block;	// 0x35bca789
- (void)getVolumeWithOptions:(unsigned)options completionQueue:(dispatch_queue_s *)queue completionBlock:(id)block;	// 0x35bca8fd
- (void)invalidate;	// 0x35bca3b5
- (void)playRemoteWithParams:(id)params completionQueue:(dispatch_queue_s *)queue completionBlock:(id)block;	// 0x35bca5b5
- (void)playWithLocalFilePath:(id)localFilePath startPosition:(float)position playInfo:(id)info completionQueue:(dispatch_queue_s *)queue completionBlock:(id)block;	// 0x35bca4c9
- (void)setEventHandlerQueue:(dispatch_queue_s *)queue eventHandlerBlock:(id)block;	// 0x35bca9f5
- (void)setHost:(id)host;	// 0x35bca361
- (void)setPassword:(id)password;	// 0x35bca475
- (void)setPosition:(float)position completionQueue:(dispatch_queue_s *)queue completionBlock:(id)block;	// 0x35bca805
- (void)setRate:(float)rate completionQueue:(dispatch_queue_s *)queue completionBlock:(id)block;	// 0x35bca881
- (void)setVolume:(float)volume completionQueue:(dispatch_queue_s *)queue completionBlock:(id)block;	// 0x35bca979
- (void)stopWithOptions:(unsigned)options completionQueue:(dispatch_queue_s *)queue completionBlock:(id)block;	// 0x35bca691
@end

