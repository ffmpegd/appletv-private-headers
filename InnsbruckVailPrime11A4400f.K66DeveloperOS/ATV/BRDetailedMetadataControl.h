/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRMetadataContainer.h"
#import "BRControl.h"

@class BRMetadataTitleControl, BRTextControl, NSMutableArray, UIColor, BRHorizontalDividerControl, NSArray;

__attribute__((visibility("hidden")))
@interface BRDetailedMetadataControl : BRControl <BRMetadataContainer> {
	int _displayOption;	// 84 = 0x54
	BRMetadataTitleControl *_titleControl;	// 88 = 0x58
	BRHorizontalDividerControl *_topDivider;	// 92 = 0x5c
	BRHorizontalDividerControl *_middleDivider;	// 96 = 0x60
	BRTextControl *_summaryControl;	// 100 = 0x64
	BOOL _shouldDisplayTitle;	// 104 = 0x68
	NSMutableArray *_detailControls;	// 108 = 0x6c
	int _currentDetailIndex;	// 112 = 0x70
	XXStruct_qlg9jA _maxSummaryHeight;	// 116 = 0x74
	UIColor *_textColor;	// 120 = 0x78
	BRTextControl *_expiryControl;	// 124 = 0x7c
	NSArray *_ratingsControls;	// 128 = 0x80
}
@property(assign, nonatomic) int currentDetailIndex;	// G=0x326569; S=0x326579; @synthesize=_currentDetailIndex
@property(retain, nonatomic) NSMutableArray *detailControls;	// G=0x326549; S=0x326559; @synthesize=_detailControls
@property(retain, nonatomic) BRTextControl *expiryControl;	// G=0x3265e5; S=0x3265f5; @synthesize=_expiryControl
@property(assign, nonatomic) XXStruct_qlg9jA maxSummaryHeight;	// G=0x326589; S=0x3265a5; @synthesize=_maxSummaryHeight
@property(copy, nonatomic) NSArray *ratingsControls;	// G=0x326605; S=0x326619; @synthesize=_ratingsControls
@property(assign, nonatomic) BOOL shouldDisplayTitle;	// G=0x3265d5; S=0x3253cd; @synthesize=_shouldDisplayTitle
@property(retain, nonatomic) UIColor *textColor;	// G=0x3265b5; S=0x3265c5; @synthesize=_textColor
@property(readonly, assign, nonatomic) BRMetadataTitleControl *titleControl;	// G=0x326539; @synthesize=_titleControl
- (id)init;	// 0x32512d
- (id)_currentDetailControl;	// 0x3264d1
- (id)_detailControlAtIndex:(int)index;	// 0x3264f1
- (id)_detailControlsWithDetails:(id)details;	// 0x325949
- (id)_labelControlWithLabel:(id)label;	// 0x325895
- (id)accessibilityLabel;	// 0x326465
- (void)addDetailPage:(id)page;	// 0x325ba1
- (void)addDetailStrings:(id)strings withLabel:(id)label;	// 0x325ae9
// declared property getter: - (int)currentDetailIndex;	// 0x326569
- (void)dealloc;	// 0x3252f1
// declared property getter: - (id)detailControls;	// 0x326549
// declared property getter: - (id)expiryControl;	// 0x3265e5
- (void)layoutSubcontrols;	// 0x325c09
// declared property getter: - (XXStruct_qlg9jA)maxSummaryHeight;	// 0x326589
// declared property getter: - (id)ratingsControls;	// 0x326605
- (float)renderedHeightForWidth:(float)width;	// 0x326245
// declared property setter: - (void)setCurrentDetailIndex:(int)index;	// 0x326579
// declared property setter: - (void)setDetailControls:(id)controls;	// 0x326559
// declared property setter: - (void)setExpiryControl:(id)control;	// 0x3265f5
// declared property setter: - (void)setMaxSummaryHeight:(XXStruct_qlg9jA)height;	// 0x3265a5
- (void)setMetadata:(id)metadata withLabels:(id)labels;	// 0x325b59
- (void)setRating:(id)rating;	// 0x325499
// declared property setter: - (void)setRatingsControls:(id)controls;	// 0x326619
// declared property setter: - (void)setShouldDisplayTitle:(BOOL)displayTitle;	// 0x3253cd
- (void)setSummary:(id)summary;	// 0x3254b9
// declared property setter: - (void)setTextColor:(id)color;	// 0x3265c5
- (void)setTitle:(id)title;	// 0x325409
- (void)setTitleSubtext:(id)subtext;	// 0x325451
- (void)setTopRightImage:(id)image;	// 0x3256cd
// declared property getter: - (BOOL)shouldDisplayTitle;	// 0x3265d5
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x326091
// declared property getter: - (id)textColor;	// 0x3265b5
// declared property getter: - (id)titleControl;	// 0x326539
- (void)toggleSummaryMetadataView;	// 0x3256ed
@end
