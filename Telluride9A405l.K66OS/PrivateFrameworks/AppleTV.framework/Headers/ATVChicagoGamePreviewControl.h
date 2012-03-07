/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"
#import "BRCyclerDataSource.h"

@class NSString, BRImage, BRTableView, BRMerchant, BRCyclerControl, BRDividerControl, ATVFeedUniformTextTableViewController, NSMutableArray, ATVFeedTextTableDataSet, NSArray;

__attribute__((visibility("hidden")))
@interface ATVChicagoGamePreviewControl : BRControl <BRCyclerDataSource> {
@private
	BRDividerControl *_topDivider;	// 48 = 0x30
	BRDividerControl *_bottomDivider;	// 52 = 0x34
	NSMutableArray *_bannerControls;	// 56 = 0x38
	BRTableView *_summaryTable;	// 60 = 0x3c
	ATVFeedUniformTextTableViewController *_tableViewController;	// 64 = 0x40
	BRCyclerControl *_cycler;	// 68 = 0x44
	CGRect _scoreboardBackgroundImageFrame;	// 72 = 0x48
	BRMerchant *_merchant;	// 88 = 0x58
	NSArray *_bannerItems;	// 92 = 0x5c
	NSString *_text;	// 96 = 0x60
	NSString *_rightJustifiedText;	// 100 = 0x64
	NSString *_topTableLabel;	// 104 = 0x68
	NSString *_bottomTableLabel;	// 108 = 0x6c
	BRImage *_scoreboardBackgroundImage;	// 112 = 0x70
}
@property(copy, nonatomic) NSArray *bannerItems;	// G=0x35f29185; S=0x35f2889d; @synthesize=_bannerItems
@property(copy, nonatomic) NSString *bottomTableLabel;	// G=0x35f291c5; S=0x35f287e1; @synthesize=_bottomTableLabel
@property(retain) ATVFeedTextTableDataSet *dataSet;	// G=0x35f28835; S=0x35f28855; 
@property(retain) BRMerchant *merchant;	// G=0x35f2914d; S=0x35f29161; @synthesize=_merchant
@property(copy, nonatomic) NSString *rightJustifiedText;	// G=0x35f291a5; S=0x35f28739; @synthesize=_rightJustifiedText
@property(retain) BRImage *scoreboardBackgroundImage;	// G=0x35f291d5; S=0x35f291e9; @synthesize=_scoreboardBackgroundImage
@property(copy, nonatomic) NSString *text;	// G=0x35f29195; S=0x35f286e5; @synthesize=_text
@property(copy, nonatomic) NSString *topTableLabel;	// G=0x35f291b5; S=0x35f2878d; @synthesize=_topTableLabel
- (id)init;	// 0x35f2820d
- (id)accessibilityLabel;	// 0x35f290b9
// declared property getter: - (id)bannerItems;	// 0x35f29185
// declared property getter: - (id)bottomTableLabel;	// 0x35f291c5
- (void)controlWasActivated;	// 0x35f28699
- (id)cycler:(id)cycler itemAtIndex:(int)index;	// 0x35f28ae9
// declared property getter: - (id)dataSet;	// 0x35f28835
- (void)dealloc;	// 0x35f28519
- (void)drawInContext:(CGContextRef)context;	// 0x35f28b09
- (void)layoutSubcontrols;	// 0x35f28eed
// declared property getter: - (id)merchant;	// 0x35f2914d
- (long)numberOfItemsInCycler:(id)cycler;	// 0x35f28ac9
// declared property getter: - (id)rightJustifiedText;	// 0x35f291a5
// declared property getter: - (id)scoreboardBackgroundImage;	// 0x35f291d5
// declared property setter: - (void)setBannerItems:(id)items;	// 0x35f2889d
// declared property setter: - (void)setBottomTableLabel:(id)label;	// 0x35f287e1
// declared property setter: - (void)setDataSet:(id)set;	// 0x35f28855
// declared property setter: - (void)setMerchant:(id)merchant;	// 0x35f29161
// declared property setter: - (void)setRightJustifiedText:(id)text;	// 0x35f28739
// declared property setter: - (void)setScoreboardBackgroundImage:(id)image;	// 0x35f291e9
// declared property setter: - (void)setText:(id)text;	// 0x35f286e5
// declared property setter: - (void)setTopTableLabel:(id)label;	// 0x35f2878d
// declared property getter: - (id)text;	// 0x35f29195
// declared property getter: - (id)topTableLabel;	// 0x35f291b5
@end

