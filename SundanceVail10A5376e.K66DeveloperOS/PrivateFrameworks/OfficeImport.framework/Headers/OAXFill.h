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
+ (id)pathGradientFillTypeEnumMap;	// 0x36fd96c1
+ (id)presetPatternFillTypeEnumMap;	// 0x370c73d9
+ (id)readBlipRefFromXmlNode:(xmlNode *)xmlNode packagePart:(id)part drawingState:(id)state forBullet:(BOOL)bullet;	// 0x36fe6b35
+ (id)readFillFromXmlNode:(xmlNode *)xmlNode packagePart:(id)part drawingState:(id)state;	// 0x36fd7ce1
+ (id)readGradientFillFromXmlNode:(xmlNode *)xmlNode;	// 0x36fd7f79
+ (void)readGradientFillFromXmlNode:(xmlNode *)xmlNode toGradientFill:(id)gradientFill;	// 0x36fd8135
+ (id)readGroupFillFromXmlNode:(xmlNode *)xmlNode;	// 0x37152e6d
+ (id)readImageFillFromXmlNode:(xmlNode *)xmlNode packagePart:(id)part drawingState:(id)state;	// 0x36fe6919
+ (id)readLinearGradientFillFromXmlNode:(xmlNode *)xmlNode;	// 0x36fd7fc9
+ (id)readNullFillFromXmlNode:(xmlNode *)xmlNode;	// 0x36fe6709
+ (id)readPathGradientFillFromXmlNode:(xmlNode *)xmlNode;	// 0x36fd93c9
+ (id)readPresetPatternFillFromXmlNode:(xmlNode *)xmlNode;	// 0x370c724d
+ (id)readSolidFillFromXmlNode:(xmlNode *)xmlNode;	// 0x36fd7dc9
+ (void)readStretch:(xmlNode *)stretch stretch:(id)stretch2;	// 0x36fe6b2d
+ (void)readTile:(xmlNode *)tile tile:(id)tile2;	// 0x37091b61
+ (id)tileFlipModeEnumMap;	// 0x3708c8a1
@end

