/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRTextControl, BRDividerControl, NSArray, NSNumber, BRImageControl;

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
- (id)init;	// 0x33221fa5
- (void)_setCopyright:(id)copyright;	// 0x33223b11
- (void)_setFormatControl:(id)control;	// 0x332234f9
- (void)_setLength:(id)length;	// 0x33223641
- (void)_setMetadata:(id)metadata withLabels:(id)labels;	// 0x33223a79
- (void)_setPrice:(id)price;	// 0x33223429
- (void)_setRating:(id)rating;	// 0x332237e1
- (void)_setReleaseDate:(id)date;	// 0x33223571
- (void)_setStudioName:(id)name;	// 0x33223711
- (void)_setSummary:(id)summary;	// 0x332238d5
- (void)_setTitle:(id)title;	// 0x3322315d
- (void)_setTitleSubtext:(id)subtext;	// 0x3322322d
- (void)_setTopRightImage:(id)image;	// 0x332238b5
- (void)_setTrackNumber:(id)number;	// 0x332232fd
- (void)_setUserRatingControl:(id)control;	// 0x3322383d
- (void)_themeMetricsChanged;	// 0x33223be1
- (id)accessibilityScreenContent;	// 0x33223bf5
- (void)dealloc;	// 0x33222339
- (void)layoutSubcontrols;	// 0x332229c9
- (CGSize)renderedSize;	// 0x33222969
- (void)resetAllFields;	// 0x332224f5
- (void)setAlignment:(int)alignment;	// 0x332230f9
- (void)setArtworkSize:(CGSize)size;	// 0x33223109
- (void)setCopyright:(id)copyright;	// 0x3322292d
- (void)setFormatControl:(id)control;	// 0x33222701
- (void)setLength:(id)length;	// 0x33222779
- (void)setMetadata:(id)metadata withLabels:(id)labels;	// 0x332228f1
- (void)setPrice:(id)price;	// 0x332226c5
- (void)setRating:(id)rating;	// 0x332227f1
- (void)setReleaseDate:(id)date;	// 0x3322273d
- (void)setStudioName:(id)name;	// 0x332227b5
- (void)setSummary:(id)summary;	// 0x332228b5
- (void)setTitle:(id)title;	// 0x33222611
- (void)setTitleSubtext:(id)subtext;	// 0x3322264d
- (void)setTopRightImage:(id)image;	// 0x33222879
- (void)setTrackNumber:(id)number;	// 0x33222689
- (void)setUserRatingControl:(id)control;	// 0x3322282d
- (id)topRightImageControl;	// 0x33222869
@end

