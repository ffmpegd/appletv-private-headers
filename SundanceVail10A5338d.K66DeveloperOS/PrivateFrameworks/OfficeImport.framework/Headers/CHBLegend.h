/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


@interface CHBLegend : NSObject {
}
+ (int)chdLegendPositionEnumFromXlLegendPosition:(int)xlLegendPosition;	// 0x33ac86e5
+ (id)readCHDLegendEntryFrom:(const XlChartCustomLegend *)from state:(id)state;	// 0x33b020f5
+ (id)readFrom:(XlChartLegendFrame *)from state:(id)state;	// 0x33ac8355
+ (int)xlLegendPositionEnumFromCHDLegendPosition:(int)chdlegendPosition;	// 0x33b40885
@end

