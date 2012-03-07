/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OfficeImport-Structs.h"


__attribute__((visibility("hidden")))
@interface EXWorkbook : NSObject {
}
+ (id)edWorkbookFromState:(id)state package:(id)package reader:(id)reader fileName:(id)name temporaryDirectory:(id)directory;	// 0x34d1f479
+ (id)edWorkbookFromState:(id)state package:(id)package reader:(id)reader resourcesOnly:(bool)only fileName:(id)name temporaryDirectory:(id)directory;	// 0x34d1f4ad
+ (void)readSheetsFrom:(id)from relationNS:(xmlNs *)ns state:(id)state;	// 0x34d236b9
+ (void)readStringsFrom:(id)from state:(id)state;	// 0x34d22b35
+ (void)readStylesFrom:(id)from state:(id)state;	// 0x34d1fb5d
+ (void)setupProcessors:(id)processors;	// 0x34d1fa99
@end

