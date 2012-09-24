/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library

@class MPAVController;
@protocol OS_dispatch_queue;

@interface MPSystemNowPlayingController : NSObject {
	BOOL _hasSeenAnyItem;	// 4 = 0x4
	MPAVController *_player;	// 8 = 0x8
	NSObject<OS_dispatch_queue> *_serialQueue;	// 12 = 0xc
	NSObject<OS_dispatch_queue> *_statusBarQueue;	// 16 = 0x10
}
@property(assign, nonatomic) MPAVController *player;	// G=0x35cabd69; S=0x35cabd79; @synthesize=_player
- (id)init;	// 0x35caad9d
- (int)_MRRepeatModeForMPRepeatType:(unsigned)mprepeatType;	// 0x35cab9fd
- (int)_MRShuffleModeForMPShuffleType:(unsigned)mpshuffleType;	// 0x35caba09
- (unsigned)_chapterIndexForItem:(id)item atTime:(double)time;	// 0x35cab9a9
- (id)_progressInfoForItem:(id)item;	// 0x35caba1d
- (void)dealloc;	// 0x35caae0d
// declared property getter: - (id)player;	// 0x35cabd69
- (void)postNowPlayingInfoForItem:(id)item;	// 0x35caae61
- (void)postProgressUpdateForItem:(id)item;	// 0x35cab921
// declared property setter: - (void)setPlayer:(id)player;	// 0x35cabd79
@end
