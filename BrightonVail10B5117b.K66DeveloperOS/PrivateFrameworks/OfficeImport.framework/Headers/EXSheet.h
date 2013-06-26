/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


@interface EXSheet : NSObject {
}
+ (Class)exSheetClassFromXmlSheetType:(id)xmlSheetType location:(id)location;	// 0x34ae8935
+ (void)readAllDrawablesWithState:(id)state;	// 0x34aebf45
+ (void)readCommonSheetElementsFrom:(xmlTextReader *)from state:(id)state;	// 0x34aebb65
+ (void)readDelayedSheeWithLocation:(id)location sheetXmlType:(id)type state:(id)state;	// 0x34ae9639
+ (void)readDrawablesWithState:(id)state;	// 0x34aec039
+ (void)readFrom:(xmlNode *)from state:(id)state;	// 0x34ae84dd
+ (void)readLegacyDrawablesWithState:(id)state;	// 0x34b996d5
+ (void)readSheetExtensions:(xmlNode *)extensions state:(id)state;	// 0x34c0e145
@end
