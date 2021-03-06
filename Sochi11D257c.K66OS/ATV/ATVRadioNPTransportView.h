/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class ATVRadioBadgeBackgroundImageControl, ATVDataCollection, ATVDataItem, BRTextControl, NSTimer, NSString, BRFadeMaskLayer, BRMusicNowPlayingTransportLayer, BRImageControl, NSDictionary, BRMarqueeTextControl, UIImage;

__attribute__((visibility("hidden")))
@interface ATVRadioNPTransportView : BRControl {
	ATVDataCollection *_station;	// 84 = 0x54
	ATVDataItem *_radioTrack;	// 88 = 0x58
	BRMusicNowPlayingTransportLayer *_transportBar;	// 92 = 0x5c
	BRMarqueeTextControl *_titleTextControl;	// 96 = 0x60
	BRImageControl *_explicit;	// 100 = 0x64
	BRTextControl *_artist;	// 104 = 0x68
	BRTextControl *_album;	// 108 = 0x6c
	BRMarqueeTextControl *_debugMessageView;	// 112 = 0x70
	UIImage *_badgeBackgroundImage;	// 116 = 0x74
	ATVRadioBadgeBackgroundImageControl *_albumOfferBackground;	// 120 = 0x78
	BRTextControl *_albumOfferText;	// 124 = 0x7c
	ATVRadioBadgeBackgroundImageControl *_priceBackground;	// 128 = 0x80
	BRTextControl *_priceText;	// 132 = 0x84
	BRTextControl *_skipLimitTextControl;	// 136 = 0x88
	NSTimer *_skipLimitFadeTimer;	// 140 = 0x8c
	BRTextControl *_transportBarText;	// 144 = 0x90
	BRTextControl *_stationFollowersTextControl;	// 148 = 0x94
	BRImageControl *_airplayImage;	// 152 = 0x98
	BRFadeMaskLayer *_topContainerMask;	// 156 = 0x9c
	BRControl *_topContainer;	// 160 = 0xa0
	NSDictionary *_primaryAttributes;	// 164 = 0xa4
	NSDictionary *_secondaryAttributes;	// 168 = 0xa8
	NSDictionary *_preOrderAlbumAttributes;	// 172 = 0xac
	NSDictionary *_priceAttributes;	// 176 = 0xb0
}
@property(retain, nonatomic) BRImageControl *airplayImage;	// G=0x9c51d; S=0x9c52d; @synthesize=_airplayImage
@property(retain, nonatomic) BRTextControl *album;	// G=0x9c2b9; S=0x9c2c9; @synthesize=_album
@property(retain, nonatomic) ATVRadioBadgeBackgroundImageControl *albumOfferBackground;	// G=0x9c361; S=0x9c371; @synthesize=_albumOfferBackground
@property(retain, nonatomic) BRTextControl *albumOfferText;	// G=0x9c399; S=0x9c3a9; @synthesize=_albumOfferText
@property(retain, nonatomic) BRTextControl *artist;	// G=0x9c281; S=0x9c291; @synthesize=_artist
@property(retain, nonatomic) UIImage *badgeBackgroundImage;	// G=0x9c329; S=0x9c339; @synthesize=_badgeBackgroundImage
@property(retain, nonatomic) BRMarqueeTextControl *debugMessageView;	// G=0x9c2f1; S=0x9c301; @synthesize=_debugMessageView
@property(retain, nonatomic) BRImageControl *explicit;	// G=0x9c249; S=0x9c259; @synthesize=_explicit
@property(retain, nonatomic) NSDictionary *preOrderAlbumAttributes;	// G=0x9c635; S=0x9c645; @synthesize=_preOrderAlbumAttributes
@property(retain, nonatomic) NSDictionary *priceAttributes;	// G=0x9c66d; S=0x9c67d; @synthesize=_priceAttributes
@property(retain, nonatomic) ATVRadioBadgeBackgroundImageControl *priceBackground;	// G=0x9c3d1; S=0x9c3e1; @synthesize=_priceBackground
@property(retain, nonatomic) BRTextControl *priceText;	// G=0x9c409; S=0x9c419; @synthesize=_priceText
@property(retain, nonatomic) NSDictionary *primaryAttributes;	// G=0x9c5c5; S=0x9c5d5; @synthesize=_primaryAttributes
@property(retain, nonatomic) ATVDataItem *radioTrack;	// G=0x9c1c9; S=0x98925; @synthesize=_radioTrack
@property(retain, nonatomic) NSDictionary *secondaryAttributes;	// G=0x9c5fd; S=0x9c60d; @synthesize=_secondaryAttributes
@property(assign, nonatomic) __weak NSTimer *skipLimitFadeTimer;	// G=0x9c479; S=0x9c499; @synthesize=_skipLimitFadeTimer
@property(retain, nonatomic) BRTextControl *skipLimitTextControl;	// G=0x9c441; S=0x9c451; @synthesize=_skipLimitTextControl
@property(retain, nonatomic) ATVDataCollection *station;	// G=0x9c1b9; S=0x99555; @synthesize=_station
@property(retain, nonatomic) BRTextControl *stationFollowersTextControl;	// G=0x9c4e5; S=0x9c4f5; @synthesize=_stationFollowersTextControl
@property(readonly, assign) NSString *stationName;	// G=0x99399; 
@property(retain, nonatomic) BRMarqueeTextControl *titleTextControl;	// G=0x9c211; S=0x9c221; @synthesize=_titleTextControl
@property(retain, nonatomic) BRControl *topContainer;	// G=0x9c58d; S=0x9c59d; @synthesize=_topContainer
@property(retain, nonatomic) BRFadeMaskLayer *topContainerMask;	// G=0x9c555; S=0x9c565; @synthesize=_topContainerMask
@property(retain, nonatomic) BRMusicNowPlayingTransportLayer *transportBar;	// G=0x9c1d9; S=0x9c1e9; @synthesize=_transportBar
@property(retain, nonatomic) BRTextControl *transportBarText;	// G=0x9c4ad; S=0x9c4bd; @synthesize=_transportBarText
- (id)init;	// 0x97f6d
- (void).cxx_destruct;	// 0x9c6a5
- (CGRect)_airplayImageFrame;	// 0x99e9d
- (CGRect)_albumFrame;	// 0x99ae9
- (CGRect)_albumOfferBackgroundFrame;	// 0x9a979
- (CGSize)_albumOfferBadgeTextSize;	// 0x9a64d
- (CGRect)_artistFrame;	// 0x999d5
- (id)_attributedStationFollowers;	// 0x99485
- (id)_attributedStationName;	// 0x993e1
- (float)_badgeHeight;	// 0x9a439
- (float)_badgeHorizontalTextInset;	// 0x9a359
- (CGSize)_badgeSize;	// 0x9a7cd
- (float)_badgeVerticalTextInset;	// 0x9a379
- (float)_badgeWidth;	// 0x9a6e5
- (void)_configureAirplayImage;	// 0x9c041
- (CGRect)_debugMessageFrame;	// 0x9a291
- (void)_displaySkipLimitNotificationText:(id)text;	// 0x9b599
- (CGRect)_explicitBadgeFrame;	// 0x9ac85
- (CGSize)_explicitBadgeSize;	// 0x9ac19
- (void)_fadeOutAnimationCompleted:(id)completed finished:(BOOL)finished;	// 0x9bff1
- (CGRect)_firstOfferBadgeBackgroundFrame;	// 0x9a80d
- (CGRect)_frameForSize:(CGSize)size insetInRect:(CGRect)rect;	// 0x9aa25
- (CGSize)_maxBadgeTextSize;	// 0x9a539
- (float)_maxBadgeWidth;	// 0x9a3f1
- (CGSize)_maxSubtitleSize;	// 0x99735
- (float)_maxSubtitleWidth;	// 0x99639
- (CGSize)_minBadgeTextSize;	// 0x9a495
- (float)_minBadgeWidth;	// 0x9a395
- (CGRect)_preOrderAlbumTextFrame;	// 0x9ab25
- (CGRect)_priceBackgroundFrame;	// 0x9a955
- (CGSize)_priceBadgeTextSize;	// 0x9a5dd
- (CGRect)_priceTextFrame;	// 0x9aaa1
- (void)_radioTrackDidChange;	// 0x98ded
- (CGRect)_secondOfferBadgeBackgroundFrame;	// 0x9a8e5
- (void)_skipAttempted:(id)attempted;	// 0x9b2dd
- (void)_skipLimitFadeTimerFired:(id)fired;	// 0x9bbb9
- (CGRect)_skipLimitTextFrame;	// 0x99fc9
- (CGRect)_stationFollowersFrame;	// 0x9a119
- (CGRect)_stationNameFrame;	// 0x99c45
- (CGRect)_titleFrame;	// 0x99799
- (CGRect)_transportBarFrame;	// 0x99e2d
// declared property getter: - (id)airplayImage;	// 0x9c51d
// declared property getter: - (id)album;	// 0x9c2b9
// declared property getter: - (id)albumOfferBackground;	// 0x9c361
// declared property getter: - (id)albumOfferText;	// 0x9c399
// declared property getter: - (id)artist;	// 0x9c281
// declared property getter: - (id)badgeBackgroundImage;	// 0x9c329
- (void)controlWasDeactivated;	// 0x986f5
- (void)dealloc;	// 0x98689
// declared property getter: - (id)debugMessageView;	// 0x9c2f1
// declared property getter: - (id)explicit;	// 0x9c249
- (void)layoutSubcontrols;	// 0x9ad5d
// declared property getter: - (id)preOrderAlbumAttributes;	// 0x9c635
// declared property getter: - (id)priceAttributes;	// 0x9c66d
// declared property getter: - (id)priceBackground;	// 0x9c3d1
// declared property getter: - (id)priceText;	// 0x9c409
// declared property getter: - (id)primaryAttributes;	// 0x9c5c5
// declared property getter: - (id)radioTrack;	// 0x9c1c9
// declared property getter: - (id)secondaryAttributes;	// 0x9c5fd
// declared property setter: - (void)setAirplayImage:(id)image;	// 0x9c52d
// declared property setter: - (void)setAlbum:(id)album;	// 0x9c2c9
- (void)setAlbumName:(id)name;	// 0x98cc5
// declared property setter: - (void)setAlbumOfferBackground:(id)background;	// 0x9c371
// declared property setter: - (void)setAlbumOfferText:(id)text;	// 0x9c3a9
// declared property setter: - (void)setArtist:(id)artist;	// 0x9c291
- (void)setArtistName:(id)name;	// 0x98b9d
// declared property setter: - (void)setBadgeBackgroundImage:(id)image;	// 0x9c339
// declared property setter: - (void)setDebugMessageView:(id)view;	// 0x9c301
// declared property setter: - (void)setExplicit:(id)anExplicit;	// 0x9c259
// declared property setter: - (void)setPreOrderAlbumAttributes:(id)attributes;	// 0x9c645
// declared property setter: - (void)setPriceAttributes:(id)attributes;	// 0x9c67d
// declared property setter: - (void)setPriceBackground:(id)background;	// 0x9c3e1
// declared property setter: - (void)setPriceText:(id)text;	// 0x9c419
// declared property setter: - (void)setPrimaryAttributes:(id)attributes;	// 0x9c5d5
// declared property setter: - (void)setRadioTrack:(id)track;	// 0x98925
// declared property setter: - (void)setSecondaryAttributes:(id)attributes;	// 0x9c60d
// declared property setter: - (void)setSkipLimitFadeTimer:(id)timer;	// 0x9c499
// declared property setter: - (void)setSkipLimitTextControl:(id)control;	// 0x9c451
// declared property setter: - (void)setStation:(id)station;	// 0x99555
// declared property setter: - (void)setStationFollowersTextControl:(id)control;	// 0x9c4f5
- (void)setTitle:(id)title;	// 0x98a75
// declared property setter: - (void)setTitleTextControl:(id)control;	// 0x9c221
// declared property setter: - (void)setTopContainer:(id)container;	// 0x9c59d
// declared property setter: - (void)setTopContainerMask:(id)mask;	// 0x9c565
// declared property setter: - (void)setTransportBar:(id)bar;	// 0x9c1e9
// declared property setter: - (void)setTransportBarText:(id)text;	// 0x9c4bd
// declared property getter: - (id)skipLimitFadeTimer;	// 0x9c479
// declared property getter: - (id)skipLimitTextControl;	// 0x9c441
// declared property getter: - (id)station;	// 0x9c1b9
// declared property getter: - (id)stationFollowersTextControl;	// 0x9c4e5
// declared property getter: - (id)stationName;	// 0x99399
// declared property getter: - (id)titleTextControl;	// 0x9c211
// declared property getter: - (id)topContainer;	// 0x9c58d
// declared property getter: - (id)topContainerMask;	// 0x9c555
// declared property getter: - (id)transportBar;	// 0x9c1d9
// declared property getter: - (id)transportBarText;	// 0x9c4ad
@end

