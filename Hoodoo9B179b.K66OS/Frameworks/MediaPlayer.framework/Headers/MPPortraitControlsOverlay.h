/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import "MPPlaybackControlsView.h"

@class UILabel, UIImageView;

@interface MPPortraitControlsOverlay : MPPlaybackControlsView {
	UILabel *_scrubSpeedLabel;	// 144 = 0x90
	UILabel *_scrubInstructionLabel;	// 148 = 0x94
	UIImageView *_scrubInstructionOverlay;	// 152 = 0x98
	UIImageView *_backgroundView;	// 156 = 0x9c
	BOOL _boundsAnimInFlight;	// 160 = 0xa0
	CGRect _boundsAnimGoal;	// 164 = 0xa4
}
- (id)initWithFrame:(CGRect)frame;	// 0x30966455
- (void)_hideScrubInstructionOverlayAnimationDidEnd;	// 0x30968931
- (int)_layoutStyle;	// 0x309667dd
- (void)_resetStateAfterSliderTrackingDone:(id)done;	// 0x309682f9
- (void)_showScrubInstructionOverlayAnimationDidEnd;	// 0x3096892d
- (void)_sizeToFitAnimationDidEnd;	// 0x30968919
- (float)_sizeToFitForCurrentStateAnimated:(BOOL)currentStateAnimated;	// 0x30966815
- (CGRect)bounds;	// 0x30966ca9
- (void)dealloc;	// 0x30966621
- (void)detailSlider:(id)slider didChangeScrubSpeed:(int)speed;	// 0x309689c9
- (void)detailSliderTrackingDidBegin:(id)detailSliderTracking;	// 0x30967a55
- (void)detailSliderTrackingDidCancel:(id)detailSliderTracking;	// 0x30968765
- (void)detailSliderTrackingDidEnd:(id)detailSliderTracking;	// 0x30968775
- (CGRect)hitRect;	// 0x30966c55
- (void)layoutSubviews;	// 0x30967879
- (void)layoutSubviews_Compact;	// 0x30966d09
- (void)layoutSubviews_Short;	// 0x30966d6d
- (void)layoutSubviews_Tall;	// 0x30967101
- (id)newButtonForPart:(unsigned)part;	// 0x30966705
- (id)newProgressIndicator;	// 0x30966abd
- (void)resetDetailSlider:(id)slider;	// 0x30967901
- (void)setVisibleParts:(unsigned)parts;	// 0x30966a65
- (void)updateForEndOfDetailScrubbing;	// 0x309679b5
@end
