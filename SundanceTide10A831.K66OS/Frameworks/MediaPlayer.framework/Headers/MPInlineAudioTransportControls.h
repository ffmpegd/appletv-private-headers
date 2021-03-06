/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import "MPTransportControls.h"


@interface MPInlineAudioTransportControls : MPTransportControls {
	int _style;	// 180 = 0xb4
}
- (id)initWithFrame:(CGRect)frame style:(int)style;	// 0x36f2ca91
- (id)buttonImageForPart:(unsigned long long)part;	// 0x36f2ce7d
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x36f2cfd9
- (void)layoutSubviews;	// 0x36f2d015
- (id)newVolumeSlider;	// 0x36f2cf7d
- (id)pauseButtonImage;	// 0x36f2cfad
- (id)playButtonImage;	// 0x36f2cf81
- (void)reloadForAdditions:(id)additions removals:(id)removals animate:(BOOL)animate;	// 0x36f2cb3d
@end

