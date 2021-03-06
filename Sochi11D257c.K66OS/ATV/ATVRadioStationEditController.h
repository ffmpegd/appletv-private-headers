/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVRadioStationsChangeObserver.h"
#import "BRTextFieldDelegate.h"
#import "BRViewController.h"

@class ATVImage, ATVDataCollection, ATVDataQuery, NSTimer, ATVRadioStationsDataSource, BRTextEntryController, NSString, BRMediaMenuView, NSDictionary;

__attribute__((visibility("hidden")))
@interface ATVRadioStationEditController : BRViewController <ATVRadioStationsChangeObserver, BRTextFieldDelegate> {
	BOOL _canEditName;	// 104 = 0x68
	BOOL _canEditMixType;	// 105 = 0x69
	BOOL _canLikeOrBanItems;	// 106 = 0x6a
	ATVDataCollection *_station;	// 108 = 0x6c
	ATVRadioStationsDataSource *_stationsDataSource;	// 112 = 0x70
	NSString *_stationName;	// 116 = 0x74
	NSString *_stationMixType;	// 120 = 0x78
	BRMediaMenuView *_mediaMenuView;	// 124 = 0x7c
	NSTimer *_spinnerTimer;	// 128 = 0x80
	ATVDataQuery *_likesQuery;	// 132 = 0x84
	NSDictionary *_stationLikesBans;	// 136 = 0x88
	ATVImage *_trashCanImage;	// 140 = 0x8c
	ATVImage *_menuDefaultImage;	// 144 = 0x90
	BRTextEntryController *_stationNameController;	// 148 = 0x94
	NSTimer *_mixTypeChangedTimer;	// 152 = 0x98
}
@property(assign, nonatomic) BOOL canEditMixType;	// G=0x78199; S=0x781a9; @synthesize=_canEditMixType
@property(assign, nonatomic) BOOL canEditName;	// G=0x78179; S=0x78189; @synthesize=_canEditName
@property(assign, nonatomic) BOOL canLikeOrBanItems;	// G=0x781ed; S=0x781fd; @synthesize=_canLikeOrBanItems
@property(retain, nonatomic) ATVDataQuery *likesQuery;	// G=0x78061; S=0x78071; @synthesize=_likesQuery
@property(retain, nonatomic) BRMediaMenuView *mediaMenuView;	// G=0x77ff5; S=0x78005; @synthesize=_mediaMenuView
@property(retain, nonatomic) ATVImage *menuDefaultImage;	// G=0x78109; S=0x78119; @synthesize=_menuDefaultImage
@property(assign, nonatomic) __weak NSTimer *mixTypeChangedTimer;	// G=0x781b9; S=0x781d9; @synthesize=_mixTypeChangedTimer
@property(assign, nonatomic) __weak NSTimer *spinnerTimer;	// G=0x7802d; S=0x7804d; @synthesize=_spinnerTimer
@property(retain, nonatomic) ATVDataCollection *station;	// G=0x77f15; S=0x77f25; @synthesize=_station
@property(retain, nonatomic) NSDictionary *stationLikesBans;	// G=0x78099; S=0x780a9; @synthesize=_stationLikesBans
@property(retain, nonatomic) NSString *stationMixType;	// G=0x77fbd; S=0x77fcd; @synthesize=_stationMixType
@property(retain, nonatomic) NSString *stationName;	// G=0x77f85; S=0x77f95; @synthesize=_stationName
@property(retain, nonatomic) BRTextEntryController *stationNameController;	// G=0x78141; S=0x78151; @synthesize=_stationNameController
@property(retain, nonatomic) ATVRadioStationsDataSource *stationsDataSource;	// G=0x77f4d; S=0x77f5d; @synthesize=_stationsDataSource
@property(retain, nonatomic) ATVImage *trashCanImage;	// G=0x780d1; S=0x780e1; @synthesize=_trashCanImage
- (id)initWithStation:(id)station;	// 0x74379
- (void).cxx_destruct;	// 0x7820d
- (void)_didDeleteStation;	// 0x74a0d
- (void)_executeQuery;	// 0x76f71
- (id)_menuItemForTrack:(id)track section:(int)section;	// 0x77959
- (void)_mixTypeChangedTimerFired:(id)fired;	// 0x77561
- (long)_numberOfRowsInSectionWithType:(int)type;	// 0x74e31
- (unsigned)_rowTypeForStationSectionRowAtIndex:(long)index;	// 0x74d95
- (id)_sectionHeaderForSectionWithType:(int)type;	// 0x74fbd
- (int)_sectionTypeForSectionAtIndex:(long)index;	// 0x74d35
- (id)_sectionTypes;	// 0x74b31
- (id)_seedTrackFromStationDict:(id)stationDict;	// 0x76965
- (void)_setupMediaMenuView;	// 0x77cb1
- (void)_showSpinner;	// 0x77df9
- (id)_stationSectionRowTypes;	// 0x74c45
- (id)_stringForMixType:(id)mixType;	// 0x778a1
- (void)_updateMixType;	// 0x77591
// declared property getter: - (BOOL)canEditMixType;	// 0x78199
// declared property getter: - (BOOL)canEditName;	// 0x78179
// declared property getter: - (BOOL)canLikeOrBanItems;	// 0x781ed
- (void)controlWasActivated;	// 0x74899
- (void)controlWasDeactivated;	// 0x74945
// declared property getter: - (id)likesQuery;	// 0x78061
- (void)list:(id)list didPlayItemAtIndexPath:(id)indexPath;	// 0x76935
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0x75dc1
- (float)list:(id)list heightForItemAtIndexPath:(id)indexPath;	// 0x76bad
- (float)list:(id)list heightForSectionHeader:(long)sectionHeader;	// 0x76b65
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x75109
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0x74f89
- (id)list:(id)list sectionHeaderForSection:(long)section;	// 0x750d5
// declared property getter: - (id)mediaMenuView;	// 0x77ff5
// declared property getter: - (id)menuDefaultImage;	// 0x78109
// declared property getter: - (id)mixTypeChangedTimer;	// 0x781b9
- (long)numberOfSectionsInList:(id)list;	// 0x74df5
- (void)radioStationsDataSourceDidChangeStations:(id)radioStationsDataSource;	// 0x74a99
// declared property setter: - (void)setCanEditMixType:(BOOL)type;	// 0x781a9
// declared property setter: - (void)setCanEditName:(BOOL)name;	// 0x78189
// declared property setter: - (void)setCanLikeOrBanItems:(BOOL)items;	// 0x781fd
// declared property setter: - (void)setLikesQuery:(id)query;	// 0x78071
// declared property setter: - (void)setMediaMenuView:(id)view;	// 0x78005
// declared property setter: - (void)setMenuDefaultImage:(id)image;	// 0x78119
// declared property setter: - (void)setMixTypeChangedTimer:(id)timer;	// 0x781d9
// declared property setter: - (void)setSpinnerTimer:(id)timer;	// 0x7804d
// declared property setter: - (void)setStation:(id)station;	// 0x77f25
// declared property setter: - (void)setStationLikesBans:(id)bans;	// 0x780a9
// declared property setter: - (void)setStationMixType:(id)type;	// 0x77fcd
// declared property setter: - (void)setStationName:(id)name;	// 0x77f95
// declared property setter: - (void)setStationNameController:(id)controller;	// 0x78151
// declared property setter: - (void)setStationsDataSource:(id)source;	// 0x77f5d
// declared property setter: - (void)setTrashCanImage:(id)image;	// 0x780e1
// declared property getter: - (id)spinnerTimer;	// 0x7802d
// declared property getter: - (id)station;	// 0x77f15
// declared property getter: - (id)stationLikesBans;	// 0x78099
// declared property getter: - (id)stationMixType;	// 0x77fbd
// declared property getter: - (id)stationName;	// 0x77f85
// declared property getter: - (id)stationNameController;	// 0x78141
// declared property getter: - (id)stationsDataSource;	// 0x77f4d
- (void)textDidChange:(id)text;	// 0x76cd1
- (void)textDidEndEditing:(id)text;	// 0x76cd5
// declared property getter: - (id)trashCanImage;	// 0x780d1
- (void)wasPopped;	// 0x747f1
- (void)wasPushed;	// 0x74709
@end

