/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


@interface WXCharacterProperties : NSObject {
}
+ (void)applyDeletionInsertionProperties:(id)properties state:(id)state;	// 0x31c6c0bd
+ (void)initialize;	// 0x31c61db1
+ (BOOL)readBooleanCharacterMultipleProperty:(xmlNode *)property propertyName:(const char *)name attributeName:(const char *)name3 outValue:(int *)value;	// 0x31c633bd
+ (BOOL)readBooleanCharacterProperty:(xmlNode *)property propertyName:(const char *)name attributeName:(const char *)name3 outValue:(int *)value;	// 0x31c62e39
+ (void)readFrom:(xmlNode *)from to:(id)to state:(id)state;	// 0x31c61edd
+ (void)readReflection:(id)reflection fromXmlNode:(xmlNode *)xmlNode;	// 0x31e414f1
+ (void)readShadowForTarget:(id)target fromXmlNode:(xmlNode *)xmlNode;	// 0x31e40fa9
@end
