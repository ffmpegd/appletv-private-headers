/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface WXCharacterProperties : NSObject {
}
+ (void)applyDeletionInsertionProperties:(id)properties state:(id)state;	// 0x30d74e45
+ (void)initialize;	// 0x30d6cee5
+ (int)languageFromString:(id)string;	// 0x30d6dc19
+ (BOOL)readBooleanCharacterProperty:(xmlNode *)property propertyName:(const char *)name attributeName:(const char *)name3 outValue:(int *)value;	// 0x30d6dad5
+ (void)readFrom:(xmlNode *)from to:(id)to state:(id)state;	// 0x30d6cfa9
@end

