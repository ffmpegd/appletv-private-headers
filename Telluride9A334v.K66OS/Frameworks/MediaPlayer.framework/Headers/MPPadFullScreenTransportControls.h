/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import "MPTransportControls.h"


@interface MPPadFullScreenTransportControls : MPTransportControls {
}
- (id)initWithFrame:(CGRect)frame;	// 0x34e40171
- (void)_itemTypeAvailableNotification:(id)notification;	// 0x34e40dc9
- (id)buttonImageForPart:(unsigned)part;	// 0x34e404d9
- (void)dealloc;	// 0x34e401f9
- (void)layoutSubviews;	// 0x34e40745
- (id)newVolumeSlider;	// 0x34e4044d
- (void)reloadForAdditions:(id)additions removals:(id)removals animate:(BOOL)animate;	// 0x34e40269
- (void)setDisabledParts:(unsigned)parts;	// 0x34e40691
- (void)setItem:(id)item;	// 0x34e406c9
- (void)setVisibleParts:(unsigned)parts animated:(BOOL)animated;	// 0x34e4062d
@end
