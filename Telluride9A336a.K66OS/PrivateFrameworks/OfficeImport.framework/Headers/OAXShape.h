/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface OAXShape : NSObject {
}
+ (void)readCoreFromXmlNode:(xmlNode *)xmlNode inNamespace:(id)aNamespace toShape:(id)shape drawingState:(id)state;	// 0x34d2bdcd
+ (id)readFromXmlNode:(xmlNode *)xmlNode inNamespace:(id)aNamespace drawingState:(id)state;	// 0x34d2bc5d
+ (void)readNonVisualShapeProperties:(xmlNode *)properties nodeName:(const char *)name inNamespace:(id)aNamespace shapeProperties:(id)properties4;	// 0x34d2bd71
@end

