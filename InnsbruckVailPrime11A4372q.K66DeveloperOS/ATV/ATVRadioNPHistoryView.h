/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVCarouselViewDataSource.h"
#import "ATVCarouselViewUIDelegate.h"
#import "BRControl.h"
#import "AppleTV-Structs.h"

@class BRTextControl, BRMediaPlayer, ATVRadioNPTrackInfoView, BRListView, ATVFadeLayer, ATVRadioPlayer, BRScrollControl, ATVCarouselView, NSDictionary, NSArray, ATVDataQuery;

__attribute__((visibility("hidden")))
@interface ATVRadioNPHistoryView : BRControl <ATVCarouselViewDataSource, ATVCarouselViewUIDelegate> {
	ATVRadioPlayer *_headlessPlayer;	// 84 = 0x54
	BRMediaPlayer *_player;	// 88 = 0x58
	ATVCarouselView *_carousel;	// 92 = 0x5c
	unsigned _selectedIndex;	// 96 = 0x60
	NSArray *_positions;	// 100 = 0x64
	float _displacement;	// 104 = 0x68
	ATVFadeLayer *_leftFade;	// 108 = 0x6c
	ATVFadeLayer *_rightFade;	// 112 = 0x70
	BRTextControl *_stationNameView;	// 116 = 0x74
	ATVRadioNPTrackInfoView *_trackInfoView;	// 120 = 0x78
	BRScrollControl *_listScroller;	// 124 = 0x7c
	BRListView *_optionsList;	// 128 = 0x80
	NSArray *_trackOptions;	// 132 = 0x84
	NSDictionary *_menuTextAttributes;	// 136 = 0x88
	NSArray *_historyItems;	// 140 = 0x8c
	ATVDataQuery *_addStationQuery;	// 144 = 0x90
	float _posterWidth;	// 148 = 0x94
	float _posterHeight;	// 152 = 0x98
	float _selectedPosterWidth;	// 156 = 0x9c
	float _selectedPosterHeight;	// 160 = 0xa0
	NSRange _rangeOfFocusablePositions;	// 164 = 0xa4
}
@property(retain, nonatomic) ATVDataQuery *addStationQuery;	// G=0x93b21; S=0x93b31; @synthesize=_addStationQuery
@property(retain, nonatomic) ATVCarouselView *carousel;	// G=0x93871; S=0x93881; @synthesize=_carousel
@property(assign, nonatomic) float displacement;	// G=0x9391d; S=0x9392d; @synthesize=_displacement
@property(copy, nonatomic) NSArray *historyItems;	// G=0x93afd; S=0x93b11; @synthesize=_historyItems
@property(readonly, assign, nonatomic, getter=_isOnCurrentTrack) BOOL isOnCurrentTrack;	// G=0x9331d; 
@property(retain, nonatomic) ATVFadeLayer *leftFade;	// G=0x9393d; S=0x9394d; @synthesize=_leftFade
@property(retain, nonatomic) BRScrollControl *listScroller;	// G=0x93a1d; S=0x93a2d; @synthesize=_listScroller
@property(retain, nonatomic) NSDictionary *menuTextAttributes;	// G=0x93ac5; S=0x93ad5; @synthesize=_menuTextAttributes
@property(retain, nonatomic) BRListView *optionsList;	// G=0x93a55; S=0x93a65; @synthesize=_optionsList
@property(assign, nonatomic) __weak BRMediaPlayer *player;	// G=0x9383d; S=0x9385d; @synthesize=_player
@property(retain, nonatomic) NSArray *positions;	// G=0x938b9; S=0x938c9; @synthesize=_positions
@property(assign, nonatomic) float posterHeight;	// G=0x93b79; S=0x93b89; @synthesize=_posterHeight
@property(assign, nonatomic) float posterWidth;	// G=0x93b59; S=0x93b69; @synthesize=_posterWidth
@property(assign, nonatomic) NSRange rangeOfFocusablePositions;	// G=0x938f1; S=0x93909; @synthesize=_rangeOfFocusablePositions
@property(retain, nonatomic) ATVFadeLayer *rightFade;	// G=0x93975; S=0x93985; @synthesize=_rightFade
@property(assign, nonatomic) unsigned selectedIndex;	// G=0x938a9; S=0x90551; @synthesize=_selectedIndex
@property(assign, nonatomic) float selectedPosterHeight;	// G=0x93bb9; S=0x93bc9; @synthesize=_selectedPosterHeight
@property(assign, nonatomic) float selectedPosterWidth;	// G=0x93b99; S=0x93ba9; @synthesize=_selectedPosterWidth
@property(retain, nonatomic) BRTextControl *stationNameView;	// G=0x939ad; S=0x939bd; @synthesize=_stationNameView
@property(retain, nonatomic) ATVRadioNPTrackInfoView *trackInfoView;	// G=0x939e5; S=0x939f5; @synthesize=_trackInfoView
@property(retain, nonatomic) NSArray *trackOptions;	// G=0x93a8d; S=0x93a9d; @synthesize=_trackOptions
- (id)init;	// 0x8f591
- (void).cxx_destruct;	// 0x93bd9
// declared property getter: - (BOOL)_isOnCurrentTrack;	// 0x9331d
- (void)_previewOrPlayTrack:(id)track;	// 0x93155
- (void)_stopPreviewingOrPlaying;	// 0x932fd
- (void)_updateTrackOptions;	// 0x933a5
// declared property getter: - (id)addStationQuery;	// 0x93b21
- (BOOL)brEventAction:(id)action;	// 0x902c9
// declared property getter: - (id)carousel;	// 0x93871
- (id)carouselView:(id)view configurePerspectiveForContext:(id)context;	// 0x90f09
- (id)carouselView:(id)view itemAtIndex:(unsigned)index;	// 0x90809
- (ATVCarouselViewItemsConfig)carouselView:(id)view itemsConfigForContext:(id)context;	// 0x90881
- (id)carouselView:(id)view setPositionOfItem:(id)item toPositionAtIndex:(unsigned)index context:(id)context;	// 0x90f11
- (void)controlWasDeactivated;	// 0x90641
- (void)dealloc;	// 0x8fdd9
// declared property getter: - (float)displacement;	// 0x9391d
// declared property getter: - (id)historyItems;	// 0x93afd
- (void)layoutSubcontrols;	// 0x8fe39
// declared property getter: - (id)leftFade;	// 0x9393d
- (void)list:(id)list didPlayItemAtIndexPath:(id)indexPath;	// 0x92321
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0x92351
- (float)list:(id)list heightForItemAtIndexPath:(id)indexPath;	// 0x92315
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x91881
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0x922d9
// declared property getter: - (id)listScroller;	// 0x93a1d
// declared property getter: - (id)menuTextAttributes;	// 0x93ac5
- (unsigned)numberOfItemsForCarouselView:(id)carouselView;	// 0x907cd
// declared property getter: - (id)optionsList;	// 0x93a55
// declared property getter: - (id)player;	// 0x9383d
// declared property getter: - (id)positions;	// 0x938b9
// declared property getter: - (float)posterHeight;	// 0x93b79
// declared property getter: - (float)posterWidth;	// 0x93b59
// declared property getter: - (NSRange)rangeOfFocusablePositions;	// 0x938f1
- (void)resetSelection;	// 0x90465
// declared property getter: - (id)rightFade;	// 0x93975
// declared property getter: - (unsigned)selectedIndex;	// 0x938a9
// declared property getter: - (float)selectedPosterHeight;	// 0x93bb9
// declared property getter: - (float)selectedPosterWidth;	// 0x93b99
// declared property setter: - (void)setAddStationQuery:(id)query;	// 0x93b31
// declared property setter: - (void)setCarousel:(id)carousel;	// 0x93881
// declared property setter: - (void)setDisplacement:(float)displacement;	// 0x9392d
- (void)setHistory:(id)history withEvent:(unsigned)event;	// 0x90681
// declared property setter: - (void)setHistoryItems:(id)items;	// 0x93b11
// declared property setter: - (void)setLeftFade:(id)fade;	// 0x9394d
// declared property setter: - (void)setListScroller:(id)scroller;	// 0x93a2d
// declared property setter: - (void)setMenuTextAttributes:(id)attributes;	// 0x93ad5
// declared property setter: - (void)setOptionsList:(id)list;	// 0x93a65
// declared property setter: - (void)setPlayer:(id)player;	// 0x9385d
// declared property setter: - (void)setPositions:(id)positions;	// 0x938c9
// declared property setter: - (void)setPosterHeight:(float)height;	// 0x93b89
// declared property setter: - (void)setPosterWidth:(float)width;	// 0x93b69
// declared property setter: - (void)setRangeOfFocusablePositions:(NSRange)focusablePositions;	// 0x93909
// declared property setter: - (void)setRightFade:(id)fade;	// 0x93985
// declared property setter: - (void)setSelectedIndex:(unsigned)index;	// 0x90551
// declared property setter: - (void)setSelectedPosterHeight:(float)height;	// 0x93bc9
// declared property setter: - (void)setSelectedPosterWidth:(float)width;	// 0x93ba9
// declared property setter: - (void)setStationNameView:(id)view;	// 0x939bd
// declared property setter: - (void)setTrackInfoView:(id)view;	// 0x939f5
// declared property setter: - (void)setTrackOptions:(id)options;	// 0x93a9d
- (void)simulateEvent:(id)event;	// 0x9038d
// declared property getter: - (id)stationNameView;	// 0x939ad
// declared property getter: - (id)trackInfoView;	// 0x939e5
// declared property getter: - (id)trackOptions;	// 0x93a8d
@end
