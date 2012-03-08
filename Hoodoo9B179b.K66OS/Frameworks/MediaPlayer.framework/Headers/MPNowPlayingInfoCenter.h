/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library
#import "MediaPlayer-Structs.h"

@class NSDictionary;

@interface MPNowPlayingInfoCenter : NSObject {
@private
	MPNowPlayingInfoCenterInternal _internal;	// 4 = 0x4
}
@property(assign, nonatomic) MPNowPlayingInfoCenterInternal _internal;	// G=0x309d85a9; S=0x309d85bd; @synthesize
@property(copy) NSDictionary *nowPlayingInfo;	// G=0x309d83f9; S=0x309d80d1; 
+ (id)defaultCenter;	// 0x309d7fd9
- (id)init;	// 0x309d8085
- (id)_init;	// 0x309d8059
// declared property getter: - (MPNowPlayingInfoCenterInternal)_internal;	// 0x309d85a9
// declared property getter: - (id)nowPlayingInfo;	// 0x309d83f9
// declared property setter: - (void)setNowPlayingInfo:(id)info;	// 0x309d80d1
// declared property setter: - (void)set_internal:(MPNowPlayingInfoCenterInternal)internal;	// 0x309d85bd
@end
