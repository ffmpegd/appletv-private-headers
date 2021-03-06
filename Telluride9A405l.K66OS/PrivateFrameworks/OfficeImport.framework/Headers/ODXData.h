/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface ODXData : NSObject {
}
+ (void)associatePresentationsInIdMap:(id)idMap;	// 0x30dac381
+ (void)readConnectionFromNode:(xmlNode *)node pointIdMap:(id)map state:(id)state;	// 0x30dab97d
+ (void)readConnectionListFromNode:(xmlNode *)node pointIdMap:(id)map state:(id)state;	// 0x30dab8d1
+ (int)readConnectionTypeFromNode:(xmlNode *)node;	// 0x30dabe51
+ (id)readModelIdentifierFromNode:(xmlNode *)node attributeName:(const char *)name;	// 0x30dab511
+ (void)readNode:(xmlNode *)node toDiagram:(id)diagram state:(id)state;	// 0x30daa825
+ (id)readPointFromNode:(xmlNode *)node pointIdMap:(id)map state:(id)state;	// 0x30daaa75
+ (id)readPointListFromNode:(xmlNode *)node pointIdMap:(id)map state:(id)state;	// 0x30daa975
+ (int)readPointTypeFromNode:(xmlNode *)node;	// 0x30daaecd
@end

