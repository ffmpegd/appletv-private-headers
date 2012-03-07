/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "CHDChartTypeWithGrouping.h"


__attribute__((visibility("hidden")))
@interface CHDBar2DType : CHDChartTypeWithGrouping {
@private
	int mGapWidth;	// 28 = 0x1c
	bool mColumn;	// 32 = 0x20
	int mOverlap;	// 36 = 0x24
}
@property(assign, getter=isColumn) bool column;	// G=0x35299991; S=0x35297ab5; converted property
@property(assign) int gapWidth;	// G=0x3538a61d; S=0x35297a9d; converted property
@property(assign) int overlap;	// G=0x3538a62d; S=0x35297a8d; converted property
- (id)initWithChart:(id)chart;	// 0x35297925
- (int)defaultLabelPosition;	// 0x3538a63d
// converted property getter: - (int)gapWidth;	// 0x3538a61d
// converted property getter: - (bool)isColumn;	// 0x35299991
- (bool)isHorizontal;	// 0x35297bed
// converted property getter: - (int)overlap;	// 0x3538a62d
// converted property setter: - (void)setColumn:(bool)column;	// 0x35297ab5
// converted property setter: - (void)setGapWidth:(int)width;	// 0x35297a9d
// converted property setter: - (void)setOverlap:(int)overlap;	// 0x35297a8d
@end

