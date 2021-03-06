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
@property(assign, getter=isAutoTitleDeleted) bool autoTitleDeleted;	// G=0x33b472a5; S=0x33acc7c9; converted property
@property(retain) id backWallGraphicProperties;	// G=0x33b47305; S=0x33ac6c8d; converted property
@property(retain) id chartAreaGraphicProperties;	// G=0x33ad21b1; S=0x33ac0131; converted property
@property(retain) id defaultTextProperties;	// G=0x33ac3479; S=0x33b47341; converted property
@property(assign) int direction;	// G=0x33acc245; S=0x33acdd55; converted property
@property(assign, getter=isDirectionChanged) bool directionChanged;	// G=0x33b478ed; S=0x33ad8461; converted property
@property(assign) int displayBlankAs;	// G=0x33b472cd; S=0x33ac01ad; converted property
@property(retain) id externalData;	// G=0x33b472f5; S=0x33af64c5; converted property
@property(retain) id floorGraphicProperties;	// G=0x33b4732d; S=0x33ac79fd; converted property
@property(retain) id legend;	// G=0x33acb699; S=0x33ac8731; converted property
@property(assign) CGRect logicalBounds;	// G=0x33b47385; S=0x33abea99; converted property
@property(assign, getter=isMSGraph) bool mSGraph;	// G=0x33ad66a9; S=0x33b478dd; converted property
@property(retain) id plotArea;	// G=0x33ac40ad; S=0x33acc5cd; converted property
@property(assign, getter=isPlotVisibleCellsOnly) bool plotVisibleCellsOnly;	// G=0x33b472b9; S=0x33ac0185; converted property
@property(retain) id sheet;	// G=0x33b47295; S=0x33abe2dd; converted property
@property(retain) id sideWallGraphicProperties;	// G=0x33b47319; S=0x33ac6c49; converted property
@property(assign) int styleId;	// G=0x33af05ad; S=0x33abe2ed; converted property
@property(retain) id title;	// G=0x33ad1d55; S=0x33acc785; converted property
@property(retain) id view3D;	// G=0x33b472e1; S=0x33ac88a1; converted property
+ (id)binaryEffects:(BOOL)effects;	// 0x33abfa11
- (id)init;	// 0x33abbb99
- (id).cxx_construct;	// 0x33abbb95
- (void)addChild:(id)child;	// 0x33ad4d35
- (void)addChildren:(id)children;	// 0x33b473cd
// converted property getter: - (id)backWallGraphicProperties;	// 0x33b47305
- (unsigned)categoryCount;	// 0x33b47851
// converted property getter: - (id)chartAreaGraphicProperties;	// 0x33ad21b1
- (id)childAtIndex:(unsigned)index;	// 0x33b47451
- (unsigned)childCount;	// 0x33b473ad
- (id)children;	// 0x33b47471
- (void)dealloc;	// 0x33ad8975
- (id)defaultContentFormat;	// 0x33b47781
- (id)defaultDataLabelFont;	// 0x33b47645
- (unsigned)defaultFontIndex;	// 0x33b029c5
- (id)defaultFontWithResources:(id)resources;	// 0x33b477c1
- (int)defaultLabelPosition;	// 0x33b47811
- (id)defaultSeriesTitleFont;	// 0x33b476e1
- (id)defaultTextFont;	// 0x33b475c1
// converted property getter: - (id)defaultTextProperties;	// 0x33ac3479
- (id)defaultThemeFont;	// 0x33b474d1
// converted property getter: - (int)direction;	// 0x33acc245
// converted property getter: - (int)displayBlankAs;	// 0x33b472cd
// converted property getter: - (id)externalData;	// 0x33b472f5
// converted property getter: - (id)floorGraphicProperties;	// 0x33b4732d
- (bool)is3D;	// 0x33af11e5
// converted property getter: - (bool)isAutoTitleDeleted;	// 0x33b472a5
- (bool)isBinary;	// 0x33abe525
// converted property getter: - (bool)isDirectionChanged;	// 0x33b478ed
// converted property getter: - (bool)isMSGraph;	// 0x33ad66a9
- (bool)isPie;	// 0x33af5bd5
// converted property getter: - (bool)isPlotVisibleCellsOnly;	// 0x33b472b9
// converted property getter: - (id)legend;	// 0x33acb699
// converted property getter: - (CGRect)logicalBounds;	// 0x33b47385
- (id)mainType;	// 0x33ad1ac1
// converted property getter: - (id)plotArea;	// 0x33ac40ad
- (id)processors;	// 0x33ac9f5d
- (void)replaceChild:(id)child with:(id)with;	// 0x33b47481
- (unsigned)seriesCount;	// 0x33af5c25
// converted property setter: - (void)setAutoTitleDeleted:(bool)deleted;	// 0x33acc7c9
// converted property setter: - (void)setBackWallGraphicProperties:(id)properties;	// 0x33ac6c8d
// converted property setter: - (void)setChartAreaGraphicProperties:(id)properties;	// 0x33ac0131
// converted property setter: - (void)setDefaultTextProperties:(id)properties;	// 0x33b47341
// converted property setter: - (void)setDirection:(int)direction;	// 0x33acdd55
// converted property setter: - (void)setDirectionChanged:(bool)changed;	// 0x33ad8461
// converted property setter: - (void)setDisplayBlankAs:(int)as;	// 0x33ac01ad
// converted property setter: - (void)setExternalData:(id)data;	// 0x33af64c5
// converted property setter: - (void)setFloorGraphicProperties:(id)properties;	// 0x33ac79fd
// converted property setter: - (void)setLegend:(id)legend;	// 0x33ac8731
// converted property setter: - (void)setLogicalBounds:(CGRect)bounds;	// 0x33abea99
// converted property setter: - (void)setMSGraph:(bool)graph;	// 0x33b478dd
- (void)setParentTextListStyle:(id)style;	// 0x33af65ed
// converted property setter: - (void)setPlotArea:(id)area;	// 0x33acc5cd
// converted property setter: - (void)setPlotVisibleCellsOnly:(bool)only;	// 0x33ac0185
// converted property setter: - (void)setSheet:(id)sheet;	// 0x33abe2dd
// converted property setter: - (void)setSideWallGraphicProperties:(id)properties;	// 0x33ac6c49
// converted property setter: - (void)setStyleId:(int)anId;	// 0x33abe2ed
// converted property setter: - (void)setTitle:(id)title;	// 0x33acc785
// converted property setter: - (void)setView3D:(id)d;	// 0x33ac88a1
// converted property getter: - (id)sheet;	// 0x33b47295
// converted property getter: - (id)sideWallGraphicProperties;	// 0x33b47319
// converted property getter: - (int)styleId;	// 0x33af05ad
- (id)styleMatrix;	// 0x33af07f9
// converted property getter: - (id)title;	// 0x33ad1d55
// converted property getter: - (id)view3D;	// 0x33b472e1
- (id)workbook;	// 0x33af0845
@end

