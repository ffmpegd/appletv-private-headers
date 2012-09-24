/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library


@interface MCMediaControlClientRemote : NSObject {
}
- (void)authorizeWithPICRequest:(id)picrequest completionQueue:(id)queue completionBlock:(id)block;	// 0x35d452a1
- (void)dealloc;	// 0x35d451f5
- (void)getPlaybackInfoWithOptions:(unsigned)options completionQueue:(id)queue completionBlock:(id)block;	// 0x35d455e9
- (void)getPositionWithOptions:(unsigned)options completionQueue:(id)queue completionBlock:(id)block;	// 0x35d45665
- (void)getVolumeWithOptions:(unsigned)options completionQueue:(id)queue completionBlock:(id)block;	// 0x35d457d9
- (void)invalidate;	// 0x35d45291
- (void)playRemoteWithParams:(id)params completionQueue:(id)queue completionBlock:(id)block;	// 0x35d45495
- (void)playWithLocalFilePath:(id)localFilePath startPosition:(float)position playInfo:(id)info completionQueue:(id)queue completionBlock:(id)block;	// 0x35d453a5
- (void)setEventHandlerQueue:(id)queue eventHandlerBlock:(id)block;	// 0x35d458d1
- (void)setHost:(id)host;	// 0x35d4523d
- (void)setPassword:(id)password;	// 0x35d45351
- (void)setPosition:(float)position completionQueue:(id)queue completionBlock:(id)block;	// 0x35d456e1
- (void)setRate:(float)rate completionQueue:(id)queue completionBlock:(id)block;	// 0x35d4575d
- (void)setVolume:(float)volume completionQueue:(id)queue completionBlock:(id)block;	// 0x35d45855
- (void)stopWithOptions:(unsigned)options completionQueue:(id)queue completionBlock:(id)block;	// 0x35d4556d
@end
