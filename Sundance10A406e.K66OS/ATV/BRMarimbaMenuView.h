/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRMenuView.h"

@class NSString, BRMediaPlayer, BRImageControl, BRPhotoMediaCollection, BRControl;

__attribute__((visibility("hidden")))
@interface BRMarimbaMenuView : BRMenuView {
	BRMediaPlayer *_slideshowPhotoPlayer;	// 112 = 0x70
	BRImageControl *_listBackgroundControl;	// 116 = 0x74
	BRControl *_slideshowPreview;	// 120 = 0x78
	BRPhotoMediaCollection *_collection;	// 124 = 0x7c
	NSString *_nextSlideshowThemeKey;	// 128 = 0x80
	NSString *_newlyRequestedThemeKey;	// 132 = 0x84
	BRControl *_fadeThroughBlackShroudControl;	// 136 = 0x88
	BOOL _themeSwitchInFlight;	// 140 = 0x8c
	BOOL _playerVisualsChanged;	// 141 = 0x8d
	BOOL _fadeThroughBlackControlNeedsLayout;	// 142 = 0x8e
	BOOL _loopPhotos;	// 143 = 0x8f
}
- (id)initWithMediaCollection:(id)mediaCollection;	// 0x31bfb5
- (void)_beginTransitionToNewTheme;	// 0x31d03d
- (void)_configurePhotoLooping:(BOOL)looping;	// 0x31cf29
- (void)_fadeInAnimationCompleted:(id)animationCompleted;	// 0x31d4d5
- (void)_fadeOutAnimationCompleted:(id)completed;	// 0x31d209
- (void)_finishTransitionToNewTheme;	// 0x31d37d
- (void)_insertSlideshowPreview;	// 0x31ceb9
- (void)_marimbaLayerTransitionIsFinished:(id)finished;	// 0x31d02d
- (void)_playerVisualsChanged:(id)changed;	// 0x31cdb9
- (void)_prepareToBeginTransitionToNewTheme;	// 0x31cf51
- (void)_removeSlideshowPreview;	// 0x31ce3d
- (void)controlWasActivated;	// 0x31c2a5
- (void)controlWasDeactivated;	// 0x31c509
- (id)currentTheme;	// 0x31c9bd
- (id)currentTransitions;	// 0x31caa9
- (void)dealloc;	// 0x31c1ad
- (void)layoutSubcontrols;	// 0x31c549
- (id)musicServerID;	// 0x31cc69
- (void)playSlideshow;	// 0x31c69d
- (id)playlistID;	// 0x31cc0d
- (void)setLoopPhotos:(BOOL)photos;	// 0x31cd99
- (void)setMusicServerID:(id)anId playlistID:(id)anId2 playlistRef:(id)ref;	// 0x31caed
- (void)setMuted:(BOOL)muted;	// 0x31c7a5
- (void)setTimePerSlide:(double)slide;	// 0x31cced
- (void)stopSlideshow;	// 0x31c6d9
- (void)switchToNewMenu;	// 0x31ccc5
- (BOOL)switchToThemeKey:(id)themeKey;	// 0x31c7c5
- (void)switchToTransition:(id)transition;	// 0x31ca01
- (void)toggleSlideshowPlayback;	// 0x31c75d
@end
