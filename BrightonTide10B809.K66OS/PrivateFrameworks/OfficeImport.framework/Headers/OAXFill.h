/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


@interface OAXFill : NSObject {
}
+ (id)pathGradientFillTypeEnumMap;	// 0x348df6c1
+ (id)presetPatternFillTypeEnumMap;	// 0x349cd3d9
+ (id)readBlipRefFromXmlNode:(xmlNode *)xmlNode packagePart:(id)part drawingState:(id)state forBullet:(BOOL)bullet;	// 0x348ecb35
+ (id)readFillFromXmlNode:(xmlNode *)xmlNode packagePart:(id)part drawingState:(id)state;	// 0x348ddce1
+ (id)readGradientFillFromXmlNode:(xmlNode *)xmlNode;	// 0x348ddf79
+ (void)readGradientFillFromXmlNode:(xmlNode *)xmlNode toGradientFill:(id)gradientFill;	// 0x348de135
+ (id)readGroupFillFromXmlNode:(xmlNode *)xmlNode;	// 0x34a58e6d
+ (id)readImageFillFromXmlNode:(xmlNode *)xmlNode packagePart:(id)part drawingState:(id)state;	// 0x348ec919
+ (id)readLinearGradientFillFromXmlNode:(xmlNode *)xmlNode;	// 0x348ddfc9
+ (id)readNullFillFromXmlNode:(xmlNode *)xmlNode;	// 0x348ec709
+ (id)readPathGradientFillFromXmlNode:(xmlNode *)xmlNode;	// 0x348df3c9
+ (id)readPresetPatternFillFromXmlNode:(xmlNode *)xmlNode;	// 0x349cd24d
+ (id)readSolidFillFromXmlNode:(xmlNode *)xmlNode;	// 0x348dddc9
+ (void)readStretch:(xmlNode *)stretch stretch:(id)stretch2;	// 0x348ecb2d
+ (void)readTile:(xmlNode *)tile tile:(id)tile2;	// 0x34997b61
+ (id)tileFlipModeEnumMap;	// 0x349928a1
@end
