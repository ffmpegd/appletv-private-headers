/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "ATVRadioStationImageLoaderDelegate.h"
#import "BRMediaShelfViewCell.h"
#import "BRControl.h"

@class NSArray, BRImageControl, BRTextControl, BRAutoScrollingTextControl, ATVDataCollection, BRReflectionControl, ATVRadioStationImageLoader, ATVStackAttributes, ATVStackItemControl;
@protocol CAAction;

__attribute__((visibility("hidden")))
@interface ATVRadioStationControl : BRControl <ATVRadioStationImageLoaderDelegate, BRMediaShelfViewCell> {
	BOOL _sponsoredStation;	// 84 = 0x54
	BOOL _sponsoredSelectorScheduled;	// 85 = 0x55
	ATVDataCollection *_radioStation;	// 88 = 0x58
	id<CAAction> _positionAction;	// 92 = 0x5c
	BRControl *_perspectiveTargetView;	// 96 = 0x60
	unsigned _style;	// 100 = 0x64
	ATVStackItemControl *_primaryStationImageView;	// 104 = 0x68
	BRReflectionControl *_primaryReflection;	// 108 = 0x6c
	BRImageControl *_addStationView;	// 112 = 0x70
	BRTextControl *_stationNameView;	// 116 = 0x74
	BRAutoScrollingTextControl *_stationNameMarqueeView;	// 120 = 0x78
	BRTextControl *_followersTextView;	// 124 = 0x7c
	BRImageControl *_speakerView;	// 128 = 0x80
	unsigned _sponsoredStationFlatState;	// 132 = 0x84
	NSArray *_stackItems;	// 136 = 0x88
	ATVStackAttributes *_stackAttributes;	// 140 = 0x8c
	ATVRadioStationImageLoader *_imageLoader;	// 144 = 0x90
	CGPoint _vanishingPoint;	// 148 = 0x94
	double _sponsoredStationTimeStamp;	// 156 = 0x9c
}
@property(retain, nonatomic) BRImageControl *addStationView;	// G=0x73f0d; S=0x73f1d; @synthesize=_addStationView
@property(retain, nonatomic) BRTextControl *followersTextView;	// G=0x73fb5; S=0x73fc5; @synthesize=_followersTextView
@property(retain, nonatomic) ATVRadioStationImageLoader *imageLoader;	// G=0x740e5; S=0x740f5; @synthesize=_imageLoader
@property(assign, nonatomic) __weak BRControl *perspectiveTargetView;	// G=0x73e1d; S=0x73e3d; @synthesize=_perspectiveTargetView
@property(retain, nonatomic) id<CAAction> positionAction;	// G=0x73e0d; S=0x72eb5; @synthesize=_positionAction
@property(retain, nonatomic) BRReflectionControl *primaryReflection;	// G=0x73ed5; S=0x73ee5; @synthesize=_primaryReflection
@property(retain, nonatomic) ATVStackItemControl *primaryStationImageView;	// G=0x73e9d; S=0x73ead; @synthesize=_primaryStationImageView
@property(retain, nonatomic) ATVDataCollection *radioStation;	// G=0x73dd5; S=0x73de5; @synthesize=_radioStation
@property(retain, nonatomic) BRImageControl *speakerView;	// G=0x73fed; S=0x71795; @synthesize=_speakerView
@property(assign, nonatomic) BOOL sponsoredSelectorScheduled;	// G=0x74069; S=0x74079; @synthesize=_sponsoredSelectorScheduled
@property(assign, nonatomic, getter=isSponsoredStation) BOOL sponsoredStation;	// G=0x73ffd; S=0x7400d; @synthesize=_sponsoredStation
@property(assign, nonatomic) unsigned sponsoredStationFlatState;	// G=0x74049; S=0x74059; @synthesize=_sponsoredStationFlatState
@property(assign, nonatomic) double sponsoredStationTimeStamp;	// G=0x7401d; S=0x74035; @synthesize=_sponsoredStationTimeStamp
@property(retain, nonatomic) ATVStackAttributes *stackAttributes;	// G=0x740ad; S=0x740bd; @synthesize=_stackAttributes
@property(copy, nonatomic) NSArray *stackItems;	// G=0x74089; S=0x7409d; @synthesize=_stackItems
@property(retain, nonatomic) BRAutoScrollingTextControl *stationNameMarqueeView;	// G=0x73f7d; S=0x73f8d; @synthesize=_stationNameMarqueeView
@property(retain, nonatomic) BRTextControl *stationNameView;	// G=0x73f45; S=0x73f55; @synthesize=_stationNameView
@property(assign, nonatomic) unsigned style;	// G=0x73e7d; S=0x73e8d; @synthesize=_style
@property(assign, nonatomic) CGPoint vanishingPoint;	// G=0x73e51; S=0x73e69; @synthesize=_vanishingPoint
+ (XXStruct_qlg9jA)heightForStyle:(unsigned)style;	// 0x70421
+ (XXStruct_40SSZC)imageSizeForStyle:(unsigned)style;	// 0x70481
+ (id)stackAttributesForStyle:(unsigned)style;	// 0x704a5
- (id)initWithStation:(id)station style:(unsigned)style;	// 0x70629
- (void).cxx_destruct;	// 0x7411d
- (void)_applyLayoutToItem:(id)item atIndex:(int)index centerInPerspectiveTargetViewCoordinates:(CGPoint)perspectiveTargetViewCoordinates;	// 0x73439
- (id)_attributedStationName;	// 0x709ad
- (CGPoint)_centerInPerspectiveTargetViewCoordinates;	// 0x73725
- (void)_didChangeFocusCursorFrame;	// 0x718e9
- (void)_focusChanged:(id)changed;	// 0x729ed
- (BOOL)_isCurrentPlayingStation;	// 0x72695
- (BOOL)_isImageFullyVisible;	// 0x72ae5
- (CGSize)_normalizedDistanceFromVanishingPointForCenter:(CGPoint)center perspectiveTargetView:(id)view;	// 0x73819
- (UIOffset)_relativeOffsetForMinimumRelativeOffset:(UIOffset)minimumRelativeOffset maximumRelativeOffset:(UIOffset)offset normalizedDistanceFromVanishingPoint:(CGSize)vanishingPoint;	// 0x738e9
- (void)_scrollCompleted:(id)completed;	// 0x729dd
- (void)_setNeedsSponsoredStationReportingUpdate;	// 0x72bf9
- (void)_updateSponsoredStationReporting;	// 0x72c5d
- (void)_updateSubviews;	// 0x70ecd
- (void)_willChangeFocusCursorFrame;	// 0x718cd
- (id)accessibilityLabel;	// 0x7253d
- (id)accessibilityRangeString;	// 0x7264d
// declared property getter: - (id)addStationView;	// 0x73f0d
- (void)controlWasActivated;	// 0x70a99
- (void)controlWasDeactivated;	// 0x70ca1
- (void)controlWasFocused;	// 0x714f9
- (void)controlWasUnfocused;	// 0x71709
- (CGRect)focusCursorFrame;	// 0x7195d
// declared property getter: - (id)followersTextView;	// 0x73fb5
- (void)hideTextLayers;	// 0x72835
// declared property getter: - (id)imageLoader;	// 0x740e5
- (BOOL)isAccessibilityElement;	// 0x72539
// declared property getter: - (BOOL)isSponsoredStation;	// 0x73ffd
- (void)layoutSubcontrols;	// 0x71a9d
// declared property getter: - (id)perspectiveTargetView;	// 0x73e1d
// declared property getter: - (id)positionAction;	// 0x73e0d
// declared property getter: - (id)primaryReflection;	// 0x73ed5
// declared property getter: - (id)primaryStationImageView;	// 0x73e9d
// declared property getter: - (id)radioStation;	// 0x73dd5
- (UIOffset)relativeOffsetOfItemAtIndex:(float)index withCenter:(CGPoint)center;	// 0x72fed
// declared property setter: - (void)setAddStationView:(id)view;	// 0x73f1d
- (void)setBounds:(CGRect)bounds;	// 0x729fd
- (void)setCenter:(CGPoint)center;	// 0x72aa5
// declared property setter: - (void)setFollowersTextView:(id)view;	// 0x73fc5
- (void)setFrame:(CGRect)frame;	// 0x72a51
- (void)setImageEdgeAntialiasingEnabled:(BOOL)enabled;	// 0x7289d
// declared property setter: - (void)setImageLoader:(id)loader;	// 0x740f5
- (void)setLayerFlatState:(BOOL)state;	// 0x729a1
// declared property setter: - (void)setPerspectiveTargetView:(id)view;	// 0x73e3d
// declared property setter: - (void)setPositionAction:(id)action;	// 0x72eb5
// declared property setter: - (void)setPrimaryReflection:(id)reflection;	// 0x73ee5
// declared property setter: - (void)setPrimaryStationImageView:(id)view;	// 0x73ead
// declared property setter: - (void)setRadioStation:(id)station;	// 0x73de5
// declared property setter: - (void)setSpeakerView:(id)view;	// 0x71795
// declared property setter: - (void)setSponsoredSelectorScheduled:(BOOL)scheduled;	// 0x74079
// declared property setter: - (void)setSponsoredStation:(BOOL)station;	// 0x7400d
// declared property setter: - (void)setSponsoredStationFlatState:(unsigned)state;	// 0x74059
// declared property setter: - (void)setSponsoredStationTimeStamp:(double)stamp;	// 0x74035
// declared property setter: - (void)setStackAttributes:(id)attributes;	// 0x740bd
// declared property setter: - (void)setStackItems:(id)items;	// 0x7409d
// declared property setter: - (void)setStationNameMarqueeView:(id)view;	// 0x73f8d
// declared property setter: - (void)setStationNameView:(id)view;	// 0x73f55
// declared property setter: - (void)setStyle:(unsigned)style;	// 0x73e8d
// declared property setter: - (void)setVanishingPoint:(CGPoint)point;	// 0x73e69
// declared property getter: - (id)speakerView;	// 0x73fed
// declared property getter: - (BOOL)sponsoredSelectorScheduled;	// 0x74069
// declared property getter: - (unsigned)sponsoredStationFlatState;	// 0x74049
// declared property getter: - (double)sponsoredStationTimeStamp;	// 0x7401d
// declared property getter: - (id)stackAttributes;	// 0x740ad
// declared property getter: - (id)stackItems;	// 0x74089
- (void)stationImageLoader:(id)loader didLoadPrimaryImage:(id)image stackImages:(id)images;	// 0x7395d
// declared property getter: - (id)stationNameMarqueeView;	// 0x73f7d
// declared property getter: - (id)stationNameView;	// 0x73f45
// declared property getter: - (unsigned)style;	// 0x73e7d
- (void)updateForChangedDistanceFromVanishingPoint;	// 0x733fd
- (void)updateForChangedDistanceFromVanishingPointAnimated:(BOOL)vanishingPointAnimated;	// 0x7328d
// declared property getter: - (CGPoint)vanishingPoint;	// 0x73e51
- (void)windowMaxBoundsChanged;	// 0x70909
@end

