/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


@interface CHBAxis : NSObject {
}
+ (Class)chbAxisClassWith:(id)with;	// 0x31d6eae9
+ (Class)chbAxisClassWith:(XlChartPlotAxis *)with plotAxis:(int)axis;	// 0x31cf4c15
+ (int)chbAxisIdForPlotAxis:(int)plotAxis state:(id)state;	// 0x31cf50e5
+ (int)chdAxisPositionFromAxisType:(int)axisType;	// 0x31cf514d
+ (id)readWithXlPlotAxis:(int)xlPlotAxis state:(id)state;	// 0x31cf3649
+ (int)xlPlotAxisTypeFrom:(int)from;	// 0x31d6ebcd
@end

