/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVCarouselViewDataSource.h"
#import "ATVCarouselViewUIDelegate.h"
#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRTextControl, BRImageControl, NSTimer, ATVCarouselView, BRPosterControl, NSArray, BRMediaPlayer, ATVFadeLayer, BRWaitSpinnerControl, NSDate, ATVRadioNPTransportView;

__attribute__((visibility("hidden")))
@interface ATVRadioNPTrackView : BRControl <ATVCarouselViewDataSource, ATVCarouselViewUIDelegate> {
	BRMediaPlayer *_player;	// 84 = 0x54
	ATVCarouselView *_carousel;	// 88 = 0x58
	BRPosterControl *_previousPlayingAssetArtwork;	// 92 = 0x5c
	BRPosterControl *_currentPlayingAssetArtwork;	// 96 = 0x60
	BRPosterControl *_loadingAssetArtworkPoster;	// 100 = 0x64
	unsigned _selectedIndex;	// 104 = 0x68
	NSArray *_positions;	// 108 = 0x6c
	ATVFadeLayer *_leftFade;	// 112 = 0x70
	ATVRadioNPTransportView *_transportView;	// 116 = 0x74
	BRTextControl *_downInstructionsView;	// 120 = 0x78
	BRImageControl *_downArrow;	// 124 = 0x7c
	BRWaitSpinnerControl *_spinner;	// 128 = 0x80
	NSTimer *_spinnerTimer;	// 132 = 0x84
	NSArray *_historyItems;	// 136 = 0x88
	float _posterWidth;	// 140 = 0x8c
	float _posterHeight;	// 144 = 0x90
	float _posterDisplayedWidth;	// 148 = 0x94
	float _posterDisplayedHeight;	// 152 = 0x98
	NSDate *_axPressAndHoldTimeStamp;	// 156 = 0x9c
	NSRange _rangeOfFocusablePositions;	// 160 = 0xa0
}
@property(retain, nonatomic) NSDate *axPressAndHoldTimeStamp;	// G=0x9541d; S=0x9542d; @synthesize=_axPressAndHoldTimeStamp
@property(retain, nonatomic) ATVCarouselView *carousel;	// G=0x950fd; S=0x9510d; @synthesize=_carousel
@property(retain, nonatomic) BRPosterControl *currentPlayingAssetArtwork;	// G=0x9516d; S=0x9517d; @synthesize=_currentPlayingAssetArtwork
@property(retain, nonatomic) BRImageControl *downArrow;	// G=0x952f9; S=0x95309; @synthesize=_downArrow
@property(retain, nonatomic) BRTextControl *downInstructionsView;	// G=0x952c1; S=0x952d1; @synthesize=_downInstructionsView
@property(copy, nonatomic) NSArray *historyItems;	// G=0x95379; S=0x9538d; @synthesize=_historyItems
@property(retain, nonatomic) ATVFadeLayer *leftFade;	// G=0x95251; S=0x95261; @synthesize=_leftFade
@property(retain, nonatomic) BRPosterControl *loadingAssetArtworkPoster;	// G=0x951a5; S=0x951b5; @synthesize=_loadingAssetArtworkPoster
@property(assign, nonatomic) __weak BRMediaPlayer *player;	// G=0x950dd; S=0x94a15; @synthesize=_player
@property(retain, nonatomic) NSArray *positions;	// G=0x951ed; S=0x951fd; @synthesize=_positions
@property(assign, nonatomic) float posterDisplayedHeight;	// G=0x953fd; S=0x9540d; @synthesize=_posterDisplayedHeight
@property(assign, nonatomic) float posterDisplayedWidth;	// G=0x953dd; S=0x953ed; @synthesize=_posterDisplayedWidth
@property(assign, nonatomic) float posterHeight;	// G=0x953bd; S=0x953cd; @synthesize=_posterHeight
@property(assign, nonatomic) float posterWidth;	// G=0x9539d; S=0x953ad; @synthesize=_posterWidth
@property(retain, nonatomic) BRPosterControl *previousPlayingAssetArtwork;	// G=0x95135; S=0x95145; @synthesize=_previousPlayingAssetArtwork
@property(assign, nonatomic) NSRange rangeOfFocusablePositions;	// G=0x95225; S=0x9523d; @synthesize=_rangeOfFocusablePositions
@property(assign, nonatomic) unsigned selectedIndex;	// G=0x951dd; S=0x92289; @synthesize=_selectedIndex
@property(retain, nonatomic) BRWaitSpinnerControl *spinner;	// G=0x95331; S=0x95341; @synthesize=_spinner
@property(retain, nonatomic, setter=_setSpinnerTimer:) NSTimer *spinnerTimer;	// G=0x95369; S=0x93b29; @synthesize=_spinnerTimer
@property(retain, nonatomic) ATVRadioNPTransportView *transportView;	// G=0x95289; S=0x95299; @synthesize=_transportView
- (id)init;	// 0x91269
- (void).cxx_destruct;	// 0x95455
- (CGRect)_artworkPosterFrame;	// 0x91d11
- (void)_displayPressDownInstructions:(BOOL)instructions;	// 0x94419
- (void)_fadeOutAnimationCompleted:(id)completed finished:(BOOL)finished;	// 0x949bd
- (void)_hlsTimedMetadataChanged:(id)changed;	// 0x94d89
- (void)_loadNextArtwork;	// 0x941b5
- (void)_playbackProgressChanged:(id)changed;	// 0x94d49
- (void)_playerStateChanged:(id)changed;	// 0x94c3d
// declared property setter: - (void)_setSpinnerTimer:(id)timer;	// 0x93b29
- (void)_showSpinner;	// 0x93b65
- (void)_showSpinner:(BOOL)spinner;	// 0x93b79
- (void)_updateArtworkAndStorePrevious:(BOOL)previous;	// 0x93e81
- (void)_updateCachedArtworkAndMetrics;	// 0x91865
- (void)_updateElapsedTime;	// 0x93d69
- (void)_updateTrackInfo;	// 0x93c01
- (float)accessibilityDelayForScreenContent;	// 0x937bd
- (BOOL)accessibilityOutputsRange;	// 0x937b5
- (BOOL)accessibilityOutputsRangeForChildren;	// 0x937b9
- (id)accessibilityScreenContent;	// 0x9386d
// declared property getter: - (id)axPressAndHoldTimeStamp;	// 0x9541d
- (BOOL)brEventAction:(id)action;	// 0x92285
// declared property getter: - (id)carousel;	// 0x950fd
- (id)carouselView:(id)view configurePerspectiveForContext:(id)context;	// 0x92cb9
- (id)carouselView:(id)view itemAtIndex:(unsigned)index;	// 0x927a1
- (ATVCarouselViewItemsConfig)carouselView:(id)view itemsConfigForContext:(id)context;	// 0x92819
- (id)carouselView:(id)view setPositionOfItem:(id)item toPositionAtIndex:(unsigned)index context:(id)context;	// 0x92cc1
- (void)controlWasActivated;	// 0x91989
- (void)controlWasDeactivated;	// 0x91a85
- (void)controlWasFocused;	// 0x91bf9
- (void)controlWasUnfocused;	// 0x91ccd
// declared property getter: - (id)currentPlayingAssetArtwork;	// 0x9516d
- (void)dealloc;	// 0x917f1
// declared property getter: - (id)downArrow;	// 0x952f9
// declared property getter: - (id)downInstructionsView;	// 0x952c1
// declared property getter: - (id)historyItems;	// 0x95379
- (BOOL)isAccessibilityElement;	// 0x937b1
- (void)layoutSubcontrols;	// 0x91d69
// declared property getter: - (id)leftFade;	// 0x95251
// declared property getter: - (id)loadingAssetArtworkPoster;	// 0x951a5
- (unsigned)numberOfItemsForCarouselView:(id)carouselView;	// 0x92765
// declared property getter: - (id)player;	// 0x950dd
// declared property getter: - (id)positions;	// 0x951ed
// declared property getter: - (float)posterDisplayedHeight;	// 0x953fd
// declared property getter: - (float)posterDisplayedWidth;	// 0x953dd
// declared property getter: - (float)posterHeight;	// 0x953bd
// declared property getter: - (float)posterWidth;	// 0x9539d
// declared property getter: - (id)previousPlayingAssetArtwork;	// 0x95135
// declared property getter: - (NSRange)rangeOfFocusablePositions;	// 0x95225
// declared property getter: - (unsigned)selectedIndex;	// 0x951dd
// declared property setter: - (void)setAxPressAndHoldTimeStamp:(id)stamp;	// 0x9542d
// declared property setter: - (void)setCarousel:(id)carousel;	// 0x9510d
// declared property setter: - (void)setCurrentPlayingAssetArtwork:(id)artwork;	// 0x9517d
// declared property setter: - (void)setDownArrow:(id)arrow;	// 0x95309
// declared property setter: - (void)setDownInstructionsView:(id)view;	// 0x952d1
- (void)setHistory:(id)history withEvent:(unsigned)event;	// 0x92299
// declared property setter: - (void)setHistoryItems:(id)items;	// 0x9538d
// declared property setter: - (void)setLeftFade:(id)fade;	// 0x95261
// declared property setter: - (void)setLoadingAssetArtworkPoster:(id)poster;	// 0x951b5
// declared property setter: - (void)setPlayer:(id)player;	// 0x94a15
// declared property setter: - (void)setPositions:(id)positions;	// 0x951fd
// declared property setter: - (void)setPosterDisplayedHeight:(float)height;	// 0x9540d
// declared property setter: - (void)setPosterDisplayedWidth:(float)width;	// 0x953ed
// declared property setter: - (void)setPosterHeight:(float)height;	// 0x953cd
// declared property setter: - (void)setPosterWidth:(float)width;	// 0x953ad
// declared property setter: - (void)setPreviousPlayingAssetArtwork:(id)artwork;	// 0x95145
// declared property setter: - (void)setRangeOfFocusablePositions:(NSRange)focusablePositions;	// 0x9523d
// declared property setter: - (void)setSelectedIndex:(unsigned)index;	// 0x92289
// declared property setter: - (void)setSpinner:(id)spinner;	// 0x95341
// declared property setter: - (void)setTransportView:(id)view;	// 0x95299
// declared property getter: - (id)spinner;	// 0x95331
// declared property getter: - (id)spinnerTimer;	// 0x95369
// declared property getter: - (id)transportView;	// 0x95289
- (void)windowMaxBoundsChanged;	// 0x91949
@end

