/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "CHAutoStyling.h"
#import "CHAutoStyling.h"


__attribute__((visibility("hidden")))
@interface CHBAutoStyling : CHAutoStyling <CHAutoStyling> {
}
- (id)autoAxisStroke;	// 0x345d1f11
- (id)autoFill;	// 0x344d8061
- (id)autoSeriesBorderStroke;	// 0x344e35ad
- (id)autoSeriesFill:(int)fill;	// 0x344e2c89
- (id)autoStroke;	// 0x344d8109
- (id)autoStrokeForSeriesIndex:(int)seriesIndex;	// 0x344e2b79
- (id)fillWithColorIndex:(int)colorIndex;	// 0x344d8075
- (void)resolveAxisGraphicProperties:(id)properties;	// 0x344de855
- (void)resolveChartAreaGraphicProperties:(id)properties;	// 0x344d8009
- (void)resolveFloorGraphicProperties:(id)properties;	// 0x344df14d
- (void)resolveGraphicPropertiesOfErrorBar:(id)errorBar forSeriesIndex:(int)seriesIndex;	// 0x344e356d
- (void)resolveGraphicPropertiesOfSeries:(id)series forSeriesIndex:(int)seriesIndex;	// 0x3455f389
- (void)resolveGraphicPropertiesOfSeries:(id)series forSeriesIndex:(int)seriesIndex isLine:(bool)line;	// 0x344e2c0d
- (void)resolveGraphicPropertiesOfTrendline:(id)trendline forSeriesIndex:(int)seriesIndex;	// 0x34561a0d
- (void)resolveLegendGraphicProperties:(id)properties;	// 0x34547db1
- (void)resolveMajorGridLinesGraphicProperties:(id)properties;	// 0x344defdd
- (void)resolveMarker:(id)marker withSeriesGraphicProperties:(id)seriesGraphicProperties forSeriesIndex:(int)seriesIndex;	// 0x344e291d
- (void)resolveMinorGridLinesGraphicProperties:(id)properties;	// 0x344deed1
- (void)resolvePlotAreaGraphicProperties:(id)properties;	// 0x344dc799
- (void)resolveWallGraphicProperties:(id)properties;	// 0x344e558d
- (void)resolvedGraphicProperties:(id)properties autoFill:(id)fill autoStroke:(id)stroke autoShadow:(BOOL)shadow nullFill:(id)fill5 nullStroke:(id)stroke6 nullShadow:(BOOL)shadow7;	// 0x344d819d
- (id)strokeWithColorIndex:(int)colorIndex;	// 0x344d811d
@end

