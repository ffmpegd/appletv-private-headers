/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OfficeImport-Structs.h"


__attribute__((visibility("hidden")))
@interface EBLinkTable : NSObject {
}
+ (XlLinkTable *)createXlLinkTableFromLinksCollection:(id)linksCollection workbook:(id)workbook state:(id)state;	// 0x34dd84f1
+ (int)mapEDLinkTypeToXl:(int)xl;	// 0x34dd84d1
+ (int)mapXlLinkTypeToED:(int)ed;	// 0x34c6257d
+ (void)readFromState:(id)state;	// 0x34c6226d
@end

