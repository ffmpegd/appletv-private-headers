/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import <UISlider.h> // Unknown library

@class UILabel, NSTimer, NSString, UIImageView, MPAVController;

@interface MPVolumeSlider : UISlider {
@private
	NSTimer *_commitTimer;	// 132 = 0x84
	MPAVController *_avController;	// 136 = 0x88
	NSString *_volumeAudioCategory;	// 140 = 0x8c
	int _style;	// 144 = 0x90
	UILabel *_routeNameLabel;	// 148 = 0x94
	UIImageView *_thumbImageView;	// 152 = 0x98
	UIImageView *_thumbMaskImageView;	// 156 = 0x9c
}
@property(retain, nonatomic) MPAVController *MPAVController;	// G=0x35b7a731; S=0x35b7a741; 
@property(readonly, assign, nonatomic) int style;	// G=0x35b7b94d; @synthesize=_style
@property(copy, nonatomic) NSString *volumeAudioCategory;	// G=0x35b7a851; S=0x35b7a8e9; 
- (id)initWithFrame:(CGRect)frame;	// 0x35b798c9
- (id)initWithFrame:(CGRect)frame style:(int)style;	// 0x35b798f5
// declared property getter: - (id)MPAVController;	// 0x35b7a731
- (void)_applicationDidEnterBackgroundNotification:(id)_application;	// 0x35b7a96d
- (void)_applicationWillEnterForegroundNotification:(id)_application;	// 0x35b7a9a9
- (void)_availableRoutesDidChangeNotification:(id)_availableRoutes;	// 0x35b7a9fd
- (void)_commitVolumeChange;	// 0x35b7add1
- (void)_endTracking;	// 0x35b7a231
- (void)_isAirPlayVideoActiveDidChangeNotification:(id)_isAirPlayVideoActive;	// 0x35b7aa2d
- (void)_layoutForAvailableRoutes;	// 0x35b7b249
- (void)_layoutMaskForThumb;	// 0x35b7b04d
- (id)_maxTrackImageForStyle:(int)style;	// 0x35b7afb1
- (id)_minTrackImageForStyle:(int)style;	// 0x35b7af15
- (void)_routeNameLabelAnimationDidEnd;	// 0x35b7b90d
- (void)_systemMuteDidChange:(id)_systemMute;	// 0x35b7aa5d
- (void)_systemVolumeDidChange:(id)_systemVolume;	// 0x35b7aa91
- (id)_thumbImageForStyle:(int)style;	// 0x35b7ae95
- (void)_updateVolumeFromAVController;	// 0x35b7ace5
- (void)_volumeDidChange:(id)_volume;	// 0x35b7abc9
- (BOOL)beginTrackingWithTouch:(id)touch withEvent:(id)event;	// 0x35b79f29
- (void)cancelTrackingWithEvent:(id)event;	// 0x35b7a1f1
- (id)createThumbView;	// 0x35b79eb1
- (void)dealloc;	// 0x35b79b69
- (void)didMoveToSuperview;	// 0x35b7a3d9
- (void)didMoveToWindow;	// 0x35b7a471
- (void)endTrackingWithTouch:(id)touch withEvent:(id)event;	// 0x35b7a1b1
- (void)layoutSubviews;	// 0x35b7a32d
- (float)maximumValue;	// 0x35b79d65
- (float)minimumValue;	// 0x35b79d61
- (BOOL)pointInside:(CGPoint)inside withEvent:(id)event;	// 0x35b7a4e5
- (void)setAlpha:(float)alpha;	// 0x35b7a60d
- (void)setFrame:(CGRect)frame;	// 0x35b7a381
- (void)setHidden:(BOOL)hidden;	// 0x35b7a665
// declared property setter: - (void)setMPAVController:(id)controller;	// 0x35b7a741
- (void)setUserInteractionEnabled:(BOOL)enabled;	// 0x35b7a6bd
// declared property setter: - (void)setVolumeAudioCategory:(id)category;	// 0x35b7a8e9
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x35b7a59d
// declared property getter: - (int)style;	// 0x35b7b94d
- (CGRect)thumbRectForBounds:(CGRect)bounds trackRect:(CGRect)rect value:(float)value;	// 0x35b79d6d
// declared property getter: - (id)volumeAudioCategory;	// 0x35b7a851
@end

