/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <UIView.h> // Unknown library
#import "MediaPlayer-Structs.h"

@class UIImageView, MPAVController;

@interface MPMovieTVHUDView : UIView {
	unsigned _currentState;	// 84 = 0x54
	UIImageView *_playbackMode;	// 88 = 0x58
	MPAVController *_player;	// 92 = 0x5c
}
@property(retain, nonatomic) MPAVController *player;	// G=0x31d4fbed; S=0x31d4f7ed; @synthesize=_player
- (id)initWithFrame:(CGRect)frame;	// 0x31d4f531
- (void)_changeState;	// 0x31d4f8b1
- (void)_fadeOut;	// 0x31d4f989
- (void)_playbackStateDidChangeNotification:(id)_playbackState;	// 0x31d4fa95
- (void)animationDidStop:(id)animation;	// 0x31d4fa39
- (void)dealloc;	// 0x31d4f761
// declared property getter: - (id)player;	// 0x31d4fbed
// declared property setter: - (void)setPlayer:(id)player;	// 0x31d4f7ed
@end

