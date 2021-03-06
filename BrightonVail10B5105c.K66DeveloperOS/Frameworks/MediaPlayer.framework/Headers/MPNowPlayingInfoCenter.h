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
@property(copy) NSDictionary *nowPlayingInfo;	// G=0x3502ee49; S=0x3502e991; 
+ (id)defaultCenter;	// 0x3502e899
- (id)init;	// 0x3502e945
- (id)_init;	// 0x3502e919
- (void)_pushNowPlayingInfoAndRetry:(BOOL)retry;	// 0x3502ea79
// declared property getter: - (id)nowPlayingInfo;	// 0x3502ee49
// declared property setter: - (void)setNowPlayingInfo:(id)info;	// 0x3502e991
@end

