/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "EBState.h"

@class OABReaderState, ECColumnWidthConvertor;

@interface EBReaderState : EBState {
	XlBinaryReader *mXlReader;	// 36 = 0x24
	XlSheetInfoTable *mXlSheetInfoTable;	// 40 = 0x28
	ECColumnWidthConvertor *mColumnWidthConvertor;	// 44 = 0x2c
	unsigned mTotalCellsWithContentCount;	// 48 = 0x30
	unsigned mTotalCellsWithFormulaCount;	// 52 = 0x34
	XlEshObjectFactory *mXlEshObjectFactory;	// 56 = 0x38
	OABReaderState *mOAState;	// 60 = 0x3c
	BOOL mImportCSV;	// 64 = 0x40
}
@property(assign, nonatomic) BOOL importCSV;	// G=0x33b6038d; S=0x33b6039d; @synthesize=mImportCSV
- (id)initWithXlReader:(XlBinaryReader *)xlReader cancelDelegate:(id)delegate tracing:(id)tracing;	// 0x339e55f1
- (unsigned)cellsWithContentCount;	// 0x33b6037d
- (id)columnWidthConvertor;	// 0x33a1884d
- (void)dealloc;	// 0x33a09c49
// declared property getter: - (BOOL)importCSV;	// 0x33b6038d
- (void)incrementCellsWithContentCount;	// 0x33a02bc1
- (void)incrementCellsWithFormulaCount;	// 0x33a0366d
- (id)oaState;	// 0x339ef8d1
- (void)pauseReading;	// 0x339f7ffd
- (void)readGlobalXlObjects;	// 0x339ef96d
- (void)reportWarning:(CPTaggedMessageStructure *)warning;	// 0x33af6d19
- (void)resumeReading;	// 0x339f8f15
// declared property setter: - (void)setImportCSV:(BOOL)csv;	// 0x33b6039d
- (XlBinaryReader *)xlReader;	// 0x339e7791
- (XlSheetInfoTable *)xlSheetInfoTable;	// 0x339f7835
@end

