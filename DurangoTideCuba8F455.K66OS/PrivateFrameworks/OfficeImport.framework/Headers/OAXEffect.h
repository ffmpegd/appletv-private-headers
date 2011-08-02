/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OfficeImport-Structs.h"


__attribute__((visibility("hidden")))
@interface OAXEffect : NSObject {
}
+ (id)presetShadowTypeEnumMap;	// 0x32cac491
+ (id)readEffectsFromXmlNode:(xmlNode *)xmlNode packagePart:(id)part drawingState:(id)state;	// 0x32c52fb5
+ (void)readGlow:(id)glow fromXmlNode:(xmlNode *)xmlNode;	// 0x32c91731
+ (void)readOuterShadow:(id)shadow fromXmlNode:(xmlNode *)xmlNode;	// 0x32c53191
+ (void)readPresetShadow:(id)shadow fromXmlNode:(xmlNode *)xmlNode;	// 0x32cac415
+ (void)readReflection:(id)reflection fromXmlNode:(xmlNode *)xmlNode;	// 0x32c911d5
+ (void)readShadow:(id)shadow fromXmlNode:(xmlNode *)xmlNode;	// 0x32c53355
@end
