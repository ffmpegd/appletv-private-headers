/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRMediaPlayer;

__attribute__((visibility("hidden")))
@interface BRAudioVisualizerControl : BRControl {
	BRMediaPlayer *_player;	// 80 = 0x50
}
@property(assign, nonatomic) BRMediaPlayer *player;	// G=0x34b545; S=0x34b52d; @synthesize=_player
- (BOOL)displayTrackPopup;	// 0x34b53d
// declared property getter: - (id)player;	// 0x34b545
// declared property setter: - (void)setPlayer:(id)player;	// 0x34b52d
- (BOOL)shouldUseMusicContextMenu;	// 0x34b541
@end

