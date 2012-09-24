/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "EFHelper.h"
#import <NSObject.h> // Unknown library

@class EDWorkbook, EDWorksheet, ECMappingContext;

@interface EDFormulaHelper : NSObject <EFHelper> {
	EDWorkbook *mWorkbook;	// 4 = 0x4
	EDWorksheet *mWorksheet;	// 8 = 0x8
	int mRowNumber;	// 12 = 0xc
	int mColumnNumber;	// 16 = 0x10
	ECMappingContext *mMappingContext;	// 20 = 0x14
}
- (id)initWithWorkbook:(id)workbook worksheet:(id)worksheet rowNumber:(int)number columnNumber:(int)number4;	// 0x34fde045
- (int)columnNumber;	// 0x35082df9
- (unsigned)createIndexWithType:(int)type firstSheetIndex:(unsigned)index lastSheetIndex:(unsigned)index3;	// 0x34ff7881
- (void)dealloc;	// 0x34fe1549
- (BOOL)isCurrentSheet:(id)sheet;	// 0x34ff7a65
- (bool)isThereContentOutsideOfLassoBoundsForRowMin:(unsigned)rowMin rowMax:(unsigned)max columnMin:(unsigned)min columnMax:(unsigned)max4;	// 0x3500eb69
- (unsigned)resolveFile:(id)file;	// 0x35082d21
- (unsigned)resolveFirstSheet:(id)sheet lastSheet:(id)sheet2;	// 0x35082cb5
- (int)resolveFunctionName:(id)name;	// 0x34fe1785
- (unsigned)resolveName:(id)name;	// 0x34ff7371
- (unsigned)resolveSheet:(id)sheet;	// 0x34ff77dd
- (id)resolveTable:(id)table;	// 0x34ff7549
- (unsigned)resolveTableColumn:(id)column columnName:(id)name;	// 0x35082d49
- (unsigned)resolveTableToSheetId:(id)sheetId;	// 0x3500ec95
- (int)rowNumber;	// 0x35082de9
- (id)workbook;	// 0x35082dd9
@end
