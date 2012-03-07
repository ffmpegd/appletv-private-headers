/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface OAXFill : NSObject {
}
+ (int)blipTypeForExtension:(id)extension;	// 0x3578ac45
+ (id)pathGradientFillTypeEnumMap;	// 0x3566ab1d
+ (id)presetPatternFillTypeEnumMap;	// 0x356d20bd
+ (id)readBlipRefFromXmlNode:(xmlNode *)xmlNode packagePart:(id)part drawingState:(id)state forBullet:(BOOL)bullet;	// 0x35675869
+ (id)readFillFromXmlNode:(xmlNode *)xmlNode packagePart:(id)part drawingState:(id)state;	// 0x35669451
+ (id)readGradientFillFromXmlNode:(xmlNode *)xmlNode;	// 0x35669709
+ (void)readGradientFillFromXmlNode:(xmlNode *)xmlNode toGradientFill:(id)gradientFill;	// 0x356698bd
+ (id)readGroupFillFromXmlNode:(xmlNode *)xmlNode;	// 0x356bd7cd
+ (id)readImageFillFromXmlNode:(xmlNode *)xmlNode packagePart:(id)part drawingState:(id)state;	// 0x3567566d
+ (id)readLinearGradientFillFromXmlNode:(xmlNode *)xmlNode;	// 0x35669755
+ (id)readNullFillFromXmlNode:(xmlNode *)xmlNode;	// 0x35675511
+ (id)readPathGradientFillFromXmlNode:(xmlNode *)xmlNode;	// 0x3566a97d
+ (id)readPresetPatternFillFromXmlNode:(xmlNode *)xmlNode;	// 0x356d1f31
+ (id)readSolidFillFromXmlNode:(xmlNode *)xmlNode;	// 0x35669545
+ (void)readStretch:(xmlNode *)stretch stretch:(id)stretch2;	// 0x35675865
+ (void)readTile:(xmlNode *)tile tile:(id)tile2;	// 0x356b1a15
+ (id)tileFlipModeEnumMap;	// 0x356b1c11
@end

