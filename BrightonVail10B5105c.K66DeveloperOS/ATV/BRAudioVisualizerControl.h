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
@property(assign, nonatomic) BRMediaPlayer *player;	// G=0x37b0c1; S=0x37b0a5; @synthesize=_player
- (BOOL)displayTrackPopup;	// 0x37b0b5
// declared property getter: - (id)player;	// 0x37b0c1
// declared property setter: - (void)setPlayer:(id)player;	// 0x37b0a5
- (BOOL)shouldShowExplanatoryText;	// 0x37b0bd
- (BOOL)shouldUseMusicContextMenu;	// 0x37b0b9
@end
