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
	UILabel *_scrubSpeedLabel;	// 136 = 0x88
	UILabel *_scrubInstructionLabel;	// 140 = 0x8c
	UIImageView *_scrubInstructionOverlay;	// 144 = 0x90
	UIImageView *_backgroundView;	// 148 = 0x94
	BOOL _boundsAnimInFlight;	// 152 = 0x98
	CGRect _boundsAnimGoal;	// 156 = 0x9c
}
- (id)initWithFrame:(CGRect)frame;	// 0x335f524d
- (void)_hideScrubInstructionOverlayAnimationDidEnd;	// 0x335f4ac5
- (int)_layoutStyle;	// 0x335f4cfd
- (void)_resetStateAfterSliderTrackingDone:(id)done;	// 0x335f6179
- (void)_showScrubInstructionOverlayAnimationDidEnd;	// 0x335f4ac1
- (void)_sizeToFitAnimationDidEnd;	// 0x335f4ab1
- (float)_sizeToFitForCurrentStateAnimated:(BOOL)currentStateAnimated;	// 0x335f53ed
- (CGRect)bounds;	// 0x335f5609
- (id)createButtonForPart:(unsigned)part;	// 0x335f6585
- (id)createProgressIndicator;	// 0x335f4d95
- (void)dealloc;	// 0x335f5175
- (void)detailSlider:(id)slider didChangeScrubSpeed:(int)speed;	// 0x335f4efd
- (void)detailSliderTrackingDidBegin:(id)detailSliderTracking;	// 0x335f6651
- (void)detailSliderTrackingDidCancel:(id)detailSliderTracking;	// 0x335f4ce9
- (void)detailSliderTrackingDidEnd:(id)detailSliderTracking;	// 0x335f4b4d
- (CGRect)hitRect;	// 0x335f565d
- (void)layoutSubviews;	// 0x335f50a9
- (void)layoutSubviews_Compact;	// 0x335f4d2d
- (void)layoutSubviews_Short;	// 0x335f569d
- (void)layoutSubviews_Tall;	// 0x335f5a3d
- (void)resetDetailSlider:(id)slider;	// 0x335f4ffd
- (void)setVisibleParts:(unsigned)parts;	// 0x335f5125
- (void)updateForEndOfDetailScrubbing;	// 0x335f4f69
@end

