/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library


@interface ECUtils : NSObject {
}
+ (id)dateFromXlDateTimeNumber:(double)xlDateTimeNumber edWorkbook:(id)workbook;	// 0x36beec55
+ (void)incrementFormulaCellCount:(unsigned *)count;	// 0x36a78001
+ (void)incrementTotalCellCount:(unsigned *)count;	// 0x36a77559
+ (BOOL)isRenameFunction:(id)function;	// 0x36bee781
+ (bool)isValidDateTime:(double)time edWorkbook:(id)workbook;	// 0x36beece1
+ (id)lassoStyleTableReferenceFromTableId:(id)tableId;	// 0x36beec25
+ (id)renameFunction:(id)function;	// 0x36beebed
+ (double)timeIntervalFromXlDateTimeNumber:(double)xlDateTimeNumber edWorkbook:(id)workbook;	// 0x36beed39
@end

