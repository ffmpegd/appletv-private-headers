/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library

@class MPAVItem;

@interface MPAVControllerToAggregateDCommunicator : NSObject {
	MPAVItem *_item;	// 4 = 0x4
	unsigned _lastMediaType;	// 8 = 0x8
	double _playbackStartTime;	// 12 = 0xc
	BOOL _playbackStartTimeIsValid;	// 20 = 0x14
}
- (id)init;	// 0x33bb8385
- (void)_handleItemChangedNotification:(id)notification;	// 0x33bb87a1
- (void)_handleItemTypeAvailableNotification:(id)notification;	// 0x33bb8839
- (void)_handlePlaybackStateChangedNotification:(id)notification;	// 0x33bb86f5
- (void)_startPlaybackTimer;	// 0x33bb854d
- (void)_stopPlaybackTimer;	// 0x33bb8595
- (void)_updateLastMediaTypeForItem;	// 0x33bb8681
- (void)dealloc;	// 0x33bb84d1
@end

