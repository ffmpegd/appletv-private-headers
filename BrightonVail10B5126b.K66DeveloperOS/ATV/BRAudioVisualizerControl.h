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
	BRMediaPlayer *_player;	// 84 = 0x54
}
@property(assign, nonatomic) BRMediaPlayer *player;	// G=0x383d55; S=0x383d39; @synthesize=_player
- (BOOL)displayTrackPopup;	// 0x383d49
// declared property getter: - (id)player;	// 0x383d55
// declared property setter: - (void)setPlayer:(id)player;	// 0x383d39
- (BOOL)shouldShowExplanatoryText;	// 0x383d51
- (BOOL)shouldUseMusicContextMenu;	// 0x383d4d
@end

