/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


@interface EBGraphic : NSObject {
}
+ (int)objectTypeForShape:(id)shape;	// 0x34a09315
+ (void)readChart:(id)chart chartIndex:(int)index state:(id)state;	// 0x3496677d
+ (id)readGraphicWithDictionary:(id)dictionary state:(id)state;	// 0x348aed21
+ (void)readGraphicsInChart:(id)chart state:(id)state;	// 0x3496943d
+ (void)readGraphicsWithState:(id)state;	// 0x348aeaed
+ (void)readImage:(id)image xlGraphicsInfo:(XlGraphicsInfo *)info state:(id)state;	// 0x34a09051
+ (id)readMainChartWithState:(id)state;	// 0x34966425
+ (void)readNotesWithDictionary:(id)dictionary state:(id)state;	// 0x348b12ed
+ (void)readOle:(id)ole xlGraphicsInfo:(XlGraphicsInfo *)info state:(id)state;	// 0x349cbc15
@end

