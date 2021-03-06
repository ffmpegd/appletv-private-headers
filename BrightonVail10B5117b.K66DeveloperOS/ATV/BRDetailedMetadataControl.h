/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"
#import "BRMetadataContainer.h"

@class BRTextControl, BRHorizontalDividerControl, NSMutableArray, BRMetadataTitleControl;

__attribute__((visibility("hidden")))
@interface BRDetailedMetadataControl : BRControl <BRMetadataContainer> {
	int _displayOption;	// 84 = 0x54
	BRMetadataTitleControl *_titleControl;	// 88 = 0x58
	BRHorizontalDividerControl *_topDivider;	// 92 = 0x5c
	BRHorizontalDividerControl *_middleDivider;	// 96 = 0x60
	BRTextControl *_summaryControl;	// 100 = 0x64
	NSMutableArray *_detailControls;	// 104 = 0x68
	int _currentDetailIndex;	// 108 = 0x6c
}
@property(assign, nonatomic) int currentDetailIndex;	// G=0x2d4e01; S=0x2d4e11; @synthesize=_currentDetailIndex
@property(retain, nonatomic) NSMutableArray *detailControls;	// G=0x2d4de1; S=0x2d4df1; @synthesize=_detailControls
@property(readonly, assign, nonatomic) BRMetadataTitleControl *titleControl;	// G=0x2d4dd1; @synthesize=_titleControl
- (id)init;	// 0x2d3a81
- (id)_currentDetailControl;	// 0x2d4d69
- (id)_detailControlAtIndex:(int)index;	// 0x2d4d89
- (id)_detailControlsWithDetails:(id)details;	// 0x2d4159
- (id)_labelControlWithLabel:(id)label;	// 0x2d40a5
- (id)accessibilityLabel;	// 0x2d4cfd
- (void)addDetailPage:(id)page;	// 0x2d45e5
- (void)addDetailStrings:(id)strings withLabel:(id)label;	// 0x2d42f9
- (void)addSplitDetailsWithTopDetailStrings:(id)topDetailStrings topLabel:(id)label bottomDetailStrings:(id)strings bottomLabel:(id)label4;	// 0x2d4369
// declared property getter: - (int)currentDetailIndex;	// 0x2d4e01
- (void)dealloc;	// 0x2d3c15
// declared property getter: - (id)detailControls;	// 0x2d4de1
- (void)layoutSubcontrols;	// 0x2d464d
- (float)renderedHeightForWidth:(float)width;	// 0x2d4ae5
// declared property setter: - (void)setCurrentDetailIndex:(int)index;	// 0x2d4e11
// declared property setter: - (void)setDetailControls:(id)controls;	// 0x2d4df1
- (void)setMetadata:(id)metadata withLabels:(id)labels;	// 0x2d459d
- (void)setRating:(id)rating;	// 0x2d3cf5
- (void)setSummary:(id)summary;	// 0x2d3d15
- (void)setTitle:(id)title;	// 0x2d3cb5
- (void)setTitleSubtext:(id)subtext;	// 0x2d3cd5
- (void)setTopRightImage:(id)image;	// 0x2d3edd
// declared property getter: - (id)titleControl;	// 0x2d4dd1
- (void)toggleSummaryMetadataView;	// 0x2d3efd
@end

