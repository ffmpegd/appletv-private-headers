/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OfficeImport-Structs.h"


__attribute__((visibility("hidden")))
@interface ODXData : NSObject {
}
+ (void)associatePresentationsInIdMap:(id)idMap;	// 0x32c8ccf1
+ (void)readConnectionFromNode:(xmlNode *)node pointIdMap:(id)map state:(id)state;	// 0x32c8c495
+ (void)readConnectionListFromNode:(xmlNode *)node pointIdMap:(id)map state:(id)state;	// 0x32c8c3f9
+ (int)readConnectionTypeFromNode:(xmlNode *)node;	// 0x32c8c871
+ (id)readModelIdentifierFromNode:(xmlNode *)node attributeName:(const char *)name;	// 0x32c8c075
+ (void)readNode:(xmlNode *)node toDiagram:(id)diagram state:(id)state;	// 0x32c8b4dd
+ (id)readPointFromNode:(xmlNode *)node pointIdMap:(id)map state:(id)state;	// 0x32c8b6d5
+ (id)readPointListFromNode:(xmlNode *)node pointIdMap:(id)map state:(id)state;	// 0x32c8b609
+ (int)readPointTypeFromNode:(xmlNode *)node;	// 0x32c8baad
@end

