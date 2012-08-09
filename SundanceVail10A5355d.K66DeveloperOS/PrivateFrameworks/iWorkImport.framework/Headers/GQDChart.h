/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "GQDGraphic.h"
#import "iWorkImport-Structs.h"

@class GQDChartModel, GQDChartLegend, GQDSStyle;

@interface GQDChart : GQDGraphic {
	GQDChartLegend *mLegend;	// 40 = 0x28
	BOOL mIsLegendRetained;	// 44 = 0x2c
	GQDChartModel *mModel;	// 48 = 0x30
	GQDSStyle *mStyle;	// 52 = 0x34
	long mType;	// 56 = 0x38
}
@property(retain) id legend;	// G=0x34be27d5; S=0x34be2825; converted property
+ (const StateSpec *)stateForReading;	// 0x34be2741
- (void)dealloc;	// 0x34be274d
- (id)graphicStyle;	// 0x34be2805
// converted property getter: - (id)legend;	// 0x34be27d5
- (id)model;	// 0x34be27e5
// converted property setter: - (void)setLegend:(id)legend;	// 0x34be2825
- (id)style;	// 0x34be27f5
- (long)type;	// 0x34be2815
@end
