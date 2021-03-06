/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import "MPNowPlayingItemQueueInfoButtonDelegate.h"
#import "MPVideoOverlay.h"

@class MPInlineTransportControls, MPNowPlayingItemQueueInfoButton;

@interface MPInlineVideoOverlay : MPVideoOverlay <MPNowPlayingItemQueueInfoButtonDelegate> {
	MPInlineTransportControls *_transportControls;	// 152 = 0x98
	MPNowPlayingItemQueueInfoButton *_itemQueueInfoButton;	// 156 = 0x9c
	unsigned _layoutSubviewsActive : 1;	// 160 = 0xa0
}
@property(assign) BOOL allowsWirelessPlayback;	// G=0x35d1cbb5; S=0x35d1cbed; converted property
- (id)initWithFrame:(CGRect)frame;	// 0x35d1bd09
- (void)_availableRoutesDidChangeNotification:(id)_availableRoutes;	// 0x35d1cea9
- (void)_configureLinkButtonForCurrentItemTime;	// 0x35d1c8c9
- (unsigned long long)_convertedPartsMask:(unsigned long long)mask;	// 0x35d1ced9
// converted property getter: - (BOOL)allowsWirelessPlayback;	// 0x35d1cbb5
- (void)crossedTimeMakerWithEvent:(id)event;	// 0x35d1c9f1
- (void)dealloc;	// 0x35d1bd91
- (void)detailSliderTrackingDidBegin:(id)detailSliderTracking;	// 0x35d1ca29
- (void)detailSliderTrackingDidCancel:(id)detailSliderTracking;	// 0x35d1cb35
- (void)detailSliderTrackingDidEnd:(id)detailSliderTracking;	// 0x35d1cab5
- (void)layoutSubviews;	// 0x35d1be61
- (int)nowPlayingItemQueueInfoButton:(id)button willDisplayInfoType:(int)type;	// 0x35d1c8bd
// converted property setter: - (void)setAllowsWirelessPlayback:(BOOL)playback;	// 0x35d1cbed
- (void)setDesiredParts:(unsigned long long)parts animate:(BOOL)animate;	// 0x35d1cc89
- (void)setDisabledParts:(unsigned long long)parts;	// 0x35d1cdc5
- (void)setFrame:(CGRect)frame;	// 0x35d1c875
- (void)setItem:(id)item;	// 0x35d1cc2d
- (void)setVideoViewController:(id)controller;	// 0x35d1ce19
- (void)setVisibleParts:(unsigned long long)parts animate:(BOOL)animate;	// 0x35d1cd1d
@end

