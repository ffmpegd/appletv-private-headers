/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVScreenSaverInterstitials.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class BRMediaPlayer;

__attribute__((visibility("hidden")))
@interface ATVRadioScreenSaverInterstitials : XXUnknownSuperclass <ATVScreenSaverInterstitials> {
	BRMediaPlayer *_player;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) BOOL isPlayingInterstitial;	// G=0x9dc01; 
@property(retain, nonatomic) BRMediaPlayer *player;	// G=0x9ddd1; S=0x9dde1; @synthesize=_player
- (id)initWithPlayer:(id)player;	// 0x9dba1
- (void).cxx_destruct;	// 0x9de09
// declared property getter: - (BOOL)isPlayingInterstitial;	// 0x9dc01
- (id)makeVisuals;	// 0x9dd45
// declared property getter: - (id)player;	// 0x9ddd1
// declared property setter: - (void)setPlayer:(id)player;	// 0x9dde1
@end

