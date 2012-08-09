/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class EDResources, EDCollection, NSString, EDReference;

@interface EDPivotTable : NSObject {
	EDResources *mResources;	// 4 = 0x4
	bool mShowLastColumn;	// 8 = 0x8
	bool mShowRowHeaders;	// 9 = 0x9
	bool mShowColumnHeaders;	// 10 = 0xa
	bool mShowRowStripes;	// 11 = 0xb
	bool mShowColumnStripes;	// 12 = 0xc
	bool mApplyNumberFormats;	// 13 = 0xd
	bool mApplyBorderFormats;	// 14 = 0xe
	bool mApplyFontFormats;	// 15 = 0xf
	bool mApplyPatternFormats;	// 16 = 0x10
	bool mApplyAlignmentFormats;	// 17 = 0x11
	bool mApplyWidthHeightFormats;	// 18 = 0x12
	bool mUseAutoFormatting;	// 19 = 0x13
	bool mColGrandTotals;	// 20 = 0x14
	bool mRowGrandTotals;	// 21 = 0x15
	bool mCustomListSort;	// 22 = 0x16
	bool mCompactData;	// 23 = 0x17
	bool mCompact;	// 24 = 0x18
	bool mDataCaption;	// 25 = 0x19
	bool mDataOnRows;	// 26 = 0x1a
	bool mDisableFieldList;	// 27 = 0x1b
	bool mMergeItem;	// 28 = 0x1c
	bool mMultipleFieldFilters;	// 29 = 0x1d
	bool mOutline;	// 30 = 0x1e
	bool mOutlineData;	// 31 = 0x1f
	bool mPageOverThenDown;	// 32 = 0x20
	bool mShowCalcMbrs;	// 33 = 0x21
	bool mShowDataDropDown;	// 34 = 0x22
	bool mShowDropZones;	// 35 = 0x23
	bool mShowEmptyCol;	// 36 = 0x24
	bool mShowEmptyRow;	// 37 = 0x25
	bool mShowHeaders;	// 38 = 0x26
	bool mShowMemberPropertyTips;	// 39 = 0x27
	bool mShowMissing;	// 40 = 0x28
	bool mShowMultipleLabel;	// 41 = 0x29
	bool mSubtotalHiddenItems;	// 42 = 0x2a
	NSString *mName;	// 44 = 0x2c
	NSString *mStyleName;	// 48 = 0x30
	NSString *mColumnHeaderCaption;	// 52 = 0x34
	NSString *mRowHeaderCaption;	// 56 = 0x38
	NSString *mPageStyleName;	// 60 = 0x3c
	EDReference *mPivotTableRange;	// 64 = 0x40
	unsigned mStyleIndex;	// 68 = 0x44
	int mFirstHeaderRow;	// 72 = 0x48
	int mFirstDataRow;	// 76 = 0x4c
	int mFirstDataColumn;	// 80 = 0x50
	unsigned mRowPageCount;	// 84 = 0x54
	unsigned mColumnPageCount;	// 88 = 0x58
	unsigned mPageWrap;	// 92 = 0x5c
	unsigned mAutoFormatId;	// 96 = 0x60
	unsigned mDataPosition;	// 100 = 0x64
	EDCollection *mRowFields;	// 104 = 0x68
	EDCollection *mColumnFields;	// 108 = 0x6c
	EDCollection *mRowItems;	// 112 = 0x70
	EDCollection *mColumnItems;	// 116 = 0x74
	EDCollection *mPivotFields;	// 120 = 0x78
	EDCollection *mDataFields;	// 124 = 0x7c
	EDCollection *mConditionalFields;	// 128 = 0x80
	EDCollection *mPivotAreas;	// 132 = 0x84
	EDCollection *mPageFields;	// 136 = 0x88
}
@property(assign) bool applyAlignmentFormats;	// G=0x31dae8dd; S=0x31d3ef9d; converted property
@property(assign) bool applyBorderFormats;	// G=0x31dae8a1; S=0x31d3ef6d; converted property
@property(assign) bool applyFontFormats;	// G=0x31dae8b5; S=0x31d3ef7d; converted property
@property(assign) bool applyNumberFormats;	// G=0x31dae88d; S=0x31d3ef5d; converted property
@property(assign) bool applyPatternFormats;	// G=0x31dae8c9; S=0x31d3ef8d; converted property
@property(assign) bool applyWidthHeightFormats;	// G=0x31dae8f1; S=0x31d3efad; converted property
@property(assign) unsigned autoFormatId;	// G=0x31dae839; S=0x31dae849; converted property
@property(assign) bool colGrandTotals;	// G=0x31dae905; S=0x31dae919; converted property
@property(retain) id columnHeaderCaption;	// G=0x31dae6bd; S=0x31dae6cd; converted property
@property(assign) unsigned columnPageCount;	// G=0x31dae7f9; S=0x31dae809; converted property
@property(assign) bool compact;	// G=0x31d3ffcd; S=0x31dae9a9; converted property
@property(assign) bool compactData;	// G=0x31dae985; S=0x31dae999; converted property
@property(assign) bool customListSort;	// G=0x31dae961; S=0x31dae975; converted property
@property(assign) bool dataCaption;	// G=0x31dae9b9; S=0x31d3efcd; converted property
@property(assign) bool dataOnRows;	// G=0x31dae9cd; S=0x31dae9e1; converted property
@property(assign) unsigned dataPosition;	// G=0x31dae859; S=0x31dae869; converted property
@property(assign) bool disableFieldList;	// G=0x31dae9f1; S=0x31daea05; converted property
@property(assign) int firstDataColumn;	// G=0x31d3f291; S=0x31d3d449; converted property
@property(assign) int firstDataRow;	// G=0x31d3f281; S=0x31d3d439; converted property
@property(assign) int firstHeaderRow;	// G=0x31d3f271; S=0x31d3d429; converted property
@property(assign) bool mergeItem;	// G=0x31daea15; S=0x31daea29; converted property
@property(assign) bool multipleFieldFilters;	// G=0x31daea39; S=0x31d3efdd; converted property
@property(retain) id name;	// G=0x31dae7c9; S=0x31d3ef19; converted property
@property(assign) bool outline;	// G=0x31daea4d; S=0x31d3efed; converted property
@property(assign) bool outlineData;	// G=0x31daea61; S=0x31d3effd; converted property
@property(assign) bool pageOverThenDown;	// G=0x31daea75; S=0x31daea89; converted property
@property(retain) id pageStyleName;	// G=0x31dae765; S=0x31dae775; converted property
@property(assign) unsigned pageWrap;	// G=0x31dae819; S=0x31dae829; converted property
@property(retain) id pivotTableRange;	// G=0x31d3f261; S=0x31d3d3e5; converted property
@property(assign) bool rowGrandTotals;	// G=0x31dae93d; S=0x31dae951; converted property
@property(retain) id rowHeaderCaption;	// G=0x31dae711; S=0x31dae721; converted property
@property(assign) unsigned rowPageCount;	// G=0x31dae7d9; S=0x31dae7e9; converted property
@property(assign) bool showCalcMbrs;	// G=0x31daea99; S=0x31d3f00d; converted property
@property(assign) bool showColumnHeaders;	// G=0x31d3f471; S=0x31d3d665; converted property
@property(assign) bool showColumnStripes;	// G=0x31d3fa11; S=0x31d3d645; converted property
@property(assign) bool showDataDropDown;	// G=0x31daeaad; S=0x31daeac1; converted property
@property(assign) bool showDropZones;	// G=0x31daead1; S=0x31daeae5; converted property
@property(assign) bool showEmptyCol;	// G=0x31daeaf5; S=0x31daeb09; converted property
@property(assign) bool showEmptyRow;	// G=0x31daeb19; S=0x31daeb2d; converted property
@property(assign) bool showHeaders;	// G=0x31daeb3d; S=0x31daeb51; converted property
@property(assign) bool showLastColumn;	// G=0x31dae879; S=0x31d3d625; converted property
@property(assign) bool showMemberPropertyTips;	// G=0x31daeb61; S=0x31daeb75; converted property
@property(assign) bool showMissing;	// G=0x31daeb85; S=0x31daeb99; converted property
@property(assign) bool showMultipleLabel;	// G=0x31daeba9; S=0x31daebbd; converted property
@property(assign) bool showRowHeaders;	// G=0x31d3f9fd; S=0x31d3d655; converted property
@property(assign) bool showRowStripes;	// G=0x31d3ff99; S=0x31d3d635; converted property
@property(retain) id style;	// G=0x31d3f031; S=0x31dae675; converted property
@property(assign) unsigned styleIndex;	// G=0x31daebf1; S=0x31daec01; converted property
@property(retain) id styleName;	// G=0x31dae7b9; S=0x31d3d5e1; converted property
@property(assign) bool subtotalHiddenItems;	// G=0x31daebcd; S=0x31daebe1; converted property
@property(assign) bool useAutoFormatting;	// G=0x31dae929; S=0x31d3efbd; converted property
+ (id)pivotTableWithResources:(id)resources;	// 0x31d3ce25
- (id)initWithResources:(id)resources;	// 0x31d3ce71
// converted property getter: - (bool)applyAlignmentFormats;	// 0x31dae8dd
// converted property getter: - (bool)applyBorderFormats;	// 0x31dae8a1
// converted property getter: - (bool)applyFontFormats;	// 0x31dae8b5
// converted property getter: - (bool)applyNumberFormats;	// 0x31dae88d
// converted property getter: - (bool)applyPatternFormats;	// 0x31dae8c9
// converted property getter: - (bool)applyWidthHeightFormats;	// 0x31dae8f1
// converted property getter: - (unsigned)autoFormatId;	// 0x31dae839
// converted property getter: - (bool)colGrandTotals;	// 0x31dae905
- (id)columnFields;	// 0x31d3e52d
// converted property getter: - (id)columnHeaderCaption;	// 0x31dae6bd
- (id)columnItems;	// 0x31d3e53d
// converted property getter: - (unsigned)columnPageCount;	// 0x31dae7f9
// converted property getter: - (bool)compact;	// 0x31d3ffcd
// converted property getter: - (bool)compactData;	// 0x31dae985
- (id)conditionalFormats;	// 0x31d3eb05
// converted property getter: - (bool)customListSort;	// 0x31dae961
// converted property getter: - (bool)dataCaption;	// 0x31dae9b9
- (id)dataFields;	// 0x31d3e695
// converted property getter: - (bool)dataOnRows;	// 0x31dae9cd
// converted property getter: - (unsigned)dataPosition;	// 0x31dae859
- (void)dealloc;	// 0x31d401bd
// converted property getter: - (bool)disableFieldList;	// 0x31dae9f1
// converted property getter: - (int)firstDataColumn;	// 0x31d3f291
// converted property getter: - (int)firstDataRow;	// 0x31d3f281
// converted property getter: - (int)firstHeaderRow;	// 0x31d3f271
// converted property getter: - (bool)mergeItem;	// 0x31daea15
// converted property getter: - (bool)multipleFieldFilters;	// 0x31daea39
// converted property getter: - (id)name;	// 0x31dae7c9
// converted property getter: - (bool)outline;	// 0x31daea4d
// converted property getter: - (bool)outlineData;	// 0x31daea61
- (id)pageFields;	// 0x31d3e54d
// converted property getter: - (bool)pageOverThenDown;	// 0x31daea75
// converted property getter: - (id)pageStyleName;	// 0x31dae765
// converted property getter: - (unsigned)pageWrap;	// 0x31dae819
- (id)pivotAreas;	// 0x31d3eccd
- (id)pivotFields;	// 0x31d3d675
// converted property getter: - (id)pivotTableRange;	// 0x31d3f261
- (id)rowFields;	// 0x31d3e17d
// converted property getter: - (bool)rowGrandTotals;	// 0x31dae93d
// converted property getter: - (id)rowHeaderCaption;	// 0x31dae711
- (id)rowItems;	// 0x31d3e251
// converted property getter: - (unsigned)rowPageCount;	// 0x31dae7d9
// converted property setter: - (void)setApplyAlignmentFormats:(bool)formats;	// 0x31d3ef9d
// converted property setter: - (void)setApplyBorderFormats:(bool)formats;	// 0x31d3ef6d
// converted property setter: - (void)setApplyFontFormats:(bool)formats;	// 0x31d3ef7d
// converted property setter: - (void)setApplyNumberFormats:(bool)formats;	// 0x31d3ef5d
// converted property setter: - (void)setApplyPatternFormats:(bool)formats;	// 0x31d3ef8d
// converted property setter: - (void)setApplyWidthHeightFormats:(bool)formats;	// 0x31d3efad
// converted property setter: - (void)setAutoFormatId:(unsigned)anId;	// 0x31dae849
// converted property setter: - (void)setColGrandTotals:(bool)totals;	// 0x31dae919
// converted property setter: - (void)setColumnHeaderCaption:(id)caption;	// 0x31dae6cd
// converted property setter: - (void)setColumnPageCount:(unsigned)count;	// 0x31dae809
// converted property setter: - (void)setCompact:(bool)compact;	// 0x31dae9a9
// converted property setter: - (void)setCompactData:(bool)data;	// 0x31dae999
// converted property setter: - (void)setCustomListSort:(bool)sort;	// 0x31dae975
// converted property setter: - (void)setDataCaption:(bool)caption;	// 0x31d3efcd
// converted property setter: - (void)setDataOnRows:(bool)rows;	// 0x31dae9e1
// converted property setter: - (void)setDataPosition:(unsigned)position;	// 0x31dae869
// converted property setter: - (void)setDisableFieldList:(bool)list;	// 0x31daea05
// converted property setter: - (void)setFirstDataColumn:(int)column;	// 0x31d3d449
// converted property setter: - (void)setFirstDataRow:(int)row;	// 0x31d3d439
// converted property setter: - (void)setFirstHeaderRow:(int)row;	// 0x31d3d429
// converted property setter: - (void)setMergeItem:(bool)item;	// 0x31daea29
// converted property setter: - (void)setMultipleFieldFilters:(bool)filters;	// 0x31d3efdd
// converted property setter: - (void)setName:(id)name;	// 0x31d3ef19
// converted property setter: - (void)setOutline:(bool)outline;	// 0x31d3efed
// converted property setter: - (void)setOutlineData:(bool)data;	// 0x31d3effd
// converted property setter: - (void)setPageOverThenDown:(bool)down;	// 0x31daea89
// converted property setter: - (void)setPageStyleName:(id)name;	// 0x31dae775
// converted property setter: - (void)setPageWrap:(unsigned)wrap;	// 0x31dae829
// converted property setter: - (void)setPivotTableRange:(id)range;	// 0x31d3d3e5
// converted property setter: - (void)setRowGrandTotals:(bool)totals;	// 0x31dae951
// converted property setter: - (void)setRowHeaderCaption:(id)caption;	// 0x31dae721
// converted property setter: - (void)setRowPageCount:(unsigned)count;	// 0x31dae7e9
// converted property setter: - (void)setShowCalcMbrs:(bool)mbrs;	// 0x31d3f00d
// converted property setter: - (void)setShowColumnHeaders:(bool)headers;	// 0x31d3d665
// converted property setter: - (void)setShowColumnStripes:(bool)stripes;	// 0x31d3d645
// converted property setter: - (void)setShowDataDropDown:(bool)down;	// 0x31daeac1
// converted property setter: - (void)setShowDropZones:(bool)zones;	// 0x31daeae5
// converted property setter: - (void)setShowEmptyCol:(bool)col;	// 0x31daeb09
// converted property setter: - (void)setShowEmptyRow:(bool)row;	// 0x31daeb2d
// converted property setter: - (void)setShowHeaders:(bool)headers;	// 0x31daeb51
// converted property setter: - (void)setShowLastColumn:(bool)column;	// 0x31d3d625
// converted property setter: - (void)setShowMemberPropertyTips:(bool)tips;	// 0x31daeb75
// converted property setter: - (void)setShowMissing:(bool)missing;	// 0x31daeb99
// converted property setter: - (void)setShowMultipleLabel:(bool)label;	// 0x31daebbd
// converted property setter: - (void)setShowRowHeaders:(bool)headers;	// 0x31d3d655
// converted property setter: - (void)setShowRowStripes:(bool)stripes;	// 0x31d3d635
// converted property setter: - (void)setStyle:(id)style;	// 0x31dae675
// converted property setter: - (void)setStyleIndex:(unsigned)index;	// 0x31daec01
// converted property setter: - (void)setStyleName:(id)name;	// 0x31d3d5e1
// converted property setter: - (void)setSubtotalHiddenItems:(bool)items;	// 0x31daebe1
// converted property setter: - (void)setUseAutoFormatting:(bool)formatting;	// 0x31d3efbd
// converted property getter: - (bool)showCalcMbrs;	// 0x31daea99
// converted property getter: - (bool)showColumnHeaders;	// 0x31d3f471
// converted property getter: - (bool)showColumnStripes;	// 0x31d3fa11
// converted property getter: - (bool)showDataDropDown;	// 0x31daeaad
// converted property getter: - (bool)showDropZones;	// 0x31daead1
// converted property getter: - (bool)showEmptyCol;	// 0x31daeaf5
// converted property getter: - (bool)showEmptyRow;	// 0x31daeb19
// converted property getter: - (bool)showHeaders;	// 0x31daeb3d
// converted property getter: - (bool)showLastColumn;	// 0x31dae879
// converted property getter: - (bool)showMemberPropertyTips;	// 0x31daeb61
// converted property getter: - (bool)showMissing;	// 0x31daeb85
// converted property getter: - (bool)showMultipleLabel;	// 0x31daeba9
// converted property getter: - (bool)showRowHeaders;	// 0x31d3f9fd
// converted property getter: - (bool)showRowStripes;	// 0x31d3ff99
// converted property getter: - (id)style;	// 0x31d3f031
// converted property getter: - (unsigned)styleIndex;	// 0x31daebf1
// converted property getter: - (id)styleName;	// 0x31dae7b9
// converted property getter: - (bool)subtotalHiddenItems;	// 0x31daebcd
// converted property getter: - (bool)useAutoFormatting;	// 0x31dae929
@end
