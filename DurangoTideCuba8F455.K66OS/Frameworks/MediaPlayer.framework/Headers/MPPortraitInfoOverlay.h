/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import <UIView.h> // Unknown library
#import "MPPlaybackControlsDelegate.h"

@class MPTextView, MPAVItem, MPNowPlayingItemQueueInfoButton, UIImage, MPPortraitControlsOverlay;

@interface MPPortraitInfoOverlay : UIView <MPPlaybackControlsDelegate> {
	id _delegate;	// 44 = 0x2c
	MPAVItem *_item;	// 48 = 0x30
	UIImage *_artworkImage;	// 52 = 0x34
	unsigned _visibleParts;	// 56 = 0x38
	MPPortraitControlsOverlay *_controlsView;	// 60 = 0x3c
	MPTextView *_displayableTextView;	// 64 = 0x40
	MPNowPlayingItemQueueInfoButton *_itemQueueInfoButton;	// 68 = 0x44
	unsigned _transitioning : 1;	// 72 = 0x48
	unsigned _allowsDetailScrubbing : 1;	// 72 = 0x48
}
@property(assign, nonatomic) BOOL allowsDetailScrubbing;	// G=0x335f6e05; S=0x335f6e19; 
@property(retain, nonatomic) UIImage *artworkImage;	// G=0x335f7bfd; S=0x335f7bb1; @synthesize=_artworkImage
@property(assign, nonatomic) id delegate;	// G=0x335f6e79; S=0x335f6e89; @synthesize=_delegate
@property(retain, nonatomic) MPAVItem *item;	// G=0x335f6e69; S=0x335f79d1; @synthesize=_item
@property(assign, nonatomic) unsigned visibleParts;	// G=0x335f6e59; S=0x335f797d; @synthesize=_visibleParts
- (id)initWithFrame:(CGRect)frame;	// 0x335f7f2d
- (BOOL)_configureNowPlayingQueueInfoButton:(id)button item:(id)item time:(double)time;	// 0x335f6f3d
- (id)_controlsView;	// 0x335f75c9
- (void)_crossedTimeMarkerNotification:(id)notification;	// 0x335f76e5
- (void)_displayableTextAvailable:(id)available;	// 0x335f7869
- (void)_displayableTextRemovalAnimationDidStop;	// 0x335f7941
- (id)_displayableTextView;	// 0x335f8029
- (void)_hideControlsAndTextView;	// 0x335f8221
- (void)_hideSnapshotAnimationFinished;	// 0x335f78b9
- (id)_itemQueueInfoButton:(BOOL)button;	// 0x335f7685
- (void)_playbackStateChanged:(id)changed;	// 0x335f77c1
- (void)_reloadDisplayableTextViewForItem:(id)item animate:(BOOL)animate;	// 0x335f7211
- (void)_reloadTextViewArtwork;	// 0x335f73f5
- (void)_reloadViews;	// 0x335f70a5
- (void)_removeDisplayableTextWithAnimation:(BOOL)animation;	// 0x335f70f5
- (void)_updateAllItemDependenciesForItem:(id)item animate:(BOOL)animate;	// 0x335f6e99
- (void)_updateDisplayableTextViewForItem:(id)item animate:(BOOL)animate;	// 0x335f6fe1
- (void)_updateItemQueueInfoButtonForItem:(id)item atTime:(double)time animate:(BOOL)animate;	// 0x335f84b5
// declared property getter: - (BOOL)allowsDetailScrubbing;	// 0x335f6e05
// declared property getter: - (id)artworkImage;	// 0x335f7bfd
- (BOOL)controlsOverlay:(id)overlay shouldUseDetailScrubberForItem:(id)item;	// 0x335f6e45
- (void)controlsOverlayDetailSliderInstructionOverlayWillHide:(id)controlsOverlayDetailSliderInstructionOverlay;	// 0x335f7549
- (void)controlsOverlayDetailSliderInstructionOverlayWillShow:(id)controlsOverlayDetailSliderInstructionOverlay;	// 0x335f750d
- (void)controlsOverlayDetailSliderTrackingDidBegin:(id)controlsOverlayDetailSliderTracking;	// 0x335f74ed
- (void)controlsOverlayDetailSliderTrackingDidEnd:(id)controlsOverlayDetailSliderTracking;	// 0x335f7471
- (void)dealloc;	// 0x335f7e11
// declared property getter: - (id)delegate;	// 0x335f6e79
- (void)didMoveToSuperview;	// 0x335f7ddd
- (void)didTransition;	// 0x335f7da9
- (BOOL)hide;	// 0x335f7cad
// declared property getter: - (id)item;	// 0x335f6e69
- (void)layoutSubviews;	// 0x335f810d
// declared property setter: - (void)setAllowsDetailScrubbing:(BOOL)scrubbing;	// 0x335f6e19
- (void)setAlpha:(float)alpha;	// 0x335f7b19
// declared property setter: - (void)setArtworkImage:(id)image;	// 0x335f7bb1
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x335f6e89
// declared property setter: - (void)setItem:(id)item;	// 0x335f79d1
// declared property setter: - (void)setVisibleParts:(unsigned)parts;	// 0x335f797d
- (void)startTicking;	// 0x335f7c8d
- (void)stopTicking;	// 0x335f7c6d
// declared property getter: - (unsigned)visibleParts;	// 0x335f6e59
- (void)willTransition;	// 0x335f7c2d
@end

