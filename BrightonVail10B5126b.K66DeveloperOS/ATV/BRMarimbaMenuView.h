/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRMenuView.h"

@class BRPhotoMediaCollection, BRControl, NSString, BRMediaPlayer, BRImageControl;

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
- (id)initWithMediaCollection:(id)mediaCollection;	// 0x32ebb5
- (void)_beginTransitionToNewTheme;	// 0x32fc3d
- (void)_configurePhotoLooping:(BOOL)looping;	// 0x32fb29
- (void)_fadeInAnimationCompleted:(id)animationCompleted;	// 0x3300d5
- (void)_fadeOutAnimationCompleted:(id)completed;	// 0x32fe09
- (void)_finishTransitionToNewTheme;	// 0x32ff7d
- (void)_insertSlideshowPreview;	// 0x32fab9
- (void)_marimbaLayerTransitionIsFinished:(id)finished;	// 0x32fc2d
- (void)_playerVisualsChanged:(id)changed;	// 0x32f9b9
- (void)_prepareToBeginTransitionToNewTheme;	// 0x32fb51
- (void)_removeSlideshowPreview;	// 0x32fa3d
- (void)controlWasActivated;	// 0x32eea5
- (void)controlWasDeactivated;	// 0x32f109
- (id)currentTheme;	// 0x32f5bd
- (id)currentTransitions;	// 0x32f6a9
- (void)dealloc;	// 0x32edad
- (void)layoutSubcontrols;	// 0x32f149
- (id)musicServerID;	// 0x32f869
- (void)playSlideshow;	// 0x32f29d
- (id)playlistID;	// 0x32f80d
- (void)setLoopPhotos:(BOOL)photos;	// 0x32f999
- (void)setMusicServerID:(id)anId playlistID:(id)anId2 playlistRef:(id)ref;	// 0x32f6ed
- (void)setMuted:(BOOL)muted;	// 0x32f3a5
- (void)setTimePerSlide:(double)slide;	// 0x32f8ed
- (void)stopSlideshow;	// 0x32f2d9
- (void)switchToNewMenu;	// 0x32f8c5
- (BOOL)switchToThemeKey:(id)themeKey;	// 0x32f3c5
- (void)switchToTransition:(id)transition;	// 0x32f601
- (void)toggleSlideshowPlayback;	// 0x32f35d
@end
