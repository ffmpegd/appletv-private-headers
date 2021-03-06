/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class EDResources, EDCollection, NSString, EDReference;

@interface EDTable : NSObject {
	EDResources *mResources;	// 4 = 0x4
	unsigned mStyleIndex;	// 8 = 0x8
	unsigned mHeaderRowDxfIndex;	// 12 = 0xc
	unsigned mTotalsRowDxfIndex;	// 16 = 0x10
	unsigned mDataAreaDxfIndex;	// 20 = 0x14
	unsigned mHeaderRowBorderDxfIndex;	// 24 = 0x18
	unsigned mTotalsRowBorderDxfIndex;	// 28 = 0x1c
	unsigned mDataAreaBorderDxfIndex;	// 32 = 0x20
	unsigned mTableBorderDxfIndex;	// 36 = 0x24
	NSString *mName;	// 40 = 0x28
	NSString *mDisplayName;	// 44 = 0x2c
	EDReference *mTableRange;	// 48 = 0x30
	NSString *mStyleName;	// 52 = 0x34
	unsigned mHeaderRowCount;	// 56 = 0x38
	unsigned mTotalsRowCount;	// 60 = 0x3c
	bool mShowFirstColumn;	// 64 = 0x40
	bool mShowLastColumn;	// 65 = 0x41
	bool mShowRowStripes;	// 66 = 0x42
	bool mShowColumnStripes;	// 67 = 0x43
	EDCollection *mTableColumns;	// 68 = 0x44
}
@property(retain) id dataAreaBorderDxf;	// G=0x3508712d; S=0x35087175; converted property
@property(assign) unsigned dataAreaBorderDxfIndex;	// G=0x350872c5; S=0x350872d5; converted property
@property(retain) id dataAreaDxf;	// G=0x35086f7d; S=0x35086fc5; converted property
@property(assign) unsigned dataAreaDxfIndex;	// G=0x35087295; S=0x3501a86d; converted property
@property(retain) id displayName;	// G=0x35087205; S=0x34ff3361; converted property
@property(retain) id headerRowBorderDxf;	// G=0x3508700d; S=0x35087055; converted property
@property(assign) unsigned headerRowBorderDxfIndex;	// G=0x350872a5; S=0x3501a84d; converted property
@property(assign) unsigned headerRowCount;	// G=0x3500eef9; S=0x35087225; converted property
@property(retain) id headerRowDxf;	// G=0x35086e5d; S=0x35086ea5; converted property
@property(assign) unsigned headerRowDxfIndex;	// G=0x35087265; S=0x3501a4f9; converted property
@property(retain) id name;	// G=0x34ff7755; S=0x34ff331d; converted property
@property(assign) bool showColumnStripes;	// G=0x3500ff65; S=0x35000be1; converted property
@property(assign) bool showFirstColumn;	// G=0x3500ff3d; S=0x35000bb1; converted property
@property(assign) bool showLastColumn;	// G=0x3500ff51; S=0x35000bc1; converted property
@property(assign) bool showRowStripes;	// G=0x35011521; S=0x35000bd1; converted property
@property(retain) id style;	// G=0x3500f339; S=0x35086e15; converted property
@property(assign) unsigned styleIndex;	// G=0x35087245; S=0x35087255; converted property
@property(retain) id styleName;	// G=0x35087215; S=0x3500e9f5; converted property
@property(retain) id tableBorderDxf;	// G=0x3500f421; S=0x350871bd; converted property
@property(assign) unsigned tableBorderDxfIndex;	// G=0x350872e5; S=0x35000ba1; converted property
@property(retain) id tableRange;	// G=0x3500eee9; S=0x34ff33a5; converted property
@property(retain) id totalsRowBorderDxf;	// G=0x3508709d; S=0x350870e5; converted property
@property(assign) unsigned totalsRowBorderDxfIndex;	// G=0x350872b5; S=0x3501a85d; converted property
@property(assign) unsigned totalsRowCount;	// G=0x3500ef09; S=0x35087235; converted property
@property(retain) id totalsRowDxf;	// G=0x35086eed; S=0x35086f35; converted property
@property(assign) unsigned totalsRowDxfIndex;	// G=0x35087275; S=0x35087285; converted property
+ (id)tableWithResources:(id)resources;	// 0x35086dc9
- (id)initWithResources:(id)resources;	// 0x34ff31b9
// converted property getter: - (id)dataAreaBorderDxf;	// 0x3508712d
// converted property getter: - (unsigned)dataAreaBorderDxfIndex;	// 0x350872c5
// converted property getter: - (id)dataAreaDxf;	// 0x35086f7d
// converted property getter: - (unsigned)dataAreaDxfIndex;	// 0x35087295
- (void)dealloc;	// 0x34ffb2b1
// converted property getter: - (id)displayName;	// 0x35087205
// converted property getter: - (id)headerRowBorderDxf;	// 0x3508700d
// converted property getter: - (unsigned)headerRowBorderDxfIndex;	// 0x350872a5
// converted property getter: - (unsigned)headerRowCount;	// 0x3500eef9
// converted property getter: - (id)headerRowDxf;	// 0x35086e5d
// converted property getter: - (unsigned)headerRowDxfIndex;	// 0x35087265
// converted property getter: - (id)name;	// 0x34ff7755
// converted property setter: - (void)setDataAreaBorderDxf:(id)dxf;	// 0x35087175
// converted property setter: - (void)setDataAreaBorderDxfIndex:(unsigned)index;	// 0x350872d5
// converted property setter: - (void)setDataAreaDxf:(id)dxf;	// 0x35086fc5
// converted property setter: - (void)setDataAreaDxfIndex:(unsigned)index;	// 0x3501a86d
// converted property setter: - (void)setDisplayName:(id)name;	// 0x34ff3361
// converted property setter: - (void)setHeaderRowBorderDxf:(id)dxf;	// 0x35087055
// converted property setter: - (void)setHeaderRowBorderDxfIndex:(unsigned)index;	// 0x3501a84d
// converted property setter: - (void)setHeaderRowCount:(unsigned)count;	// 0x35087225
// converted property setter: - (void)setHeaderRowDxf:(id)dxf;	// 0x35086ea5
// converted property setter: - (void)setHeaderRowDxfIndex:(unsigned)index;	// 0x3501a4f9
// converted property setter: - (void)setName:(id)name;	// 0x34ff331d
// converted property setter: - (void)setShowColumnStripes:(bool)stripes;	// 0x35000be1
// converted property setter: - (void)setShowFirstColumn:(bool)column;	// 0x35000bb1
// converted property setter: - (void)setShowLastColumn:(bool)column;	// 0x35000bc1
// converted property setter: - (void)setShowRowStripes:(bool)stripes;	// 0x35000bd1
// converted property setter: - (void)setStyle:(id)style;	// 0x35086e15
// converted property setter: - (void)setStyleIndex:(unsigned)index;	// 0x35087255
// converted property setter: - (void)setStyleName:(id)name;	// 0x3500e9f5
// converted property setter: - (void)setTableBorderDxf:(id)dxf;	// 0x350871bd
// converted property setter: - (void)setTableBorderDxfIndex:(unsigned)index;	// 0x35000ba1
// converted property setter: - (void)setTableRange:(id)range;	// 0x34ff33a5
// converted property setter: - (void)setTotalsRowBorderDxf:(id)dxf;	// 0x350870e5
// converted property setter: - (void)setTotalsRowBorderDxfIndex:(unsigned)index;	// 0x3501a85d
// converted property setter: - (void)setTotalsRowCount:(unsigned)count;	// 0x35087235
// converted property setter: - (void)setTotalsRowDxf:(id)dxf;	// 0x35086f35
// converted property setter: - (void)setTotalsRowDxfIndex:(unsigned)index;	// 0x35087285
// converted property getter: - (bool)showColumnStripes;	// 0x3500ff65
// converted property getter: - (bool)showFirstColumn;	// 0x3500ff3d
// converted property getter: - (bool)showLastColumn;	// 0x3500ff51
// converted property getter: - (bool)showRowStripes;	// 0x35011521
// converted property getter: - (id)style;	// 0x3500f339
// converted property getter: - (unsigned)styleIndex;	// 0x35087245
// converted property getter: - (id)styleName;	// 0x35087215
// converted property getter: - (id)tableBorderDxf;	// 0x3500f421
// converted property getter: - (unsigned)tableBorderDxfIndex;	// 0x350872e5
- (id)tableColumns;	// 0x34ff33e9
// converted property getter: - (id)tableRange;	// 0x3500eee9
// converted property getter: - (id)totalsRowBorderDxf;	// 0x3508709d
// converted property getter: - (unsigned)totalsRowBorderDxfIndex;	// 0x350872b5
// converted property getter: - (unsigned)totalsRowCount;	// 0x3500ef09
// converted property getter: - (id)totalsRowDxf;	// 0x35086eed
// converted property getter: - (unsigned)totalsRowDxfIndex;	// 0x35087275
@end

