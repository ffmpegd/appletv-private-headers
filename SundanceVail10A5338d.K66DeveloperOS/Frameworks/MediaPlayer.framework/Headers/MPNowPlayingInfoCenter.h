/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library

@class NSDictionary, NSDate;

@interface MPNowPlayingInfoCenter : NSObject {
	NSDictionary *_nowPlayingInfo;	// 4 = 0x4
	NSDictionary *_queuedNowPlayingInfo;	// 8 = 0x8
	NSDate *_pushDate;	// 12 = 0xc
}
@property(copy) NSDictionary *nowPlayingInfo;	// G=0x341f1b6d; S=0x341f16f9; 
+ (id)defaultCenter;	// 0x341f1601
- (id)init;	// 0x341f16ad
- (id)_init;	// 0x341f1681
- (void)_pushNowPlayingInfoAndRetry:(BOOL)retry;	// 0x341f17e1
// declared property getter: - (id)nowPlayingInfo;	// 0x341f1b6d
// declared property setter: - (void)setNowPlayingInfo:(id)info;	// 0x341f16f9
@end
