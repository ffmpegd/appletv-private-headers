/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface CHBSeries : NSObject {
}
+ (Class)chdSeriesClassWithState:(id)state;	// 0x30d4ed5d
+ (id)chdSeriesWithState:(id)state;	// 0x30d53b05
+ (id)getCHDSeriesFromSeriesID:(int)seriesID state:(id)state;	// 0x30e403a5
+ (id)readFrom:(XlChartDataSeries *)from state:(id)state;	// 0x30d4e939
+ (void)readXlChartSeriesFormat:(XlChartDataSeries *)format chdSeries:(id)series state:(id)state;	// 0x30d503c9
+ (void)resolveSeriesStyle:(id)style state:(id)state;	// 0x30d506c9
@end

