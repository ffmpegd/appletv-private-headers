/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OfficeImport-Structs.h"


@interface EXWorkbook : NSObject {
}
+ (id)edWorkbookFromState:(id)state package:(id)package reader:(id)reader fileName:(id)name temporaryDirectory:(id)directory;	// 0x34909c01
+ (id)edWorkbookFromState:(id)state package:(id)package reader:(id)reader resourcesOnly:(bool)only fileName:(id)name temporaryDirectory:(id)directory;	// 0x34909c39
+ (void)readSheetsFrom:(id)from relationNS:(xmlNs *)ns state:(id)state;	// 0x3490e221
+ (void)readStringsFrom:(id)from state:(id)state;	// 0x3490d371
+ (void)readStylesFrom:(id)from state:(id)state;	// 0x3490a3bd
+ (void)setupProcessors:(id)processors;	// 0x3490a305
@end

