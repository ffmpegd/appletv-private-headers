/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"

@class BRImageControl, BRTextControl, BRDividerControl, NSArray, NSNumber;

@interface BRMetadataLongDescriptionControl : BRControl {
@private
	BRTextControl *_titleLayer;	// 48 = 0x30
	BRTextControl *_titleSubtextLayer;	// 52 = 0x34
	BRTextControl *_priceLayer;	// 56 = 0x38
	BRControl *_formatControl;	// 60 = 0x3c
	BRTextControl *_releaseDateLayer;	// 64 = 0x40
	BRTextControl *_lengthLayer;	// 68 = 0x44
	BRTextControl *_studioNameLayer;	// 72 = 0x48
	BRImageControl *_ratingImageLayer;	// 76 = 0x4c
	BRControl *_userRatingControl;	// 80 = 0x50
	BRImageControl *_topRightImageLayer;	// 84 = 0x54
	BRTextControl *_summaryLayer;	// 88 = 0x58
	BRTextControl *_copyrightLayer;	// 92 = 0x5c
	NSNumber *_trackNumber;	// 96 = 0x60
	BRDividerControl *_topDivider;	// 100 = 0x64
	BRDividerControl *_bottomDivider;	// 104 = 0x68
	NSArray *_metadataObjs;	// 108 = 0x6c
	NSArray *_metadataLabels;	// 112 = 0x70
	float _totalHeight;	// 116 = 0x74
	int _alignment;	// 120 = 0x78
	CGSize _artworkSize;	// 124 = 0x7c
}
- (id)init;	// 0x3308e969
- (void)_setCopyright:(id)copyright;	// 0x330904d5
- (void)_setFormatControl:(id)control;	// 0x3308febd
- (void)_setLength:(id)length;	// 0x33090005
- (void)_setMetadata:(id)metadata withLabels:(id)labels;	// 0x3309043d
- (void)_setPrice:(id)price;	// 0x3308fded
- (void)_setRating:(id)rating;	// 0x330901a5
- (void)_setReleaseDate:(id)date;	// 0x3308ff35
- (void)_setStudioName:(id)name;	// 0x330900d5
- (void)_setSummary:(id)summary;	// 0x33090299
- (void)_setTitle:(id)title;	// 0x3308fb21
- (void)_setTitleSubtext:(id)subtext;	// 0x3308fbf1
- (void)_setTopRightImage:(id)image;	// 0x33090279
- (void)_setTrackNumber:(id)number;	// 0x3308fcc1
- (void)_setUserRatingControl:(id)control;	// 0x33090201
- (void)_themeMetricsChanged;	// 0x330905a5
- (id)accessibilityScreenContent;	// 0x330905b9
- (void)dealloc;	// 0x3308ecfd
- (void)layoutSubcontrols;	// 0x3308f38d
- (CGSize)renderedSize;	// 0x3308f32d
- (void)resetAllFields;	// 0x3308eeb9
- (void)setAlignment:(int)alignment;	// 0x3308fabd
- (void)setArtworkSize:(CGSize)size;	// 0x3308facd
- (void)setCopyright:(id)copyright;	// 0x3308f2f1
- (void)setFormatControl:(id)control;	// 0x3308f0c5
- (void)setLength:(id)length;	// 0x3308f13d
- (void)setMetadata:(id)metadata withLabels:(id)labels;	// 0x3308f2b5
- (void)setPrice:(id)price;	// 0x3308f089
- (void)setRating:(id)rating;	// 0x3308f1b5
- (void)setReleaseDate:(id)date;	// 0x3308f101
- (void)setStudioName:(id)name;	// 0x3308f179
- (void)setSummary:(id)summary;	// 0x3308f279
- (void)setTitle:(id)title;	// 0x3308efd5
- (void)setTitleSubtext:(id)subtext;	// 0x3308f011
- (void)setTopRightImage:(id)image;	// 0x3308f23d
- (void)setTrackNumber:(id)number;	// 0x3308f04d
- (void)setUserRatingControl:(id)control;	// 0x3308f1f1
- (id)topRightImageControl;	// 0x3308f22d
@end

