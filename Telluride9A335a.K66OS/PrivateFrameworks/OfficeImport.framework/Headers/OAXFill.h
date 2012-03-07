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
+ (int)blipTypeForExtension:(id)extension;	// 0x353cfc45
+ (id)pathGradientFillTypeEnumMap;	// 0x352afb1d
+ (id)presetPatternFillTypeEnumMap;	// 0x353170bd
+ (id)readBlipRefFromXmlNode:(xmlNode *)xmlNode packagePart:(id)part drawingState:(id)state forBullet:(BOOL)bullet;	// 0x352ba869
+ (id)readFillFromXmlNode:(xmlNode *)xmlNode packagePart:(id)part drawingState:(id)state;	// 0x352ae451
+ (id)readGradientFillFromXmlNode:(xmlNode *)xmlNode;	// 0x352ae709
+ (void)readGradientFillFromXmlNode:(xmlNode *)xmlNode toGradientFill:(id)gradientFill;	// 0x352ae8bd
+ (id)readGroupFillFromXmlNode:(xmlNode *)xmlNode;	// 0x353027cd
+ (id)readImageFillFromXmlNode:(xmlNode *)xmlNode packagePart:(id)part drawingState:(id)state;	// 0x352ba66d
+ (id)readLinearGradientFillFromXmlNode:(xmlNode *)xmlNode;	// 0x352ae755
+ (id)readNullFillFromXmlNode:(xmlNode *)xmlNode;	// 0x352ba511
+ (id)readPathGradientFillFromXmlNode:(xmlNode *)xmlNode;	// 0x352af97d
+ (id)readPresetPatternFillFromXmlNode:(xmlNode *)xmlNode;	// 0x35316f31
+ (id)readSolidFillFromXmlNode:(xmlNode *)xmlNode;	// 0x352ae545
+ (void)readStretch:(xmlNode *)stretch stretch:(id)stretch2;	// 0x352ba865
+ (void)readTile:(xmlNode *)tile tile:(id)tile2;	// 0x352f6a15
+ (id)tileFlipModeEnumMap;	// 0x352f6c11
@end

