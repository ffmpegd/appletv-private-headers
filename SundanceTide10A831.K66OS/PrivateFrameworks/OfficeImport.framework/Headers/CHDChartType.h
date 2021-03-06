/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class CHDDataLabel, EDCollection, CHDChart, CHDSeriesCollection;

@interface CHDChartType : NSObject {
	CHDChart *mChart;	// 4 = 0x4
	EDCollection *mAxisIds;	// 8 = 0x8
	CHDSeriesCollection *mSeries;	// 12 = 0xc
	CHDDataLabel *mDefaultDataLabel;	// 16 = 0x10
	bool mVaryColors;	// 20 = 0x14
}
@property(retain) id defaultDataLabel;	// G=0x36bbc55d; S=0x36b40475; converted property
@property(retain) id seriesCollection;	// G=0x36b40045; S=0x36b4cd85; converted property
@property(assign, getter=isVaryColors) bool varyColors;	// G=0x36b4b80d; S=0x36b3db29; converted property
+ (id)chartTypeWithChart:(id)chart;	// 0x36b661e9
+ (bool)is3DType;	// 0x36b8b0bd
- (id)initWithChart:(id)chart;	// 0x36b3d8dd
- (id)axes;	// 0x36b44c81
- (id)axisForClass:(Class)aClass;	// 0x36bbc3d1
- (id)axisIds;	// 0x36b3db39
- (unsigned)categoryCount;	// 0x36bbc4b9
- (id)chart;	// 0x36b40b11
- (id)contentFormat;	// 0x36bbc56d
- (void)dealloc;	// 0x36b4d46d
// converted property getter: - (id)defaultDataLabel;	// 0x36bbc55d
- (int)defaultLabelPosition;	// 0x36bbc58d
- (id)defaultTitleWithResources:(id)resources;	// 0x36b9571d
- (bool)isHorizontal;	// 0x36b4aa75
- (bool)isPlotedOnSecondaryAxis;	// 0x36bbc2d1
// converted property getter: - (bool)isVaryColors;	// 0x36b4b80d
// converted property getter: - (id)seriesCollection;	// 0x36b40045
- (unsigned)seriesCount;	// 0x36b6a5e9
// converted property setter: - (void)setDefaultDataLabel:(id)label;	// 0x36b40475
// converted property setter: - (void)setSeriesCollection:(id)collection;	// 0x36b4cd85
// converted property setter: - (void)setVaryColors:(bool)colors;	// 0x36b3db29
@end

