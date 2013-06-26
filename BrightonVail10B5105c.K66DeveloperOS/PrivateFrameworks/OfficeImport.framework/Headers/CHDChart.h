/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OADGraphic.h"
#import "OfficeImport-Structs.h"
#import "OADDrawableContainer.h"

@class CHDPlotArea, CHDLegend, EDWorkbook, EDSheet, OADGraphicProperties, CHDTitle, NSMutableArray, CHDDefaultTextProperties, CHDView3D;

@interface CHDChart : OADGraphic <OADDrawableContainer> {
	EDSheet *mSheet;	// 28 = 0x1c
	int mStyleId;	// 32 = 0x20
	bool mAutoTitleDeleted;	// 36 = 0x24
	bool mPlotVisibleCellsOnly;	// 37 = 0x25
	bool mMSGraph;	// 38 = 0x26
	bool mDirectionChanged;	// 39 = 0x27
	int mDisplayBlankCellsAs;	// 40 = 0x28
	CHDPlotArea *mPlotArea;	// 44 = 0x2c
	CHDView3D *mView3D;	// 48 = 0x30
	CHDTitle *mTitle;	// 52 = 0x34
	CHDLegend *mLegend;	// 56 = 0x38
	EDWorkbook *mExternalData;	// 60 = 0x3c
	OADGraphicProperties *mChartAreaGraphicProperties;	// 64 = 0x40
	OADGraphicProperties *mBackWallGraphicProperties;	// 68 = 0x44
	OADGraphicProperties *mSideWallGraphicProperties;	// 72 = 0x48
	OADGraphicProperties *mFloorGraphicProperties;	// 76 = 0x4c
	CHDDefaultTextProperties *mDefaultTextProperties;	// 80 = 0x50
	int mChartDirection;	// 84 = 0x54
	CGRect mLogicalBounds;	// 88 = 0x58
	NSMutableArray *mDrawables;	// 104 = 0x68
}
@property(assign, getter=isAutoTitleDeleted) bool autoTitleDeleted;	// G=0x37a97c75; S=0x37a1d131; converted property
@property(retain) id backWallGraphicProperties;	// G=0x37a97cd5; S=0x37a175f5; converted property
@property(retain) id chartAreaGraphicProperties;	// G=0x37a22b19; S=0x37a10a99; converted property
@property(retain) id defaultTextProperties;	// G=0x37a13de1; S=0x37a97d11; converted property
@property(assign) int direction;	// G=0x37a1cbad; S=0x37a1e6bd; converted property
@property(assign, getter=isDirectionChanged) bool directionChanged;	// G=0x37a982bd; S=0x37a28dc9; converted property
@property(assign) int displayBlankAs;	// G=0x37a97c9d; S=0x37a10b15; converted property
@property(retain) id externalData;	// G=0x37a97cc5; S=0x37a46e05; converted property
@property(retain) id floorGraphicProperties;	// G=0x37a97cfd; S=0x37a18365; converted property
@property(retain) id legend;	// G=0x37a1c001; S=0x37a19099; converted property
@property(assign) CGRect logicalBounds;	// G=0x37a97d55; S=0x37a0f401; converted property
@property(assign, getter=isMSGraph) bool mSGraph;	// G=0x37a27011; S=0x37a982ad; converted property
@property(retain) id plotArea;	// G=0x37a14a15; S=0x37a1cf35; converted property
@property(assign, getter=isPlotVisibleCellsOnly) bool plotVisibleCellsOnly;	// G=0x37a97c89; S=0x37a10aed; converted property
@property(retain) id sheet;	// G=0x37a97c65; S=0x37a0ec45; converted property
@property(retain) id sideWallGraphicProperties;	// G=0x37a97ce9; S=0x37a175b1; converted property
@property(assign) int styleId;	// G=0x37a40eed; S=0x37a0ec55; converted property
@property(retain) id title;	// G=0x37a226bd; S=0x37a1d0ed; converted property
@property(retain) id view3D;	// G=0x37a97cb1; S=0x37a19209; converted property
+ (id)binaryEffects:(BOOL)effects;	// 0x37a10379
- (id)init;	// 0x37a0c501
- (id).cxx_construct;	// 0x37a0c4fd
- (void)addChild:(id)child;	// 0x37a2569d
- (void)addChildren:(id)children;	// 0x37a97d9d
// converted property getter: - (id)backWallGraphicProperties;	// 0x37a97cd5
- (unsigned)categoryCount;	// 0x37a98221
// converted property getter: - (id)chartAreaGraphicProperties;	// 0x37a22b19
- (id)childAtIndex:(unsigned)index;	// 0x37a97e21
- (unsigned)childCount;	// 0x37a97d7d
- (id)children;	// 0x37a97e41
- (void)dealloc;	// 0x37a292dd
- (id)defaultContentFormat;	// 0x37a98151
- (id)defaultDataLabelFont;	// 0x37a98015
- (unsigned)defaultFontIndex;	// 0x37a53305
- (id)defaultFontWithResources:(id)resources;	// 0x37a98191
- (int)defaultLabelPosition;	// 0x37a981e1
- (id)defaultSeriesTitleFont;	// 0x37a980b1
- (id)defaultTextFont;	// 0x37a97f91
// converted property getter: - (id)defaultTextProperties;	// 0x37a13de1
- (id)defaultThemeFont;	// 0x37a97ea1
// converted property getter: - (int)direction;	// 0x37a1cbad
// converted property getter: - (int)displayBlankAs;	// 0x37a97c9d
// converted property getter: - (id)externalData;	// 0x37a97cc5
// converted property getter: - (id)floorGraphicProperties;	// 0x37a97cfd
- (bool)is3D;	// 0x37a41b25
// converted property getter: - (bool)isAutoTitleDeleted;	// 0x37a97c75
- (bool)isBinary;	// 0x37a0ee8d
// converted property getter: - (bool)isDirectionChanged;	// 0x37a982bd
// converted property getter: - (bool)isMSGraph;	// 0x37a27011
- (bool)isPie;	// 0x37a46515
// converted property getter: - (bool)isPlotVisibleCellsOnly;	// 0x37a97c89
// converted property getter: - (id)legend;	// 0x37a1c001
// converted property getter: - (CGRect)logicalBounds;	// 0x37a97d55
- (id)mainType;	// 0x37a22429
// converted property getter: - (id)plotArea;	// 0x37a14a15
- (id)processors;	// 0x37a1a8c5
- (void)replaceChild:(id)child with:(id)with;	// 0x37a97e51
- (unsigned)seriesCount;	// 0x37a46565
// converted property setter: - (void)setAutoTitleDeleted:(bool)deleted;	// 0x37a1d131
// converted property setter: - (void)setBackWallGraphicProperties:(id)properties;	// 0x37a175f5
// converted property setter: - (void)setChartAreaGraphicProperties:(id)properties;	// 0x37a10a99
// converted property setter: - (void)setDefaultTextProperties:(id)properties;	// 0x37a97d11
// converted property setter: - (void)setDirection:(int)direction;	// 0x37a1e6bd
// converted property setter: - (void)setDirectionChanged:(bool)changed;	// 0x37a28dc9
// converted property setter: - (void)setDisplayBlankAs:(int)as;	// 0x37a10b15
// converted property setter: - (void)setExternalData:(id)data;	// 0x37a46e05
// converted property setter: - (void)setFloorGraphicProperties:(id)properties;	// 0x37a18365
// converted property setter: - (void)setLegend:(id)legend;	// 0x37a19099
// converted property setter: - (void)setLogicalBounds:(CGRect)bounds;	// 0x37a0f401
// converted property setter: - (void)setMSGraph:(bool)graph;	// 0x37a982ad
- (void)setParentTextListStyle:(id)style;	// 0x37a46f2d
// converted property setter: - (void)setPlotArea:(id)area;	// 0x37a1cf35
// converted property setter: - (void)setPlotVisibleCellsOnly:(bool)only;	// 0x37a10aed
// converted property setter: - (void)setSheet:(id)sheet;	// 0x37a0ec45
// converted property setter: - (void)setSideWallGraphicProperties:(id)properties;	// 0x37a175b1
// converted property setter: - (void)setStyleId:(int)anId;	// 0x37a0ec55
// converted property setter: - (void)setTitle:(id)title;	// 0x37a1d0ed
// converted property setter: - (void)setView3D:(id)d;	// 0x37a19209
// converted property getter: - (id)sheet;	// 0x37a97c65
// converted property getter: - (id)sideWallGraphicProperties;	// 0x37a97ce9
// converted property getter: - (int)styleId;	// 0x37a40eed
- (id)styleMatrix;	// 0x37a41139
// converted property getter: - (id)title;	// 0x37a226bd
// converted property getter: - (id)view3D;	// 0x37a97cb1
- (id)workbook;	// 0x37a41185
@end
