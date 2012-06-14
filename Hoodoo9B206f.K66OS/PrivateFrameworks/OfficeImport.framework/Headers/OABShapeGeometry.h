/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface OABShapeGeometry : NSObject {
}
+ (int)actualPathCommandForPathCommand:(int)pathCommand index:(unsigned short)index;	// 0x3443f885
+ (OADAdjustCoord)adjustCoordWithComputedValue:(EshComputedValue)computedValue;	// 0x3443f8b5
+ (void)appendAdjustPoint:(OADAdjustPoint)point toPathParams:(EshPathParamTable *)pathParams;	// 0x3466fb3d
+ (EshComputedValue)computedValueWithAdjustCoord:(OADAdjustCoord)adjustCoord;	// 0x3466f889
+ (void)readAdjustValuesFromShapeProperties:(const EshShapeProperties *)shapeProperties toGeometry:(id)geometry;	// 0x343ef215
+ (void)readFromFormulas:(const EshTablePropVal<EshFormula> *)formulas toGeometry:(id)geometry;	// 0x3443f9d5
+ (void)readFromLimo:(CsPoint<long int>)limo toGeometry:(id)geometry;	// 0x3443fd71
+ (void)readFromPathCommands:(const EshTablePropVal<EshPathCommand> *)pathCommands pathParams:(const EshPathParamTable *)params toGeometry:(id)geometry;	// 0x3443ea4d
+ (void)readFromShape:(EshShape *)shape toShape:(id)shape2;	// 0x343eeb65
+ (void)readFromTextBoxRects:(const EshTablePropVal<EshComputedRect> *)textBoxRects toGeometry:(id)geometry;	// 0x3443fb51
+ (void)readGeometryCoordSpaceFromShapeProperties:(const EshShapeProperties *)shapeProperties toGeometry:(id)geometry;	// 0x344bdbb1
+ (void)readLimoFromPath:(const EshPath *)path toGeometry:(id)geometry;	// 0x344bdd09
+ (void)readPathCommandsAndParamsFromPath:(const EshPath *)path toGeometry:(id)geometry;	// 0x344bde11
+ (void)writeAdjustValuesFromGeometry:(id)geometry toShapeProperties:(EshShapeProperties *)shapeProperties;	// 0x3466f89d
+ (void)writeCoordSpaceFromGeometry:(id)geometry toShapeProperties:(EshShapeProperties *)shapeProperties;	// 0x3466f8fd
+ (void)writeFormulasFromGeometry:(id)geometry toPath:(EshPath *)path;	// 0x346700ad
+ (void)writeFromShape:(id)shape toShape:(EshShape *)shape2;	// 0x34670525
+ (void)writeLimoFromGeometry:(id)geometry toPath:(EshPath *)path;	// 0x3466fa15
+ (void)writePathCommandsAndParamsFromGeometry:(id)geometry toPath:(EshPath *)path;	// 0x3466fb95
+ (void)writeTextBodyRectsFromGeometry:(id)geometry toPath:(EshPath *)path;	// 0x346702e9
@end
