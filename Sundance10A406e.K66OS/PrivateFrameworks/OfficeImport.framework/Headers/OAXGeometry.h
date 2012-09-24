/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


@interface OAXGeometry : NSObject {
}
+ (void)addFormulasFromFile:(id)file toCustomGeometry:(id)customGeometry formulaNameToIndexMap:(id)indexMap;	// 0x34f981c9
+ (int)adjustValueWithGuideXmlNode:(xmlNode *)guideXmlNode;	// 0x34fbacb5
+ (id)formulaKeywordEnumMap;	// 0x34f9891d
+ (id)formulaTypeEnumMap;	// 0x34f988c5
+ (id)pathFillModeEnumMap;	// 0x34fe9e01
+ (OADAdjustCoord)readAdjustCoordFromXmlNode:(xmlNode *)xmlNode name:(const char *)name formulaNameToIndexMap:(id)indexMap;	// 0x34f98af5
+ (void)readAdjustValuesFromCustomGeometryXmlNode:(xmlNode *)customGeometryXmlNode toCustomGeometry:(id)customGeometry adjustValueNameToIndexMap:(id)indexMap;	// 0x34f980c1
+ (id)readCustomGeometryFromXmlNode:(xmlNode *)xmlNode hasImplicitFormulas:(BOOL)formulas;	// 0x34f97f5d
+ (void)readFormulasFromCustomGeometryXmlNode:(xmlNode *)customGeometryXmlNode toCustomGeometry:(id)customGeometry adjustValueNameToIndexMap:(id)indexMap formulaNameToIndexMap:(id)indexMap4;	// 0x34f98319
+ (id)readFromParentXmlNode:(xmlNode *)parentXmlNode;	// 0x350afeb1
+ (void)readPathsFromCustomGeometryXmlNode:(xmlNode *)customGeometryXmlNode toCustomGeometry:(id)customGeometry formulaNameToIndexMap:(id)indexMap;	// 0x34f98b59
+ (id)readPresetGeometryFromXmlNode:(xmlNode *)xmlNode;	// 0x34f44c21
+ (void)readTextRectFromCustomGeometryXmlNode:(xmlNode *)customGeometryXmlNode toCustomGeometry:(id)customGeometry formulaNameToIndexMap:(id)indexMap;	// 0x34f989b5
+ (id)shapeTypeEnumMap;	// 0x34f44d75
+ (int)shapeTypeForString:(id)string;	// 0x34f44d49
+ (id)stringForShapeType:(int)shapeType;	// 0x34fe31a5
@end
